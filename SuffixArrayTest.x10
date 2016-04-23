package bwt;

public class SuffixArrayTest {
  def isPerm(SA: Rail[String], n: Int ):Boolean {
    val seen = new Rail[Boolean](n);
    for (i in 0..n) { seen(i) = 0; }
    for (i in 0..n) { seen(sa(i)) = 1; }
    for (i in 0..n) { if(!seen(i)){ return 0;} }
    return 1;
  }
  
  public static def main(args:Rail[String]):void {
    val bwa = new SuffixArray([1L,4L,1L,1L,4L,1L,2L,3L,1L,4L,1L,1L,4L,1L,1L,0L,0L,0L,0L], 5);
    val sa = bwa.run();
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    }
  }
}

