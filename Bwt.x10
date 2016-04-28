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
  //val SA: SuffixArray;
  //val SAC: SuffixArrayChar;
/*
  def this(input: String, k: int, isDigit: Boolean) {
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
    for (i in 0..2){
      strBuilder.add(0);
    }
    val string = strBuilder.result();

    SA = new SuffixArray(string, k);
    val sa = SA.run();
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    }
}

  def this(filename: String, k: Int) {
    val string = fileio(filename);
    val time = Timer.nanoTime();
    SA = new SuffixArray(string, k);
    val sa = SA.run();
    val difftime = Timer.nanoTime() - time;
    Console.ERR.printf("Elapsed time: %ld nanotime.\n",difftime);
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    }
  }

  def this(string: Rail[Long], k: Int) {
    val time = Timer.nanoTime();
    SA = new SuffixArray(string, k);
    val sa = SA.run();
    val difftime = Timer.nanoTime() - time;
    Console.ERR.printf("Elapsed time: %ld nanotime.\n",difftime);
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    } 
  }
*/
  def this(string: Rail[Byte], k: Int) {
    val time = Timer.milliTime();
    val SAC = new SuffixArrayChar(string, k);
    val sa = SAC.run();
    val difftime = Timer.milliTime() - time;
    Console.ERR.printf("Elapsed time: %ld millitime.\n",difftime);
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

  static def fileioImproved(filename: String):String {
    val strBuilder = new StringBuilder();
    val input = new File(filename);
    var j:Long = 1;
    for( c in input.lines() ) {
      strBuilder.addString(c);
      if (j % (1024*1024) == 0){
        Console.ERR.printf("%ld MLine loaded.\n", j / (1024*1024));
      }
      j += 1;
    }
    val string = strBuilder.result();
    return string;
  }

  @Native("c++", "input_fgets((#1)->c_str(), (#2)->raw);")
  native static def fileioCPP(filename: String, data: Rail[Long]): void;

  @Native("c++", "input_fgets_malloc((#1)->c_str(), #2);")
  native static def fileioCPP(filename: String, data: Long): Rail[Long];

  @Native("c++", "input_fgets_char((#1)->c_str(), (#2)->raw);")
  native static def fileioCPP(filename: String, data: Rail[Byte]): void;

  static def fileio(filename: String):Rail[Long]{
    val strBuilder = new RailBuilder[Long]();
    val input = new File(filename);
    var j:Long = 1;
    for( c in input.bytes() ) {
      //val base = ((((c >> 2) ^ (c >> 1)) & 3) + 1) as Long;
      val base = ((((c >> 2) ^ (c >> 1)) & 19) % 5) as Long;
      strBuilder.add(base);
      if (j % (1024*1024) == 0){
        Console.ERR.printf("%ld MB loaded.\n", j / (1024*1024));
      }
      j += 1;
    }
    for (i in 0..2){
      strBuilder.add(0);
    }
    val string = strBuilder.result();
    return string;
  }

  public static def main(args:Rail[String]):void {
    //val string:Rail[Long] = fileio("test.txt");
    val N:Int = Int.parse(args(0));
    val length:Long = Long.parse(args(1))+3L;
    var file:String = args(2); 
    Console.ERR.println("Start Malloc");
    //val e = new Rail[Long](length);//2577003486);
    val e = new Rail[Byte](length);//2577003486);
    Console.ERR.println("End Malloc");
    fileioCPP(file, e);
    Console.ERR.println("Files has read");
    val bwa = new Bwt(e, N);
    //val bwa = new Bwt(file, N);
    //val bwa = new Bwt(file, N, false);
  }
}
