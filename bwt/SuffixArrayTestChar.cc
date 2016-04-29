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
    x10_long i__3812min__3955 = ((x10_long)0ll);
    x10_long i__3812max__3956 = n;
    {
        x10_long i__3957;
        for (i__3957 = i__3812min__3955; ((i__3957) <= (i__3812max__3956));
             i__3957 = ((i__3957) + (((x10_long)1ll)))) {
            x10_long i__3958 = i__3957;
            seen->x10::lang::Rail< x10_boolean >::__set(i__3958, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__3828min__3959 = ((x10_long)0ll);
    x10_long i__3828max__3960 = n;
    {
        x10_long i__3961;
        for (i__3961 = i__3828min__3959; ((i__3961) <= (i__3828max__3960));
             i__3961 = ((i__3961) + (((x10_long)1ll)))) {
            x10_long i__3962 = i__3961;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__3962),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__3844min__3963 = ((x10_long)0ll);
    x10_long i__3844max__3964 = n;
    {
        x10_long i__3965;
        for (i__3965 = i__3844min__3963; ((i__3965) <= (i__3844max__3964));
             i__3965 = ((i__3965) + (((x10_long)1ll)))) {
            x10_long i__3966 = i__3965;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__3966)))
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
    x10_long i__3860min__3967 = ((x10_long)0ll);
    x10_long i__3860max__3968 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__3969;
        for (i__3969 = i__3860min__3967; ((i__3969) <= (i__3860max__3968));
             i__3969 = ((i__3969) + (((x10_long)1ll)))) {
            x10_long i__3970 = i__3969;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__3970),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__3970) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__5589 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__5589->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__5589->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__5589->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__5589->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__5589->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__5589;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTestChar.x10"
    x10_long i__3876min__3987 = ((x10_long)0ll);
    x10_long i__3876max__3988 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3989;
        for (i__3989 = i__3876min__3987; ((i__3989) <= (i__3876max__3988));
             i__3989 = ((i__3989) + (((x10_long)1ll)))) {
            x10_long i__3990 = i__3989;
            
            //#line 32 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3990)));
        }
    }
    
    //#line 34 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTestChar.x10"
    x10_long i__3892min__3991 = ((x10_long)0ll);
    x10_long i__3892max__3992 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__3993;
        for (i__3993 = i__3892min__3991; ((i__3993) <= (i__3892max__3992));
             i__3993 = ((i__3993) + (((x10_long)1ll)))) {
            x10_long i__3994 = i__3993;
            
            //#line 36 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__3994)));
        }
    }
    
    //#line 39 "SuffixArrayTestChar.x10"
    x10_long nmax = ((x10_long)6ll);
    
    //#line 40 "SuffixArrayTestChar.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTestChar.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTestChar.x10"
    x10_long i__3940min__3995 = ((x10_long)2ll);
    x10_long i__3940max__3996 = nmax;
    {
        x10_long i__3997;
        for (i__3997 = i__3940min__3995; ((i__3997) <= (i__3940max__3996));
             i__3997 = ((i__3997) + (((x10_long)1ll)))) {
            x10_long n__3998 = i__3997;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__3984 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__3998)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__3985 = ::x10::lang::Rail< x10_byte >::_make(((n__3998) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__3986 =
              ::x10::lang::Rail< x10_long >::_make(((n__3998) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__3908min__3976 = ((x10_long)0ll);
            x10_long i__3908max__3977 = n__3998;
            {
                x10_long i__3978;
                for (i__3978 = i__3908min__3976; ((i__3978) <= (i__3908max__3977));
                     i__3978 = ((i__3978) + (((x10_long)1ll))))
                {
                    x10_long i__3979 = i__3978;
                    ::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__set(
                      i__3979, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__3986)->x10::lang::Rail< x10_long >::__set(
                      i__3979, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__set(
              n__3998, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__set(
              ((n__3998) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__set(
              ((n__3998) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__3924min__3980 = ((x10_long)0ll);
            x10_long i__3924max__3981 = ((((x10_long)(N__3984))) - (((x10_long)1ll)));
            {
                x10_long i__3982;
                for (i__3982 = i__3924min__3980; ((i__3982) <= (i__3924max__3981));
                     i__3982 = ((i__3982) + (((x10_long)1ll))))
                {
                    x10_long i__3983 = i__3982;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__3974 = ::bwt::SuffixArrayChar::_make(s__3985,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__3986 = aa__3974->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__3985));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__3986));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3986)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__3998),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__3986)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__3998) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__3998),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__3998) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__3986,
                                                ((n__3998) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__3986,
                                                s__3985, ((n__3998) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__3975 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__3975),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__3985)->x10::lang::Rail< x10_byte >::__set(
                          k__3975, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__3975 = ((k__3975) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__3971 =
                      s__3985;
                    x10_long i__3972 = k__3975;
                    x10_byte r__3973 = ((x10_byte) ((::x10aux::nullCheck(a__3971)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__3972)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__3971)->x10::lang::Rail< x10_byte >::__set(
                      i__3972, r__3973);
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
