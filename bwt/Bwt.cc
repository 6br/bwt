/*************************************************/
/* START of Bwt */
#include <bwt/Bwt.h>

#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/util/Timer.h>
#include <bwt/SuffixArrayChar.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <bwt/SuffixArray.h>
#include <x10/lang/String.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>

//#line 16 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::Rail< x10_byte >* string, x10_long k,
                            x10_byte fast) {
    
    //#line 17 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::currentTimeMillis();
    
    //#line 18 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* sa;
    
    //#line 27 "Bwt.x10"
    ::bwt::SuffixArrayChar* SAC =  (new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar());
    (SAC)->::bwt::SuffixArrayChar::_constructor(string, k, fast);
    
    //#line 28 "Bwt.x10"
    sa = SAC->run();
    
    //#line 39 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::currentTimeMillis()) - (time));
    
    //#line 40 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__14779),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 41 "Bwt.x10"
    x10_long j = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    
    //#line 42 "Bwt.x10"
    if (((j) > (((x10_long)15ll)))) {
        j = ((x10_long)15ll);
    }
    
    //#line 43 "Bwt.x10"
    {
        x10_long i__12576;
        for (i__12576 = ((x10_long)0ll); ((i__12576) <= (j)); i__12576 =
                                                                ((i__12576) + (((x10_long)1ll))))
        {
            
            //#line 44 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_byte >::__apply(
                                                                   i__12576)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_byte >* string,
                            x10_long k, x10_byte fast) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(string, k, fast);
    return this_;
}



//#line 48 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::Rail< x10_long >* str,
                            x10_long k, x10_byte fast) {
    
    //#line 49 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::currentTimeMillis();
    
    //#line 50 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa;
    
    //#line 51 "Bwt.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((x10_long)(::x10aux::nullCheck(str)->FMGL(size))));
    
    //#line 52 "Bwt.x10"
    sa = ::x10::lang::Rail< x10_long >::_make((x10_long)(::x10aux::nullCheck(str)->FMGL(size)));
    
    //#line 53 "Bwt.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(str));
    
    //#line 54 "Bwt.x10"
    ::bwt::SuffixArray* SAC =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
    (SAC)->::bwt::SuffixArray::_constructor(str, k, sa, fast);
    
    //#line 55 "Bwt.x10"
    SAC->run();
    
    //#line 56 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::currentTimeMillis()) - (time));
    
    //#line 57 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__14779),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 58 "Bwt.x10"
    x10_long j = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    
    //#line 59 "Bwt.x10"
    if (((j) > (((x10_long)15ll)))) {
        j = ((x10_long)15ll);
    }
    
    //#line 60 "Bwt.x10"
    {
        x10_long i__12580;
        for (i__12580 = ((x10_long)0ll); ((i__12580) <= (j));
             i__12580 = ((i__12580) + (((x10_long)1ll))))
        {
            
            //#line 61 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__12580)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_long >* str,
                            x10_long k, x10_byte fast) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(str, k, fast);
    return this_;
}



//#line 65 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::strToRail(::x10::lang::String* input,
                                                   x10_boolean isDigit) {
    
    //#line 66 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (strBuilder)->::x10::util::RailBuilder<x10_long>::_constructor(
      ((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 67 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 68 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 70 "Bwt.x10"
    x10_long i__9793max__12584 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__12585;
        for (i__12585 = ((x10_long)0ll); ((i__12585) <= (i__9793max__12584));
             i__12585 = ((i__12585) + (((x10_long)1ll))))
        {
            
            //#line 71 "Bwt.x10"
            x10_byte c__12582 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                  i__12585);
            
            //#line 72 "Bwt.x10"
            x10_long base__12583;
            
            //#line 73 "Bwt.x10"
            if (isDigit) {
                
                //#line 74 "Bwt.x10"
                base__12583 = ((((x10_long)(c__12582))) - (((x10_long)47ll)));
            } else {
                
                //#line 77 "Bwt.x10"
                base__12583 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__12582) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__12582) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 79 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__12585) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 80 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__14780), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__12585) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 82 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__12583));
        }
    }
    
    //#line 84 "Bwt.x10"
    reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                             ((x10_long)0ll)));
    
    //#line 85 "Bwt.x10"
    return strBuilder->result();
    
}

//#line 88 "Bwt.x10"

//#line 91 "Bwt.x10"

//#line 94 "Bwt.x10"

//#line 97 "Bwt.x10"

//#line 100 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 101 "Bwt.x10"
    x10_long N = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)0ll)));
    
    //#line 102 "Bwt.x10"
    x10_long height = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)1ll)));
    
    //#line 103 "Bwt.x10"
    x10_byte thread = ::x10::lang::ByteNatives::parseByte(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)2ll)));
    
    //#line 104 "Bwt.x10"
    x10_long length = ((height) < (((x10_long)20ll))) ? (height)
      : (((((height) * (((x10_long)101ll)))) + (((x10_long)3ll))));
    
    //#line 105 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)3ll));
    
    //#line 107 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__14781)));
    
    //#line 108 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* e = ::x10::lang::Rail< x10_byte >::_make(length);
    
    //#line 111 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)1ll))), ((x10_byte)0));
    
    //#line 112 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)2ll))), ((x10_byte)0));
    
    //#line 113 "Bwt.x10"
    ::x10aux::nullCheck(e)->x10::lang::Rail< x10_byte >::__set(
      ((length) - (((x10_long)3ll))), ((x10_byte)0));
    
    //#line 114 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__14782)));
    
    //#line 116 "Bwt.x10"
    input_fgets_fixed_char((file)->c_str(), (e)->raw, height);;
    
    //#line 118 "Bwt.x10"
    ::bwt::Bwt* bwa =  (new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt());
    (bwa)->::bwt::Bwt::_constructor(e, N, thread);
    
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

::x10::lang::String bwt::Bwt_Strings::sl__14782("End Malloc");
::x10::lang::String bwt::Bwt_Strings::sl__14780("%ld MB loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__14779("Elapsed time: %ld millisec.\n");
::x10::lang::String bwt::Bwt_Strings::sl__14781("Start Malloc");

/* END of Bwt */
/*************************************************/
