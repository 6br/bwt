package bwt;
import x10.io.Console;
import x10.io.File;
import x10.util.RailBuilder;
import x10.util.StringBuilder;
import x10.util.Timer;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("input.h")
@NativeCPPCompilationUnit("input.cpp")

public class Bwt {
  def this(string: Rail[Byte], k: Int, fast: Byte) {
    val time = Timer.milliTime();
    var sa:Rail[Long];
    if(fast > 0) {
      /*var str:Rail[Long] = new Rail[Long](string.size);
      for(i in 0..(string.size-1)){
        str(i) = string(i) as Long;
      }
      sa= new Rail[Long](string.size);
      val SAC = new SuffixArray(str, k, sa, fast);
      SAC.run();*/
      val SAC = new SuffixArrayChar(string, k,fast);
      sa = SAC.run();
    } else {
      var str:Rail[Long] = new Rail[Long](string.size);
      for(i in 0..(string.size-1)){
        str(i) = string(i);
      }
      val SAC = new SuffixArraySimple(str, k);
      //val SAC = new SuffixArraySimpleChar(string, k);
      sa = SAC.run();
    }
    val difftime = Timer.milliTime() - time;
    Console.ERR.printf("Elapsed time: %ld millisec.\n",difftime);
    var j:Long = sa.size - 1;
    if (j > 15) {j = 15;}
    for (i in 0..j){
      Console.OUT.println(sa(i));
    } 
  }

  static def strToRail(input: String, isDigit: Boolean):Rail[Long]{
    val strBuilder = new RailBuilder[Long](input.length());
    val inputBytes = input.bytes();
    val length = input.length();

    for (i in 0..(length-1)) {
      val c = inputBytes(i);
      val base:Long;
      if (isDigit) {
        base = c - 47; 
      } else {
        //base = ((((c >> 2) ^ (c >> 1)) & 3) + 1) as Long;
        base = ((((c >> 2) ^ (c >> 1)) & 19) % 5) as Long;
      }
      if (i % (1024*1024) == 0){
        Console.ERR.printf("%ld MB loaded.\n", i / (1024*1024));
      }
      strBuilder.add(base);
    }
    strBuilder.add(0);
    return strBuilder.result();
  }

  @Native("c++", "input_fgets((#1)->c_str(), (#2)->raw);")
  native static def fileioCPP(filename: String, data: Rail[Long]): void;

  @Native("c++", "input_fgets_char((#1)->c_str(), (#2)->raw);")
  native static def fileioCPP(filename: String, data: Rail[Byte]): void;

  @Native("c++", "input_fgets_fixed_char((#1)->c_str(), (#2)->raw, #3);")
  native static def fileioCPP(filename: String, data: Rail[Byte], length: Long): void;

  public static def main(args:Rail[String]):void {
    val N:Int = Int.parse(args(0));
    val height:Long = Long.parse(args(1));
    val thread:Byte = Byte.parse(args(2));
    val length:Long = (height < 100) ? height : height * 101 + 3L;
    var file:String = args(3); 

    Console.ERR.println("Start Malloc");
    var e:Rail[Byte] = new Rail[Byte](length);
    e(length-1) = 0y;
    e(length-2) = 0y;
    e(length-3) = 0y;
    Console.ERR.println("End Malloc");

    fileioCPP(file, e, height);
    val bwa = new Bwt(e, N, thread);
  }
}
