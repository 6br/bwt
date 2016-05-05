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
    x10_long i__7772min__7883 = ((x10_long)0ll);
    x10_long i__7772max__7884 = n;
    {
        x10_long i__7885;
        for (i__7885 = i__7772min__7883; ((i__7885) <= (i__7772max__7884));
             i__7885 = ((i__7885) + (((x10_long)1ll)))) {
            x10_long i__7886 = i__7885;
            seen->x10::lang::Rail< x10_boolean >::__set(i__7886, false);
        }
    }
    
    //#line 7 "SuffixArrayTestChar.x10"
    x10_long i__7788min__7887 = ((x10_long)0ll);
    x10_long i__7788max__7888 = n;
    {
        x10_long i__7889;
        for (i__7889 = i__7788min__7887; ((i__7889) <= (i__7788max__7888));
             i__7889 = ((i__7889) + (((x10_long)1ll)))) {
            x10_long i__7890 = i__7889;
            seen->x10::lang::Rail< x10_boolean >::__set(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                          i__7890),
                                                        true);
        }
    }
    
    //#line 8 "SuffixArrayTestChar.x10"
    x10_long i__7804min__7891 = ((x10_long)0ll);
    x10_long i__7804max__7892 = n;
    {
        x10_long i__7893;
        for (i__7893 = i__7804min__7891; ((i__7893) <= (i__7804max__7892));
             i__7893 = ((i__7893) + (((x10_long)1ll)))) {
            x10_long i__7894 = i__7893;
            if (!(seen->x10::lang::Rail< x10_boolean >::__apply(i__7894)))
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
    x10_long i__7820min__7895 = ((x10_long)0ll);
    x10_long i__7820max__7896 = ((n) - (((x10_long)1ll)));
    {
        x10_long i__7897;
        for (i__7897 = i__7820min__7895; ((i__7897) <= (i__7820max__7896));
             i__7897 = ((i__7897) + (((x10_long)1ll)))) {
            x10_long i__7898 = i__7897;
            
            //#line 22 "SuffixArrayTestChar.x10"
            if (!(::bwt::SuffixArrayTestChar::sleq(s, s, ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                           i__7898),
                                                   ::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__7898) + (((x10_long)1ll)))))))
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
    x10_long i__7868min__7915 = ((x10_long)2ll);
    x10_long i__7868max__7916 = nmax;
    {
        x10_long i__7917;
        for (i__7917 = i__7868min__7915; ((i__7917) <= (i__7868max__7916));
             i__7917 = ((i__7917) + (((x10_long)1ll)))) {
            x10_long n__7918 = i__7917;
            
            //#line 43 "SuffixArrayTestChar.x10"
            x10_int N__7912 = ::x10::lang::DoubleNatives::toInt(((::x10::lang::Math::pow(
                                                                    bl,
                                                                    n__7918)) + (0.5)));
            
            //#line 44 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_byte >* s__7913 = ::x10::lang::Rail< x10_byte >::_make(((n__7918) + (((x10_long)3ll))));
            
            //#line 45 "SuffixArrayTestChar.x10"
            ::x10::lang::Rail< x10_long >* sa_result__7914 =
              ::x10::lang::Rail< x10_long >::_make(((n__7918) + (((x10_long)3ll))));
            
            //#line 46 "SuffixArrayTestChar.x10"
            x10_long i__7836min__7904 = ((x10_long)0ll);
            x10_long i__7836max__7905 = n__7918;
            {
                x10_long i__7906;
                for (i__7906 = i__7836min__7904; ((i__7906) <= (i__7836max__7905));
                     i__7906 = ((i__7906) + (((x10_long)1ll))))
                {
                    x10_long i__7907 = i__7906;
                    ::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__set(
                      i__7907, ((x10_byte)1));
                    ::x10aux::nullCheck(sa_result__7914)->x10::lang::Rail< x10_long >::__set(
                      i__7907, ((x10_long)1ll));
                }
            }
            
            //#line 47 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__set(
              n__7918, ((x10_byte)0));
            
            //#line 48 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__set(
              ((n__7918) + (((x10_long)1ll))), ((x10_byte)0));
            
            //#line 49 "SuffixArrayTestChar.x10"
            ::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__set(
              ((n__7918) + (((x10_long)2ll))), ((x10_byte)0));
            
            //#line 50 "SuffixArrayTestChar.x10"
            x10_long i__7852min__7908 = ((x10_long)0ll);
            x10_long i__7852max__7909 = ((((x10_long)(N__7912))) - (((x10_long)1ll)));
            {
                x10_long i__7910;
                for (i__7910 = i__7852min__7908; ((i__7910) <= (i__7852max__7909));
                     i__7910 = ((i__7910) + (((x10_long)1ll))))
                {
                    x10_long i__7911 = i__7910;
                    
                    //#line 51 "SuffixArrayTestChar.x10"
                    ::bwt::SuffixArrayChar* aa__7902 = ::bwt::SuffixArrayChar::_make(s__7913,
                                                                                     ((x10_long)(b)),
                                                                                     ((x10_byte)11));
                    
                    //#line 52 "SuffixArrayTestChar.x10"
                    sa_result__7914 = aa__7902->run();
                    
                    //#line 53 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(s__7913));
                    
                    //#line 54 "SuffixArrayTestChar.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(sa_result__7914));
                    
                    //#line 55 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__7914)->x10::lang::Rail< x10_long >::__apply(
                                                                         n__7918),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 56 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(sa_result__7914)->x10::lang::Rail< x10_long >::__apply(
                                                                         ((n__7918) + (((x10_long)1ll)))),
                                                                       ((x10_long)0ll))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 57 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__apply(
                                                                         n__7918),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 58 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert((::x10aux::struct_equals(::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__apply(
                                                                         ((n__7918) + (((x10_long)1ll)))),
                                                                       ((x10_byte)0))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 59 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isPerm(
                                                sa_result__7914,
                                                ((n__7918) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 60 "SuffixArrayTestChar.x10"
                    #ifndef NO_ASSERTIONS
                    if (::x10aux::x10__assertions_enabled)
                        ::x10aux::x10__assert(::bwt::SuffixArrayTestChar::isSorted(
                                                sa_result__7914,
                                                s__7913, ((n__7918) - (((x10_long)1ll)))));
                    #endif//NO_ASSERTIONS
                    
                    //#line 62 "SuffixArrayTestChar.x10"
                    x10_long k__7903 = ((x10_long)0ll);
                    
                    //#line 63 "SuffixArrayTestChar.x10"
                    while ((::x10aux::struct_equals(::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__apply(
                                                      k__7903),
                                                    b))) {
                        
                        //#line 64 "SuffixArrayTestChar.x10"
                        ::x10aux::nullCheck(s__7913)->x10::lang::Rail< x10_byte >::__set(
                          k__7903, ((x10_byte)1));
                        
                        //#line 65 "SuffixArrayTestChar.x10"
                        k__7903 = ((k__7903) + (((x10_long)1ll)));
                    }
                    
                    //#line 67 "SuffixArrayTestChar.x10"
                    ::x10::lang::Rail< x10_byte >* a__7899 =
                      s__7913;
                    x10_long i__7900 = k__7903;
                    x10_byte r__7901 = ((x10_byte) ((::x10aux::nullCheck(a__7899)->x10::lang::Rail< x10_byte >::__apply(
                                                       i__7900)) + (((x10_byte)1))));
                    ::x10aux::nullCheck(a__7899)->x10::lang::Rail< x10_byte >::__set(
                      i__7900, r__7901);
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
