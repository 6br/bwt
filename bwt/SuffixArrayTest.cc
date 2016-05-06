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
    x10_long i__4082min__4193 = ((x10_long)0ll);
    x10_long i__4082max__4194 = n;
    {
        x10_long i__4195;
        for (i__4195 = i__4082min__4193; ((i__4195) <= (i__4082max__4194));
             i__4195 = ((i__4195) + (((x10_long)1ll)))) {
            x10_long i__4196 = i__4195;
            seen->x10::lang::Rail< x10_boolean >::__set(i__4196, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__4098min__4197 = ((x10_long)0ll);
    x10_long i__4098max__4198 = n;
    {
        x10_long i__4199;
        for (i__4199 = i__4098min__4197; ((i__4199) <= (i__4098max__4198));
             i__4199 = ((i__4199) + (((x10_long)1ll)))) {
            x10_long i__4200 = i__4199;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__4200),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__4114min__4201 = ((x10_long)0ll);
    x10_long i__4114max__4202 = n;
    {
        x10_long i__4203;
        for (i__4203 = i__4114min__4201; ((i__4203) <= (i__4114max__4202));
             i__4203 = ((i__4203) + (((x10_long)1ll)))) {
            x10_long i__4204 = i__4203;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__4204)))
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
    x10_long i__4130min__4205 = ((x10_long)0ll);
    x10_long i__4130max__4206 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__4207;
        for (i__4207 = i__4130min__4205; ((i__4207) <= (i__4130max__4206));
             i__4207 = ((i__4207) + (((x10_long)1ll)))) {
            x10_long i__4208 = i__4207;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__4208),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__4208) + (((x10_long)1ll)))))))
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
    x10_long i__4178min__4225 = ((x10_long)2ll);
    x10_long i__4178max__4226 = nmax;
    {
        x10_long i__4227;
        for (i__4227 = i__4178min__4225; ((i__4227) <= (i__4178max__4226));
             i__4227 = ((i__4227) + (((x10_long)1ll)))) {
            x10_long n__4228 = i__4227;
            
            //#line 42 "SuffixArrayTest.x10"
            x10_int N__4222 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    b,
                                                                    n__4228)) + (0.5)));
            
            //#line 43 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* s__4223 = ::x10::lang::Rail< x10_long >::_make(((n__4228) + (((x10_long)3ll))));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__4224 =
              ::x10::lang::Rail< x10_long >::_make(((n__4228) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTest.x10"
            x10_long i__4146min__4214 = ((x10_long)0ll);
            x10_long i__4146max__4215 = n__4228;
            {
                x10_long i__4216;
                for (i__4216 = i__4146min__4214; ((i__4216) <= (i__4146max__4215));
                     i__4216 = ((i__4216) + (((x10_long)1ll))))
                {
                    x10_long i__4217 = i__4216;
                    ::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__set(
                      i__4217, ((x10_long)1ll));
                }
            }
            
            //#line 46 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__set(
              n__4228, ((x10_long)0ll));
            
            //#line 47 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__set(
              ((n__4228) + (((x10_long)1ll))), ((x10_long)0ll));
            
            //#line 48 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__set(
              ((n__4228) + (((x10_long)2ll))), ((x10_long)0ll));
            
            //#line 49 "SuffixArrayTest.x10"
            x10_long i__4162min__4218 = ((x10_long)0ll);
            x10_long i__4162max__4219 = ((((x10_long)(N__4222))) - (((x10_long)1ll)));
            {
                x10_long i__4220;
                for (i__4220 = i__4162min__4218; ((i__4220) <= (i__4162max__4219));
                     i__4220 = ((i__4220) + (((x10_long)1ll))))
                {
                    x10_long i__4221 = i__4220;
                    
                    //#line 50 "SuffixArrayTest.x10"
                    ::bwt::SuffixArray* sa__4212 = ::bwt::SuffixArray::_make(s__4223,
                                                                             b,
                                                                             sa_result__4224,
                                                                             ((x10_byte)11));
                    
                    //#line 51 "SuffixArrayTest.x10"
                    sa__4212->run();
                    
                    //#line 52 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__4223));
                    
                    //#line 53 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__4224));
                    
                    //#line 54 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4224)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4228),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4224)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4228) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4228),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4228) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__4224,
                                                ((n__4228) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__4224,
                                                s__4223, ((n__4228) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 61 "SuffixArrayTest.x10"
                    x10_long k__4213 = ((x10_long)0ll);
                    
                    //#line 62 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__apply(
                                                      k__4213),
                                                    b))) {
                        
                        //#line 63 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__4223)->x10::lang::Rail< x10_long >::__set(
                          k__4213, ((x10_long)1ll));
                        
                        //#line 64 "SuffixArrayTest.x10"
                        k__4213 = ((k__4213) + (((x10_long)1ll)));
                    }
                    
                    //#line 66 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_long >* a__4209 =
                      s__4223;
                    x10_long i__4210 = k__4213;
                    x10_long r__4211 = ((::x10aux::nullCheck(a__4209)->x10::lang::Rail< x10_long >::__apply(
                                           i__4210)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(a__4209)->x10::lang::Rail< x10_long >::__set(
                      i__4210, r__4211);
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
