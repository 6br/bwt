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
    x10_long i__3986min__4129 = ((x10_long)0ll);
    x10_long i__3986max__4130 = n;
    {
        x10_long i__4131;
        for (i__4131 = i__3986min__4129; ((i__4131) <= (i__3986max__4130));
             i__4131 = ((i__4131) + (((x10_long)1ll)))) {
            x10_long i__4132 = i__4131;
            seen->x10::lang::Rail< x10_boolean >::__set(i__4132, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__4002min__4133 = ((x10_long)0ll);
    x10_long i__4002max__4134 = n;
    {
        x10_long i__4135;
        for (i__4135 = i__4002min__4133; ((i__4135) <= (i__4002max__4134));
             i__4135 = ((i__4135) + (((x10_long)1ll)))) {
            x10_long i__4136 = i__4135;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__4136),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__4018min__4137 = ((x10_long)0ll);
    x10_long i__4018max__4138 = n;
    {
        x10_long i__4139;
        for (i__4139 = i__4018min__4137; ((i__4139) <= (i__4018max__4138));
             i__4139 = ((i__4139) + (((x10_long)1ll)))) {
            x10_long i__4140 = i__4139;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__4140)))
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
    x10_long i__4034min__4141 = ((x10_long)0ll);
    x10_long i__4034max__4142 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__4143;
        for (i__4143 = i__4034min__4141; ((i__4143) <= (i__4034max__4142));
             i__4143 = ((i__4143) + (((x10_long)1ll)))) {
            x10_long i__4144 = i__4143;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__4144),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__4144) + (((x10_long)1ll)))))))
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
                                                            ::x10::lang::Rail< x10_long >* t__5910 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)5ll), false);
                                                            t__5910->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__5910->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)1ll));
                                                            t__5910->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)0ll));
                                                            t__5910->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)0ll));
                                                            t__5910->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)0ll));
                                                            t__5910;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 30 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 31 "SuffixArrayTestChar.x10"
    x10_long i__4050min__4161 = ((x10_long)0ll);
    x10_long i__4050max__4162 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__4163;
        for (i__4163 = i__4050min__4161; ((i__4163) <= (i__4050max__4162));
             i__4163 = ((i__4163) + (((x10_long)1ll)))) {
            x10_long i__4164 = i__4163;
            
            //#line 32 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__4164)));
        }
    }
    
    //#line 34 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_long >* bwt = bwa->bwtable();
    
    //#line 35 "SuffixArrayTestChar.x10"
    x10_long i__4066min__4165 = ((x10_long)0ll);
    x10_long i__4066max__4166 = (((x10_long)(::x10aux::nullCheck(bwt)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__4167;
        for (i__4167 = i__4066min__4165; ((i__4167) <= (i__4066max__4166));
             i__4167 = ((i__4167) + (((x10_long)1ll)))) {
            x10_long i__4168 = i__4167;
            
            //#line 36 "SuffixArrayTestChar.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bwt)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__4168)));
        }
    }
    
    //#line 39 "SuffixArrayTestChar.x10"
    x10_long nmax = ((x10_long)6ll);
    
    //#line 40 "SuffixArrayTestChar.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTestChar.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTestChar.x10"
    x10_long i__4114min__4169 = ((x10_long)2ll);
    x10_long i__4114max__4170 = nmax;
    {
        x10_long i__4171;
        for (i__4171 = i__4114min__4169; ((i__4171) <= (i__4114max__4170));
             i__4171 = ((i__4171) + (((x10_long)1ll)))) {
            x10_long n__4172 = i__4171;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__4158 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__4172)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__4159 = ::x10::lang::Rail< x10_byte >::_make(((n__4172) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__4160 =
              ::x10::lang::Rail< x10_long >::_make(((n__4172) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__4082min__4150 = ((x10_long)0ll);
            x10_long i__4082max__4151 = n__4172;
            {
                x10_long i__4152;
                for (i__4152 = i__4082min__4150; ((i__4152) <= (i__4082max__4151));
                     i__4152 = ((i__4152) + (((x10_long)1ll))))
                {
                    x10_long i__4153 = i__4152;
                    ::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__set(
                      i__4153, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__4160)->x10::lang::Rail< x10_long >::__set(
                      i__4153, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__set(
              n__4172, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__set(
              ((n__4172) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__set(
              ((n__4172) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__4098min__4154 = ((x10_long)0ll);
            x10_long i__4098max__4155 = ((((x10_long)(N__4158))) - (((x10_long)1ll)));
            {
                x10_long i__4156;
                for (i__4156 = i__4098min__4154; ((i__4156) <= (i__4098max__4155));
                     i__4156 = ((i__4156) + (((x10_long)1ll))))
                {
                    x10_long i__4157 = i__4156;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__4148 = ::bwt::SuffixArrayChar::_make(s__4159,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__4160 = aa__4148->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__4159));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__4160));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4160)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__4172),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__4160)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__4172) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__4172),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__4172) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__4160,
                                                ((n__4172) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__4160,
                                                s__4159, ((n__4172) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__4149 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__4149),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__4159)->x10::lang::Rail< x10_byte >::__set(
                          k__4149, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__4149 = ((k__4149) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__4145 =
                      s__4159;
                    x10_long i__4146 = k__4149;
                    x10_byte r__4147 = ((x10_byte) ((::x10aux::nullCheck(a__4145)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__4146)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__4145)->x10::lang::Rail< x10_byte >::__set(
                      i__4146, r__4147);
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
