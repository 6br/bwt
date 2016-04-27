/*************************************************/
/* START of SuffixArrayTest */
#include <bwt/SuffixArrayTest.h>

#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Byte.h>
#include <x10/lang/String.h>
#include <bwt/SuffixArray.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <bwt/SuffixArrayChar.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::isPerm(::x10::lang::Rail< x10_long >* sa,
                                         x10_long n) {
    
    //#line 5 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_boolean >* seen = ::x10::lang::Rail< x10_boolean >::_make(((n) + (((x10_long)1ll))));
    
    //#line 6 "SuffixArrayTest.x10"
    x10_long i__3714min__3857 = ((x10_long)0ll);
    x10_long i__3714max__3858 = n;
    {
        x10_long i__3859;
        for (i__3859 = i__3714min__3857; ((i__3859) <= (i__3714max__3858));
             i__3859 = ((i__3859) + (((x10_long)1ll)))) {
            x10_long i__3860 = i__3859;
            seen->x10::lang::Rail< x10_boolean >::__set(i__3860, false);
        }
    }
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__3730min__3861 = ((x10_long)0ll);
    x10_long i__3730max__3862 = n;
    {
        x10_long i__3863;
        for (i__3863 = i__3730min__3861; ((i__3863) <= (i__3730max__3862));
             i__3863 = ((i__3863) + (((x10_long)1ll)))) {
            x10_long i__3864 = i__3863;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__3864),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTest.x10"
    x10_long i__3746min__3865 = ((x10_long)0ll);
    x10_long i__3746max__3866 = n;
    {
        x10_long i__3867;
        for (i__3867 = i__3746min__3865; ((i__3867) <= (i__3746max__3866));
             i__3867 = ((i__3867) + (((x10_long)1ll)))) {
            x10_long i__3868 = i__3867;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__3868)))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 9 "SuffixArrayTest.x10"
    return true;
    
}

//#line 12 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::sleq(::x10::lang::Rail< x10_byte >* s1,
                                       ::x10::lang::Rail< x10_byte >* s2,
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
    if (((::x10aux::nullCheck(s1)->x10::lang::Rail< x10_byte >::__apply(
            c1)) > (::x10aux::nullCheck(s2)->x10::lang::Rail< x10_byte >::__apply(
                      c2)))) {
        return false;
        
    }
    
    //#line 16 "SuffixArrayTest.x10"
    if (((::x10aux::nullCheck(s1)->x10::lang::Rail< x10_byte >::__apply(
            c1)) < (::x10aux::nullCheck(s2)->x10::lang::Rail< x10_byte >::__apply(
                      c2)))) {
        return true;
        
    }
    
    //#line 17 "SuffixArrayTest.x10"
    return ::bwt::SuffixArrayTest::sleq(s1, s2, ((c1) + (((x10_long)1ll))),
                                        ((c2) + (((x10_long)1ll))));
    
}

//#line 20 "SuffixArrayTest.x10"
x10_boolean bwt::SuffixArrayTest::isSorted(::x10::lang::Rail< x10_long >* sa,
                                           ::x10::lang::Rail< x10_byte >* s,
                                           x10_long n) {
    
    //#line 21 "SuffixArrayTest.x10"
    x10_long i__3762min__3869 = ((x10_long)0ll);
    x10_long i__3762max__3870 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__3871;
        for (i__3871 = i__3762min__3869; ((i__3871) <= (i__3762max__3870));
             i__3871 = ((i__3871) + (((x10_long)1ll)))) {
            x10_long i__3872 = i__3871;
            
            //#line 22 "SuffixArrayTest.x10"
            if (!(::bwt::SuffixArrayTest::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                       i__3872),
                                               ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                 ((i__3872) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__5420 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__5420->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__5420->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__5420->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__5420->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__5420->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__5420;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTest.x10"
    x10_long i__3778min__3889 = ((x10_long)0ll);
    x10_long i__3778max__3890 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3891;
        for (i__3891 = i__3778min__3889; ((i__3891) <= (i__3778max__3890));
             i__3891 = ((i__3891) + (((x10_long)1ll)))) {
            x10_long i__3892 = i__3891;
            
            //#line 32 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3892)));
        }
    }
    
    //#line 34 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTest.x10"
    x10_long i__3794min__3893 = ((x10_long)0ll);
    x10_long i__3794max__3894 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3895;
        for (i__3895 = i__3794min__3893; ((i__3895) <= (i__3794max__3894));
             i__3895 = ((i__3895) + (((x10_long)1ll)))) {
            x10_long i__3896 = i__3895;
            
            //#line 36 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3896)));
        }
    }
    
    //#line 39 "SuffixArrayTest.x10"
    x10_long nmax = ((x10_long)4ll);
    
    //#line 40 "SuffixArrayTest.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTest.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTest.x10"
    x10_long i__3842min__3897 = ((x10_long)2ll);
    x10_long i__3842max__3898 = nmax;
    {
        x10_long i__3899;
        for (i__3899 = i__3842min__3897; ((i__3899) <= (i__3842max__3898));
             i__3899 = ((i__3899) + (((x10_long)1ll)))) {
            x10_long n__3900 = i__3899;
            
            //#line 43 "SuffixArrayTest.x10"
            x10_int N__3886 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__3900)) + (0.5)));
            
            //#line 44 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_byte >* s__3887 = ::x10::lang::Rail< x10_byte >::_make(((n__3900) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTest.x10"
            ::x10::lang::Rail< x10_long >* sa_result__3888 =
              ::x10::lang::Rail< x10_long >::_make(((n__3900) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTest.x10"
            x10_long i__3810min__3878 = ((x10_long)0ll);
            x10_long i__3810max__3879 = n__3900;
            {
                x10_long i__3880;
                for (i__3880 = i__3810min__3878; ((i__3880) <= (i__3810max__3879));
                     i__3880 = ((i__3880) + (((x10_long)1ll))))
                {
                    x10_long i__3881 = i__3880;
                    ::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__set(
                      i__3881, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__3888)->x10::lang::Rail< x10_long >::__set(
                      i__3881, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__set(
              n__3900, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__set(
              ((n__3900) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTest.x10"
            ::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__set(
              ((n__3900) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTest.x10"
            x10_long i__3826min__3882 = ((x10_long)0ll);
            x10_long i__3826max__3883 = ((((x10_long)(N__3886))) - (((x10_long)1ll)));
            {
                x10_long i__3884;
                for (i__3884 = i__3826min__3882; ((i__3884) <= (i__3826max__3883));
                     i__3884 = ((i__3884) + (((x10_long)1ll))))
                {
                    x10_long i__3885 = i__3884;
                    
                    //#line 51 "SuffixArrayTest.x10"
                    ::bwt::SuffixArrayChar* aa__3876 = ::bwt::SuffixArrayChar::_make(s__3887,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTest.x10"
                    sa_result__3888 = aa__3876->run();
                    
                    //#line 53 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__3887));
                    
                    //#line 54 "SuffixArrayTest.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__3888));
                    
                    //#line 55 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3888)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__3900),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3888)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__3900) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__3900),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__3900) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isPerm(
                                                sa_result__3888,
                                                ((n__3900) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTest.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTest::isSorted(
                                                sa_result__3888,
                                                s__3887, ((n__3900) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTest.x10"
                    x10_long k__3877 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTest.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__3877),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTest.x10"
                        ::x10aux::nullCheck(s__3887)->x10::lang::Rail< x10_byte >::__set(
                          k__3877, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTest.x10"
                        k__3877 = ((k__3877) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTest.x10"
                    ::x10::lang::Rail< x10_byte >* a__3873 =
                      s__3887;
                    x10_long i__3874 = k__3877;
                    x10_byte r__3875 = ((x10_byte) ((::x10aux::nullCheck(a__3873)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__3874)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__3873)->x10::lang::Rail< x10_byte >::__set(
                      i__3874, r__3875);
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
