/*************************************************/
/* START of SuffixArrayChar */
#include <bwt/SuffixArrayChar.h>

#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <bwt/SuffixArray.h>
#include <x10/lang/String.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>

//#line 12 "SuffixArrayChar.x10"

//#line 13 "SuffixArrayChar.x10"

//#line 14 "SuffixArrayChar.x10"

//#line 15 "SuffixArrayChar.x10"

//#line 16 "SuffixArrayChar.x10"

//#line 17 "SuffixArrayChar.x10"

//#line 18 "SuffixArrayChar.x10"

//#line 19 "SuffixArrayChar.x10"

//#line 20 "SuffixArrayChar.x10"

//#line 21 "SuffixArrayChar.x10"

//#line 23 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize) {
    
    //#line 9 "SuffixArrayChar.x10"
    this->bwt::SuffixArrayChar::__fieldInitializers_bwt_SuffixArrayChar();
    
    //#line 24 "SuffixArrayChar.x10"
    this->FMGL(string) = input;
    
    //#line 25 "SuffixArrayChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 26 "SuffixArrayChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 27 "SuffixArrayChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 28 "SuffixArrayChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArrayChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArrayChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                    x10_long charsize)
{
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 33 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                     ::x10::lang::Rail< x10_long >* values,
                                     x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 37 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                     ::x10::lang::Rail< x10_long >* b,
                                     x10_byte rOffs, x10_long nt) {
    
    //#line 38 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 39 "SuffixArrayChar.x10"
    x10_long i__3602min__3816 = ((x10_long)0ll);
    x10_long i__3602max__3817 = this->FMGL(k);
    {
        x10_long i__3818;
        for (i__3818 = i__3602min__3816; ((i__3818) <= (i__3602max__3817));
             i__3818 = ((i__3818) + (((x10_long)1ll)))) {
            x10_long i__3819 = i__3818;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__3819, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArrayChar.x10"
    x10_long i__3618min__3820 = ((x10_long)0ll);
    x10_long i__3618max__3821 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__3822;
        for (i__3822 = i__3618min__3820; ((i__3822) <= (i__3618max__3821));
             i__3822 = ((i__3822) + (((x10_long)1ll)))) {
            x10_long i__3823 = i__3822;
            
            //#line 41 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__3809 = c;
            x10_long i__3810 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__3823)) + (((x10_long)(rOffs)))))));
            x10_long r__3811 = ((::x10aux::nullCheck(a__3809)->x10::lang::Rail< x10_long >::__apply(
                                   i__3810)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__3809)->x10::lang::Rail< x10_long >::__set(
              i__3810, r__3811);
        }
    }
    
    //#line 43 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArrayChar.x10"
    x10_long i__3634min__3824 = ((x10_long)0ll);
    x10_long i__3634max__3825 = this->FMGL(k);
    {
        x10_long i__3826;
        for (i__3826 = i__3634min__3824; ((i__3826) <= (i__3634max__3825));
             i__3826 = ((i__3826) + (((x10_long)1ll)))) {
            x10_long i__3827 = i__3826;
            
            //#line 45 "SuffixArrayChar.x10"
            x10_long t__3812 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__3827);
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__3827, sum);
            
            //#line 47 "SuffixArrayChar.x10"
            sum = ((sum) + (t__3812));
        }
    }
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__3650min__3828 = ((x10_long)0ll);
    x10_long i__3650max__3829 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__3830;
        for (i__3830 = i__3650min__3828; ((i__3830) <= (i__3650max__3829));
             i__3830 = ((i__3830) + (((x10_long)1ll)))) {
            x10_long i__3831 = i__3830;
            
            //#line 50 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__3831)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__3831));
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__3813 = c;
            x10_long i__3814 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__3831)) + (((x10_long)(rOffs)))))));
            x10_long r__3815 = ((::x10aux::nullCheck(a__3813)->x10::lang::Rail< x10_long >::__apply(
                                   i__3814)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__3813)->x10::lang::Rail< x10_long >::__set(
              i__3814, r__3815);
        }
    }
    
}

//#line 55 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 69 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__4667)));
    
    //#line 70 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 71 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__4668)));
    
    //#line 72 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 73 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__4669)));
    
    //#line 74 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 75 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 78 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 79 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 80 "SuffixArrayChar.x10"
    x10_long i__3666min__3832 = ((x10_long)0ll);
    x10_long i__3666max__3833 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__3834;
        for (i__3834 = i__3666min__3832; ((i__3834) <= (i__3666max__3833));
             i__3834 = ((i__3834) + (((x10_long)1ll)))) {
            x10_long i__3835 = i__3834;
            
            //#line 81 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__3835), ((x10_long)0ll))))
            {
                
                //#line 82 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__3835)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 85 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 88 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    
    //#line 89 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 90 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 91 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 92 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 93 "SuffixArrayChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 94 "SuffixArrayChar.x10"
    x10_long i__3682min__3836 = ((x10_long)0ll);
    x10_long i__3682max__3837 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__3838;
        for (i__3838 = i__3682min__3836; ((i__3838) <= (i__3682max__3837));
             i__3838 = ((i__3838) + (((x10_long)1ll)))) {
            x10_long i__3839 = i__3838;
            
            //#line 95 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(((i__3839) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 96 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__3839);
                
                //#line 97 "SuffixArrayChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 100 "SuffixArrayChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 101 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 102 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 103 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 106 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 107 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 108 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 109 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 111 "SuffixArrayChar.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 112 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 113 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 114 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 115 "SuffixArrayChar.x10"
    x10_long i__3698min__3848 = ((x10_long)0ll);
    x10_long i__3698max__3849 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__3850;
        for (i__3850 = i__3698min__3848; ((i__3850) <= (i__3698max__3849));
             i__3850 = ((i__3850) + (((x10_long)1ll)))) {
            x10_long i__3851 = i__3850;
            
            //#line 116 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__3851)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__3851)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__3851)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 117 "SuffixArrayChar.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 118 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__3851));
                
                //#line 119 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__3851)) + (((x10_long)1ll))));
                
                //#line 120 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__3851)) + (((x10_long)2ll))));
            }
            
            //#line 123 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__3851)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 124 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__3851)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 126 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__3851)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 130 "SuffixArrayChar.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 131 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 132 "SuffixArrayChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 133 "SuffixArrayChar.x10"
        x10_long i__3714min__3840 = ((x10_long)0ll);
        x10_long i__3714max__3841 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__3842;
            for (i__3842 = i__3714min__3840; ((i__3842) <= (i__3714max__3841));
                 i__3842 = ((i__3842) + (((x10_long)1ll))))
            {
                x10_long i__3843 = i__3842;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__3843), ((i__3843) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 135 "SuffixArrayChar.x10"
        x10_long i__3730min__3844 = ((x10_long)0ll);
        x10_long i__3730max__3845 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__3846;
            for (i__3846 = i__3730min__3844; ((i__3846) <= (i__3730max__3845));
                 i__3846 = ((i__3846) + (((x10_long)1ll))))
            {
                x10_long i__3847 = i__3846;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__3847)) - (((x10_long)1ll))), i__3847);
            }
        }
        
    }
    
}

//#line 139 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 140 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 141 "SuffixArrayChar.x10"
    x10_long i__3746min__3860 = ((x10_long)0ll);
    x10_long i__3746max__3861 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__3862;
        for (i__3862 = i__3746min__3860; ((i__3862) <= (i__3746max__3861));
             i__3862 = ((i__3862) + (((x10_long)1ll)))) {
            x10_long i__3863 = i__3862;
            
            //#line 142 "SuffixArrayChar.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__3863)) < (this->FMGL(n0)))) {
                
                //#line 143 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__3863)))));
            }
            
        }
    }
    
    //#line 146 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 147 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 148 "SuffixArrayChar.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 149 "SuffixArrayChar.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 151 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__4670)));
    
    //#line 153 "SuffixArrayChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 154 "SuffixArrayChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 155 "SuffixArrayChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 156 "SuffixArrayChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 157 "SuffixArrayChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 158 "SuffixArrayChar.x10"
        x10_long i = this->getI(t);
        
        //#line 159 "SuffixArrayChar.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 161 "SuffixArrayChar.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     i))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t)) + (this->FMGL(n0)))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     j))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
            (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                 t)) >= (this->FMGL(n0))) && this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     i))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     ((i) + (((x10_long)1ll)))))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                               t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     j))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     ((j) + (((x10_long)1ll)))))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
        {
            
            //#line 164 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 165 "SuffixArrayChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 166 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 167 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 168 "SuffixArrayChar.x10"
                x10_long i__3762min__3852 = ((x10_long)0ll);
                x10_long i__3762max__3853 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__3854;
                    for (i__3854 = i__3762min__3852; ((i__3854) <= (i__3762max__3853));
                         i__3854 = ((i__3854) + (((x10_long)1ll))))
                    {
                        x10_long q__3855 = i__3854;
                        
                        //#line 169 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 170 "SuffixArrayChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 171 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 175 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 176 "SuffixArrayChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 177 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 178 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 179 "SuffixArrayChar.x10"
                x10_long i__3778min__3856 = ((x10_long)0ll);
                x10_long i__3778max__3857 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__3858;
                    for (i__3858 = i__3778min__3856; ((i__3858) <= (i__3778max__3857));
                         i__3858 = ((i__3858) + (((x10_long)1ll))))
                    {
                        x10_long q__3859 = i__3858;
                        
                        //#line 180 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 181 "SuffixArrayChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 182 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 189 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 190 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 193 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 194 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 197 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 198 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 199 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 201 "SuffixArrayChar.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 205 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 206 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* bwa = ::bwt::SuffixArrayChar::_make((__extension__ ({
                                                                    ::x10::lang::Rail< x10_byte >* t__4628 =
                                                                      ::x10::lang::Rail< x10_byte >::_makeUnsafe(((x10_long)19ll), false);
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)0ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)1ll),
                                                                      ((x10_byte)4));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)2ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)3ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)4ll),
                                                                      ((x10_byte)4));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)5ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)6ll),
                                                                      ((x10_byte)2));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)7ll),
                                                                      ((x10_byte)3));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)8ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)9ll),
                                                                      ((x10_byte)4));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)10ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)11ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)12ll),
                                                                      ((x10_byte)4));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)13ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)14ll),
                                                                      ((x10_byte)1));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)15ll),
                                                                      ((x10_byte)0));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)16ll),
                                                                      ((x10_byte)0));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)17ll),
                                                                      ((x10_byte)0));
                                                                    t__4628->x10::lang::Rail< x10_byte >::__set(
                                                                      ((x10_long)18ll),
                                                                      ((x10_byte)0));
                                                                    t__4628;
                                                                }))
                                                                ,
                                                                ((x10_long)5ll));
    
    //#line 207 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 208 "SuffixArrayChar.x10"
    x10_long i__3794min__3864 = ((x10_long)0ll);
    x10_long i__3794max__3865 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3866;
        for (i__3866 = i__3794min__3864; ((i__3866) <= (i__3794max__3865));
             i__3866 = ((i__3866) + (((x10_long)1ll)))) {
            x10_long i__3867 = i__3866;
            
            //#line 209 "SuffixArrayChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3867)));
        }
    }
    
}

//#line 9 "SuffixArrayChar.x10"
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::bwt__SuffixArrayChar____this__bwt__SuffixArrayChar(
  ) {
    return this;
    
}
void bwt::SuffixArrayChar::__fieldInitializers_bwt_SuffixArrayChar(
  ) {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwt::SuffixArrayChar::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArrayChar::_deserializer);

void bwt::SuffixArrayChar::_serialize_body(::x10aux::serialization_buffer& buf) {
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

::x10::lang::Reference* ::bwt::SuffixArrayChar::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArrayChar::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(string) = buf.read< ::x10::lang::Rail< x10_byte >*>();
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

::x10aux::RuntimeType bwt::SuffixArrayChar::rtt;
void bwt::SuffixArrayChar::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__4668("Start Sort Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__4670("Start Merge");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__4669("Start Sort NonSample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__4667("Start Constructuring Sample");

/* END of SuffixArrayChar */
/*************************************************/
