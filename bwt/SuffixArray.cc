/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Byte.h>
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
    this->bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray();
    
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
                                 x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 37 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 38 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 39 "SuffixArray.x10"
    x10_long i__4512min__4710 = ((x10_long)0ll);
    x10_long i__4512max__4711 = this->FMGL(k);
    {
        x10_long i__4712;
        for (i__4712 = i__4512min__4710; ((i__4712) <= (i__4512max__4711));
             i__4712 = ((i__4712) + (((x10_long)1ll)))) {
            x10_long i__4713 = i__4712;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__4713, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__4528min__4714 = ((x10_long)0ll);
    x10_long i__4528max__4715 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__4716;
        for (i__4716 = i__4528min__4714; ((i__4716) <= (i__4528max__4715));
             i__4716 = ((i__4716) + (((x10_long)1ll)))) {
            x10_long i__4717 = i__4716;
            
            //#line 41 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__4703 = c;
            x10_long i__4704 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__4717)) + (((x10_long)(rOffs)))));
            x10_long r__4705 = ((::x10aux::nullCheck(a__4703)->x10::lang::Rail< x10_long >::__apply(
                                   i__4704)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__4703)->x10::lang::Rail< x10_long >::__set(
              i__4704, r__4705);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__4544min__4718 = ((x10_long)0ll);
    x10_long i__4544max__4719 = this->FMGL(k);
    {
        x10_long i__4720;
        for (i__4720 = i__4544min__4718; ((i__4720) <= (i__4544max__4719));
             i__4720 = ((i__4720) + (((x10_long)1ll)))) {
            x10_long i__4721 = i__4720;
            
            //#line 45 "SuffixArray.x10"
            x10_long t__4706 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__4721);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__4721, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__4706));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__4560min__4722 = ((x10_long)0ll);
    x10_long i__4560max__4723 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__4724;
        for (i__4724 = i__4560min__4722; ((i__4724) <= (i__4560max__4723));
             i__4724 = ((i__4724) + (((x10_long)1ll)))) {
            x10_long i__4725 = i__4724;
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__4725)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__4725));
            
            //#line 51 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__4707 = c;
            x10_long i__4708 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__4725)) + (((x10_long)(rOffs)))));
            x10_long r__4709 = ((::x10aux::nullCheck(a__4707)->x10::lang::Rail< x10_long >::__apply(
                                   i__4708)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__4707)->x10::lang::Rail< x10_long >::__set(
              i__4708, r__4709);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 69 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5538)));
    
    //#line 70 "SuffixArray.x10"
    this->constructSample();
    
    //#line 71 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5539)));
    
    //#line 72 "SuffixArray.x10"
    this->sortSample();
    
    //#line 73 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5540)));
    
    //#line 74 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 75 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 78 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 79 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 80 "SuffixArray.x10"
    x10_long i__4576min__4726 = ((x10_long)0ll);
    x10_long i__4576max__4727 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__4728;
        for (i__4728 = i__4576min__4726; ((i__4728) <= (i__4576max__4727));
             i__4728 = ((i__4728) + (((x10_long)1ll)))) {
            x10_long i__4729 = i__4728;
            
            //#line 81 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__4729), ((x10_long)0ll))))
            {
                
                //#line 82 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__4729)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 85 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 88 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 89 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 90 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 91 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 92 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 93 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 94 "SuffixArray.x10"
    x10_long i__4592min__4730 = ((x10_long)0ll);
    x10_long i__4592max__4731 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__4732;
        for (i__4732 = i__4592min__4730; ((i__4732) <= (i__4592max__4731));
             i__4732 = ((i__4732) + (((x10_long)1ll)))) {
            x10_long i__4733 = i__4732;
            
            //#line 95 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__4733) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 96 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__4733);
                
                //#line 97 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 100 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 101 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 102 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 103 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 106 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 107 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 108 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5541)));
    
    //#line 109 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 110 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5542)));
    
    //#line 111 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 112 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5543)));
    
    //#line 114 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 115 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 116 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 117 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 118 "SuffixArray.x10"
    x10_long i__4608min__4742 = ((x10_long)0ll);
    x10_long i__4608max__4743 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__4744;
        for (i__4744 = i__4608min__4742; ((i__4744) <= (i__4608max__4743));
             i__4744 = ((i__4744) + (((x10_long)1ll)))) {
            x10_long i__4745 = i__4744;
            
            //#line 119 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__4745)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__4745)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__4745)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 120 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 121 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__4745));
                
                //#line 122 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__4745)) + (((x10_long)1ll))));
                
                //#line 123 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__4745)) + (((x10_long)2ll))));
            }
            
            //#line 126 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__4745)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 127 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__4745)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 129 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__4745)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 132 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5544)));
    
    //#line 134 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 135 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 136 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 137 "SuffixArray.x10"
        x10_long i__4624min__4734 = ((x10_long)0ll);
        x10_long i__4624max__4735 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__4736;
            for (i__4736 = i__4624min__4734; ((i__4736) <= (i__4624max__4735));
                 i__4736 = ((i__4736) + (((x10_long)1ll))))
            {
                x10_long i__4737 = i__4736;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__4737), ((i__4737) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 139 "SuffixArray.x10"
        x10_long i__4640min__4738 = ((x10_long)0ll);
        x10_long i__4640max__4739 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__4740;
            for (i__4740 = i__4640min__4738; ((i__4740) <= (i__4640max__4739));
                 i__4740 = ((i__4740) + (((x10_long)1ll))))
            {
                x10_long i__4741 = i__4740;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__4741)) - (((x10_long)1ll))), i__4741);
            }
        }
        
    }
    
}

//#line 143 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 144 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 145 "SuffixArray.x10"
    x10_long i__4656min__4754 = ((x10_long)0ll);
    x10_long i__4656max__4755 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__4756;
        for (i__4756 = i__4656min__4754; ((i__4756) <= (i__4656max__4755));
             i__4756 = ((i__4756) + (((x10_long)1ll)))) {
            x10_long i__4757 = i__4756;
            
            //#line 146 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__4757)) < (this->FMGL(n0)))) {
                
                //#line 147 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__4757)))));
            }
            
        }
    }
    
    //#line 150 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 151 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 152 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 153 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 155 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5545)));
    
    //#line 157 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 158 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 159 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 160 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 161 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 162 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 163 "SuffixArray.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 165 "SuffixArray.x10"
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
            
            //#line 168 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 169 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 170 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 171 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 172 "SuffixArray.x10"
                x10_long i__4672min__4746 = ((x10_long)0ll);
                x10_long i__4672max__4747 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__4748;
                    for (i__4748 = i__4672min__4746; ((i__4748) <= (i__4672max__4747));
                         i__4748 = ((i__4748) + (((x10_long)1ll))))
                    {
                        x10_long q__4749 = i__4748;
                        
                        //#line 173 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 174 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 175 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 179 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 180 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 181 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 182 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 183 "SuffixArray.x10"
                x10_long i__4688min__4750 = ((x10_long)0ll);
                x10_long i__4688max__4751 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__4752;
                    for (i__4752 = i__4688min__4750; ((i__4752) <= (i__4688max__4751));
                         i__4752 = ((i__4752) + (((x10_long)1ll))))
                    {
                        x10_long q__4753 = i__4752;
                        
                        //#line 184 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 185 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 186 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 193 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 194 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 197 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 198 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 201 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 202 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 203 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 205 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__5542("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5541("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5539("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5544("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5543("Ended 3rd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5545("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5540("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5538("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
