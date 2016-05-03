/*************************************************/
/* START of Bwt */
#include <bwt/Bwt.h>

#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/util/Timer.h>
#include <bwt/SuffixArrayChar.h>
#include <bwt/SuffixArraySimple.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>

//#line 61 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::Rail< x10_byte >* string, x10_int k,
                            x10_boolean fast) {
    
    //#line 62 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::currentTimeMillis();
    
    //#line 63 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa;
    
    //#line 64 "Bwt.x10"
    if (fast) {
        
        //#line 72 "Bwt.x10"
        ::bwt::SuffixArrayChar* SAC =  (new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar());
        (SAC)->::bwt::SuffixArrayChar::_constructor(string, ((x10_long)(k)));
        
        //#line 73 "Bwt.x10"
        sa = SAC->run();
    } else {
        
        //#line 75 "Bwt.x10"
        ::x10::lang::Rail< x10_long >* str = ::x10::lang::Rail< x10_long >::_make((x10_long)(::x10aux::nullCheck(string)->FMGL(size)));
        
        //#line 76 "Bwt.x10"
        x10_long i__11983max__14909 = (((x10_long)(::x10aux::nullCheck(string)->FMGL(size))) - (((x10_long)1ll)));
        {
            x10_long i__14910;
            for (i__14910 = ((x10_long)0ll); ((i__14910) <= (i__11983max__14909));
                 i__14910 = ((i__14910) + (((x10_long)1ll)))) {
                
                //#line 77 "Bwt.x10"
                ::x10aux::nullCheck(str)->x10::lang::Rail< x10_long >::__set(
                  i__14910, ((x10_long)(::x10aux::nullCheck(string)->x10::lang::Rail< x10_byte >::__apply(
                                          i__14910))));
            }
        }
        
        //#line 79 "Bwt.x10"
        ::bwt::SuffixArraySimple* SAC =  (new (::x10aux::alloc_z< ::bwt::SuffixArraySimple>()) ::bwt::SuffixArraySimple());
        (SAC)->::bwt::SuffixArraySimple::_constructor(str,
                                                      ((x10_long)(k)));
        
        //#line 81 "Bwt.x10"
        sa = SAC->run();
    }
    
    //#line 83 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::currentTimeMillis()) - (time));
    
    //#line 84 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__18508),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 85 "Bwt.x10"
    x10_long j = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    
    //#line 86 "Bwt.x10"
    if (((j) > (((x10_long)15ll)))) {
        j = ((x10_long)15ll);
    }
    
    //#line 87 "Bwt.x10"
    {
        x10_long i__14913;
        for (i__14913 = ((x10_long)0ll); ((i__14913) <= (j));
             i__14913 = ((i__14913) + (((x10_long)1ll))))
        {
            
            //#line 88 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__14913)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_byte >* string,
                            x10_int k, x10_boolean fast) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(string, k, fast);
    return this_;
}



//#line 92 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::strToRail(::x10::lang::String* input,
                                                   x10_boolean isDigit) {
    
    //#line 93 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (strBuilder)->::x10::util::RailBuilder<x10_long>::_constructor(
      ((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 94 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 95 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 97 "Bwt.x10"
    x10_long i__12015max__14917 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__14918;
        for (i__14918 = ((x10_long)0ll); ((i__14918) <= (i__12015max__14917));
             i__14918 = ((i__14918) + (((x10_long)1ll))))
        {
            
            //#line 98 "Bwt.x10"
            x10_byte c__14915 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                  i__14918);
            
            //#line 99 "Bwt.x10"
            x10_long base__14916;
            
            //#line 100 "Bwt.x10"
            if (isDigit) {
                
                //#line 101 "Bwt.x10"
                base__14916 = ((((x10_long)(c__14915))) - (((x10_long)47ll)));
            } else {
                
                //#line 104 "Bwt.x10"
                base__14916 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__14915) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__14915) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 106 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__14918) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 107 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__18509), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__14918) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 109 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__14916));
        }
    }
    
    //#line 111 "Bwt.x10"
    reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                             ((x10_long)0ll)));
    
    //#line 112 "Bwt.x10"
    return strBuilder->result();
    
}

//#line 115 "Bwt.x10"

//#line 118 "Bwt.x10"

//#line 121 "Bwt.x10"

//#line 124 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 126 "Bwt.x10"
    x10_int N = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                    ((x10_long)0ll)));
    
    //#line 127 "Bwt.x10"
    x10_long height = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)1ll)));
    
    //#line 128 "Bwt.x10"
    x10_long length = ((height) < (((x10_long)100ll))) ? (height)
      : (((((height) * (((x10_long)101ll)))) + (((x10_long)3ll))));
    
    //#line 129 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)2ll));
    
    //#line 130 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__18510)));
    
    //#line 131 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* e = ::x10::lang::Rail< x10_byte >::_make(length);
    
    //#line 132 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)1ll))), ((x10_byte)0));
    
    //#line 133 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)2ll))), ((x10_byte)0));
    
    //#line 134 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)3ll))), ((x10_byte)0));
    
    //#line 135 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__18511)));
    
    //#line 136 "Bwt.x10"
    input_fgets_fixed_char((file)->c_str(), (e)->raw, height);;
    
    //#line 137 "Bwt.x10"
    ::bwt::Bwt* bwa =  (new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt());
    (bwa)->::bwt::Bwt::_constructor(e, N, true);
    
}

//#line 12 "Bwt.x10"
::bwt::Bwt* bwt::Bwt::bwt__Bwt____this__bwt__Bwt() {
    return this;
    
}
void bwt::Bwt::__fieldInitializers_bwt_Bwt() {
 
}
const ::x10aux::serialization_id_t bwt::Bwt::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::Bwt::_deserializer);

void bwt::Bwt::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::bwt::Bwt::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::Bwt::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType bwt::Bwt::rtt;
void bwt::Bwt::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.Bwt",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::Bwt_Strings::sl__18511("End Malloc");
::x10::lang::String bwt::Bwt_Strings::sl__18509("%ld MB loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__18508("Elapsed time: %ld millisec.\n");
::x10::lang::String bwt::Bwt_Strings::sl__18510("Start Malloc");

/* END of Bwt */
/*************************************************/
