package bwt;
import x10.io.Console;
import x10.util.RailBuilder;
import x10.array.Array;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("parallel_radix_sort.h")

public class SuffixArray {
  val string: Rail[Long];
  val n: Long;
  val n0: Long;
  val n1: Long;
  val n2: Long;
  val k: Long;
  val n02: Long;
  var R: Rail[Long];
  var SA12: Rail[Long];
  var SA: Rail[Long];
 
  def this(input: Rail[Long], charsize: Long){
    string = input;
    k = charsize;
    n = input.size - 3;
    n0 = (n + 2) / 3;
    n1 = (n + 1) / 3;
    n2 = n / 3;
    n02 = n0 + n2;
  }

  @Native("c++", "parallel_radix_sort::SortPairsLong((#1)->raw, (#2)->raw, #3, #4, #5)")
  native def sortPairs(keys: Rail[Long], values: Rail[Long], num_elems: ULong, num_threads: Int, offset: Byte): void;

  // a[0..nt-1] to b[0..nt-1] with keys in 0..k from *(string+rOffs)
  def radixPass(a: Rail[Long], b: Rail[Long], rOffs: Byte, nt: Long) {
    var c:Rail[Long] = new Rail[Long](nt);
    for(i in 0..k) {c(i) = 0;}
    for(i in 0..(nt-1)) {
      c(string(a(i) + rOffs)) += 1;
    }
    var sum:Long = 0;
    for(i in 0..k) {
      val t = c(i);
      c(i) = sum;
      sum += t;
    }
    for(i in 0..(nt-1)) {
      b(c(string(a(i) + rOffs))) = a(i);
      c((string(a(i) + rOffs))) += 1;
    }
  }

  def run(): Rail[Long] {
    Console.ERR.println("Start Constructuring Sample");
    this.constructSample();
    Console.ERR.println("Start Sort Sample");
    this.sortSample();
    Console.ERR.println("Start Sort NonSample");
    this.sortNonSample();
    return this.SA;
  }

  def bwtable(): Rail[Long] {
    val bwt: RailBuilder[Long] = new RailBuilder[Long]();
    for(i in 0..(n-1)){
      if(SA(i) != 0){
        bwt.add(string(SA(i) - 1));
      }
    }
    return bwt.result();
  }

  def constructSample() {
    SA12 = new Rail[Long](n02+3);
    SA12(n02) = 0;
    SA12(n02+1) = 0;
    SA12(n02+2) = 0;
    var j:Long = 0;
    for(i in 0..(n + n0 - n1 - 1)) {
      if (i % 3 != 0){
        SA12(j) = i;
        j += 1;
      } 
    }
    R = new Rail[Long](n02+3);
  }

  def sortSample() {
    // There are experimental codes below.
    /*var array:Rail[Long] = n   }
    val size = n as ULong;
    val num_threads = 4 as Int;
    Console.OUT.println(array);
    Console.OUT.println(string);
    sortPairs(string, array, size, num_threads);
    Console.OUT.println(array);
    Console.OUT.println(string);*/
    
    val size = n02 as ULong;
    val num_threads = 11 as Int;
    sortPairs(string, SA12, size, num_threads, 2y);
    Console.ERR.println("Ended 1st Radix Sort");
    sortPairs(string, SA12, size, num_threads, 1y);
    Console.ERR.println("Ended 2nd Radix Sort");
    sortPairs(string, SA12, size, num_threads, 0y);
    Console.ERR.printf("Ended 3rd Radix Sort %ld\n", n02);
    /*
    radixPass(R, SA12, 2y, n02);
    Console.ERR.println("Ended 1st Radix Sort");
    radixPass(SA12, R, 1y, n02);
    Console.ERR.println("Ended 2nd Radix Sort");
    radixPass(R, SA12, 0y, n02);
    Console.ERR.printf("Ended 3rd Radix Sort %ld\n", n02);
    */
    var name:Long = 0;
    var c0:Long = -1;
    var c1:Long = -1;
    var c2:Long = -1;
    for (i in 0..(n02 - 1)){
      if (string(SA12(i)) != c0 || string(SA12(i)+1) != c1 || string(SA12(i)+2) != c2) {
        name += 1;
        c0 = string(SA12(i));
        c1 = string(SA12(i)+1);
        c2 = string(SA12(i)+2);
      }
    
      if (SA12(i)%3 == 1) {
        R(SA12(i)/3) = name;
      } else {
        R(SA12(i)/3 + n0) = name;
      }
    }
    Console.ERR.println("Ended Sort Sample");

    if (name < n02) {
      val bwa = new SuffixArray(R, name);
      SA12 = bwa.run();
      for(i in 0..(n02-1)){ R(SA12(i)) = i + 1; }
    } else {
      for(i in 0..(n02-1)){ SA12(R(i) - 1) = i; }
    }
  }

  def sortNonSample() {
    val R0B = new RailBuilder[Long]();
    for(i in 0..(n02-1)){
      if(SA12(i) < n0) {
        R0B.add(3 * SA12(i));
      }  
    }
    val SA0:Rail[Long] = R0B.result();
    //radixPass(SA0, R0, 0y, n0);
    val size = n0 as ULong;
    val num_threads = 6 as Int;
    sortPairs(string, SA0, size, num_threads, 0y);

    Console.ERR.println("Start Merge");
    SA = new Rail[Long](n+3);
    // def merge() {
    var p:Long = 0; 
    var t:Long = n0 - n1;
    var k:Long = -1;
    while(k < n) {
      k += 1;
      val i = getI(t);
      val j = SA0(p);
      //// different compares for mod 1 and mod 2 suffixes
      if(SA12(t) < n0 && leq(string(i), R(SA12(t) + n0), string(j), R(j/3)) ||
         SA12(t) >= n0 && leq(string(i), string(i+1), R(SA12(t) - n0 + 1), string(j), string(j+1), R(j/3 + n0))
        ){ // suffix from SA12 is smaller
        SA(k) = i; 
        t += 1;
        if(t == n02) {
          k += 1;
          for(q in 0..(n0-p-1)){
            SA(k) = SA0(p);
            p += 1;
            k += 1;
          }
        }
      } else { // suffix from SA0 is smaller
        SA(k) = j;
        p += 1;
        if(p == n0) {
          k += 1;
          for(q in 0..(n02-t-1)){
            SA(k) = getI(t);
            t += 1;
            k += 1;
          }
        }
      }
    }
  }

  private def leq(a1: Long, a2: Long, b1: Long, b2: Long):Boolean {
    return (a1 < b1 || a1 == b1 && a2 <= b2 );
  }

  private def leq(a1: Long, a2: Long, a3: Long, b1: Long, b2: Long, b3: Long):Boolean {
    return (a1 < b1 || a1 == b1 && leq(a2, a3, b2, b3));
  }

  private def getI(t: Long):Long {
    if(SA12(t) < n0){
      return SA12(t) * 3 + 1; 
    } else {
      return (SA12(t) - n0) * 3 + 2;
    }
  }
/*
  public static def main(args: Rail[String]):void {
    val bwa = new SuffixArray([1L,4L,1L,1L,4L,1L,2L,3L,1L,4L,1L,1L,4L,1L,1L,0L,0L,0L,0L], 5);
    val sa = bwa.run();
    for (i in 0..(sa.size-1)){
      Console.OUT.println(sa(i));
    }
  }
*/
}
