/*************************************************/
/* START of SuffixArrayTestChar */
#include <bwt/SuffixArrayTestChar.h>

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

//#line 4 "SuffixArrayTestChar.x10"
x10_boolean bwt::SuffixArrayTestChar::isPerm(::x10::lang::Rail< x10_long >* sa,
                                             x10_long n) {
    
    //#line 5 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_boolean >* seen = ::x10::lang::Rail< x10_boolean >::_make(((n) + (((x10_long)1ll))));
    
    //#line 6 "SuffixArrayTestChar.x10"
    x10_long i__3682min__3825 = ((x10_long)0ll);
    x10_long i__3682max__3826 = n;
    {
        x10_long i__3827;
        for (i__3827 = i__3682min__3825; ((i__3827) <= (i__3682max__3826));
             i__3827 = ((i__3827) + (((x10_long)1ll)))) {
            x10_long i__3828 = i__3827;
            seen->x10::lang::Rail< x10_boolean >::__set(i__3828, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__3698min__3829 = ((x10_long)0ll);
    x10_long i__3698max__3830 = n;
    {
        x10_long i__3831;
        for (i__3831 = i__3698min__3829; ((i__3831) <= (i__3698max__3830));
             i__3831 = ((i__3831) + (((x10_long)1ll)))) {
            x10_long i__3832 = i__3831;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__3832),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__3714min__3833 = ((x10_long)0ll);
    x10_long i__3714max__3834 = n;
    {
        x10_long i__3835;
        for (i__3835 = i__3714min__3833; ((i__3835) <= (i__3714max__3834));
             i__3835 = ((i__3835) + (((x10_long)1ll)))) {
            x10_long i__3836 = i__3835;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__3836)))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 9 "SuffixArrayTestChar.x10"
    return true;
    
}

//#line 12 "SuffixArrayTestChar.x10"
x10_boolean bwt::SuffixArrayTestChar::sleq(::x10::lang::Rail< x10_byte >* s1,
                                           ::x10::lang::Rail< x10_byte >* s2,
                                           x10_long c1, x10_long c2) {
    
    //#line 13 "SuffixArrayTestChar.x10"
    if (((c2) >= ((x10_long)(::x10aux::nullCheck(s2)->FMGL(size)))))
    {
        return false;
        
    }
    
    //#line 14 "SuffixArrayTestChar.x10"
    if (((c1) >= ((x10_long)(::x10aux::nullCheck(s1)->FMGL(size)))))
    {
        return true;
        
    }
    
    //#line 15 "SuffixArrayTestChar.x10"
    if (((::x10aux::nullCheck(s1)->x10::lang::Rail< x10_byte >::__apply(
            c1)) > (::x10aux::nullCheck(s2)->x10::lang::Rail< x10_byte >::__apply(
                      c2)))) {
        return false;
        
    }
    
    //#line 16 "SuffixArrayTestChar.x10"
    if (((::x10aux::nullCheck(s1)->x10::lang::Rail< x10_byte >::__apply(
            c1)) < (::x10aux::nullCheck(s2)->x10::lang::Rail< x10_byte >::__apply(
                      c2)))) {
        return true;
        
    }
    
    //#line 17 "SuffixArrayTestChar.x10"
    return ::bwt::SuffixArrayTestChar::sleq(s1, s2, ((c1) + (((x10_long)1ll))),
                                            ((c2) + (((x10_long)1ll))));
    
}

//#line 20 "SuffixArrayTestChar.x10"
x10_boolean bwt::SuffixArrayTestChar::isSorted(::x10::lang::Rail< x10_long >* sa,
                                               ::x10::lang::Rail< x10_byte >* s,
                                               x10_long n) {
    
    //#line 21 "SuffixArrayTestChar.x10"
    x10_long i__3730min__3837 = ((x10_long)0ll);
    x10_long i__3730max__3838 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__3839;
        for (i__3839 = i__3730min__3837; ((i__3839) <= (i__3730max__3838));
             i__3839 = ((i__3839) + (((x10_long)1ll)))) {
            x10_long i__3840 = i__3839;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__3840),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__3840) + (((x10_long)1ll)))))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 24 "SuffixArrayTestChar.x10"
    return true;
    
}

//#line 27 "SuffixArrayTestChar.x10"
void bwt::SuffixArrayTestChar::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 29 "SuffixArrayTestChar.x10"
    ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make((__extension__ ({
                                                            ::x10::lang::Rail< x10_long >* t__5370 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__5370->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__5370->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__5370->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__5370->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__5370->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__5370;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTestChar.x10"
    x10_long i__3746min__3857 = ((x10_long)0ll);
    x10_long i__3746max__3858 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3859;
        for (i__3859 = i__3746min__3857; ((i__3859) <= (i__3746max__3858));
             i__3859 = ((i__3859) + (((x10_long)1ll)))) {
            x10_long i__3860 = i__3859;
            
            //#line 32 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3860)));
        }
    }
    
    //#line 34 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTestChar.x10"
    x10_long i__3762min__3861 = ((x10_long)0ll);
    x10_long i__3762max__3862 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3863;
        for (i__3863 = i__3762min__3861; ((i__3863) <= (i__3762max__3862));
             i__3863 = ((i__3863) + (((x10_long)1ll)))) {
            x10_long i__3864 = i__3863;
            
            //#line 36 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3864)));
        }
    }
    
    //#line 39 "SuffixArrayTestChar.x10"
    x10_long nmax = ((x10_long)6ll);
    
    //#line 40 "SuffixArrayTestChar.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTestChar.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTestChar.x10"
    x10_long i__3810min__3865 = ((x10_long)2ll);
    x10_long i__3810max__3866 = nmax;
    {
        x10_long i__3867;
        for (i__3867 = i__3810min__3865; ((i__3867) <= (i__3810max__3866));
             i__3867 = ((i__3867) + (((x10_long)1ll)))) {
            x10_long n__3868 = i__3867;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__3854 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__3868)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__3855 = ::x10::lang::Rail< x10_byte >::_make(((n__3868) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__3856 =
              ::x10::lang::Rail< x10_long >::_make(((n__3868) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__3778min__3846 = ((x10_long)0ll);
            x10_long i__3778max__3847 = n__3868;
            {
                x10_long i__3848;
                for (i__3848 = i__3778min__3846; ((i__3848) <= (i__3778max__3847));
                     i__3848 = ((i__3848) + (((x10_long)1ll))))
                {
                    x10_long i__3849 = i__3848;
                    ::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__set(
                      i__3849, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__3856)->x10::lang::Rail< x10_long >::__set(
                      i__3849, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__set(
              n__3868, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__set(
              ((n__3868) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__set(
              ((n__3868) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__3794min__3850 = ((x10_long)0ll);
            x10_long i__3794max__3851 = ((((x10_long)(N__3854))) - (((x10_long)1ll)));
            {
                x10_long i__3852;
                for (i__3852 = i__3794min__3850; ((i__3852) <= (i__3794max__3851));
                     i__3852 = ((i__3852) + (((x10_long)1ll))))
                {
                    x10_long i__3853 = i__3852;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__3844 = ::bwt::SuffixArrayChar::_make(s__3855,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__3856 = aa__3844->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__3855));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__3856));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3856)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__3868),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3856)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__3868) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__3868),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__3868) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__3856,
                                                ((n__3868) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__3856,
                                                s__3855, ((n__3868) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__3845 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__3845),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__3855)->x10::lang::Rail< x10_byte >::__set(
                          k__3845, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__3845 = ((k__3845) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__3841 =
                      s__3855;
                    x10_long i__3842 = k__3845;
                    x10_byte r__3843 = ((x10_byte) ((::x10aux::nullCheck(a__3841)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__3842)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__3841)->x10::lang::Rail< x10_byte >::__set(
                      i__3842, r__3843);
                }
            }
            
        }
    }
    
}

//#line 3 "SuffixArrayTestChar.x10"
::bwt::SuffixArrayTestChar* bwt::SuffixArrayTestChar::bwt__SuffixArrayTestChar____this__bwt__SuffixArrayTestChar(
  ) {
    return this;
    
}
void bwt::SuffixArrayTestChar::_constructor() {
    this->bwt::SuffixArrayTestChar::__fieldInitializers_bwt_SuffixArrayTestChar();
}
::bwt::SuffixArrayTestChar* bwt::SuffixArrayTestChar::_make(
  ) {
    ::bwt::SuffixArrayTestChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayTestChar>()) ::bwt::SuffixArrayTestChar();
    this_->_constructor();
    return this_;
}


void bwt::SuffixArrayTestChar::__fieldInitializers_bwt_SuffixArrayTestChar(
  ) {
 
}
const ::x10aux::serialization_id_t bwt::SuffixArrayTestChar::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArrayTestChar::_deserializer);

void bwt::SuffixArrayTestChar::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::bwt::SuffixArrayTestChar::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArrayTestChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayTestChar>()) ::bwt::SuffixArrayTestChar();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArrayTestChar::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType bwt::SuffixArrayTestChar::rtt;
void bwt::SuffixArrayTestChar::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayTestChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SuffixArrayTestChar */
/*************************************************/
