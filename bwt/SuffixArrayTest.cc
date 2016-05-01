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
    x10_long i__4541min__4684 = ((x10_long)0ll);
    x10_long i__4541max__4685 = n;
    {
        x10_long i__4686;
        for (i__4686 = i__4541min__4684; ((i__4686) <= (i__4541max__4685));
             i__4686 = ((i__4686) + (((x10_long)1ll)))) {
            x10_long i__4687 = i__4686;
            seen->x10::lang::Rail< x10_boolean >::__set(i__4687, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__4557min__4688 = ((x10_long)0ll);
    x10_long i__4557max__4689 = n;
    {
        x10_long i__4690;
        for (i__4690 = i__4557min__4688; ((i__4690) <= (i__4557max__4689));
             i__4690 = ((i__4690) + (((x10_long)1ll)))) {
            x10_long i__4691 = i__4690;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__4691),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__4573min__4692 = ((x10_long)0ll);
    x10_long i__4573max__4693 = n;
    {
        x10_long i__4694;
        for (i__4694 = i__4573min__4692; ((i__4694) <= (i__4573max__4693));
             i__4694 = ((i__4694) + (((x10_long)1ll)))) {
            x10_long i__4695 = i__4694;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__4695)))
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
    x10_long i__4589min__4696 = ((x10_long)0ll);
    x10_long i__4589max__4697 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__4698;
        for (i__4698 = i__4589min__4696; ((i__4698) <= (i__4589max__4697));
             i__4698 = ((i__4698) + (((x10_long)1ll)))) {
            x10_long i__4699 = i__4698;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__4699),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__4699) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__6701 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__6701->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__6701->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__6701->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__6701->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__6701->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__6701;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTest.x10"
    x10_long i__4605min__4716 = ((x10_long)0ll);
    x10_long i__4605max__4717 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__4718;
        for (i__4718 = i__4605min__4716; ((i__4718) <= (i__4605max__4717));
             i__4718 = ((i__4718) + (((x10_long)1ll)))) {
            x10_long i__4719 = i__4718;
            
            //#line 32 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__4719)));
        }
    }
    
    //#line 34 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTest.x10"
    x10_long i__4621min__4720 = ((x10_long)0ll);
    x10_long i__4621max__4721 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__4722;
        for (i__4722 = i__4621min__4720; ((i__4722) <= (i__4621max__4721));
             i__4722 = ((i__4722) + (((x10_long)1ll)))) {
            x10_long i__4723 = i__4722;
            
            //#line 36 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__4723)));
        }
    }
    
    //#line 39 "SuffixArrayTest.x10"
    x10_long nmax = ((x10_long)6ll);
    
    //#line 40 "SuffixArrayTest.x10"
    x10_long b = ((x10_long)4ll);
    
    //#line 41 "SuffixArrayTest.x10"
    x10_long i__4669min__4724 = ((x10_long)2ll);
    x10_long i__4669max__4725 = nmax;
    {
        x10_long i__4726;
        for (i__4726 = i__4669min__4724; ((i__4726) <= (i__4669max__4725));
             i__4726 = ((i__4726) + (((x10_long)1ll)))) {
            x10_long n__4727 = i__4726;
            
            //#line 42 "SuffixArrayTest.x10"
            x10_int N__4713 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    b,
                                                                    n__4727)) + (0.5)));
            
            //#line 43 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* s__4714 = ::x10::lang::Rail< x10_long >::_make(((n__4727) + (((x10_long)3ll))));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__4715 =
              ::x10::lang::Rail< x10_long >::_make(((n__4727) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTest.x10"
            x10_long i__4637min__4705 = ((x10_long)0ll);
            x10_long i__4637max__4706 = n__4727;
            {
                x10_long i__4707;
                for (i__4707 = i__4637min__4705; ((i__4707) <= (i__4637max__4706));
                     i__4707 = ((i__4707) + (((x10_long)1ll))))
                {
                    x10_long i__4708 = i__4707;
                    ::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__set(
                      i__4708, ((x10_long)1ll));
                    ::x10aux::nullCheck(sa_result__4715)->x10::lang::Rail< x10_long >::__set(
                      i__4708, ((x10_long)1ll));
                }
            }
            
            //#line 46 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__set(
              n__4727, ((x10_long)0ll));
            
            //#line 47 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__set(
              ((n__4727) + (((x10_long)1ll))), ((x10_long)0ll));
            
            //#line 48 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__set(
              ((n__4727) + (((x10_long)2ll))), ((x10_long)0ll));
            
            //#line 49 "SuffixArrayTest.x10"
            x10_long i__4653min__4709 = ((x10_long)0ll);
            x10_long i__4653max__4710 = ((((x10_long)(N__4713))) - (((x10_long)1ll)));
            {
                x10_long i__4711;
                for (i__4711 = i__4653min__4709; ((i__4711) <= (i__4653max__4710));
                     i__4711 = ((i__4711) + (((x10_long)1ll))))
                {
                    x10_long i__4712 = i__4711;
                    
                    //#line 50 "SuffixArrayTest.x10"
                    ::bwt::SuffixArray* aa__4703 = ::bwt::SuffixArray::_make(s__4714,
                                                                             b);
                    
                    //#line 51 "SuffixArrayTest.x10"
                    sa_result__4715 = aa__4703->run();
                    
                    //#line 52 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__4714));
                    
                    //#line 53 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__4715));
                    
                    //#line 54 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4715)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4727),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4715)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4727) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4727),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4727) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__4715,
                                                ((n__4727) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__4715,
                                                s__4714, ((n__4727) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 61 "SuffixArrayTest.x10"
                    x10_long k__4704 = ((x10_long)0ll);
                    
                    //#line 62 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__apply(
                                                      k__4704),
                                                    b))) {
                        
                        //#line 63 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__4714)->x10::lang::Rail< x10_long >::__set(
                          k__4704, ((x10_long)1ll));
                        
                        //#line 64 "SuffixArrayTest.x10"
                        k__4704 = ((k__4704) + (((x10_long)1ll)));
                    }
                    
                    //#line 66 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_long >* a__4700 =
                      s__4714;
                    x10_long i__4701 = k__4704;
                    x10_long r__4702 = ((::x10aux::nullCheck(a__4700)->x10::lang::Rail< x10_long >::__apply(
                                           i__4701)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(a__4700)->x10::lang::Rail< x10_long >::__set(
                      i__4701, r__4702);
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
