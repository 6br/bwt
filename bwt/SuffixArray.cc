/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

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
    x10_long i__2486min__2684 = ((x10_long)0ll);
    x10_long i__2486max__2685 = this->FMGL(k);
    {
        x10_long i__2686;
        for (i__2686 = i__2486min__2684; ((i__2686) <= (i__2486max__2685));
             i__2686 = ((i__2686) + (((x10_long)1ll)))) {
            x10_long i__2687 = i__2686;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__2687, ((x10_long)0ll));
        }
    }
    
    //#line 31 "SuffixArray.x10"
    x10_long i__2502min__2688 = ((x10_long)0ll);
    x10_long i__2502max__2689 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__2690;
        for (i__2690 = i__2502min__2688; ((i__2690) <= (i__2502max__2689));
             i__2690 = ((i__2690) + (((x10_long)1ll)))) {
            x10_long i__2691 = i__2690;
            
            //#line 32 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__2677 = c;
            x10_long i__2678 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__2691)) + (((x10_long)(rOffs)))));
            x10_long r__2679 = ((::x10aux::nullCheck(a__2677)->x10::lang::Rail< x10_long >::__apply(
                                   i__2678)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__2677)->x10::lang::Rail< x10_long >::__set(
              i__2678, r__2679);
        }
    }
    
    //#line 34 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 35 "SuffixArray.x10"
    x10_long i__2518min__2692 = ((x10_long)0ll);
    x10_long i__2518max__2693 = this->FMGL(k);
    {
        x10_long i__2694;
        for (i__2694 = i__2518min__2692; ((i__2694) <= (i__2518max__2693));
             i__2694 = ((i__2694) + (((x10_long)1ll)))) {
            x10_long i__2695 = i__2694;
            
            //#line 36 "SuffixArray.x10"
            x10_long t__2680 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__2695);
            
            //#line 37 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__2695, sum);
            
            //#line 38 "SuffixArray.x10"
            sum = ((sum) + (t__2680));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__2534min__2696 = ((x10_long)0ll);
    x10_long i__2534max__2697 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__2698;
        for (i__2698 = i__2534min__2696; ((i__2698) <= (i__2534max__2697));
             i__2698 = ((i__2698) + (((x10_long)1ll)))) {
            x10_long i__2699 = i__2698;
            
            //#line 41 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__2699)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__2699));
            
            //#line 42 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__2681 = c;
            x10_long i__2682 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__2699)) + (((x10_long)(rOffs)))));
            x10_long r__2683 = ((::x10aux::nullCheck(a__2681)->x10::lang::Rail< x10_long >::__apply(
                                   i__2682)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__2681)->x10::lang::Rail< x10_long >::__set(
              i__2682, r__2683);
        }
    }
    
}

//#line 46 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 47 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__2742)));
    
    //#line 48 "SuffixArray.x10"
    this->constructSample();
    
    //#line 49 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__2743)));
    
    //#line 50 "SuffixArray.x10"
    this->sortSample();
    
    //#line 51 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__2744)));
    
    //#line 52 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 53 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 56 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 57 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 58 "SuffixArray.x10"
    x10_long i__2550min__2700 = ((x10_long)0ll);
    x10_long i__2550max__2701 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__2702;
        for (i__2702 = i__2550min__2700; ((i__2702) <= (i__2550max__2701));
             i__2702 = ((i__2702) + (((x10_long)1ll)))) {
            x10_long i__2703 = i__2702;
            
            //#line 59 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__2703), ((x10_long)0ll))))
            {
                
                //#line 60 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__2703)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 63 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 66 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 67 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 68 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 69 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 70 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 71 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 72 "SuffixArray.x10"
    x10_long i__2566min__2704 = ((x10_long)0ll);
    x10_long i__2566max__2705 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__2706;
        for (i__2706 = i__2566min__2704; ((i__2706) <= (i__2566max__2705));
             i__2706 = ((i__2706) + (((x10_long)1ll)))) {
            x10_long i__2707 = i__2706;
            
            //#line 73 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__2707) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 74 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__2707);
                
                //#line 75 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 78 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 79 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 80 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 81 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 84 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 85 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 86 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 87 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 89 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 90 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 91 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 92 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 93 "SuffixArray.x10"
    x10_long i__2582min__2716 = ((x10_long)0ll);
    x10_long i__2582max__2717 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__2718;
        for (i__2718 = i__2582min__2716; ((i__2718) <= (i__2582max__2717));
             i__2718 = ((i__2718) + (((x10_long)1ll)))) {
            x10_long i__2719 = i__2718;
            
            //#line 94 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__2719)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__2719)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__2719)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 95 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 96 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__2719));
                
                //#line 97 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__2719)) + (((x10_long)1ll))));
                
                //#line 98 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__2719)) + (((x10_long)2ll))));
            }
            
            //#line 101 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__2719)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 102 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__2719)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 104 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__2719)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 108 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 109 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 110 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 111 "SuffixArray.x10"
        x10_long i__2598min__2708 = ((x10_long)0ll);
        x10_long i__2598max__2709 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__2710;
            for (i__2710 = i__2598min__2708; ((i__2710) <= (i__2598max__2709));
                 i__2710 = ((i__2710) + (((x10_long)1ll))))
            {
                x10_long i__2711 = i__2710;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__2711), ((i__2711) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 113 "SuffixArray.x10"
        x10_long i__2614min__2712 = ((x10_long)0ll);
        x10_long i__2614max__2713 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__2714;
            for (i__2714 = i__2614min__2712; ((i__2714) <= (i__2614max__2713));
                 i__2714 = ((i__2714) + (((x10_long)1ll))))
            {
                x10_long i__2715 = i__2714;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__2715)) - (((x10_long)1ll))), i__2715);
            }
        }
        
    }
    
}

//#line 117 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 118 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 119 "SuffixArray.x10"
    x10_long i__2630min__2728 = ((x10_long)0ll);
    x10_long i__2630max__2729 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__2730;
        for (i__2730 = i__2630min__2728; ((i__2730) <= (i__2630max__2729));
             i__2730 = ((i__2730) + (((x10_long)1ll)))) {
            x10_long i__2731 = i__2730;
            
            //#line 120 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__2731)) < (this->FMGL(n0)))) {
                
                //#line 121 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__2731)))));
            }
            
        }
    }
    
    //#line 124 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 125 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 126 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 127 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 129 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__2745)));
    
    //#line 131 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 132 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 133 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 134 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 135 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 136 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 137 "SuffixArray.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 139 "SuffixArray.x10"
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
            
            //#line 142 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 143 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 144 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 145 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 146 "SuffixArray.x10"
                x10_long i__2646min__2720 = ((x10_long)0ll);
                x10_long i__2646max__2721 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__2722;
                    for (i__2722 = i__2646min__2720; ((i__2722) <= (i__2646max__2721));
                         i__2722 = ((i__2722) + (((x10_long)1ll))))
                    {
                        x10_long q__2723 = i__2722;
                        
                        //#line 147 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 148 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 149 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 153 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 154 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 155 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 156 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 157 "SuffixArray.x10"
                x10_long i__2662min__2724 = ((x10_long)0ll);
                x10_long i__2662max__2725 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__2726;
                    for (i__2726 = i__2662min__2724; ((i__2726) <= (i__2662max__2725));
                         i__2726 = ((i__2726) + (((x10_long)1ll))))
                    {
                        x10_long q__2727 = i__2726;
                        
                        //#line 158 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 159 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 160 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 167 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 168 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 171 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 172 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 175 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 176 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 177 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 179 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__2743("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__2745("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__2744("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__2742("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
