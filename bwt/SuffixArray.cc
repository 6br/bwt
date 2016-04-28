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
    ::bwt::SuffixArray* this__5635 = this;
    ::x10aux::nullCheck(this__5635)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5635)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5635)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
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
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(nt);
    
    //#line 39 "SuffixArray.x10"
    x10_long i__5421max__5643 = this->FMGL(k);
    {
        x10_long i__5644;
        for (i__5644 = ((x10_long)0ll); ((i__5644) <= (i__5421max__5643));
             i__5644 = ((i__5644) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5644, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__5437max__5646 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5647;
        for (i__5647 = ((x10_long)0ll); ((i__5647) <= (i__5437max__5646));
             i__5647 = ((i__5647) + (((x10_long)1ll)))) {
            
            //#line 41 "SuffixArray.x10"
            x10_long i__5637 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5647)) + (((x10_long)(rOffs)))));
            x10_long r__5638 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5637)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5637, r__5638);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__5453max__5649 = this->FMGL(k);
    {
        x10_long i__5650;
        for (i__5650 = ((x10_long)0ll); ((i__5650) <= (i__5453max__5649));
             i__5650 = ((i__5650) + (((x10_long)1ll)))) {
            
            //#line 45 "SuffixArray.x10"
            x10_long t__5639 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__5650);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5650, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__5639));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__5469max__5652 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5653;
        for (i__5653 = ((x10_long)0ll); ((i__5653) <= (i__5469max__5652));
             i__5653 = ((i__5653) + (((x10_long)1ll)))) {
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__5653)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5653));
            
            //#line 51 "SuffixArray.x10"
            x10_long i__5641 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5653)) + (((x10_long)(rOffs)))));
            x10_long r__5642 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5641)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5641, r__5642);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 56 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5752)));
    
    //#line 57 "SuffixArray.x10"
    this->constructSample();
    
    //#line 58 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5753)));
    
    //#line 59 "SuffixArray.x10"
    this->sortSample();
    
    //#line 60 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5754)));
    
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
    x10_long i__5485max__5655 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5656;
        for (i__5656 = ((x10_long)0ll); ((i__5656) <= (i__5485max__5655));
             i__5656 = ((i__5656) + (((x10_long)1ll)))) {
            
            //#line 68 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5656), ((x10_long)0ll))))
            {
                
                //#line 69 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__5656)) - (((x10_long)1ll))))));
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
    x10_long i__5501max__5658 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5659;
        for (i__5659 = ((x10_long)0ll); ((i__5659) <= (i__5501max__5658));
             i__5659 = ((i__5659) + (((x10_long)1ll)))) {
            
            //#line 82 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__5659) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__5659);
                
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
    
    //#line 101 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 102 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 103 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 104 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5755)));
    
    //#line 105 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 106 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5756)));
    
    //#line 107 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 108 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__5757),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 117 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 118 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 119 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 120 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 121 "SuffixArray.x10"
    x10_long i__5517max__5667 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5668;
        for (i__5668 = ((x10_long)0ll); ((i__5668) <= (i__5517max__5667));
             i__5668 = ((i__5668) + (((x10_long)1ll)))) {
            
            //#line 122 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5668)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5668)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5668)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 123 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 124 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5668));
                
                //#line 125 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5668)) + (((x10_long)1ll))));
                
                //#line 126 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5668)) + (((x10_long)2ll))));
            }
            
            //#line 129 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5668)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 130 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5668)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 132 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5668)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 135 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5758)));
    
    //#line 137 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 138 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                name);
        
        //#line 139 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 140 "SuffixArray.x10"
        x10_long i__5533max__5661 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5662;
            for (i__5662 = ((x10_long)0ll); ((i__5662) <= (i__5533max__5661));
                 i__5662 = ((i__5662) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5662), ((i__5662) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 142 "SuffixArray.x10"
        x10_long i__5549max__5664 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5665;
            for (i__5665 = ((x10_long)0ll); ((i__5665) <= (i__5549max__5664));
                 i__5665 = ((i__5665) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5665)) - (((x10_long)1ll))), i__5665);
            }
        }
        
    }
    
}

//#line 146 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 147 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (R0B)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 148 "SuffixArray.x10"
    x10_long i__5565max__5676 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5677;
        for (i__5677 = ((x10_long)0ll); ((i__5677) <= (i__5565max__5676));
             i__5677 = ((i__5677) + (((x10_long)1ll)))) {
            
            //#line 149 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5677)) < (this->FMGL(n0)))) {
                
                //#line 150 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__5677)))));
            }
            
        }
    }
    
    //#line 153 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = R0B->result();
    
    //#line 155 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
    
    //#line 156 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 157 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), SA0, size, num_threads,
                    ((x10_byte)0));
    
    //#line 159 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5759)));
    
    //#line 160 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 162 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 163 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 164 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 165 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 166 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 167 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 168 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 170 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__5623 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     i);
                x10_long a__5624 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__5625 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     j);
                x10_long b__5626 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__5623) < (b__5625)) || ((::x10aux::struct_equals(a__5623,
                                                                      b__5625)) &&
                ((a__5624) <= (b__5626))));
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
            
            //#line 173 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 174 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 175 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 176 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 177 "SuffixArray.x10"
                x10_long i__5581max__5670 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5671;
                    for (i__5671 = ((x10_long)0ll); ((i__5671) <= (i__5581max__5670));
                         i__5671 = ((i__5671) + (((x10_long)1ll))))
                    {
                        
                        //#line 178 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 179 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 180 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 184 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 185 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 186 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 187 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 188 "SuffixArray.x10"
                x10_long i__5597max__5673 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5674;
                    for (i__5674 = ((x10_long)0ll); ((i__5674) <= (i__5597max__5673));
                         i__5674 = ((i__5674) + (((x10_long)1ll))))
                    {
                        
                        //#line 189 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 190 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 191 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 198 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 199 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 202 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 203 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 206 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 207 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 208 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 210 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__5756("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5755("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5753("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5758("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5759("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5754("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5757("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__5752("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
