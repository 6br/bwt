/*************************************************/
/* START of SuffixArrayTest */
#include <bwt/SuffixArrayTest.h>

#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <bwt/SuffixArray.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::isPerm(::x10::lang::Rail< x10_long >* sa,
                                         x10_long n) {
    
    //#line 5 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_boolean >* seen = ::x10::lang::Rail< x10_boolean >::_make(((n) + (((x10_long)1ll))));
    
    //#line 6 "SuffixArrayTest.x10"
    x10_long i__2059min__2186 = ((x10_long)0ll);
    x10_long i__2059max__2187 = n;
    {
        x10_long i__2188;
        for (i__2188 = i__2059min__2186; ((i__2188) <= (i__2059max__2187));
             i__2188 = ((i__2188) + (((x10_long)1ll)))) {
            x10_long i__2189 = i__2188;
            seen->x10::lang::Rail< x10_boolean >::__set(i__2189, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__2075min__2190 = ((x10_long)0ll);
    x10_long i__2075max__2191 = n;
    {
        x10_long i__2192;
        for (i__2192 = i__2075min__2190; ((i__2192) <= (i__2075max__2191));
             i__2192 = ((i__2192) + (((x10_long)1ll)))) {
            x10_long i__2193 = i__2192;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__2193),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__2091min__2194 = ((x10_long)0ll);
    x10_long i__2091max__2195 = n;
    {
        x10_long i__2196;
        for (i__2196 = i__2091min__2194; ((i__2196) <= (i__2091max__2195));
             i__2196 = ((i__2196) + (((x10_long)1ll)))) {
            x10_long i__2197 = i__2196;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__2197)))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 9 "SuffixArrayTest.x10"
    return true;
    
}

//#line 12 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::sleq(::x10::lang::Rail< x10_long >* s1,
                                       ::x10::lang::Rail< x10_long >* s2,
                                       x10_long c1, x10_long c2) {
    
    //#line 13 "SuffixArrayTest.x10"
    if (((c2) >= ((x10_long)(::x10aux::nullCheck(s2)->FMGL(size)))))
    {
        return false;
        
    }
    
    //#line 14 "SuffixArrayTest.x10"
    if (((c1) >= ((x10_long)(::x10aux::nullCheck(s1)->FMGL(size)))))
    {
        return true;
        
    }
    
    //#line 15 "SuffixArrayTest.x10"
    if (((::x10aux::nullCheck(s1)->x10::lang::Rail< x10_long >::__apply(
            c1)) > (::x10aux::nullCheck(s2)->x10::lang::Rail< x10_long >::__apply(
                      c2)))) {
        return false;
        
    }
    
    //#line 16 "SuffixArrayTest.x10"
    if (((::x10aux::nullCheck(s1)->x10::lang::Rail< x10_long >::__apply(
            c1)) < (::x10aux::nullCheck(s2)->x10::lang::Rail< x10_long >::__apply(
                      c2)))) {
        return true;
        
    }
    
    //#line 17 "SuffixArrayTest.x10"
    return ::bwt::SuffixArrayTest::sleq(s1, s2, ((c1) + (((x10_long)1ll))),
                                        ((c2) + (((x10_long)1ll))));
    
}

//#line 20 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::isSorted(::x10::lang::Rail< x10_long >* sa,
                                           ::x10::lang::Rail< x10_long >* s,
                                           x10_long n) {
    
    //#line 21 "SuffixArrayTest.x10"
    x10_long i__2107min__2198 = ((x10_long)0ll);
    x10_long i__2107max__2199 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__2200;
        for (i__2200 = i__2107min__2198; ((i__2200) <= (i__2107max__2199));
             i__2200 = ((i__2200) + (((x10_long)1ll)))) {
            x10_long i__2201 = i__2200;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__2201),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__2201) + (((x10_long)1ll)))))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 24 "SuffixArrayTest.x10"
    return true;
    
}

//#line 27 "SuffixArrayTest.x10"
void bwt::SuffixArrayTest::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 29 "SuffixArrayTest.x10"
    ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make((__extension__ ({
                                                            ::x10::lang::Rail< x10_long >* t__2952 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__2952->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__2952->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__2952->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__2952->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__2952->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__2952;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTest.x10"
    x10_long i__2123min__2218 = ((x10_long)0ll);
    x10_long i__2123max__2219 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2220;
        for (i__2220 = i__2123min__2218; ((i__2220) <= (i__2123max__2219));
             i__2220 = ((i__2220) + (((x10_long)1ll)))) {
            x10_long i__2221 = i__2220;
            
            //#line 32 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2221)));
        }
    }
    
    //#line 35 "SuffixArrayTest.x10"
    x10_long nmax = ((x10_long)10ll);
    
    //#line 36 "SuffixArrayTest.x10"
    x10_long b = ((x10_long)4ll);
    
    //#line 37 "SuffixArrayTest.x10"
    x10_long i__2171min__2222 = ((x10_long)2ll);
    x10_long i__2171max__2223 = nmax;
    {
        x10_long i__2224;
        for (i__2224 = i__2171min__2222; ((i__2224) <= (i__2171max__2223));
             i__2224 = ((i__2224) + (((x10_long)1ll)))) {
            x10_long n__2225 = i__2224;
            
            //#line 38 "SuffixArrayTest.x10"
            x10_int N__2215 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    b,
                                                                    n__2225)) + (0.5)));
            
            //#line 39 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* s__2216 = ::x10::lang::Rail< x10_long >::_make(((n__2225) + (((x10_long)3ll))));
            
            //#line 40 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__2217 =
              ::x10::lang::Rail< x10_long >::_make(((n__2225) + (((x10_long)3ll))));
            
            //#line 41 "SuffixArrayTest.x10"
            x10_long i__2139min__2207 = ((x10_long)0ll);
            x10_long i__2139max__2208 = n__2225;
            {
                x10_long i__2209;
                for (i__2209 = i__2139min__2207; ((i__2209) <= (i__2139max__2208));
                     i__2209 = ((i__2209) + (((x10_long)1ll))))
                {
                    x10_long i__2210 = i__2209;
                    ::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__set(
                      i__2210, ((x10_long)1ll));
                    ::x10aux::nullCheck(sa_result__2217)->x10::lang::Rail< x10_long >::__set(
                      i__2210, ((x10_long)1ll));
                }
            }
            
            //#line 42 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__set(
              n__2225, ((x10_long)0ll));
            
            //#line 43 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__set(
              ((n__2225) + (((x10_long)1ll))), ((x10_long)0ll));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__set(
              ((n__2225) + (((x10_long)2ll))), ((x10_long)0ll));
            
            //#line 45 "SuffixArrayTest.x10"
            x10_long i__2155min__2211 = ((x10_long)0ll);
            x10_long i__2155max__2212 = ((((x10_long)(N__2215))) - (((x10_long)1ll)));
            {
                x10_long i__2213;
                for (i__2213 = i__2155min__2211; ((i__2213) <= (i__2155max__2212));
                     i__2213 = ((i__2213) + (((x10_long)1ll))))
                {
                    x10_long i__2214 = i__2213;
                    
                    //#line 46 "SuffixArrayTest.x10"
                    ::bwt::SuffixArray* aa__2205 = ::bwt::SuffixArray::_make(s__2216,
                                                                             b);
                    
                    //#line 47 "SuffixArrayTest.x10"
                    sa_result__2217 = aa__2205->run();
                    
                    //#line 48 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__2216));
                    
                    //#line 49 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__2217));
                    
                    //#line 50 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__2217)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__2225),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 51 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__2217)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__2225) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 52 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__2225),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 53 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__2225) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 54 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__2217,
                                                ((n__2225) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__2217,
                                                s__2216, ((n__2225) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    x10_long k__2206 = ((x10_long)0ll);
                    
                    //#line 58 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__apply(
                                                      k__2206),
                                                    b))) {
                        
                        //#line 59 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__2216)->x10::lang::Rail< x10_long >::__set(
                          k__2206, ((x10_long)1ll));
                        
                        //#line 60 "SuffixArrayTest.x10"
                        k__2206 = ((k__2206) + (((x10_long)1ll)));
                    }
                    
                    //#line 62 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_long >* a__2202 =
                      s__2216;
                    x10_long i__2203 = k__2206;
                    x10_long r__2204 = ((::x10aux::nullCheck(a__2202)->x10::lang::Rail< x10_long >::__apply(
                                           i__2203)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(a__2202)->x10::lang::Rail< x10_long >::__set(
                      i__2203, r__2204);
                }
            }
            
        }
    }
    
}

//#line 3 "SuffixArrayTest.x10"
::bwt::SuffixArrayTest* bwt::SuffixArrayTest::bwt__SuffixArrayTest____this__bwt__SuffixArrayTest(
  ) {
    return this;
    
}
void bwt::SuffixArrayTest::_constructor() {
    this->bwt::SuffixArrayTest::__fieldInitializers_bwt_SuffixArrayTest();
}
::bwt::SuffixArrayTest* bwt::SuffixArrayTest::_make() {
    ::bwt::SuffixArrayTest* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayTest>()) ::bwt::SuffixArrayTest();
    this_->_constructor();
    return this_;
}


void bwt::SuffixArrayTest::__fieldInitializers_bwt_SuffixArrayTest(
  ) {
 
}
const ::x10aux::serialization_id_t bwt::SuffixArrayTest::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArrayTest::_deserializer);

void bwt::SuffixArrayTest::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::bwt::SuffixArrayTest::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArrayTest* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayTest>()) ::bwt::SuffixArrayTest();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArrayTest::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType bwt::SuffixArrayTest::rtt;
void bwt::SuffixArrayTest::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayTest",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SuffixArrayTest */
/*************************************************/
