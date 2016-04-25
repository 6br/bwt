package bwt;
import x10.io.Console;
import x10.io.File;
import x10.util.RailBuilder;
import x10.util.Timer;

public class Bwt {
  var SA: SuffixArray;

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
        base = ((((c >> 2) ^ (c >> 1)) & 3) + 1) as Long;
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
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    } 
    Console.ERR.printf("Elapsed time: %ld nanotime.\n",difftime);
  }

  static def strRail(){
    //TODO
  }

  static def fileio(filename: String):Rail[Long]{
    val strBuilder = new RailBuilder[Long]();
    val input = new File(filename);
    for( c in input.bytes() ) {
      val base = ((((c >> 2) ^ (c >> 1)) & 3) + 1) as Long;
      strBuilder.add(base);
    }
    for (i in 0..2){
      strBuilder.add(0);
    }
    val string = strBuilder.result();
    return string;
  }

  public static def main(args:Rail[String]):void {
    //val string:Rail[Long] = fileio("test.txt");
    var N:int = Int.parse(args(0));
    var file:String = args(1); 
    val bwa = new Bwt(file, N);
    //val bwa = new Bwt("40300303120300300", N, true);
    //val bwa = new Bwt(string, N, false);
  }
}
