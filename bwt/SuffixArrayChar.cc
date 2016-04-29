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

//#line 22 "SuffixArrayChar.x10"

//#line 24 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize) {
    
    //#line 9 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* this__5908 = this;
    ::x10aux::nullCheck(this__5908)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5908)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5908)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__5908)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
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
    x10_long i__4254max__5916 = this->FMGL(k);
    {
        x10_long i__5917;
        for (i__5917 = ((x10_long)0ll); ((i__5917) <= (i__4254max__5916));
             i__5917 = ((i__5917) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__5917, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArrayChar.x10"
    x10_long i__4270max__5919 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5920;
        for (i__5920 = ((x10_long)0ll); ((i__5920) <= (i__4270max__5919));
             i__5920 = ((i__5920) + (((x10_long)1ll)))) {
            
            //#line 41 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__5909 = this->FMGL(c);
            x10_long i__5910 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5920)) + (((x10_long)(rOffs)))))));
            x10_long r__5911 = ((::x10aux::nullCheck(a__5909)->x10::lang::Rail< x10_long >::__apply(
                                   i__5910)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5909)->x10::lang::Rail< x10_long >::__set(
              i__5910, r__5911);
        }
    }
    
    //#line 43 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArrayChar.x10"
    x10_long i__4286max__5922 = this->FMGL(k);
    {
        x10_long i__5923;
        for (i__5923 = ((x10_long)0ll); ((i__5923) <= (i__4286max__5922));
             i__5923 = ((i__5923) + (((x10_long)1ll)))) {
            
            //#line 45 "SuffixArrayChar.x10"
            x10_long t__5912 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                 i__5923);
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__5923, sum);
            
            //#line 47 "SuffixArrayChar.x10"
            sum = ((sum) + (t__5912));
        }
    }
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__4302max__5925 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5926;
        for (i__5926 = ((x10_long)0ll); ((i__5926) <= (i__4302max__5925));
             i__5926 = ((i__5926) + (((x10_long)1ll)))) {
            
            //#line 50 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__5926)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5926));
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__5913 = this->FMGL(c);
            x10_long i__5914 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5926)) + (((x10_long)(rOffs)))))));
            x10_long r__5915 = ((::x10aux::nullCheck(a__5913)->x10::lang::Rail< x10_long >::__apply(
                                   i__5914)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5913)->x10::lang::Rail< x10_long >::__set(
              i__5914, r__5915);
        }
    }
    
}

//#line 55 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 69 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6032)));
    
    //#line 70 "SuffixArrayChar.x10"
    this->constructSampleR();
    
    //#line 71 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6033)));
    
    //#line 72 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 73 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6034)));
    
    //#line 74 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 75 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 78 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 79 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 80 "SuffixArrayChar.x10"
    x10_long i__4318max__5928 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5929;
        for (i__5929 = ((x10_long)0ll); ((i__5929) <= (i__4318max__5928));
             i__5929 = ((i__5929) + (((x10_long)1ll)))) {
            
            //#line 81 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5929), ((x10_long)0ll))))
            {
                
                //#line 82 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__5929)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 85 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 88 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    
    //#line 89 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6035)));
    
    //#line 90 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 91 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6036)));
    
    //#line 92 "SuffixArrayChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 93 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 94 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 95 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 96 "SuffixArrayChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 97 "SuffixArrayChar.x10"
    x10_long i__4334max__5931 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5932;
        for (i__5932 = ((x10_long)0ll); ((i__5932) <= (i__4334max__5931));
             i__5932 = ((i__5932) + (((x10_long)1ll)))) {
            
            //#line 98 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(((i__5932) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 99 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__5932);
                
                //#line 100 "SuffixArrayChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
}

//#line 105 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSampleR() {
    
    //#line 106 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 107 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 108 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 109 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 110 "SuffixArrayChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 111 "SuffixArrayChar.x10"
    x10_long i__4350max__5934 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5935;
        for (i__5935 = ((x10_long)0ll); ((i__5935) <= (i__4350max__5934));
             i__5935 = ((i__5935) + (((x10_long)1ll)))) {
            
            //#line 112 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(((i__5935) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 113 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__5935);
                
                //#line 114 "SuffixArrayChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 117 "SuffixArrayChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 118 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 119 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 120 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 121 "SuffixArrayChar.x10"
    this->FMGL(c) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
}

//#line 124 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 125 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 126 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 127 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 139 "SuffixArrayChar.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 140 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 141 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 142 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 143 "SuffixArrayChar.x10"
    x10_long i__4366max__5943 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5944;
        for (i__5944 = ((x10_long)0ll); ((i__5944) <= (i__4366max__5943));
             i__5944 = ((i__5944) + (((x10_long)1ll)))) {
            
            //#line 144 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5944)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5944)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5944)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 145 "SuffixArrayChar.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 146 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5944));
                
                //#line 147 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5944)) + (((x10_long)1ll))));
                
                //#line 148 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5944)) + (((x10_long)2ll))));
            }
            
            //#line 151 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5944)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 152 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5944)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 154 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5944)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 158 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6037)));
    
    //#line 160 "SuffixArrayChar.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 161 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                name);
        
        //#line 162 "SuffixArrayChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 163 "SuffixArrayChar.x10"
        x10_long i__4382max__5937 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5938;
            for (i__5938 = ((x10_long)0ll); ((i__5938) <= (i__4382max__5937));
                 i__5938 = ((i__5938) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5938), ((i__5938) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 165 "SuffixArrayChar.x10"
        x10_long i__4398max__5940 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5941;
            for (i__5941 = ((x10_long)0ll); ((i__5941) <= (i__4398max__5940));
                 i__5941 = ((i__5941) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5941)) - (((x10_long)1ll))), i__5941);
            }
        }
        
    }
    
}

//#line 169 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 170 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 171 "SuffixArrayChar.x10"
    x10_long m = ((x10_long)0ll);
    
    //#line 173 "SuffixArrayChar.x10"
    x10_long i__4414max__5952 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5953;
        for (i__5953 = ((x10_long)0ll); ((i__5953) <= (i__4414max__5952));
             i__5953 = ((i__5953) + (((x10_long)1ll)))) {
            
            //#line 174 "SuffixArrayChar.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5953)) < (this->FMGL(n0)))) {
                
                //#line 176 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__set(
                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5953))));
                
                //#line 177 "SuffixArrayChar.x10"
                m = ((m) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 182 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
    
    //#line 183 "SuffixArrayChar.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 184 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6038)));
    
    //#line 185 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), SA0, size, num_threads,
                    ((x10_byte)0));
    
    //#line 190 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6039)));
    
    //#line 191 "SuffixArrayChar.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 193 "SuffixArrayChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 194 "SuffixArrayChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 195 "SuffixArrayChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 196 "SuffixArrayChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 197 "SuffixArrayChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 198 "SuffixArrayChar.x10"
        x10_long i = this->getI(t);
        
        //#line 199 "SuffixArrayChar.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 201 "SuffixArrayChar.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__5896 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                 i)));
                x10_long a__5897 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__5898 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                 j)));
                x10_long b__5899 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__5896) < (b__5898)) || ((::x10aux::struct_equals(a__5896,
                                                                      b__5898)) &&
                ((a__5897) <= (b__5899))));
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
            
            //#line 204 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 205 "SuffixArrayChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 206 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 207 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 208 "SuffixArrayChar.x10"
                x10_long i__4430max__5946 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5947;
                    for (i__5947 = ((x10_long)0ll); ((i__5947) <= (i__4430max__5946));
                         i__5947 = ((i__5947) + (((x10_long)1ll))))
                    {
                        
                        //#line 209 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 210 "SuffixArrayChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 211 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 215 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 216 "SuffixArrayChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 217 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 218 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 219 "SuffixArrayChar.x10"
                x10_long i__4446max__5949 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5950;
                    for (i__5950 = ((x10_long)0ll); ((i__5950) <= (i__4446max__5949));
                         i__5950 = ((i__5950) + (((x10_long)1ll))))
                    {
                        
                        //#line 220 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 221 "SuffixArrayChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 222 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 229 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 230 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 233 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 234 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 237 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 238 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 239 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 241 "SuffixArrayChar.x10"
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
    this->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    buf.write(this->FMGL(c));
    
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
    FMGL(c) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType bwt::SuffixArrayChar::rtt;
void bwt::SuffixArrayChar::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6034("Start Sort Char NonSample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6036("SA12");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6033("Start Sort Char Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6037("Ended Sort Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6035("R");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6039("Start Merge Final");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6038("Start SortPairs Char");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6032("Start Constructuring Char Sample");

/* END of SuffixArrayChar */
/*************************************************/
