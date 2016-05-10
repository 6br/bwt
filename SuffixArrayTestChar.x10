package bwt;

public class SuffixArrayTestChar {
  static def isPerm(sa: Rail[Long], n: Long):Boolean {
    val seen = new Rail[Boolean](n+1);
    for (i in 0..n) { seen(i) = false; }
    for (i in 0..n) { seen(sa(i)) = true; }
    for (i in 0..n) { if(!seen(i)){ return false;} }
    return true;
  }

  static def sleq(s1: Rail[Byte], s2: Rail[Byte], c1: Long, c2: Long):Boolean {
    if (c2 >= s2.size) return false;
    if (c1 >= s1.size) return true;
    if (s1(c1) > s2(c2)) return false;
    if (s1(c1) < s2(c2)) return true;
    return sleq(s1, s2, c1+1, c2+1);
  }

  static def isSorted(sa: Rail[Long], s: Rail[Byte], n: Long){
    for (i in 0..(n-1)){
      if(!sleq(s, s, sa(i), sa(i+1))){return false;}
    }
    return true;
  }
  
  public static def main(args:Rail[String]):void {
    //val bwa = new SuffixArray([1L,4L,1L,1L,4L,1L,2L,3L,1L,4L,1L,1L,4L,1L,1L,0L,0L,0L,0L], 5);
    //val bwa = new SuffixArray([1L,1L,0L,0L,0L], 5);
    /*val sa = bwa.run();
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    }
    val bwt = bwa.bwtable();
    for (i in 0..(bwt.size-1)){
      Console.OUT.println(bwt(i));
    }*/

    val nmax:Long = 10;
    val b:Byte = 4y;
    val bl:Long = b as Long;
    for(n in 2..nmax){
      val N = (Math.pow(bl, n)+0.5) as Int;
      var s:Rail[Byte] = new Rail[Byte](n+3);
      var sa_result:Rail[Long] = new Rail[Long](n+3);
      for(i in 0..n){s(i) = 1y; sa_result(i) = 1;}
      s(n)   = 0y;
      s(n+1) = 0y;
      s(n+2) = 0y;
      for(i in 0..(N-1)){
        val aa = new SuffixArrayChar(s, b, 11y);
        sa_result = aa.run();
        Console.OUT.println(s);
        Console.OUT.println(sa_result);
        assert(sa_result(n) == 0);
        assert(sa_result(n+1) == 0);
        assert(s(n) == 0y);
        assert(s(n+1) == 0y);
        assert(isPerm(sa_result, n-1));
        assert(isSorted(sa_result, s, n-1));

        var k:Long = 0;
        while(s(k) == b){
          s(k) = 1y;
          k += 1;
        }
        s(k) += 1y;
      }
    }
  }
}

