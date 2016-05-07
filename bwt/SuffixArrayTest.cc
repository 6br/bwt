/*************************************************/
/* START of SuffixArrayTest */
#include <bwt/SuffixArrayTest.h>

#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <bwt/SuffixArray.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::isPerm(::x10::lang::Rail< x10_long >* sa,
                                         x10_long n) {
    
    //#line 5 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_boolean >* seen = ::x10::lang::Rail< x10_boolean >::_make(((n) + (((x10_long)1ll))));
    
    //#line 6 "SuffixArrayTest.x10"
    x10_long i__4136min__4247 = ((x10_long)0ll);
    x10_long i__4136max__4248 = n;
    {
        x10_long i__4249;
        for (i__4249 = i__4136min__4247; ((i__4249) <= (i__4136max__4248));
             i__4249 = ((i__4249) + (((x10_long)1ll)))) {
            x10_long i__4250 = i__4249;
            seen->x10::lang::Rail< x10_boolean >::__set(i__4250, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__4152min__4251 = ((x10_long)0ll);
    x10_long i__4152max__4252 = n;
    {
        x10_long i__4253;
        for (i__4253 = i__4152min__4251; ((i__4253) <= (i__4152max__4252));
             i__4253 = ((i__4253) + (((x10_long)1ll)))) {
            x10_long i__4254 = i__4253;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__4254),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__4168min__4255 = ((x10_long)0ll);
    x10_long i__4168max__4256 = n;
    {
        x10_long i__4257;
        for (i__4257 = i__4168min__4255; ((i__4257) <= (i__4168max__4256));
             i__4257 = ((i__4257) + (((x10_long)1ll)))) {
            x10_long i__4258 = i__4257;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__4258)))
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
    x10_long i__4184min__4259 = ((x10_long)0ll);
    x10_long i__4184max__4260 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__4261;
        for (i__4261 = i__4184min__4259; ((i__4261) <= (i__4184max__4260));
             i__4261 = ((i__4261) + (((x10_long)1ll)))) {
            x10_long i__4262 = i__4261;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__4262),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__4262) + (((x10_long)1ll)))))))
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
    
    //#line 39 "SuffixArrayTest.x10"
    x10_long nmax = ((x10_long)7ll);
    
    //#line 40 "SuffixArrayTest.x10"
    x10_long b = ((x10_long)4ll);
    
    //#line 41 "SuffixArrayTest.x10"
    x10_long i__4232min__4279 = ((x10_long)2ll);
    x10_long i__4232max__4280 = nmax;
    {
        x10_long i__4281;
        for (i__4281 = i__4232min__4279; ((i__4281) <= (i__4232max__4280));
             i__4281 = ((i__4281) + (((x10_long)1ll)))) {
            x10_long n__4282 = i__4281;
            
            //#line 42 "SuffixArrayTest.x10"
            x10_int N__4276 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    b,
                                                                    n__4282)) + (0.5)));
            
            //#line 43 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* s__4277 = ::x10::lang::Rail< x10_long >::_make(((n__4282) + (((x10_long)3ll))));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__4278 =
              ::x10::lang::Rail< x10_long >::_make(((n__4282) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTest.x10"
            x10_long i__4200min__4268 = ((x10_long)0ll);
            x10_long i__4200max__4269 = n__4282;
            {
                x10_long i__4270;
                for (i__4270 = i__4200min__4268; ((i__4270) <= (i__4200max__4269));
                     i__4270 = ((i__4270) + (((x10_long)1ll))))
                {
                    x10_long i__4271 = i__4270;
                    ::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__set(
                      i__4271, ((x10_long)1ll));
                }
            }
            
            //#line 46 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__set(
              n__4282, ((x10_long)0ll));
            
            //#line 47 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__set(
              ((n__4282) + (((x10_long)1ll))), ((x10_long)0ll));
            
            //#line 48 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__set(
              ((n__4282) + (((x10_long)2ll))), ((x10_long)0ll));
            
            //#line 49 "SuffixArrayTest.x10"
            x10_long i__4216min__4272 = ((x10_long)0ll);
            x10_long i__4216max__4273 = ((((x10_long)(N__4276))) - (((x10_long)1ll)));
            {
                x10_long i__4274;
                for (i__4274 = i__4216min__4272; ((i__4274) <= (i__4216max__4273));
                     i__4274 = ((i__4274) + (((x10_long)1ll))))
                {
                    x10_long i__4275 = i__4274;
                    
                    //#line 50 "SuffixArrayTest.x10"
                    ::bwt::SuffixArray* sa__4266 = ::bwt::SuffixArray::_make(s__4277,
                                                                             b,
                                                                             sa_result__4278,
                                                                             ((x10_byte)11));
                    
                    //#line 51 "SuffixArrayTest.x10"
                    sa__4266->run();
                    
                    //#line 52 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__4277));
                    
                    //#line 53 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__4278));
                    
                    //#line 54 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4278)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4282),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4278)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4282) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4282),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4282) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__4278,
                                                ((n__4282) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__4278,
                                                s__4277, ((n__4282) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 61 "SuffixArrayTest.x10"
                    x10_long k__4267 = ((x10_long)0ll);
                    
                    //#line 62 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__apply(
                                                      k__4267),
                                                    b))) {
                        
                        //#line 63 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__4277)->x10::lang::Rail< x10_long >::__set(
                          k__4267, ((x10_long)1ll));
                        
                        //#line 64 "SuffixArrayTest.x10"
                        k__4267 = ((k__4267) + (((x10_long)1ll)));
                    }
                    
                    //#line 66 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_long >* a__4263 =
                      s__4277;
                    x10_long i__4264 = k__4267;
                    x10_long r__4265 = ((::x10aux::nullCheck(a__4263)->x10::lang::Rail< x10_long >::__apply(
                                           i__4264)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(a__4263)->x10::lang::Rail< x10_long >::__set(
                      i__4264, r__4265);
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
