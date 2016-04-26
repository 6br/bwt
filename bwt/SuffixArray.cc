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
    x10_long i__2918min__3116 = ((x10_long)0ll);
    x10_long i__2918max__3117 = this->FMGL(k);
    {
        x10_long i__3118;
        for (i__3118 = i__2918min__3116; ((i__3118) <= (i__2918max__3117));
             i__3118 = ((i__3118) + (((x10_long)1ll)))) {
            x10_long i__3119 = i__3118;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__3119, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__2934min__3120 = ((x10_long)0ll);
    x10_long i__2934max__3121 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__3122;
        for (i__3122 = i__2934min__3120; ((i__3122) <= (i__2934max__3121));
             i__3122 = ((i__3122) + (((x10_long)1ll)))) {
            x10_long i__3123 = i__3122;
            
            //#line 41 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__3109 = c;
            x10_long i__3110 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__3123)) + (((x10_long)(rOffs)))));
            x10_long r__3111 = ((::x10aux::nullCheck(a__3109)->x10::lang::Rail< x10_long >::__apply(
                                   i__3110)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__3109)->x10::lang::Rail< x10_long >::__set(
              i__3110, r__3111);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__2950min__3124 = ((x10_long)0ll);
    x10_long i__2950max__3125 = this->FMGL(k);
    {
        x10_long i__3126;
        for (i__3126 = i__2950min__3124; ((i__3126) <= (i__2950max__3125));
             i__3126 = ((i__3126) + (((x10_long)1ll)))) {
            x10_long i__3127 = i__3126;
            
            //#line 45 "SuffixArray.x10"
            x10_long t__3112 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__3127);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__3127, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__3112));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__2966min__3128 = ((x10_long)0ll);
    x10_long i__2966max__3129 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__3130;
        for (i__3130 = i__2966min__3128; ((i__3130) <= (i__2966max__3129));
             i__3130 = ((i__3130) + (((x10_long)1ll)))) {
            x10_long i__3131 = i__3130;
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__3131)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__3131));
            
            //#line 51 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__3113 = c;
            x10_long i__3114 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__3131)) + (((x10_long)(rOffs)))));
            x10_long r__3115 = ((::x10aux::nullCheck(a__3113)->x10::lang::Rail< x10_long >::__apply(
                                   i__3114)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__3113)->x10::lang::Rail< x10_long >::__set(
              i__3114, r__3115);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 69 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3184)));
    
    //#line 70 "SuffixArray.x10"
    this->constructSample();
    
    //#line 71 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3185)));
    
    //#line 72 "SuffixArray.x10"
    this->sortSample();
    
    //#line 73 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3186)));
    
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
    x10_long i__2982min__3132 = ((x10_long)0ll);
    x10_long i__2982max__3133 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__3134;
        for (i__3134 = i__2982min__3132; ((i__3134) <= (i__2982max__3133));
             i__3134 = ((i__3134) + (((x10_long)1ll)))) {
            x10_long i__3135 = i__3134;
            
            //#line 81 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__3135), ((x10_long)0ll))))
            {
                
                //#line 82 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__3135)) - (((x10_long)1ll))))));
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
    x10_long i__2998min__3136 = ((x10_long)0ll);
    x10_long i__2998max__3137 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__3138;
        for (i__3138 = i__2998min__3136; ((i__3138) <= (i__2998max__3137));
             i__3138 = ((i__3138) + (((x10_long)1ll)))) {
            x10_long i__3139 = i__3138;
            
            //#line 95 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__3139) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 96 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__3139);
                
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
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3187)));
    
    //#line 109 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 110 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3188)));
    
    //#line 111 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 112 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3189)));
    
    //#line 114 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 115 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 116 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 117 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 118 "SuffixArray.x10"
    x10_long i__3014min__3148 = ((x10_long)0ll);
    x10_long i__3014max__3149 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__3150;
        for (i__3150 = i__3014min__3148; ((i__3150) <= (i__3014max__3149));
             i__3150 = ((i__3150) + (((x10_long)1ll)))) {
            x10_long i__3151 = i__3150;
            
            //#line 119 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__3151)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__3151)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__3151)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 120 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 121 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__3151));
                
                //#line 122 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__3151)) + (((x10_long)1ll))));
                
                //#line 123 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__3151)) + (((x10_long)2ll))));
            }
            
            //#line 126 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__3151)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 127 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__3151)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 129 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__3151)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 132 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3190)));
    
    //#line 134 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 135 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 136 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 137 "SuffixArray.x10"
        x10_long i__3030min__3140 = ((x10_long)0ll);
        x10_long i__3030max__3141 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__3142;
            for (i__3142 = i__3030min__3140; ((i__3142) <= (i__3030max__3141));
                 i__3142 = ((i__3142) + (((x10_long)1ll))))
            {
                x10_long i__3143 = i__3142;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__3143), ((i__3143) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 139 "SuffixArray.x10"
        x10_long i__3046min__3144 = ((x10_long)0ll);
        x10_long i__3046max__3145 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__3146;
            for (i__3146 = i__3046min__3144; ((i__3146) <= (i__3046max__3145));
                 i__3146 = ((i__3146) + (((x10_long)1ll))))
            {
                x10_long i__3147 = i__3146;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__3147)) - (((x10_long)1ll))), i__3147);
            }
        }
        
    }
    
}

//#line 143 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 144 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 145 "SuffixArray.x10"
    x10_long i__3062min__3160 = ((x10_long)0ll);
    x10_long i__3062max__3161 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__3162;
        for (i__3162 = i__3062min__3160; ((i__3162) <= (i__3062max__3161));
             i__3162 = ((i__3162) + (((x10_long)1ll)))) {
            x10_long i__3163 = i__3162;
            
            //#line 146 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__3163)) < (this->FMGL(n0)))) {
                
                //#line 147 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__3163)))));
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
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__3191)));
    
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
                x10_long i__3078min__3152 = ((x10_long)0ll);
                x10_long i__3078max__3153 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__3154;
                    for (i__3154 = i__3078min__3152; ((i__3154) <= (i__3078max__3153));
                         i__3154 = ((i__3154) + (((x10_long)1ll))))
                    {
                        x10_long q__3155 = i__3154;
                        
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
                x10_long i__3094min__3156 = ((x10_long)0ll);
                x10_long i__3094max__3157 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__3158;
                    for (i__3158 = i__3094min__3156; ((i__3158) <= (i__3094max__3157));
                         i__3158 = ((i__3158) + (((x10_long)1ll))))
                    {
                        x10_long q__3159 = i__3158;
                        
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

::x10::lang::String bwt::SuffixArray_Strings::sl__3188("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__3187("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__3185("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__3190("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__3189("Ended 3rd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__3191("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__3186("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__3184("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
