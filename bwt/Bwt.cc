/*************************************************/
/* START of Bwt */
#include <bwt/Bwt.h>

#include <bwt/SuffixArray.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Timer.h>
#include <x10/util/StringBuilder.h>
#include <x10/io/File.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>

//#line 16 "Bwt.x10"

//#line 18 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::String* input, x10_int k, x10_boolean isDigit) {
    
    //#line 12 "Bwt.x10"
    this->bwt::Bwt::__fieldInitializers_bwt_Bwt();
    
    //#line 19 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make(((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 20 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 21 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 23 "Bwt.x10"
    x10_long i__2167min__2268 = ((x10_long)0ll);
    x10_long i__2167max__2269 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__2270;
        for (i__2270 = i__2167min__2268; ((i__2270) <= (i__2167max__2269));
             i__2270 = ((i__2270) + (((x10_long)1ll)))) {
            x10_long i__2271 = i__2270;
            
            //#line 24 "Bwt.x10"
            x10_byte c__2266 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__2271);
            
            //#line 25 "Bwt.x10"
            x10_long base__2267;
            
            //#line 26 "Bwt.x10"
            if (isDigit) {
                
                //#line 27 "Bwt.x10"
                base__2267 = ((((x10_long)(c__2266))) - (((x10_long)47ll)));
            } else {
                
                //#line 30 "Bwt.x10"
                base__2267 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__2266) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__2266) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 32 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__2271) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 33 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3053), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__2271) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 35 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__2267));
        }
    }
    
    //#line 37 "Bwt.x10"
    x10_long i__2183min__2272 = ((x10_long)0ll);
    x10_long i__2183max__2273 = ((x10_long)2ll);
    {
        x10_long i__2274;
        for (i__2274 = i__2183min__2272; ((i__2274) <= (i__2183max__2273));
             i__2274 = ((i__2274) + (((x10_long)1ll)))) {
            x10_long i__2275 = i__2274;
            
            //#line 38 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 40 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 42 "Bwt.x10"
    this->FMGL(SA) = ::bwt::SuffixArray::_make(string, ((x10_long)(k)));
    
    //#line 43 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 44 "Bwt.x10"
    x10_long i__2199min__2276 = ((x10_long)0ll);
    x10_long i__2199max__2277 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2278;
        for (i__2278 = i__2199min__2276; ((i__2278) <= (i__2199max__2277));
             i__2278 = ((i__2278) + (((x10_long)1ll)))) {
            x10_long i__2279 = i__2278;
            
            //#line 45 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2279)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* input, x10_int k,
                            x10_boolean isDigit) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(input, k, isDigit);
    return this_;
}



//#line 49 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::String* filename,
                            x10_int k) {
    
    //#line 12 "Bwt.x10"
    this->bwt::Bwt::__fieldInitializers_bwt_Bwt();
    
    //#line 50 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = ::bwt::Bwt::fileio(
                                              filename);
    
    //#line 51 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 52 "Bwt.x10"
    this->FMGL(SA) = ::bwt::SuffixArray::_make(string, ((x10_long)(k)));
    
    //#line 53 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 54 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::nanoTime()) - (time));
    
    //#line 55 "Bwt.x10"
    x10_long i__2215min__2280 = ((x10_long)0ll);
    x10_long i__2215max__2281 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2282;
        for (i__2282 = i__2215min__2280; ((i__2282) <= (i__2215max__2281));
             i__2282 = ((i__2282) + (((x10_long)1ll)))) {
            x10_long i__2283 = i__2282;
            
            //#line 56 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2283)));
        }
    }
    
    //#line 58 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__3054),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* filename,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(filename, k);
    return this_;
}



//#line 61 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::strToRail(::x10::lang::String* input,
                                                   x10_boolean isDigit) {
    
    //#line 62 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make(((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 63 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 64 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 66 "Bwt.x10"
    x10_long i__2231min__2286 = ((x10_long)0ll);
    x10_long i__2231max__2287 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__2288;
        for (i__2288 = i__2231min__2286; ((i__2288) <= (i__2231max__2287));
             i__2288 = ((i__2288) + (((x10_long)1ll)))) {
            x10_long i__2289 = i__2288;
            
            //#line 67 "Bwt.x10"
            x10_byte c__2284 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__2289);
            
            //#line 68 "Bwt.x10"
            x10_long base__2285;
            
            //#line 69 "Bwt.x10"
            if (isDigit) {
                
                //#line 70 "Bwt.x10"
                base__2285 = ((((x10_long)(c__2284))) - (((x10_long)47ll)));
            } else {
                
                //#line 73 "Bwt.x10"
                base__2285 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__2284) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__2284) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 75 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__2289) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 76 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3053), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__2289) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 78 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__2285));
        }
    }
    
    //#line 80 "Bwt.x10"
    reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                             ((x10_long)0ll)));
    
    //#line 81 "Bwt.x10"
    return strBuilder->result();
    
}

//#line 84 "Bwt.x10"
::x10::lang::String* bwt::Bwt::fileioImproved(::x10::lang::String* filename) {
    
    //#line 85 "Bwt.x10"
    ::x10::util::StringBuilder* strBuilder = ::x10::util::StringBuilder::_make();
    
    //#line 86 "Bwt.x10"
    ::x10::io::File* input = ::x10::io::File::_make(filename);
    
    //#line 87 "Bwt.x10"
    x10_long j = ((x10_long)1ll);
    
    //#line 88 "Bwt.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* c__2247;
        for (c__2247 = ::x10aux::nullCheck(input->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(c__2247));
             ) {
            ::x10::lang::String* c = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(c__2247));
            
            //#line 89 "Bwt.x10"
            strBuilder->addString(c);
            
            //#line 90 "Bwt.x10"
            if ((::x10aux::struct_equals(((j) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 91 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3055), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((j) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 93 "Bwt.x10"
            j = ((j) + (((x10_long)1ll)));
        }
    }
    
    //#line 95 "Bwt.x10"
    ::x10::lang::String* string = strBuilder->result();
    
    //#line 96 "Bwt.x10"
    return string;
    
}

//#line 99 "Bwt.x10"

//#line 102 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::fileio(::x10::lang::String* filename) {
    
    //#line 103 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 104 "Bwt.x10"
    ::x10::io::File* input = ::x10::io::File::_make(filename);
    
    //#line 105 "Bwt.x10"
    x10_long j = ((x10_long)1ll);
    
    //#line 106 "Bwt.x10"
    {
        ::x10::lang::Iterator<x10_byte>* c__2249;
        for (c__2249 = ::x10aux::nullCheck(input->bytes())->iterator();
             ::x10::lang::Iterator<x10_byte>::hasNext(::x10aux::nullCheck(c__2249));
             ) {
            x10_byte c = ::x10::lang::Iterator<x10_byte>::next(::x10aux::nullCheck(c__2249));
            
            //#line 108 "Bwt.x10"
            x10_long base = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            
            //#line 109 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base));
            
            //#line 110 "Bwt.x10"
            if ((::x10aux::struct_equals(((j) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 111 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3053), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((j) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 113 "Bwt.x10"
            j = ((j) + (((x10_long)1ll)));
        }
    }
    
    //#line 115 "Bwt.x10"
    x10_long i__2251min__2290 = ((x10_long)0ll);
    x10_long i__2251max__2291 = ((x10_long)2ll);
    {
        x10_long i__2292;
        for (i__2292 = i__2251min__2290; ((i__2292) <= (i__2251max__2291));
             i__2292 = ((i__2292) + (((x10_long)1ll)))) {
            x10_long i__2293 = i__2292;
            
            //#line 116 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 118 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 119 "Bwt.x10"
    return string;
    
}

//#line 122 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 124 "Bwt.x10"
    x10_int N = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                    ((x10_long)0ll)));
    
    //#line 125 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)1ll));
    
    //#line 126 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* e = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 127 "Bwt.x10"
    fileiocpp((file)->c_str(), (e)->raw);;
    
    //#line 128 "Bwt.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(e));
}

//#line 12 "Bwt.x10"
::bwt::Bwt* bwt::Bwt::bwt__Bwt____this__bwt__Bwt() {
    return this;
    
}
void bwt::Bwt::__fieldInitializers_bwt_Bwt() {
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwt::Bwt::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::Bwt::_deserializer);

void bwt::Bwt::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(SA));
    
}

::x10::lang::Reference* ::bwt::Bwt::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::Bwt::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(SA) = buf.read< ::bwt::SuffixArray*>();
}

::x10aux::RuntimeType bwt::Bwt::rtt;
void bwt::Bwt::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.Bwt",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::Bwt_Strings::sl__3055("%ld MLine loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__3053("%ld MB loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__3054("Elapsed time: %ld nanotime.\n");

/* END of Bwt */
/*************************************************/
