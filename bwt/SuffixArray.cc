/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>

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
    x10_long i__2860min__3058 = ((x10_long)0ll);
    x10_long i__2860max__3059 = this->FMGL(k);
    {
        x10_long i__3060;
        for (i__3060 = i__2860min__3058; ((i__3060) <= (i__2860max__3059));
             i__3060 = ((i__3060) + (((x10_long)1ll)))) {
            x10_long i__3061 = i__3060;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__3061, ((x10_long)0ll));
        }
    }
    
    //#line 31 "SuffixArray.x10"
    x10_long i__2876min__3062 = ((x10_long)0ll);
    x10_long i__2876max__3063 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__3064;
        for (i__3064 = i__2876min__3062; ((i__3064) <= (i__2876max__3063));
             i__3064 = ((i__3064) + (((x10_long)1ll)))) {
            x10_long i__3065 = i__3064;
            
            //#line 32 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__3051 = c;
            x10_long i__3052 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__3065)) + (((x10_long)(rOffs)))));
            x10_long r__3053 = ((::x10aux::nullCheck(a__3051)->x10::lang::Rail< x10_long >::__apply(
                                   i__3052)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__3051)->x10::lang::Rail< x10_long >::__set(
              i__3052, r__3053);
        }
    }
    
    //#line 34 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 35 "SuffixArray.x10"
    x10_long i__2892min__3066 = ((x10_long)0ll);
    x10_long i__2892max__3067 = this->FMGL(k);
    {
        x10_long i__3068;
        for (i__3068 = i__2892min__3066; ((i__3068) <= (i__2892max__3067));
             i__3068 = ((i__3068) + (((x10_long)1ll)))) {
            x10_long i__3069 = i__3068;
            
            //#line 36 "SuffixArray.x10"
            x10_long t__3054 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__3069);
            
            //#line 37 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__3069, sum);
            
            //#line 38 "SuffixArray.x10"
            sum = ((sum) + (t__3054));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__2908min__3070 = ((x10_long)0ll);
    x10_long i__2908max__3071 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__3072;
        for (i__3072 = i__2908min__3070; ((i__3072) <= (i__2908max__3071));
             i__3072 = ((i__3072) + (((x10_long)1ll)))) {
            x10_long i__3073 = i__3072;
            
            //#line 41 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__3073)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__3073));
            
            //#line 42 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__3055 = c;
            x10_long i__3056 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__3073)) + (((x10_long)(rOffs)))));
            x10_long r__3057 = ((::x10aux::nullCheck(a__3055)->x10::lang::Rail< x10_long >::__apply(
                                   i__3056)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__3055)->x10::lang::Rail< x10_long >::__set(
              i__3056, r__3057);
        }
    }
    
}

//#line 46 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 47 "SuffixArray.x10"
    this->constructSample();
    
    //#line 48 "SuffixArray.x10"
    this->sortSample();
    
    //#line 49 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 50 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 53 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 54 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 55 "SuffixArray.x10"
    x10_long i__2924min__3074 = ((x10_long)0ll);
    x10_long i__2924max__3075 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__3076;
        for (i__3076 = i__2924min__3074; ((i__3076) <= (i__2924max__3075));
             i__3076 = ((i__3076) + (((x10_long)1ll)))) {
            x10_long i__3077 = i__3076;
            
            //#line 56 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__3077), ((x10_long)0ll))))
            {
                
                //#line 57 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__3077)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 60 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 63 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 64 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 65 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 66 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 67 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 68 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 69 "SuffixArray.x10"
    x10_long i__2940min__3078 = ((x10_long)0ll);
    x10_long i__2940max__3079 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__3080;
        for (i__3080 = i__2940min__3078; ((i__3080) <= (i__2940max__3079));
             i__3080 = ((i__3080) + (((x10_long)1ll)))) {
            x10_long i__3081 = i__3080;
            
            //#line 70 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__3081) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 71 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__3081);
                
                //#line 72 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 75 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 76 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 77 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 78 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 81 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 82 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 83 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 84 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 86 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 87 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 88 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 89 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 90 "SuffixArray.x10"
    x10_long i__2956min__3090 = ((x10_long)0ll);
    x10_long i__2956max__3091 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__3092;
        for (i__3092 = i__2956min__3090; ((i__3092) <= (i__2956max__3091));
             i__3092 = ((i__3092) + (((x10_long)1ll)))) {
            x10_long i__3093 = i__3092;
            
            //#line 91 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__3093)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__3093)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__3093)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 92 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 93 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__3093));
                
                //#line 94 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__3093)) + (((x10_long)1ll))));
                
                //#line 95 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__3093)) + (((x10_long)2ll))));
            }
            
            //#line 98 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__3093)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 99 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__3093)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 101 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__3093)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 105 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 106 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 107 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 108 "SuffixArray.x10"
        x10_long i__2972min__3082 = ((x10_long)0ll);
        x10_long i__2972max__3083 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__3084;
            for (i__3084 = i__2972min__3082; ((i__3084) <= (i__2972max__3083));
                 i__3084 = ((i__3084) + (((x10_long)1ll))))
            {
                x10_long i__3085 = i__3084;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__3085), ((i__3085) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 110 "SuffixArray.x10"
        x10_long i__2988min__3086 = ((x10_long)0ll);
        x10_long i__2988max__3087 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__3088;
            for (i__3088 = i__2988min__3086; ((i__3088) <= (i__2988max__3087));
                 i__3088 = ((i__3088) + (((x10_long)1ll))))
            {
                x10_long i__3089 = i__3088;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__3089)) - (((x10_long)1ll))), i__3089);
            }
        }
        
    }
    
}

//#line 114 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 115 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 116 "SuffixArray.x10"
    x10_long i__3004min__3102 = ((x10_long)0ll);
    x10_long i__3004max__3103 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__3104;
        for (i__3104 = i__3004min__3102; ((i__3104) <= (i__3004max__3103));
             i__3104 = ((i__3104) + (((x10_long)1ll)))) {
            x10_long i__3105 = i__3104;
            
            //#line 117 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__3105)) < (this->FMGL(n0)))) {
                
                //#line 118 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__3105)))));
            }
            
        }
    }
    
    //#line 121 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 122 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 123 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 124 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 127 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 128 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 129 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 130 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 131 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 132 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 133 "SuffixArray.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 135 "SuffixArray.x10"
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
            
            //#line 138 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 139 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 140 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 141 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 142 "SuffixArray.x10"
                x10_long i__3020min__3094 = ((x10_long)0ll);
                x10_long i__3020max__3095 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__3096;
                    for (i__3096 = i__3020min__3094; ((i__3096) <= (i__3020max__3095));
                         i__3096 = ((i__3096) + (((x10_long)1ll))))
                    {
                        x10_long q__3097 = i__3096;
                        
                        //#line 143 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 144 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 145 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 149 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 150 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 151 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 152 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 153 "SuffixArray.x10"
                x10_long i__3036min__3098 = ((x10_long)0ll);
                x10_long i__3036max__3099 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__3100;
                    for (i__3100 = i__3036min__3098; ((i__3100) <= (i__3036max__3099));
                         i__3100 = ((i__3100) + (((x10_long)1ll))))
                    {
                        x10_long q__3101 = i__3100;
                        
                        //#line 154 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 155 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 156 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 163 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 164 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 167 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 168 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 171 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 172 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 173 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 175 "SuffixArray.x10"
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

/* END of SuffixArray */
/*************************************************/
