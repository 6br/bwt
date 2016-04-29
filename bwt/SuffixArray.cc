/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/lang/Byte.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>

//#line 12 "SuffixArray.x10"

//#line 13 "SuffixArray.x10"

//#line 14 "SuffixArray.x10"

//#line 15 "SuffixArray.x10"

//#line 16 "SuffixArray.x10"

//#line 17 "SuffixArray.x10"

//#line 18 "SuffixArray.x10"

//#line 19 "SuffixArray.x10"

//#line 20 "SuffixArray.x10"

//#line 21 "SuffixArray.x10"

//#line 23 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize) {
    
    //#line 9 "SuffixArray.x10"
    ::bwt::SuffixArray* this__5850 = this;
    ::x10aux::nullCheck(this__5850)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5850)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5850)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 24 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 25 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 26 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 27 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 28 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 33 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads,
                                 x10_byte offset){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 37 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 38 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 39 "SuffixArray.x10"
    x10_long i__5636max__5858 = this->FMGL(k);
    {
        x10_long i__5859;
        for (i__5859 = ((x10_long)0ll); ((i__5859) <= (i__5636max__5858));
             i__5859 = ((i__5859) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5859, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__5652max__5861 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5862;
        for (i__5862 = ((x10_long)0ll); ((i__5862) <= (i__5652max__5861));
             i__5862 = ((i__5862) + (((x10_long)1ll)))) {
            
            //#line 41 "SuffixArray.x10"
            x10_long i__5852 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5862)) + (((x10_long)(rOffs)))));
            x10_long r__5853 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5852)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5852, r__5853);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__5668max__5864 = this->FMGL(k);
    {
        x10_long i__5865;
        for (i__5865 = ((x10_long)0ll); ((i__5865) <= (i__5668max__5864));
             i__5865 = ((i__5865) + (((x10_long)1ll)))) {
            
            //#line 45 "SuffixArray.x10"
            x10_long t__5854 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__5865);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5865, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__5854));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__5684max__5867 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5868;
        for (i__5868 = ((x10_long)0ll); ((i__5868) <= (i__5684max__5867));
             i__5868 = ((i__5868) + (((x10_long)1ll)))) {
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__5868)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5868));
            
            //#line 51 "SuffixArray.x10"
            x10_long i__5856 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5868)) + (((x10_long)(rOffs)))));
            x10_long r__5857 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5856)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5856, r__5857);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 56 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5970)));
    
    //#line 57 "SuffixArray.x10"
    this->constructSample();
    
    //#line 58 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5971)));
    
    //#line 59 "SuffixArray.x10"
    this->sortSample();
    
    //#line 60 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5972)));
    
    //#line 61 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 62 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 65 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 66 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 67 "SuffixArray.x10"
    x10_long i__5700max__5870 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5871;
        for (i__5871 = ((x10_long)0ll); ((i__5871) <= (i__5700max__5870));
             i__5871 = ((i__5871) + (((x10_long)1ll)))) {
            
            //#line 68 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5871), ((x10_long)0ll))))
            {
                
                //#line 69 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__5871)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 72 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 75 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 76 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 77 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 78 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 79 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 80 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 81 "SuffixArray.x10"
    x10_long i__5716max__5873 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5874;
        for (i__5874 = ((x10_long)0ll); ((i__5874) <= (i__5716max__5873));
             i__5874 = ((i__5874) + (((x10_long)1ll)))) {
            
            //#line 82 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__5874) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__5874);
                
                //#line 84 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 87 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 88 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
}

//#line 91 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 94 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 95 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 96 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 97 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5973)));
    
    //#line 98 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 99 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5974)));
    
    //#line 100 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 101 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__5975),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 110 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 111 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 112 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 113 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 114 "SuffixArray.x10"
    x10_long i__5732max__5882 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5883;
        for (i__5883 = ((x10_long)0ll); ((i__5883) <= (i__5732max__5882));
             i__5883 = ((i__5883) + (((x10_long)1ll)))) {
            
            //#line 115 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5883)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5883)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5883)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 116 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 117 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5883));
                
                //#line 118 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5883)) + (((x10_long)1ll))));
                
                //#line 119 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5883)) + (((x10_long)2ll))));
            }
            
            //#line 122 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5883)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 123 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5883)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 125 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5883)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 128 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5976)));
    
    //#line 130 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 131 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                name);
        
        //#line 132 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 133 "SuffixArray.x10"
        x10_long i__5748max__5876 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5877;
            for (i__5877 = ((x10_long)0ll); ((i__5877) <= (i__5748max__5876));
                 i__5877 = ((i__5877) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5877), ((i__5877) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 135 "SuffixArray.x10"
        x10_long i__5764max__5879 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5880;
            for (i__5880 = ((x10_long)0ll); ((i__5880) <= (i__5764max__5879));
                 i__5880 = ((i__5880) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5880)) - (((x10_long)1ll))), i__5880);
            }
        }
        
    }
    
}

//#line 139 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 140 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 141 "SuffixArray.x10"
    x10_long m = ((x10_long)0ll);
    
    //#line 143 "SuffixArray.x10"
    x10_long i__5780max__5891 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5892;
        for (i__5892 = ((x10_long)0ll); ((i__5892) <= (i__5780max__5891));
             i__5892 = ((i__5892) + (((x10_long)1ll)))) {
            
            //#line 144 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5892)) < (this->FMGL(n0)))) {
                
                //#line 146 "SuffixArray.x10"
                ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__set(
                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5892))));
                
                //#line 147 "SuffixArray.x10"
                m = ((m) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 153 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
    
    //#line 154 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 155 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5977)));
    
    //#line 156 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), SA0, size, num_threads,
                    ((x10_byte)0));
    
    //#line 158 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5978)));
    
    //#line 160 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 161 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 162 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 163 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 164 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 165 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 166 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 168 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__5838 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     i);
                x10_long a__5839 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__5840 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     j);
                x10_long b__5841 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__5838) < (b__5840)) || ((::x10aux::struct_equals(a__5838,
                                                                      b__5840)) &&
                ((a__5839) <= (b__5841))));
            }))
            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) >= (this->FMGL(n0))) && this->leq(
                                                    ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
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
            
            //#line 171 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 172 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 173 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 174 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 175 "SuffixArray.x10"
                x10_long i__5796max__5885 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5886;
                    for (i__5886 = ((x10_long)0ll); ((i__5886) <= (i__5796max__5885));
                         i__5886 = ((i__5886) + (((x10_long)1ll))))
                    {
                        
                        //#line 176 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 177 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 178 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 182 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 183 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 184 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 185 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 186 "SuffixArray.x10"
                x10_long i__5812max__5888 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5889;
                    for (i__5889 = ((x10_long)0ll); ((i__5889) <= (i__5812max__5888));
                         i__5889 = ((i__5889) + (((x10_long)1ll))))
                    {
                        
                        //#line 187 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 188 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 189 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 196 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 197 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 200 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 201 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 204 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 205 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 206 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 208 "SuffixArray.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 9 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__5974("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5973("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5971("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5976("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5977("Start SortPairs");
::x10::lang::String bwt::SuffixArray_Strings::sl__5978("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5972("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5975("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__5970("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
