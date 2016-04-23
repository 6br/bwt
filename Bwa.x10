package bwa;
import x10.io.Console;
import x10.util.RailBuilder;

public class Bwa {
  val string: Rail[Byte];
  val n: Long;
  val n0: Long;
  val n1: Long;
  val n2: Long;
  val k: Int;
  val n02: Long;
  var R: Rail[Long];
  var SA12: Rail[Long];

  def this(input: String, k: int) {
    val strBuilder = new RailBuilder[Byte](input.length());
    val inputBytes = input.bytes();
    val length = input.length();

    for(i in 0..length) {
      val c = inputBytes(i);
      val base = ((c >> 2) ^ (c >> 3) & 3) as Byte;
      strBuilder.add(base);
    }
    string = strBuilder.result();
    
    //string = ['4','0','3','0','0','3','0','4','1','2','0','3','0','0','3','0','0'];//input;
    n = string.size;
    n0 = (n + 2) / 3;
    n1 = (n + 1) / 3;
    n2 = n / 3;
    n02 = n0 + n2;
    k = k;
    //R = new Rail[Long](n02+3);
  }

  def constructSample() {
    val r:RailBuilder[Long] = new RailBuilder[Long]();
    //var j = 0;
    for(i in 0..(n + n0 - n1)) {
      if (i % 3 != 0){
        //R(j) = i;
        //j+=1;
        r.add(i);
      } 
    }
    for(i in 0..3){
      r.add(0);
    }
    R = r.result();
    SA12 = new Rail[Long](n02+3);
    SA12(n02) = 0;
    SA12(n02+1) = 0;
    SA12(n02+2) = 0;
  }

  def sortSample() {
     
  }

  def sortNonSample() {
  }

  def merge() {
  }

  def show() {
  }

  // a[0..n-1] to b[0..n-1] with keys in 0..4 from r
  def radixPass(a:Rail[Long], b:Rail[Long], r:Rail[Byte], n:Int) {
    
  }

  public static def main(args:Rail[String]):void {
    val bwa = new Bwa("40300303120300300");
    bwa.constructSample();
    bwa.sortSample();
    bwa.sortNonSample();
    bwa.merge();
    bwa.show();
  }
}
