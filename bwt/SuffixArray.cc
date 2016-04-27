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

//#line 14 "SuffixArray.x10"

//#line 15 "SuffixArray.x10"

//#line 16 "SuffixArray.x10"

//#line 17 "SuffixArray.x10"

//#line 18 "SuffixArray.x10"

//#line 19 "SuffixArray.x10"

//#line 20 "SuffixArray.x10"

//#line 21 "SuffixArray.x10"

//#line 22 "SuffixArray.x10"

//#line 23 "SuffixArray.x10"

//#line 25 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize) {
    
    //#line 9 "SuffixArray.x10"
    ::bwt::SuffixArray* this__6065 = this;
    ::x10aux::nullCheck(this__6065)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6065)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6065)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6065)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 26 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 28 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 29 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 30 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 32 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 33 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 36 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads,
                                 x10_byte offset){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 40 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 41 "SuffixArray.x10"
    x10_long i__4795max__6073 = this->FMGL(k);
    {
        x10_long i__6074;
        for (i__6074 = ((x10_long)0ll); ((i__6074) <= (i__4795max__6073));
             i__6074 = ((i__6074) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__6074, ((x10_long)0ll));
        }
    }
    
    //#line 42 "SuffixArray.x10"
    x10_long i__4811max__6076 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__6077;
        for (i__6077 = ((x10_long)0ll); ((i__6077) <= (i__4811max__6076));
             i__6077 = ((i__6077) + (((x10_long)1ll)))) {
            
            //#line 43 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__6066 = this->FMGL(c);
            x10_long i__6067 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__6077)) + (((x10_long)(rOffs)))));
            x10_long r__6068 = ((::x10aux::nullCheck(a__6066)->x10::lang::Rail< x10_long >::__apply(
                                   i__6067)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__6066)->x10::lang::Rail< x10_long >::__set(
              i__6067, r__6068);
        }
    }
    
    //#line 45 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 46 "SuffixArray.x10"
    x10_long i__4827max__6079 = this->FMGL(k);
    {
        x10_long i__6080;
        for (i__6080 = ((x10_long)0ll); ((i__6080) <= (i__4827max__6079));
             i__6080 = ((i__6080) + (((x10_long)1ll)))) {
            
            //#line 47 "SuffixArray.x10"
            x10_long t__6069 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                 i__6080);
            
            //#line 48 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__6080, sum);
            
            //#line 49 "SuffixArray.x10"
            sum = ((sum) + (t__6069));
        }
    }
    
    //#line 51 "SuffixArray.x10"
    x10_long i__4843max__6082 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__6083;
        for (i__6083 = ((x10_long)0ll); ((i__6083) <= (i__4843max__6082));
             i__6083 = ((i__6083) + (((x10_long)1ll)))) {
            
            //#line 52 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__6083)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__6083));
            
            //#line 53 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__6070 = this->FMGL(c);
            x10_long i__6071 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__6083)) + (((x10_long)(rOffs)))));
            x10_long r__6072 = ((::x10aux::nullCheck(a__6070)->x10::lang::Rail< x10_long >::__apply(
                                   i__6071)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__6070)->x10::lang::Rail< x10_long >::__set(
              i__6071, r__6072);
        }
    }
    
}

//#line 57 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 58 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6188)));
    
    //#line 59 "SuffixArray.x10"
    this->constructSample();
    
    //#line 60 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6189)));
    
    //#line 61 "SuffixArray.x10"
    this->sortSample();
    
    //#line 62 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6190)));
    
    //#line 63 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 64 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 67 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 68 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 69 "SuffixArray.x10"
    x10_long i__4859max__6085 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__6086;
        for (i__6086 = ((x10_long)0ll); ((i__6086) <= (i__4859max__6085));
             i__6086 = ((i__6086) + (((x10_long)1ll)))) {
            
            //#line 70 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__6086), ((x10_long)0ll))))
            {
                
                //#line 71 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__6086)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 74 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 77 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
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
    
    //#line 82 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 83 "SuffixArray.x10"
    x10_long i__4875max__6088 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__6089;
        for (i__6089 = ((x10_long)0ll); ((i__6089) <= (i__4875max__6088));
             i__6089 = ((i__6089) + (((x10_long)1ll)))) {
            
            //#line 84 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__6089) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 85 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__6089);
                
                //#line 86 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 89 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
}

//#line 92 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 106 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 107 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 108 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 109 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6191)));
    
    //#line 110 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 111 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6192)));
    
    //#line 112 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 121 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 122 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 123 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 124 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 125 "SuffixArray.x10"
    x10_long i__4891max__6097 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__6098;
        for (i__6098 = ((x10_long)0ll); ((i__6098) <= (i__4891max__6097));
             i__6098 = ((i__6098) + (((x10_long)1ll)))) {
            
            //#line 126 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__6098)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__6098)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__6098)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 127 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 128 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__6098));
                
                //#line 129 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__6098)) + (((x10_long)1ll))));
                
                //#line 130 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__6098)) + (((x10_long)2ll))));
            }
            
            //#line 133 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__6098)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 134 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__6098)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 136 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__6098)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 139 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6193)));
    
    //#line 141 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 142 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                name);
        
        //#line 143 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 144 "SuffixArray.x10"
        x10_long i__4907max__6091 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6092;
            for (i__6092 = ((x10_long)0ll); ((i__6092) <= (i__4907max__6091));
                 i__6092 = ((i__6092) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__6092), ((i__6092) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 146 "SuffixArray.x10"
        x10_long i__4923max__6094 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6095;
            for (i__6095 = ((x10_long)0ll); ((i__6095) <= (i__4923max__6094));
                 i__6095 = ((i__6095) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__6095)) - (((x10_long)1ll))), i__6095);
            }
        }
        
    }
    
}

//#line 150 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 151 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (R0B)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 152 "SuffixArray.x10"
    x10_long i__4939max__6106 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__6107;
        for (i__6107 = ((x10_long)0ll); ((i__6107) <= (i__4939max__6106));
             i__6107 = ((i__6107) + (((x10_long)1ll)))) {
            
            //#line 153 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__6107)) < (this->FMGL(n0)))) {
                
                //#line 154 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__6107)))));
            }
            
        }
    }
    
    //#line 157 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = R0B->result();
    
    //#line 160 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
    
    //#line 161 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 162 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), SA0, size, num_threads,
                    ((x10_byte)0));
    
    //#line 170 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6194)));
    
    //#line 171 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 173 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 174 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 175 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 176 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 177 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 178 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 179 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 181 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__6053 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     i);
                x10_long a__6054 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__6055 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     j);
                x10_long b__6056 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__6053) < (b__6055)) || ((::x10aux::struct_equals(a__6053,
                                                                      b__6055)) &&
                ((a__6054) <= (b__6056))));
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
            
            //#line 184 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 185 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 186 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 187 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 188 "SuffixArray.x10"
                x10_long i__4955max__6100 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__6101;
                    for (i__6101 = ((x10_long)0ll); ((i__6101) <= (i__4955max__6100));
                         i__6101 = ((i__6101) + (((x10_long)1ll))))
                    {
                        
                        //#line 189 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 190 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 191 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 195 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 196 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 197 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 198 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 199 "SuffixArray.x10"
                x10_long i__4971max__6103 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__6104;
                    for (i__6104 = ((x10_long)0ll); ((i__6104) <= (i__4971max__6103));
                         i__6104 = ((i__6104) + (((x10_long)1ll))))
                    {
                        
                        //#line 200 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 201 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 202 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
    //#line 207 "SuffixArray.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(this->FMGL(string)));
    
    //#line 208 "SuffixArray.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(this->FMGL(SA)));
}

//#line 211 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 212 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 215 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 216 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 219 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 220 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 221 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 223 "SuffixArray.x10"
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
    this->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    buf.write(this->FMGL(c));
    
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
    FMGL(c) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType bwt::SuffixArray::rtt;
void bwt::SuffixArray::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArray_Strings::sl__6192("Ended 2st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__6191("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__6189("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__6193("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__6194("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__6190("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__6188("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
