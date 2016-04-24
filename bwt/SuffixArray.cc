/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>

//#line 6 "SuffixArray.x10"

//#line 7 "SuffixArray.x10"

//#line 8 "SuffixArray.x10"

//#line 9 "SuffixArray.x10"

//#line 10 "SuffixArray.x10"

//#line 11 "SuffixArray.x10"

//#line 12 "SuffixArray.x10"

//#line 13 "SuffixArray.x10"

//#line 14 "SuffixArray.x10"

//#line 15 "SuffixArray.x10"

//#line 17 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize) {
    
    //#line 5 "SuffixArray.x10"
    this->bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray();
    
    //#line 18 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 19 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 20 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 21 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 22 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 23 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 24 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 28 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 29 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 30 "SuffixArray.x10"
    x10_long i__2468min__2666 = ((x10_long)0ll);
    x10_long i__2468max__2667 = this->FMGL(k);
    {
        x10_long i__2668;
        for (i__2668 = i__2468min__2666; ((i__2668) <= (i__2468max__2667));
             i__2668 = ((i__2668) + (((x10_long)1ll)))) {
            x10_long i__2669 = i__2668;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__2669, ((x10_long)0ll));
        }
    }
    
    //#line 31 "SuffixArray.x10"
    x10_long i__2484min__2670 = ((x10_long)0ll);
    x10_long i__2484max__2671 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__2672;
        for (i__2672 = i__2484min__2670; ((i__2672) <= (i__2484max__2671));
             i__2672 = ((i__2672) + (((x10_long)1ll)))) {
            x10_long i__2673 = i__2672;
            
            //#line 32 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__2659 = c;
            x10_long i__2660 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__2673)) + (((x10_long)(rOffs)))));
            x10_long r__2661 = ((::x10aux::nullCheck(a__2659)->x10::lang::Rail< x10_long >::__apply(
                                   i__2660)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__2659)->x10::lang::Rail< x10_long >::__set(
              i__2660, r__2661);
        }
    }
    
    //#line 34 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 35 "SuffixArray.x10"
    x10_long i__2500min__2674 = ((x10_long)0ll);
    x10_long i__2500max__2675 = this->FMGL(k);
    {
        x10_long i__2676;
        for (i__2676 = i__2500min__2674; ((i__2676) <= (i__2500max__2675));
             i__2676 = ((i__2676) + (((x10_long)1ll)))) {
            x10_long i__2677 = i__2676;
            
            //#line 36 "SuffixArray.x10"
            x10_long t__2662 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__2677);
            
            //#line 37 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__2677, sum);
            
            //#line 38 "SuffixArray.x10"
            sum = ((sum) + (t__2662));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__2516min__2678 = ((x10_long)0ll);
    x10_long i__2516max__2679 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__2680;
        for (i__2680 = i__2516min__2678; ((i__2680) <= (i__2516max__2679));
             i__2680 = ((i__2680) + (((x10_long)1ll)))) {
            x10_long i__2681 = i__2680;
            
            //#line 41 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__2681)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__2681));
            
            //#line 42 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__2663 = c;
            x10_long i__2664 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__2681)) + (((x10_long)(rOffs)))));
            x10_long r__2665 = ((::x10aux::nullCheck(a__2663)->x10::lang::Rail< x10_long >::__apply(
                                   i__2664)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__2663)->x10::lang::Rail< x10_long >::__set(
              i__2664, r__2665);
        }
    }
    
}

//#line 46 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 47 "SuffixArray.x10"
    this->constructSample();
    
    //#line 48 "SuffixArray.x10"
    this->sortSample();
    
    //#line 49 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 50 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 53 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 54 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 55 "SuffixArray.x10"
    x10_long i__2532min__2682 = ((x10_long)0ll);
    x10_long i__2532max__2683 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__2684;
        for (i__2684 = i__2532min__2682; ((i__2684) <= (i__2532max__2683));
             i__2684 = ((i__2684) + (((x10_long)1ll)))) {
            x10_long i__2685 = i__2684;
            
            //#line 56 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__2685), ((x10_long)0ll))))
            {
                
                //#line 57 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__2685)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 60 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 63 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 64 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 65 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 66 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 67 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 68 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 69 "SuffixArray.x10"
    x10_long i__2548min__2686 = ((x10_long)0ll);
    x10_long i__2548max__2687 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__2688;
        for (i__2688 = i__2548min__2686; ((i__2688) <= (i__2548max__2687));
             i__2688 = ((i__2688) + (((x10_long)1ll)))) {
            x10_long i__2689 = i__2688;
            
            //#line 70 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__2689) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 71 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__2689);
                
                //#line 72 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 75 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 76 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 77 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 78 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 81 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 82 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 83 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 84 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 86 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 87 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 88 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 89 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 90 "SuffixArray.x10"
    x10_long i__2564min__2698 = ((x10_long)0ll);
    x10_long i__2564max__2699 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__2700;
        for (i__2700 = i__2564min__2698; ((i__2700) <= (i__2564max__2699));
             i__2700 = ((i__2700) + (((x10_long)1ll)))) {
            x10_long i__2701 = i__2700;
            
            //#line 91 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__2701)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__2701)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__2701)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 92 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 93 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__2701));
                
                //#line 94 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__2701)) + (((x10_long)1ll))));
                
                //#line 95 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__2701)) + (((x10_long)2ll))));
            }
            
            //#line 98 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__2701)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 99 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__2701)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 101 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__2701)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 105 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 106 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 107 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 108 "SuffixArray.x10"
        x10_long i__2580min__2690 = ((x10_long)0ll);
        x10_long i__2580max__2691 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__2692;
            for (i__2692 = i__2580min__2690; ((i__2692) <= (i__2580max__2691));
                 i__2692 = ((i__2692) + (((x10_long)1ll))))
            {
                x10_long i__2693 = i__2692;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__2693), ((i__2693) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 110 "SuffixArray.x10"
        x10_long i__2596min__2694 = ((x10_long)0ll);
        x10_long i__2596max__2695 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__2696;
            for (i__2696 = i__2596min__2694; ((i__2696) <= (i__2596max__2695));
                 i__2696 = ((i__2696) + (((x10_long)1ll))))
            {
                x10_long i__2697 = i__2696;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__2697)) - (((x10_long)1ll))), i__2697);
            }
        }
        
    }
    
}

//#line 114 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 115 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 116 "SuffixArray.x10"
    x10_long i__2612min__2710 = ((x10_long)0ll);
    x10_long i__2612max__2711 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__2712;
        for (i__2712 = i__2612min__2710; ((i__2712) <= (i__2612max__2711));
             i__2712 = ((i__2712) + (((x10_long)1ll)))) {
            x10_long i__2713 = i__2712;
            
            //#line 117 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__2713)) < (this->FMGL(n0)))) {
                
                //#line 118 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__2713)))));
            }
            
        }
    }
    
    //#line 121 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 122 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 123 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 124 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 127 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 128 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 129 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 130 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 131 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 132 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 133 "SuffixArray.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 135 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         i),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t)) + (this->FMGL(n0)))),
                                                       ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         j),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
            (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                 t)) >= (this->FMGL(n0))) && this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         i),
                                                       ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((i) + (((x10_long)1ll)))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                               t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                       ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         j),
                                                       ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j) + (((x10_long)1ll)))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
        {
            
            //#line 138 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 139 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 140 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 141 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 142 "SuffixArray.x10"
                x10_long i__2628min__2702 = ((x10_long)0ll);
                x10_long i__2628max__2703 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__2704;
                    for (i__2704 = i__2628min__2702; ((i__2704) <= (i__2628max__2703));
                         i__2704 = ((i__2704) + (((x10_long)1ll))))
                    {
                        x10_long q__2705 = i__2704;
                        
                        //#line 143 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 144 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 145 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 149 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 150 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 151 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 152 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 153 "SuffixArray.x10"
                x10_long i__2644min__2706 = ((x10_long)0ll);
                x10_long i__2644max__2707 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__2708;
                    for (i__2708 = i__2644min__2706; ((i__2708) <= (i__2644max__2707));
                         i__2708 = ((i__2708) + (((x10_long)1ll))))
                    {
                        x10_long q__2709 = i__2708;
                        
                        //#line 154 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 155 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 156 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 163 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 164 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 167 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 168 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 171 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 172 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 173 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 175 "SuffixArray.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 5 "SuffixArray.x10"
::bwt::SuffixArray* bwt::SuffixArray::bwt__SuffixArray____this__bwt__SuffixArray(
  ) {
    return this;
    
}
void bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray(
  ) {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwt::SuffixArray::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArray::_deserializer);

void bwt::SuffixArray::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(string));
    buf.write(this->FMGL(n));
    buf.write(this->FMGL(n0));
    buf.write(this->FMGL(n1));
    buf.write(this->FMGL(n2));
    buf.write(this->FMGL(k));
    buf.write(this->FMGL(n02));
    buf.write(this->FMGL(R));
    buf.write(this->FMGL(SA12));
    buf.write(this->FMGL(SA));
    
}

::x10::lang::Reference* ::bwt::SuffixArray::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArray::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(string) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(n) = buf.read<x10_long>();
    FMGL(n0) = buf.read<x10_long>();
    FMGL(n1) = buf.read<x10_long>();
    FMGL(n2) = buf.read<x10_long>();
    FMGL(k) = buf.read<x10_long>();
    FMGL(n02) = buf.read<x10_long>();
    FMGL(R) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(SA12) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(SA) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType bwt::SuffixArray::rtt;
void bwt::SuffixArray::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SuffixArray */
/*************************************************/
