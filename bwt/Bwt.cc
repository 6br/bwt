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
#include <bwt/SuffixArraySimpleChar.h>
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
        
        //#line 65 "Bwt.x10"
        ::x10::lang::Rail< x10_long >* str = ::x10::lang::Rail< x10_long >::_make((x10_long)(::x10aux::nullCheck(string)->FMGL(size)));
        
        //#line 66 "Bwt.x10"
        x10_long size__10518 = (x10_long)(::x10aux::nullCheck(string)->FMGL(size));
        {
            x10_long idx__10519;
            for (idx__10519 = ((x10_long)0ll); ((idx__10519) < (size__10518));
                 idx__10519 = ((idx__10519) + (((x10_long)1ll)))) {
                x10_byte i__10520 = ::x10aux::nullCheck(string)->x10::lang::Rail< x10_byte >::__apply(
                                      idx__10519);
                
                //#line 67 "Bwt.x10"
                ::x10aux::nullCheck(str)->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)(i__10520)), ((x10_long)(::x10aux::nullCheck(string)->x10::lang::Rail< x10_byte >::__apply(
                                                        ((x10_long)(i__10520))))));
            }
        }
        
        //#line 70 "Bwt.x10"
        ::bwt::SuffixArrayChar* SAC =  (new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar());
        (SAC)->::bwt::SuffixArrayChar::_constructor(string,
                                                    ((x10_long)(k)));
        
        //#line 71 "Bwt.x10"
        sa = SAC->run();
    } else {
        
        //#line 73 "Bwt.x10"
        ::bwt::SuffixArraySimpleChar* SAC =  (new (::x10aux::alloc_z< ::bwt::SuffixArraySimpleChar>()) ::bwt::SuffixArraySimpleChar());
        (SAC)->::bwt::SuffixArraySimpleChar::_constructor(
          string, ((x10_long)(k)));
        
        //#line 74 "Bwt.x10"
        sa = SAC->run();
    }
    
    //#line 76 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::currentTimeMillis()) - (time));
    
    //#line 77 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__12751),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 78 "Bwt.x10"
    x10_long j = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    
    //#line 79 "Bwt.x10"
    if (((j) > (((x10_long)15ll)))) {
        j = ((x10_long)15ll);
    }
    
    //#line 80 "Bwt.x10"
    {
        x10_long i__10522;
        for (i__10522 = ((x10_long)0ll); ((i__10522) <= (j));
             i__10522 = ((i__10522) + (((x10_long)1ll))))
        {
            
            //#line 81 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__10522)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_byte >* string,
                            x10_int k, x10_boolean fast) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(string, k, fast);
    return this_;
}



//#line 85 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::strToRail(::x10::lang::String* input,
                                                   x10_boolean isDigit) {
    
    //#line 86 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (strBuilder)->::x10::util::RailBuilder<x10_long>::_constructor(
      ((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 87 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 88 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 90 "Bwt.x10"
    x10_long i__8218max__10526 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__10527;
        for (i__10527 = ((x10_long)0ll); ((i__10527) <= (i__8218max__10526));
             i__10527 = ((i__10527) + (((x10_long)1ll))))
        {
            
            //#line 91 "Bwt.x10"
            x10_byte c__10524 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                  i__10527);
            
            //#line 92 "Bwt.x10"
            x10_long base__10525;
            
            //#line 93 "Bwt.x10"
            if (isDigit) {
                
                //#line 94 "Bwt.x10"
                base__10525 = ((((x10_long)(c__10524))) - (((x10_long)47ll)));
            } else {
                
                //#line 97 "Bwt.x10"
                base__10525 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__10524) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__10524) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 99 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__10527) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 100 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__12752), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__10527) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 102 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__10525));
        }
    }
    
    //#line 104 "Bwt.x10"
    reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                             ((x10_long)0ll)));
    
    //#line 105 "Bwt.x10"
    return strBuilder->result();
    
}

//#line 108 "Bwt.x10"

//#line 111 "Bwt.x10"

//#line 114 "Bwt.x10"

//#line 117 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 119 "Bwt.x10"
    x10_int N = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                    ((x10_long)0ll)));
    
    //#line 120 "Bwt.x10"
    x10_long height = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)1ll)));
    
    //#line 121 "Bwt.x10"
    x10_long length = ((height) < (((x10_long)100ll))) ? (height)
      : (((((height) * (((x10_long)101ll)))) + (((x10_long)3ll))));
    
    //#line 122 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)2ll));
    
    //#line 123 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__12753)));
    
    //#line 124 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* e = ::x10::lang::Rail< x10_byte >::_make(length);
    
    //#line 125 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)1ll))), ((x10_byte)0));
    
    //#line 126 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)2ll))), ((x10_byte)0));
    
    //#line 127 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)3ll))), ((x10_byte)0));
    
    //#line 128 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__12754)));
    
    //#line 129 "Bwt.x10"
    input_fgets_fixed_char((file)->c_str(), (e)->raw, height);;
    
    //#line 130 "Bwt.x10"
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

::x10::lang::String bwt::Bwt_Strings::sl__12754("End Malloc");
::x10::lang::String bwt::Bwt_Strings::sl__12752("%ld MB loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__12751("Elapsed time: %ld millisec.\n");
::x10::lang::String bwt::Bwt_Strings::sl__12753("Start Malloc");

/* END of Bwt */
/*************************************************/
