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
    x10_long i__3837min__3948 = ((x10_long)0ll);
    x10_long i__3837max__3949 = n;
    {
        x10_long i__3950;
        for (i__3950 = i__3837min__3948; ((i__3950) <= (i__3837max__3949));
             i__3950 = ((i__3950) + (((x10_long)1ll)))) {
            x10_long i__3951 = i__3950;
            seen->x10::lang::Rail< x10_boolean >::__set(i__3951, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__3853min__3952 = ((x10_long)0ll);
    x10_long i__3853max__3953 = n;
    {
        x10_long i__3954;
        for (i__3954 = i__3853min__3952; ((i__3954) <= (i__3853max__3953));
             i__3954 = ((i__3954) + (((x10_long)1ll)))) {
            x10_long i__3955 = i__3954;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__3955),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__3869min__3956 = ((x10_long)0ll);
    x10_long i__3869max__3957 = n;
    {
        x10_long i__3958;
        for (i__3958 = i__3869min__3956; ((i__3958) <= (i__3869max__3957));
             i__3958 = ((i__3958) + (((x10_long)1ll)))) {
            x10_long i__3959 = i__3958;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__3959)))
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
    x10_long i__3885min__3960 = ((x10_long)0ll);
    x10_long i__3885max__3961 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__3962;
        for (i__3962 = i__3885min__3960; ((i__3962) <= (i__3885max__3961));
             i__3962 = ((i__3962) + (((x10_long)1ll)))) {
            x10_long i__3963 = i__3962;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__3963),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__3963) + (((x10_long)1ll)))))))
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
    x10_long i__3933min__3980 = ((x10_long)2ll);
    x10_long i__3933max__3981 = nmax;
    {
        x10_long i__3982;
        for (i__3982 = i__3933min__3980; ((i__3982) <= (i__3933max__3981));
             i__3982 = ((i__3982) + (((x10_long)1ll)))) {
            x10_long n__3983 = i__3982;
            
            //#line 42 "SuffixArrayTest.x10"
            x10_int N__3977 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    b,
                                                                    n__3983)) + (0.5)));
            
            //#line 43 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* s__3978 = ::x10::lang::Rail< x10_long >::_make(((n__3983) + (((x10_long)3ll))));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__3979 =
              ::x10::lang::Rail< x10_long >::_make(((n__3983) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTest.x10"
            x10_long i__3901min__3969 = ((x10_long)0ll);
            x10_long i__3901max__3970 = n__3983;
            {
                x10_long i__3971;
                for (i__3971 = i__3901min__3969; ((i__3971) <= (i__3901max__3970));
                     i__3971 = ((i__3971) + (((x10_long)1ll))))
                {
                    x10_long i__3972 = i__3971;
                    ::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__set(
                      i__3972, ((x10_long)1ll));
                }
            }
            
            //#line 46 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__set(
              n__3983, ((x10_long)0ll));
            
            //#line 47 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__set(
              ((n__3983) + (((x10_long)1ll))), ((x10_long)0ll));
            
            //#line 48 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__set(
              ((n__3983) + (((x10_long)2ll))), ((x10_long)0ll));
            
            //#line 49 "SuffixArrayTest.x10"
            x10_long i__3917min__3973 = ((x10_long)0ll);
            x10_long i__3917max__3974 = ((((x10_long)(N__3977))) - (((x10_long)1ll)));
            {
                x10_long i__3975;
                for (i__3975 = i__3917min__3973; ((i__3975) <= (i__3917max__3974));
                     i__3975 = ((i__3975) + (((x10_long)1ll))))
                {
                    x10_long i__3976 = i__3975;
                    
                    //#line 50 "SuffixArrayTest.x10"
                    ::bwt::SuffixArray* sa__3967 = ::bwt::SuffixArray::_make(s__3978,
                                                                             b,
                                                                             sa_result__3979,
                                                                             ((x10_byte)11));
                    
                    //#line 51 "SuffixArrayTest.x10"
                    sa__3967->run();
                    
                    //#line 52 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__3978));
                    
                    //#line 53 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__3979));
                    
                    //#line 54 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3979)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__3983),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3979)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__3983) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__3983),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__3983) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__3979,
                                                ((n__3983) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__3979,
                                                s__3978, ((n__3983) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 61 "SuffixArrayTest.x10"
                    x10_long k__3968 = ((x10_long)0ll);
                    
                    //#line 62 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__apply(
                                                      k__3968),
                                                    b))) {
                        
                        //#line 63 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__3978)->x10::lang::Rail< x10_long >::__set(
                          k__3968, ((x10_long)1ll));
                        
                        //#line 64 "SuffixArrayTest.x10"
                        k__3968 = ((k__3968) + (((x10_long)1ll)));
                    }
                    
                    //#line 66 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_long >* a__3964 =
                      s__3978;
                    x10_long i__3965 = k__3968;
                    x10_long r__3966 = ((::x10aux::nullCheck(a__3964)->x10::lang::Rail< x10_long >::__apply(
                                           i__3965)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(a__3964)->x10::lang::Rail< x10_long >::__set(
                      i__3965, r__3966);
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
