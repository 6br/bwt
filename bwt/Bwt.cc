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
    x10_long i__2254min__2371 = ((x10_long)0ll);
    x10_long i__2254max__2372 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__2373;
        for (i__2373 = i__2254min__2371; ((i__2373) <= (i__2254max__2372));
             i__2373 = ((i__2373) + (((x10_long)1ll)))) {
            x10_long i__2374 = i__2373;
            
            //#line 24 "Bwt.x10"
            x10_byte c__2369 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__2374);
            
            //#line 25 "Bwt.x10"
            x10_long base__2370;
            
            //#line 26 "Bwt.x10"
            if (isDigit) {
                
                //#line 27 "Bwt.x10"
                base__2370 = ((((x10_long)(c__2369))) - (((x10_long)47ll)));
            } else {
                
                //#line 30 "Bwt.x10"
                base__2370 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__2369) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__2369) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 32 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__2374) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 33 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3160), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__2374) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 35 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__2370));
        }
    }
    
    //#line 37 "Bwt.x10"
    x10_long i__2270min__2375 = ((x10_long)0ll);
    x10_long i__2270max__2376 = ((x10_long)2ll);
    {
        x10_long i__2377;
        for (i__2377 = i__2270min__2375; ((i__2377) <= (i__2270max__2376));
             i__2377 = ((i__2377) + (((x10_long)1ll)))) {
            x10_long i__2378 = i__2377;
            
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
    x10_long i__2286min__2379 = ((x10_long)0ll);
    x10_long i__2286max__2380 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2381;
        for (i__2381 = i__2286min__2379; ((i__2381) <= (i__2286max__2380));
             i__2381 = ((i__2381) + (((x10_long)1ll)))) {
            x10_long i__2382 = i__2381;
            
            //#line 45 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2382)));
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
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__3161),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 56 "Bwt.x10"
    x10_long i__2302min__2383 = ((x10_long)0ll);
    x10_long i__2302max__2384 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2385;
        for (i__2385 = i__2302min__2383; ((i__2385) <= (i__2302max__2384));
             i__2385 = ((i__2385) + (((x10_long)1ll)))) {
            x10_long i__2386 = i__2385;
            
            //#line 57 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2386)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* filename,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(filename, k);
    return this_;
}



//#line 61 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::Rail< x10_long >* string,
                            x10_int k) {
    
    //#line 12 "Bwt.x10"
    this->bwt::Bwt::__fieldInitializers_bwt_Bwt();
    
    //#line 62 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 63 "Bwt.x10"
    this->FMGL(SA) = ::bwt::SuffixArray::_make(string, ((x10_long)(k)));
    
    //#line 64 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 65 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::nanoTime()) - (time));
    
    //#line 66 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__3161),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 67 "Bwt.x10"
    x10_long i__2318min__2387 = ((x10_long)0ll);
    x10_long i__2318max__2388 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__2389;
        for (i__2389 = i__2318min__2387; ((i__2389) <= (i__2318max__2388));
             i__2389 = ((i__2389) + (((x10_long)1ll)))) {
            x10_long i__2390 = i__2389;
            
            //#line 68 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__2390)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_long >* string,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(string, k);
    return this_;
}



//#line 72 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::strToRail(::x10::lang::String* input,
                                                   x10_boolean isDigit) {
    
    //#line 73 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make(((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 74 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 75 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 77 "Bwt.x10"
    x10_long i__2334min__2393 = ((x10_long)0ll);
    x10_long i__2334max__2394 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__2395;
        for (i__2395 = i__2334min__2393; ((i__2395) <= (i__2334max__2394));
             i__2395 = ((i__2395) + (((x10_long)1ll)))) {
            x10_long i__2396 = i__2395;
            
            //#line 78 "Bwt.x10"
            x10_byte c__2391 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__2396);
            
            //#line 79 "Bwt.x10"
            x10_long base__2392;
            
            //#line 80 "Bwt.x10"
            if (isDigit) {
                
                //#line 81 "Bwt.x10"
                base__2392 = ((((x10_long)(c__2391))) - (((x10_long)47ll)));
            } else {
                
                //#line 84 "Bwt.x10"
                base__2392 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__2391) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__2391) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 86 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__2396) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 87 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3160), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__2396) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 89 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__2392));
        }
    }
    
    //#line 91 "Bwt.x10"
    reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                             ((x10_long)0ll)));
    
    //#line 92 "Bwt.x10"
    return strBuilder->result();
    
}

//#line 95 "Bwt.x10"
::x10::lang::String* bwt::Bwt::fileioImproved(::x10::lang::String* filename) {
    
    //#line 96 "Bwt.x10"
    ::x10::util::StringBuilder* strBuilder = ::x10::util::StringBuilder::_make();
    
    //#line 97 "Bwt.x10"
    ::x10::io::File* input = ::x10::io::File::_make(filename);
    
    //#line 98 "Bwt.x10"
    x10_long j = ((x10_long)1ll);
    
    //#line 99 "Bwt.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* c__2350;
        for (c__2350 = ::x10aux::nullCheck(input->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(c__2350));
             ) {
            ::x10::lang::String* c = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(c__2350));
            
            //#line 100 "Bwt.x10"
            strBuilder->addString(c);
            
            //#line 101 "Bwt.x10"
            if ((::x10aux::struct_equals(((j) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 102 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3162), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((j) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 104 "Bwt.x10"
            j = ((j) + (((x10_long)1ll)));
        }
    }
    
    //#line 106 "Bwt.x10"
    ::x10::lang::String* string = strBuilder->result();
    
    //#line 107 "Bwt.x10"
    return string;
    
}

//#line 110 "Bwt.x10"

//#line 113 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::fileio(::x10::lang::String* filename) {
    
    //#line 114 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 115 "Bwt.x10"
    ::x10::io::File* input = ::x10::io::File::_make(filename);
    
    //#line 116 "Bwt.x10"
    x10_long j = ((x10_long)1ll);
    
    //#line 117 "Bwt.x10"
    {
        ::x10::lang::Iterator<x10_byte>* c__2352;
        for (c__2352 = ::x10aux::nullCheck(input->bytes())->iterator();
             ::x10::lang::Iterator<x10_byte>::hasNext(::x10aux::nullCheck(c__2352));
             ) {
            x10_byte c = ::x10::lang::Iterator<x10_byte>::next(::x10aux::nullCheck(c__2352));
            
            //#line 119 "Bwt.x10"
            x10_long base = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            
            //#line 120 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base));
            
            //#line 121 "Bwt.x10"
            if ((::x10aux::struct_equals(((j) % ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll))))),
                                         ((x10_long)0ll))))
            {
                
                //#line 122 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__3160), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((j) / ::x10aux::zeroCheck(((((x10_long)1024ll)) * (((x10_long)1024ll)))))));
            }
            
            //#line 124 "Bwt.x10"
            j = ((j) + (((x10_long)1ll)));
        }
    }
    
    //#line 126 "Bwt.x10"
    x10_long i__2354min__2397 = ((x10_long)0ll);
    x10_long i__2354max__2398 = ((x10_long)2ll);
    {
        x10_long i__2399;
        for (i__2399 = i__2354min__2397; ((i__2399) <= (i__2354max__2398));
             i__2399 = ((i__2399) + (((x10_long)1ll)))) {
            x10_long i__2400 = i__2399;
            
            //#line 127 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 129 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 130 "Bwt.x10"
    return string;
    
}

//#line 133 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 135 "Bwt.x10"
    x10_int N = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                    ((x10_long)0ll)));
    
    //#line 136 "Bwt.x10"
    x10_long length = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)1ll)));
    
    //#line 137 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)2ll));
    
    //#line 138 "Bwt.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__3163)));
    
    //#line 139 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* e = ::x10::lang::Rail< x10_long >::_make(length);
    
    //#line 140 "Bwt.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__3164)));
    
    //#line 141 "Bwt.x10"
    input_fgets((file)->c_str(), (e)->raw);;
    
    //#line 142 "Bwt.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(e->x10::lang::Rail< x10_long >::__apply(
                                                           ((x10_long)0ll))));
    
    //#line 143 "Bwt.x10"
    ::bwt::Bwt* bwa = ::bwt::Bwt::_make(e, N);
    
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

::x10::lang::String bwt::Bwt_Strings::sl__3164("End Malloc");
::x10::lang::String bwt::Bwt_Strings::sl__3162("%ld MLine loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__3160("%ld MB loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__3161("Elapsed time: %ld nanotime.\n");
::x10::lang::String bwt::Bwt_Strings::sl__3163("Start Malloc");

/* END of Bwt */
/*************************************************/
