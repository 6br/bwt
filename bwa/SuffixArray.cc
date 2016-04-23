/*************************************************/
/* START of SuffixArray */
#include <bwa/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/String.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
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
void bwa::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize) {
    
    //#line 5 "SuffixArray.x10"
    this->bwa::SuffixArray::__fieldInitializers_bwa_SuffixArray();
    
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
::bwa::SuffixArray* bwa::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwa::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwa::SuffixArray>()) ::bwa::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 28 "SuffixArray.x10"
void bwa::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 29 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 30 "SuffixArray.x10"
    x10_long i__1984min__2182 = ((x10_long)0ll);
    x10_long i__1984max__2183 = this->FMGL(k);
    {
        x10_long i__2184;
        for (i__2184 = i__1984min__2182; ((i__2184) <= (i__1984max__2183));
             i__2184 = ((i__2184) + (((x10_long)1ll)))) {
            x10_long i__2185 = i__2184;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__2185, ((x10_long)0ll));
        }
    }
    
    //#line 31 "SuffixArray.x10"
    x10_long i__2000min__2186 = ((x10_long)0ll);
    x10_long i__2000max__2187 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__2188;
        for (i__2188 = i__2000min__2186; ((i__2188) <= (i__2000max__2187));
             i__2188 = ((i__2188) + (((x10_long)1ll)))) {
            x10_long i__2189 = i__2188;
            
            //#line 32 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__2175 = c;
            x10_long i__2176 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__2189)) + (((x10_long)(rOffs)))));
            x10_long r__2177 = ((::x10aux::nullCheck(a__2175)->x10::lang::Rail< x10_long >::__apply(
                                   i__2176)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__2175)->x10::lang::Rail< x10_long >::__set(
              i__2176, r__2177);
        }
    }
    
    //#line 34 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 35 "SuffixArray.x10"
    x10_long i__2016min__2190 = ((x10_long)0ll);
    x10_long i__2016max__2191 = this->FMGL(k);
    {
        x10_long i__2192;
        for (i__2192 = i__2016min__2190; ((i__2192) <= (i__2016max__2191));
             i__2192 = ((i__2192) + (((x10_long)1ll)))) {
            x10_long i__2193 = i__2192;
            
            //#line 36 "SuffixArray.x10"
            x10_long t__2178 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__2193);
            
            //#line 37 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__2193, sum);
            
            //#line 38 "SuffixArray.x10"
            sum = ((sum) + (t__2178));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__2032min__2194 = ((x10_long)0ll);
    x10_long i__2032max__2195 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__2196;
        for (i__2196 = i__2032min__2194; ((i__2196) <= (i__2032max__2195));
             i__2196 = ((i__2196) + (((x10_long)1ll)))) {
            x10_long i__2197 = i__2196;
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__2197)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__2197));
            ::x10::lang::Rail< x10_long >* a__2179 = c;
            x10_long i__2180 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__2197)) + (((x10_long)(rOffs)))));
            x10_long r__2181 = ((::x10aux::nullCheck(a__2179)->x10::lang::Rail< x10_long >::__apply(
                                   i__2180)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__2179)->x10::lang::Rail< x10_long >::__set(
              i__2180, r__2181);
        }
    }
    
}

//#line 43 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwa::SuffixArray::run() {
    
    //#line 44 "SuffixArray.x10"
    this->constructSample();
    
    //#line 45 "SuffixArray.x10"
    this->sortSample();
    
    //#line 46 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 47 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 50 "SuffixArray.x10"
void bwa::SuffixArray::constructSample() {
    
    //#line 51 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 52 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 53 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 54 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 55 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 56 "SuffixArray.x10"
    x10_long i__2048min__2198 = ((x10_long)0ll);
    x10_long i__2048max__2199 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__2200;
        for (i__2200 = i__2048min__2198; ((i__2200) <= (i__2048max__2199));
             i__2200 = ((i__2200) + (((x10_long)1ll)))) {
            x10_long i__2201 = i__2200;
            
            //#line 57 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__2201) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 58 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__2201);
                
                //#line 59 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 62 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 63 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 64 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 65 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 68 "SuffixArray.x10"
void bwa::SuffixArray::sortSample() {
    
    //#line 69 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 70 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 71 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 73 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 74 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 75 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 76 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 77 "SuffixArray.x10"
    x10_long i__2064min__2210 = ((x10_long)0ll);
    x10_long i__2064max__2211 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__2212;
        for (i__2212 = i__2064min__2210; ((i__2212) <= (i__2064max__2211));
             i__2212 = ((i__2212) + (((x10_long)1ll)))) {
            x10_long i__2213 = i__2212;
            
            //#line 78 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__2213)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__2213)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__2213)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 79 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 80 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__2213));
                
                //#line 81 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__2213)) + (((x10_long)1ll))));
                
                //#line 82 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__2213)) + (((x10_long)2ll))));
            }
            
            //#line 84 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__2213)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 85 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__2213)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 87 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__2213)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 91 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 92 "SuffixArray.x10"
        ::bwa::SuffixArray* bwa = ::bwa::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 93 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 94 "SuffixArray.x10"
        x10_long i__2080min__2202 = ((x10_long)0ll);
        x10_long i__2080max__2203 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__2204;
            for (i__2204 = i__2080min__2202; ((i__2204) <= (i__2080max__2203));
                 i__2204 = ((i__2204) + (((x10_long)1ll))))
            {
                x10_long i__2205 = i__2204;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__2205), ((i__2205) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 96 "SuffixArray.x10"
        x10_long i__2096min__2206 = ((x10_long)0ll);
        x10_long i__2096max__2207 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__2208;
            for (i__2208 = i__2096min__2206; ((i__2208) <= (i__2096max__2207));
                 i__2208 = ((i__2208) + (((x10_long)1ll))))
            {
                x10_long i__2209 = i__2208;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__2209)) - (((x10_long)1ll))), i__2209);
            }
        }
        
    }
    
}

//#line 100 "SuffixArray.x10"
void bwa::SuffixArray::sortNonSample() {
    
    //#line 101 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 102 "SuffixArray.x10"
    x10_long i__2112min__2222 = ((x10_long)0ll);
    x10_long i__2112max__2223 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__2224;
        for (i__2224 = i__2112min__2222; ((i__2224) <= (i__2112max__2223));
             i__2224 = ((i__2224) + (((x10_long)1ll)))) {
            x10_long i__2225 = i__2224;
            
            //#line 103 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__2225)) < (this->FMGL(n0)))) {
                
                //#line 104 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__2225)))));
            }
            
        }
    }
    
    //#line 107 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 108 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 109 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 110 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 113 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 114 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 115 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 116 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 117 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 118 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 119 "SuffixArray.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 120 "SuffixArray.x10"
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
            
            //#line 123 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 124 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 125 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 126 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 127 "SuffixArray.x10"
                x10_long i__2128min__2214 = ((x10_long)0ll);
                x10_long i__2128max__2215 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__2216;
                    for (i__2216 = i__2128min__2214; ((i__2216) <= (i__2128max__2215));
                         i__2216 = ((i__2216) + (((x10_long)1ll))))
                    {
                        x10_long q__2217 = i__2216;
                        
                        //#line 128 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 129 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 130 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 134 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 135 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 136 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 137 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 138 "SuffixArray.x10"
                x10_long i__2144min__2218 = ((x10_long)0ll);
                x10_long i__2144max__2219 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__2220;
                    for (i__2220 = i__2144min__2218; ((i__2220) <= (i__2144max__2219));
                         i__2220 = ((i__2220) + (((x10_long)1ll))))
                    {
                        x10_long q__2221 = i__2220;
                        
                        //#line 139 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 140 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 141 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 148 "SuffixArray.x10"
x10_boolean bwa::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 149 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 152 "SuffixArray.x10"
x10_boolean bwa::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 153 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 156 "SuffixArray.x10"
x10_long bwa::SuffixArray::getI(x10_long t) {
    
    //#line 157 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 158 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 160 "SuffixArray.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 164 "SuffixArray.x10"
void bwa::SuffixArray::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 165 "SuffixArray.x10"
    ::bwa::SuffixArray* bwa = ::bwa::SuffixArray::_make((__extension__ ({
                                                            ::x10::lang::Rail< x10_long >* t__2231 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)19ll), false);
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)5ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)6ll),
                                                              ((x10_long)2ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)7ll),
                                                              ((x10_long)3ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)8ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)9ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)10ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)11ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)12ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)13ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)14ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)15ll),
                                                              ((x10_long)0ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)16ll),
                                                              ((x10_long)0ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)17ll),
                                                              ((x10_long)0ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)18ll),
                                                              ((x10_long)0ll));
                                                            t__2231;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 166 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 167 "SuffixArray.x10"
    x10_long i__2160min__2226 = ((x10_long)0ll);
    x10_long i__2160max__2227 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2228;
        for (i__2228 = i__2160min__2226; ((i__2228) <= (i__2160max__2227));
             i__2228 = ((i__2228) + (((x10_long)1ll)))) {
            x10_long i__2229 = i__2228;
            
            //#line 168 "SuffixArray.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2229)));
        }
    }
    
}

//#line 5 "SuffixArray.x10"
::bwa::SuffixArray* bwa::SuffixArray::bwa__SuffixArray____this__bwa__SuffixArray(
  ) {
    return this;
    
}
void bwa::SuffixArray::__fieldInitializers_bwa_SuffixArray(
  ) {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwa::SuffixArray::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwa::SuffixArray::_deserializer);

void bwa::SuffixArray::_serialize_body(::x10aux::serialization_buffer& buf) {
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

::x10::lang::Reference* ::bwa::SuffixArray::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwa::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwa::SuffixArray>()) ::bwa::SuffixArray();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwa::SuffixArray::_deserialize_body(::x10aux::deserialization_buffer& buf) {
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

::x10aux::RuntimeType bwa::SuffixArray::rtt;
void bwa::SuffixArray::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwa.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SuffixArray */
/*************************************************/
