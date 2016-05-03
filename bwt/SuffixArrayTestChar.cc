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
    x10_long i__9284min__9395 = ((x10_long)0ll);
    x10_long i__9284max__9396 = n;
    {
        x10_long i__9397;
        for (i__9397 = i__9284min__9395; ((i__9397) <= (i__9284max__9396));
             i__9397 = ((i__9397) + (((x10_long)1ll)))) {
            x10_long i__9398 = i__9397;
            seen->x10::lang::Rail< x10_boolean >::__set(i__9398, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__9300min__9399 = ((x10_long)0ll);
    x10_long i__9300max__9400 = n;
    {
        x10_long i__9401;
        for (i__9401 = i__9300min__9399; ((i__9401) <= (i__9300max__9400));
             i__9401 = ((i__9401) + (((x10_long)1ll)))) {
            x10_long i__9402 = i__9401;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__9402),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__9316min__9403 = ((x10_long)0ll);
    x10_long i__9316max__9404 = n;
    {
        x10_long i__9405;
        for (i__9405 = i__9316min__9403; ((i__9405) <= (i__9316max__9404));
             i__9405 = ((i__9405) + (((x10_long)1ll)))) {
            x10_long i__9406 = i__9405;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__9406)))
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
    x10_long i__9332min__9407 = ((x10_long)0ll);
    x10_long i__9332max__9408 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__9409;
        for (i__9409 = i__9332min__9407; ((i__9409) <= (i__9332max__9408));
             i__9409 = ((i__9409) + (((x10_long)1ll)))) {
            x10_long i__9410 = i__9409;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__9410),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__9410) + (((x10_long)1ll)))))))
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
    x10_long i__9380min__9427 = ((x10_long)2ll);
    x10_long i__9380max__9428 = nmax;
    {
        x10_long i__9429;
        for (i__9429 = i__9380min__9427; ((i__9429) <= (i__9380max__9428));
             i__9429 = ((i__9429) + (((x10_long)1ll)))) {
            x10_long n__9430 = i__9429;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__9424 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__9430)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__9425 = ::x10::lang::Rail< x10_byte >::_make(((n__9430) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__9426 =
              ::x10::lang::Rail< x10_long >::_make(((n__9430) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__9348min__9416 = ((x10_long)0ll);
            x10_long i__9348max__9417 = n__9430;
            {
                x10_long i__9418;
                for (i__9418 = i__9348min__9416; ((i__9418) <= (i__9348max__9417));
                     i__9418 = ((i__9418) + (((x10_long)1ll))))
                {
                    x10_long i__9419 = i__9418;
                    ::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__set(
                      i__9419, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__9426)->x10::lang::Rail< x10_long >::__set(
                      i__9419, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__set(
              n__9430, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__set(
              ((n__9430) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__set(
              ((n__9430) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__9364min__9420 = ((x10_long)0ll);
            x10_long i__9364max__9421 = ((((x10_long)(N__9424))) - (((x10_long)1ll)));
            {
                x10_long i__9422;
                for (i__9422 = i__9364min__9420; ((i__9422) <= (i__9364max__9421));
                     i__9422 = ((i__9422) + (((x10_long)1ll))))
                {
                    x10_long i__9423 = i__9422;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__9414 = ::bwt::SuffixArrayChar::_make(s__9425,
                                                                                     ((x10_long)(b)));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__9426 = aa__9414->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__9425));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__9426));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__9426)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__9430),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__9426)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__9430) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__9430),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__9430) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__9426,
                                                ((n__9430) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__9426,
                                                s__9425, ((n__9430) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__9415 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__9415),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__9425)->x10::lang::Rail< x10_byte >::__set(
                          k__9415, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__9415 = ((k__9415) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__9411 =
                      s__9425;
                    x10_long i__9412 = k__9415;
                    x10_byte r__9413 = ((x10_byte) ((::x10aux::nullCheck(a__9411)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__9412)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__9411)->x10::lang::Rail< x10_byte >::__set(
                      i__9412, r__9413);
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
