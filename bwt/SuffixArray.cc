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
    ::bwt::SuffixArray* this__5614 = this;
    ::x10aux::nullCheck(this__5614)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5614)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5614)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
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
    x10_long i__5400max__5622 = this->FMGL(k);
    {
        x10_long i__5623;
        for (i__5623 = ((x10_long)0ll); ((i__5623) <= (i__5400max__5622));
             i__5623 = ((i__5623) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5623, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__5416max__5625 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5626;
        for (i__5626 = ((x10_long)0ll); ((i__5626) <= (i__5416max__5625));
             i__5626 = ((i__5626) + (((x10_long)1ll)))) {
            
            //#line 41 "SuffixArray.x10"
            x10_long i__5616 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5626)) + (((x10_long)(rOffs)))));
            x10_long r__5617 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5616)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5616, r__5617);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__5432max__5628 = this->FMGL(k);
    {
        x10_long i__5629;
        for (i__5629 = ((x10_long)0ll); ((i__5629) <= (i__5432max__5628));
             i__5629 = ((i__5629) + (((x10_long)1ll)))) {
            
            //#line 45 "SuffixArray.x10"
            x10_long t__5618 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__5629);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5629, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__5618));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__5448max__5631 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5632;
        for (i__5632 = ((x10_long)0ll); ((i__5632) <= (i__5448max__5631));
             i__5632 = ((i__5632) + (((x10_long)1ll)))) {
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__5632)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5632));
            
            //#line 51 "SuffixArray.x10"
            x10_long i__5620 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5632)) + (((x10_long)(rOffs)))));
            x10_long r__5621 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5620)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5620, r__5621);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 56 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5731)));
    
    //#line 57 "SuffixArray.x10"
    this->constructSample();
    
    //#line 58 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5732)));
    
    //#line 59 "SuffixArray.x10"
    this->sortSample();
    
    //#line 60 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5733)));
    
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
    x10_long i__5464max__5634 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5635;
        for (i__5635 = ((x10_long)0ll); ((i__5635) <= (i__5464max__5634));
             i__5635 = ((i__5635) + (((x10_long)1ll)))) {
            
            //#line 68 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5635), ((x10_long)0ll))))
            {
                
                //#line 69 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__5635)) - (((x10_long)1ll))))));
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
    x10_long i__5480max__5637 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5638;
        for (i__5638 = ((x10_long)0ll); ((i__5638) <= (i__5480max__5637));
             i__5638 = ((i__5638) + (((x10_long)1ll)))) {
            
            //#line 82 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__5638) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__5638);
                
                //#line 84 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 87 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
}

//#line 90 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 93 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 94 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 95 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 96 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5734)));
    
    //#line 97 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 98 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5735)));
    
    //#line 99 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 100 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__5736),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 109 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 110 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 111 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 112 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 113 "SuffixArray.x10"
    x10_long i__5496max__5646 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5647;
        for (i__5647 = ((x10_long)0ll); ((i__5647) <= (i__5496max__5646));
             i__5647 = ((i__5647) + (((x10_long)1ll)))) {
            
            //#line 114 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5647)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5647)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5647)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 115 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 116 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5647));
                
                //#line 117 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5647)) + (((x10_long)1ll))));
                
                //#line 118 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5647)) + (((x10_long)2ll))));
            }
            
            //#line 121 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5647)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 122 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5647)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 124 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5647)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 127 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5737)));
    
    //#line 129 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 130 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                name);
        
        //#line 131 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 132 "SuffixArray.x10"
        x10_long i__5512max__5640 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5641;
            for (i__5641 = ((x10_long)0ll); ((i__5641) <= (i__5512max__5640));
                 i__5641 = ((i__5641) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5641), ((i__5641) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 134 "SuffixArray.x10"
        x10_long i__5528max__5643 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5644;
            for (i__5644 = ((x10_long)0ll); ((i__5644) <= (i__5528max__5643));
                 i__5644 = ((i__5644) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5644)) - (((x10_long)1ll))), i__5644);
            }
        }
        
    }
    
}

//#line 138 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 139 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (R0B)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 140 "SuffixArray.x10"
    x10_long i__5544max__5655 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5656;
        for (i__5656 = ((x10_long)0ll); ((i__5656) <= (i__5544max__5655));
             i__5656 = ((i__5656) + (((x10_long)1ll)))) {
            
            //#line 141 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5656)) < (this->FMGL(n0)))) {
                
                //#line 142 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__5656)))));
            }
            
        }
    }
    
    //#line 145 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 146 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 147 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 152 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5738)));
    
    //#line 153 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 155 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 156 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 157 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 158 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 159 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 160 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 161 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 163 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__5602 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     i);
                x10_long a__5603 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__5604 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     j);
                x10_long b__5605 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__5602) < (b__5604)) || ((::x10aux::struct_equals(a__5602,
                                                                      b__5604)) &&
                ((a__5603) <= (b__5605))));
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
            
            //#line 166 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 167 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 168 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 169 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 170 "SuffixArray.x10"
                x10_long i__5560max__5649 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5650;
                    for (i__5650 = ((x10_long)0ll); ((i__5650) <= (i__5560max__5649));
                         i__5650 = ((i__5650) + (((x10_long)1ll))))
                    {
                        
                        //#line 171 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 172 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 173 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 177 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 178 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 179 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 180 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 181 "SuffixArray.x10"
                x10_long i__5576max__5652 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5653;
                    for (i__5653 = ((x10_long)0ll); ((i__5653) <= (i__5576max__5652));
                         i__5653 = ((i__5653) + (((x10_long)1ll))))
                    {
                        
                        //#line 182 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 183 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 184 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 191 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 192 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 195 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 196 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 199 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 200 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 201 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 203 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__5735("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5734("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5732("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5737("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5738("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5733("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5736("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__5731("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
