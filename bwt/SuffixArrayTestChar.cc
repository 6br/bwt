/*************************************************/
/* START of SuffixArrayTestChar */
#include <bwt/SuffixArrayTestChar.h>

#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Byte.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <bwt/SuffixArrayChar.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "SuffixArrayTestChar.x10"
x10_boolean bwt::SuffixArrayTestChar::isPerm(::x10::lang::Rail< x10_long >* sa,
                                             x10_long n) {
    
    //#line 5 "SuffixArrayTestChar.x10"
    ::x10::lang::Rail< x10_boolean >* seen = ::x10::lang::Rail< x10_boolean >::_make(((n) + (((x10_long)1ll))));
    
    //#line 6 "SuffixArrayTestChar.x10"
    x10_long i__13028min__13139 = ((x10_long)0ll);
    x10_long i__13028max__13140 = n;
    {
        x10_long i__13141;
        for (i__13141 = i__13028min__13139; ((i__13141) <= (i__13028max__13140));
             i__13141 = ((i__13141) + (((x10_long)1ll)))) {
            x10_long i__13142 = i__13141;
            seen->x10::lang::Rail< x10_boolean >::__set(i__13142,
                                                        false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__13044min__13143 = ((x10_long)0ll);
    x10_long i__13044max__13144 = n;
    {
        x10_long i__13145;
        for (i__13145 = i__13044min__13143; ((i__13145) <= (i__13044max__13144));
             i__13145 = ((i__13145) + (((x10_long)1ll))))
        {
            x10_long i__13146 = i__13145;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__13146),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__13060min__13147 = ((x10_long)0ll);
    x10_long i__13060max__13148 = n;
    {
        x10_long i__13149;
        for (i__13149 = i__13060min__13147; ((i__13149) <= (i__13060max__13148));
             i__13149 = ((i__13149) + (((x10_long)1ll))))
        {
            x10_long i__13150 = i__13149;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(
                    i__13150))) {
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
    x10_long i__13076min__13151 = ((x10_long)0ll);
    x10_long i__13076max__13152 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__13153;
        for (i__13153 = i__13076min__13151; ((i__13153) <= (i__13076max__13152));
             i__13153 = ((i__13153) + (((x10_long)1ll))))
        {
            x10_long i__13154 = i__13153;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__13154),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__13154) + (((x10_long)1ll)))))))
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
    
    //#line 39 "SuffixArrayTestChar.x10"
    x10_long nmax = ((x10_long)10ll);
    
    //#line 40 "SuffixArrayTestChar.x10"
    x10_byte b = ((x10_byte)4);
    
    //#line 41 "SuffixArrayTestChar.x10"
    x10_long bl = ((x10_long)(b));
    
    //#line 42 "SuffixArrayTestChar.x10"
    x10_long i__13124min__13171 = ((x10_long)2ll);
    x10_long i__13124max__13172 = nmax;
    {
        x10_long i__13173;
        for (i__13173 = i__13124min__13171; ((i__13173) <= (i__13124max__13172));
             i__13173 = ((i__13173) + (((x10_long)1ll))))
        {
            x10_long n__13174 = i__13173;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__13168 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                     bl,
                                                                     n__13174)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__13169 = ::x10::lang::Rail< x10_byte >::_make(((n__13174) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__13170 =
              ::x10::lang::Rail< x10_long >::_make(((n__13174) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__13092min__13160 = ((x10_long)0ll);
            x10_long i__13092max__13161 = n__13174;
            {
                x10_long i__13162;
                for (i__13162 = i__13092min__13160; ((i__13162) <= (i__13092max__13161));
                     i__13162 = ((i__13162) + (((x10_long)1ll))))
                {
                    x10_long i__13163 = i__13162;
                    ::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__set(
                      i__13163, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__13170)->x10::lang::Rail< x10_long >::__set(
                      i__13163, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__set(
              n__13174, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__set(
              ((n__13174) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__set(
              ((n__13174) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__13108min__13164 = ((x10_long)0ll);
            x10_long i__13108max__13165 = ((((x10_long)(N__13168))) - (((x10_long)1ll)));
            {
                x10_long i__13166;
                for (i__13166 = i__13108min__13164; ((i__13166) <= (i__13108max__13165));
                     i__13166 = ((i__13166) + (((x10_long)1ll))))
                {
                    x10_long i__13167 = i__13166;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__13158 = ::bwt::SuffixArrayChar::_make(s__13169,
                                                                                      ((x10_long)(b)),
                                                                                      ((x10_byte)11));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__13170 = aa__13158->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__13169));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__13170));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__13170)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__13174),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__13170)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__13174) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__13174),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__13174) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__13170,
                                                ((n__13174) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__13170,
                                                s__13169,
                                                ((n__13174) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__13159 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__13159),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__13169)->x10::lang::Rail< x10_byte >::__set(
                          k__13159, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__13159 = ((k__13159) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__13155 =
                      s__13169;
                    x10_long i__13156 = k__13159;
                    x10_byte r__13157 = ((x10_byte) ((::x10aux::nullCheck(a__13155)->x10::lang::Rail< x10_byte >::__apply(
                                                        i__13156)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__13155)->x10::lang::Rail< x10_byte >::__set(
                      i__13156, r__13157);
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
