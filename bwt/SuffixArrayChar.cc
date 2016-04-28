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

//#line 24 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize) {
    
    //#line 9 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* this__5672 = this;
    ::x10aux::nullCheck(this__5672)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5672)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5672)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 25 "SuffixArrayChar.x10"
    this->FMGL(string) = input;
    
    //#line 26 "SuffixArrayChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 27 "SuffixArrayChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 28 "SuffixArrayChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArrayChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArrayChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArrayChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                    x10_long charsize)
{
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 34 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairs(::x10::lang::Rail< x10_byte >* keys,
                                     ::x10::lang::Rail< x10_long >* values,
                                     x10_ulong num_elems, x10_int num_threads,
                                     x10_byte offset){
    parallel_radix_sort::SortPairsByte((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 38 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                     ::x10::lang::Rail< x10_long >* b,
                                     x10_byte rOffs, x10_long nt) {
    
    //#line 39 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 40 "SuffixArrayChar.x10"
    x10_long i__4040max__5680 = this->FMGL(k);
    {
        x10_long i__5681;
        for (i__5681 = ((x10_long)0ll); ((i__5681) <= (i__4040max__5680));
             i__5681 = ((i__5681) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5681, ((x10_long)0ll));
        }
    }
    
    //#line 41 "SuffixArrayChar.x10"
    x10_long i__4056max__5683 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5684;
        for (i__5684 = ((x10_long)0ll); ((i__5684) <= (i__4056max__5683));
             i__5684 = ((i__5684) + (((x10_long)1ll)))) {
            
            //#line 42 "SuffixArrayChar.x10"
            x10_long i__5674 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5684)) + (((x10_long)(rOffs)))))));
            x10_long r__5675 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5674)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5674, r__5675);
        }
    }
    
    //#line 44 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 45 "SuffixArrayChar.x10"
    x10_long i__4072max__5686 = this->FMGL(k);
    {
        x10_long i__5687;
        for (i__5687 = ((x10_long)0ll); ((i__5687) <= (i__4072max__5686));
             i__5687 = ((i__5687) + (((x10_long)1ll)))) {
            
            //#line 46 "SuffixArrayChar.x10"
            x10_long t__5676 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__5687);
            
            //#line 47 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5687, sum);
            
            //#line 48 "SuffixArrayChar.x10"
            sum = ((sum) + (t__5676));
        }
    }
    
    //#line 50 "SuffixArrayChar.x10"
    x10_long i__4088max__5689 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5690;
        for (i__5690 = ((x10_long)0ll); ((i__5690) <= (i__4088max__5689));
             i__5690 = ((i__5690) + (((x10_long)1ll)))) {
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__5690)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5690));
            
            //#line 52 "SuffixArrayChar.x10"
            x10_long i__5678 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5690)) + (((x10_long)(rOffs)))))));
            x10_long r__5679 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__5678)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5678, r__5679);
        }
    }
    
}

//#line 56 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 70 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5793)));
    
    //#line 71 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 72 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5794)));
    
    //#line 73 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 74 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5795)));
    
    //#line 75 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 76 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 79 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 80 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 81 "SuffixArrayChar.x10"
    x10_long i__4104max__5692 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5693;
        for (i__5693 = ((x10_long)0ll); ((i__5693) <= (i__4104max__5692));
             i__5693 = ((i__5693) + (((x10_long)1ll)))) {
            
            //#line 82 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5693), ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__5693)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 86 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 89 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    
    //#line 90 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 91 "SuffixArrayChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 92 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 93 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 94 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 95 "SuffixArrayChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 96 "SuffixArrayChar.x10"
    x10_long i__4120max__5695 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5696;
        for (i__5696 = ((x10_long)0ll); ((i__5696) <= (i__4120max__5695));
             i__5696 = ((i__5696) + (((x10_long)1ll)))) {
            
            //#line 97 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(((i__5696) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 98 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__5696);
                
                //#line 99 "SuffixArrayChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 102 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
}

//#line 105 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 108 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 109 "SuffixArrayChar.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 110 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 111 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5796)));
    
    //#line 112 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 113 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5797)));
    
    //#line 114 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 115 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArrayChar_Strings::sl__5798),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 117 "SuffixArrayChar.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 118 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 119 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 120 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 121 "SuffixArrayChar.x10"
    x10_long i__4136max__5704 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5705;
        for (i__5705 = ((x10_long)0ll); ((i__5705) <= (i__4136max__5704));
             i__5705 = ((i__5705) + (((x10_long)1ll)))) {
            
            //#line 122 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5705)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5705)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5705)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 123 "SuffixArrayChar.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 124 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5705));
                
                //#line 125 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5705)) + (((x10_long)1ll))));
                
                //#line 126 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5705)) + (((x10_long)2ll))));
            }
            
            //#line 129 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5705)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 130 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5705)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 132 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5705)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 136 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5799)));
    
    //#line 138 "SuffixArrayChar.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 139 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                name);
        
        //#line 140 "SuffixArrayChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 141 "SuffixArrayChar.x10"
        x10_long i__4152max__5698 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5699;
            for (i__5699 = ((x10_long)0ll); ((i__5699) <= (i__4152max__5698));
                 i__5699 = ((i__5699) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5699), ((i__5699) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 143 "SuffixArrayChar.x10"
        x10_long i__4168max__5701 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5702;
            for (i__5702 = ((x10_long)0ll); ((i__5702) <= (i__4168max__5701));
                 i__5702 = ((i__5702) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5702)) - (((x10_long)1ll))), i__5702);
            }
        }
        
    }
    
}

//#line 147 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 148 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* R0B =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (R0B)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 149 "SuffixArrayChar.x10"
    x10_long i__4184max__5713 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5714;
        for (i__5714 = ((x10_long)0ll); ((i__5714) <= (i__4184max__5713));
             i__5714 = ((i__5714) + (((x10_long)1ll)))) {
            
            //#line 150 "SuffixArrayChar.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5714)) < (this->FMGL(n0)))) {
                
                //#line 151 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__5714)))));
            }
            
        }
    }
    
    //#line 154 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 160 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 161 "SuffixArrayChar.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 163 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5800)));
    
    //#line 164 "SuffixArrayChar.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 166 "SuffixArrayChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 167 "SuffixArrayChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 168 "SuffixArrayChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 169 "SuffixArrayChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 170 "SuffixArrayChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 171 "SuffixArrayChar.x10"
        x10_long i = this->getI(t);
        
        //#line 172 "SuffixArrayChar.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 174 "SuffixArrayChar.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__5660 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                 i)));
                x10_long a__5661 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__5662 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                 j)));
                x10_long b__5663 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__5660) < (b__5662)) || ((::x10aux::struct_equals(a__5660,
                                                                      b__5662)) &&
                ((a__5661) <= (b__5663))));
            }))
            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) >= (this->FMGL(n0))) && this->leq(
                                                    ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
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
            
            //#line 177 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 178 "SuffixArrayChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 179 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 180 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 181 "SuffixArrayChar.x10"
                x10_long i__4200max__5707 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5708;
                    for (i__5708 = ((x10_long)0ll); ((i__5708) <= (i__4200max__5707));
                         i__5708 = ((i__5708) + (((x10_long)1ll))))
                    {
                        
                        //#line 182 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 183 "SuffixArrayChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 184 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 188 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 189 "SuffixArrayChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 190 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 191 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 192 "SuffixArrayChar.x10"
                x10_long i__4216max__5710 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5711;
                    for (i__5711 = ((x10_long)0ll); ((i__5711) <= (i__4216max__5710));
                         i__5711 = ((i__5711) + (((x10_long)1ll))))
                    {
                        
                        //#line 193 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 194 "SuffixArrayChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 195 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 202 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 203 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 206 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 207 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 210 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 211 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 212 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 214 "SuffixArrayChar.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
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

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5797("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5795("Start Sort Char NonSample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5796("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5794("Start Sort Char Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5799("Ended Sort Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5798("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5800("Start Merge Final");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5793("Start Constructuring Char Sample");

/* END of SuffixArrayChar */
/*************************************************/
