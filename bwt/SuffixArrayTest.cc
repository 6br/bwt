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
    x10_long i__2160min__2303 = ((x10_long)0ll);
    x10_long i__2160max__2304 = n;
    {
        x10_long i__2305;
        for (i__2305 = i__2160min__2303; ((i__2305) <= (i__2160max__2304));
             i__2305 = ((i__2305) + (((x10_long)1ll)))) {
            x10_long i__2306 = i__2305;
            seen->x10::lang::Rail< x10_boolean >::__set(i__2306, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__2176min__2307 = ((x10_long)0ll);
    x10_long i__2176max__2308 = n;
    {
        x10_long i__2309;
        for (i__2309 = i__2176min__2307; ((i__2309) <= (i__2176max__2308));
             i__2309 = ((i__2309) + (((x10_long)1ll)))) {
            x10_long i__2310 = i__2309;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__2310),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__2192min__2311 = ((x10_long)0ll);
    x10_long i__2192max__2312 = n;
    {
        x10_long i__2313;
        for (i__2313 = i__2192min__2311; ((i__2313) <= (i__2192max__2312));
             i__2313 = ((i__2313) + (((x10_long)1ll)))) {
            x10_long i__2314 = i__2313;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__2314)))
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
    x10_long i__2208min__2315 = ((x10_long)0ll);
    x10_long i__2208max__2316 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__2317;
        for (i__2317 = i__2208min__2315; ((i__2317) <= (i__2208max__2316));
             i__2317 = ((i__2317) + (((x10_long)1ll)))) {
            x10_long i__2318 = i__2317;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__2318),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__2318) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__3107 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__3107->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__3107->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__3107->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__3107->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__3107->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__3107;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTest.x10"
    x10_long i__2224min__2335 = ((x10_long)0ll);
    x10_long i__2224max__2336 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2337;
        for (i__2337 = i__2224min__2335; ((i__2337) <= (i__2224max__2336));
             i__2337 = ((i__2337) + (((x10_long)1ll)))) {
            x10_long i__2338 = i__2337;
            
            //#line 32 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2338)));
        }
    }
    
    //#line 34 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTest.x10"
    x10_long i__2240min__2339 = ((x10_long)0ll);
    x10_long i__2240max__2340 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2341;
        for (i__2341 = i__2240min__2339; ((i__2341) <= (i__2240max__2340));
             i__2341 = ((i__2341) + (((x10_long)1ll)))) {
            x10_long i__2342 = i__2341;
            
            //#line 36 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2342)));
        }
    }
    
    //#line 39 "SuffixArrayTest.x10"
    x10_long nmax = ((x10_long)4ll);
    
    //#line 40 "SuffixArrayTest.x10"
    x10_long b = ((x10_long)4ll);
    
    //#line 41 "SuffixArrayTest.x10"
    x10_long i__2288min__2343 = ((x10_long)2ll);
    x10_long i__2288max__2344 = nmax;
    {
        x10_long i__2345;
        for (i__2345 = i__2288min__2343; ((i__2345) <= (i__2288max__2344));
             i__2345 = ((i__2345) + (((x10_long)1ll)))) {
            x10_long n__2346 = i__2345;
            
            //#line 42 "SuffixArrayTest.x10"
            x10_int N__2332 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    b,
                                                                    n__2346)) + (0.5)));
            
            //#line 43 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* s__2333 = ::x10::lang::Rail< x10_long >::_make(((n__2346) + (((x10_long)3ll))));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__2334 =
              ::x10::lang::Rail< x10_long >::_make(((n__2346) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTest.x10"
            x10_long i__2256min__2324 = ((x10_long)0ll);
            x10_long i__2256max__2325 = n__2346;
            {
                x10_long i__2326;
                for (i__2326 = i__2256min__2324; ((i__2326) <= (i__2256max__2325));
                     i__2326 = ((i__2326) + (((x10_long)1ll))))
                {
                    x10_long i__2327 = i__2326;
                    ::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__set(
                      i__2327, ((x10_long)1ll));
                    ::x10aux::nullCheck(sa_result__2334)->x10::lang::Rail< x10_long >::__set(
                      i__2327, ((x10_long)1ll));
                }
            }
            
            //#line 46 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__set(
              n__2346, ((x10_long)0ll));
            
            //#line 47 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__set(
              ((n__2346) + (((x10_long)1ll))), ((x10_long)0ll));
            
            //#line 48 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__set(
              ((n__2346) + (((x10_long)2ll))), ((x10_long)0ll));
            
            //#line 49 "SuffixArrayTest.x10"
            x10_long i__2272min__2328 = ((x10_long)0ll);
            x10_long i__2272max__2329 = ((((x10_long)(N__2332))) - (((x10_long)1ll)));
            {
                x10_long i__2330;
                for (i__2330 = i__2272min__2328; ((i__2330) <= (i__2272max__2329));
                     i__2330 = ((i__2330) + (((x10_long)1ll))))
                {
                    x10_long i__2331 = i__2330;
                    
                    //#line 50 "SuffixArrayTest.x10"
                    ::bwt::SuffixArray* aa__2322 = ::bwt::SuffixArray::_make(s__2333,
                                                                             b);
                    
                    //#line 51 "SuffixArrayTest.x10"
                    sa_result__2334 = aa__2322->run();
                    
                    //#line 52 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__2333));
                    
                    //#line 53 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__2334));
                    
                    //#line 54 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__2334)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__2346),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__2334)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__2346) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__2346),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__2346) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__2334,
                                                ((n__2346) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__2334,
                                                s__2333, ((n__2346) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 61 "SuffixArrayTest.x10"
                    x10_long k__2323 = ((x10_long)0ll);
                    
                    //#line 62 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__apply(
                                                      k__2323),
                                                    b))) {
                        
                        //#line 63 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__2333)->x10::lang::Rail< x10_long >::__set(
                          k__2323, ((x10_long)1ll));
                        
                        //#line 64 "SuffixArrayTest.x10"
                        k__2323 = ((k__2323) + (((x10_long)1ll)));
                    }
                    
                    //#line 66 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_long >* a__2319 =
                      s__2333;
                    x10_long i__2320 = k__2323;
                    x10_long r__2321 = ((::x10aux::nullCheck(a__2319)->x10::lang::Rail< x10_long >::__apply(
                                           i__2320)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(a__2319)->x10::lang::Rail< x10_long >::__set(
                      i__2320, r__2321);
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
