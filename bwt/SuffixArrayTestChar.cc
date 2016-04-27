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
    x10_long i__3643min__3786 = ((x10_long)0ll);
    x10_long i__3643max__3787 = n;
    {
        x10_long i__3788;
        for (i__3788 = i__3643min__3786; ((i__3788) <= (i__3643max__3787));
             i__3788 = ((i__3788) + (((x10_long)1ll)))) {
            x10_long i__3789 = i__3788;
            seen->x10::lang::Rail< x10_boolean >::__set(i__3789, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__3659min__3790 = ((x10_long)0ll);
    x10_long i__3659max__3791 = n;
    {
        x10_long i__3792;
        for (i__3792 = i__3659min__3790; ((i__3792) <= (i__3659max__3791));
             i__3792 = ((i__3792) + (((x10_long)1ll)))) {
            x10_long i__3793 = i__3792;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__3793),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__3675min__3794 = ((x10_long)0ll);
    x10_long i__3675max__3795 = n;
    {
        x10_long i__3796;
        for (i__3796 = i__3675min__3794; ((i__3796) <= (i__3675max__3795));
             i__3796 = ((i__3796) + (((x10_long)1ll)))) {
            x10_long i__3797 = i__3796;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__3797)))
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
    x10_long i__3691min__3798 = ((x10_long)0ll);
    x10_long i__3691max__3799 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__3800;
        for (i__3800 = i__3691min__3798; ((i__3800) <= (i__3691max__3799));
             i__3800 = ((i__3800) + (((x10_long)1ll)))) {
            x10_long i__3801 = i__3800;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__3801),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__3801) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__5313 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__5313->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__5313->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__5313->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__5313->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__5313->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__5313;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTestChar.x10"
    x10_long i__3707min__3818 = ((x10_long)0ll);
    x10_long i__3707max__3819 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3820;
        for (i__3820 = i__3707min__3818; ((i__3820) <= (i__3707max__3819));
             i__3820 = ((i__3820) + (((x10_long)1ll)))) {
            x10_long i__3821 = i__3820;
            
            //#line 32 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3821)));
        }
    }
    
    //#line 34 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTestChar.x10"
    x10_long i__3723min__3822 = ((x10_long)0ll);
    x10_long i__3723max__3823 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3824;
        for (i__3824 = i__3723min__3822; ((i__3824) <= (i__3723max__3823));
             i__3824 = ((i__3824) + (((x10_long)1ll)))) {
            x10_long i__3825 = i__3824;
            
            //#line 36 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3825)));
        }
    }
    
    //#line 39 "SuffixArrayTestChar.x10"
    x10_long nmax = ((x10_long)6ll);
    
    //#line 40 "SuffixArrayTestChar.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTestChar.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTestChar.x10"
    x10_long i__3771min__3826 = ((x10_long)2ll);
    x10_long i__3771max__3827 = nmax;
    {
        x10_long i__3828;
        for (i__3828 = i__3771min__3826; ((i__3828) <= (i__3771max__3827));
             i__3828 = ((i__3828) + (((x10_long)1ll)))) {
            x10_long n__3829 = i__3828;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__3815 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__3829)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__3816 = ::x10::lang::Rail< x10_byte >::_make(((n__3829) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__3817 =
              ::x10::lang::Rail< x10_long >::_make(((n__3829) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__3739min__3807 = ((x10_long)0ll);
            x10_long i__3739max__3808 = n__3829;
            {
                x10_long i__3809;
                for (i__3809 = i__3739min__3807; ((i__3809) <= (i__3739max__3808));
                     i__3809 = ((i__3809) + (((x10_long)1ll))))
                {
                    x10_long i__3810 = i__3809;
                    ::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__set(
                      i__3810, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__3817)->x10::lang::Rail< x10_long >::__set(
                      i__3810, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__set(
              n__3829, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__set(
              ((n__3829) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__set(
              ((n__3829) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__3755min__3811 = ((x10_long)0ll);
            x10_long i__3755max__3812 = ((((x10_long)(N__3815))) - (((x10_long)1ll)));
            {
                x10_long i__3813;
                for (i__3813 = i__3755min__3811; ((i__3813) <= (i__3755max__3812));
                     i__3813 = ((i__3813) + (((x10_long)1ll))))
                {
                    x10_long i__3814 = i__3813;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__3805 = ::bwt::SuffixArrayChar::_make(s__3816,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__3817 = aa__3805->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__3816));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__3817));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3817)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__3829),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3817)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__3829) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__3829),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__3829) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__3817,
                                                ((n__3829) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__3817,
                                                s__3816, ((n__3829) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__3806 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__3806),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__3816)->x10::lang::Rail< x10_byte >::__set(
                          k__3806, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__3806 = ((k__3806) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__3802 =
                      s__3816;
                    x10_long i__3803 = k__3806;
                    x10_byte r__3804 = ((x10_byte) ((::x10aux::nullCheck(a__3802)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__3803)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__3802)->x10::lang::Rail< x10_byte >::__set(
                      i__3803, r__3804);
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
