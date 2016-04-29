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
    x10_long i__3973min__4116 = ((x10_long)0ll);
    x10_long i__3973max__4117 = n;
    {
        x10_long i__4118;
        for (i__4118 = i__3973min__4116; ((i__4118) <= (i__3973max__4117));
             i__4118 = ((i__4118) + (((x10_long)1ll)))) {
            x10_long i__4119 = i__4118;
            seen->x10::lang::Rail< x10_boolean >::__set(i__4119, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__3989min__4120 = ((x10_long)0ll);
    x10_long i__3989max__4121 = n;
    {
        x10_long i__4122;
        for (i__4122 = i__3989min__4120; ((i__4122) <= (i__3989max__4121));
             i__4122 = ((i__4122) + (((x10_long)1ll)))) {
            x10_long i__4123 = i__4122;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__4123),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__4005min__4124 = ((x10_long)0ll);
    x10_long i__4005max__4125 = n;
    {
        x10_long i__4126;
        for (i__4126 = i__4005min__4124; ((i__4126) <= (i__4005max__4125));
             i__4126 = ((i__4126) + (((x10_long)1ll)))) {
            x10_long i__4127 = i__4126;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__4127)))
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
    x10_long i__4021min__4128 = ((x10_long)0ll);
    x10_long i__4021max__4129 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__4130;
        for (i__4130 = i__4021min__4128; ((i__4130) <= (i__4021max__4129));
             i__4130 = ((i__4130) + (((x10_long)1ll)))) {
            x10_long i__4131 = i__4130;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__4131),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__4131) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__5891 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__5891->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__5891->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__5891->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__5891->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__5891->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__5891;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTestChar.x10"
    x10_long i__4037min__4148 = ((x10_long)0ll);
    x10_long i__4037max__4149 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__4150;
        for (i__4150 = i__4037min__4148; ((i__4150) <= (i__4037max__4149));
             i__4150 = ((i__4150) + (((x10_long)1ll)))) {
            x10_long i__4151 = i__4150;
            
            //#line 32 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__4151)));
        }
    }
    
    //#line 34 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTestChar.x10"
    x10_long i__4053min__4152 = ((x10_long)0ll);
    x10_long i__4053max__4153 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__4154;
        for (i__4154 = i__4053min__4152; ((i__4154) <= (i__4053max__4153));
             i__4154 = ((i__4154) + (((x10_long)1ll)))) {
            x10_long i__4155 = i__4154;
            
            //#line 36 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__4155)));
        }
    }
    
    //#line 39 "SuffixArrayTestChar.x10"
    x10_long nmax = ((x10_long)6ll);
    
    //#line 40 "SuffixArrayTestChar.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTestChar.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTestChar.x10"
    x10_long i__4101min__4156 = ((x10_long)2ll);
    x10_long i__4101max__4157 = nmax;
    {
        x10_long i__4158;
        for (i__4158 = i__4101min__4156; ((i__4158) <= (i__4101max__4157));
             i__4158 = ((i__4158) + (((x10_long)1ll)))) {
            x10_long n__4159 = i__4158;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__4145 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__4159)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__4146 = ::x10::lang::Rail< x10_byte >::_make(((n__4159) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__4147 =
              ::x10::lang::Rail< x10_long >::_make(((n__4159) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__4069min__4137 = ((x10_long)0ll);
            x10_long i__4069max__4138 = n__4159;
            {
                x10_long i__4139;
                for (i__4139 = i__4069min__4137; ((i__4139) <= (i__4069max__4138));
                     i__4139 = ((i__4139) + (((x10_long)1ll))))
                {
                    x10_long i__4140 = i__4139;
                    ::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__set(
                      i__4140, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__4147)->x10::lang::Rail< x10_long >::__set(
                      i__4140, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__set(
              n__4159, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__set(
              ((n__4159) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__set(
              ((n__4159) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__4085min__4141 = ((x10_long)0ll);
            x10_long i__4085max__4142 = ((((x10_long)(N__4145))) - (((x10_long)1ll)));
            {
                x10_long i__4143;
                for (i__4143 = i__4085min__4141; ((i__4143) <= (i__4085max__4142));
                     i__4143 = ((i__4143) + (((x10_long)1ll))))
                {
                    x10_long i__4144 = i__4143;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__4135 = ::bwt::SuffixArrayChar::_make(s__4146,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__4147 = aa__4135->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__4146));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__4147));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4147)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4159),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4147)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4159) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__4159),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__4159) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__4147,
                                                ((n__4159) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__4147,
                                                s__4146, ((n__4159) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__4136 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__4136),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__4146)->x10::lang::Rail< x10_byte >::__set(
                          k__4136, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__4136 = ((k__4136) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__4132 =
                      s__4146;
                    x10_long i__4133 = k__4136;
                    x10_byte r__4134 = ((x10_byte) ((::x10aux::nullCheck(a__4132)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__4133)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__4132)->x10::lang::Rail< x10_byte >::__set(
                      i__4133, r__4134);
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
