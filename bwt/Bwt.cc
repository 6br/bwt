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
#include <x10/io/File.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 8 "Bwt.x10"

//#line 10 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::String* input, x10_int k, x10_boolean isDigit) {
    
    //#line 7 "Bwt.x10"
    this->bwt::Bwt::__fieldInitializers_bwt_Bwt();
    
    //#line 11 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make(((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 12 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 13 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 15 "Bwt.x10"
    x10_long i__1870min__1953 = ((x10_long)0ll);
    x10_long i__1870max__1954 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__1955;
        for (i__1955 = i__1870min__1953; ((i__1955) <= (i__1870max__1954));
             i__1955 = ((i__1955) + (((x10_long)1ll)))) {
            x10_long i__1956 = i__1955;
            
            //#line 16 "Bwt.x10"
            x10_byte c__1951 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__1956);
            
            //#line 17 "Bwt.x10"
            x10_long base__1952;
            
            //#line 18 "Bwt.x10"
            if (isDigit) {
                
                //#line 19 "Bwt.x10"
                base__1952 = ((((x10_long)(c__1951))) - (((x10_long)47ll)));
            } else {
                
                //#line 21 "Bwt.x10"
                base__1952 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__1951) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__1951) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)3ll)))) + (((x10_long)1ll)));
            }
            
            //#line 23 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__1952));
        }
    }
    
    //#line 25 "Bwt.x10"
    x10_long i__1886min__1957 = ((x10_long)0ll);
    x10_long i__1886max__1958 = ((x10_long)2ll);
    {
        x10_long i__1959;
        for (i__1959 = i__1886min__1957; ((i__1959) <= (i__1886max__1958));
             i__1959 = ((i__1959) + (((x10_long)1ll)))) {
            x10_long i__1960 = i__1959;
            
            //#line 26 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 28 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 30 "Bwt.x10"
    this->FMGL(SA) = ::bwt::SuffixArray::_make(string, ((x10_long)(k)));
    
    //#line 31 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 32 "Bwt.x10"
    x10_long i__1902min__1961 = ((x10_long)0ll);
    x10_long i__1902max__1962 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1963;
        for (i__1963 = i__1902min__1961; ((i__1963) <= (i__1902max__1962));
             i__1963 = ((i__1963) + (((x10_long)1ll)))) {
            x10_long i__1964 = i__1963;
            
            //#line 33 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__1964)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* input, x10_int k,
                            x10_boolean isDigit) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(input, k, isDigit);
    return this_;
}



//#line 37 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::String* filename,
                            x10_int k) {
    
    //#line 7 "Bwt.x10"
    this->bwt::Bwt::__fieldInitializers_bwt_Bwt();
    
    //#line 38 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = ::bwt::Bwt::fileio(
                                              filename);
    
    //#line 39 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 40 "Bwt.x10"
    this->FMGL(SA) = ::bwt::SuffixArray::_make(string, ((x10_long)(k)));
    
    //#line 41 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 42 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::nanoTime()) - (time));
    
    //#line 43 "Bwt.x10"
    x10_long i__1918min__1965 = ((x10_long)0ll);
    x10_long i__1918max__1966 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1967;
        for (i__1967 = i__1918min__1965; ((i__1967) <= (i__1918max__1966));
             i__1967 = ((i__1967) + (((x10_long)1ll)))) {
            x10_long i__1968 = i__1967;
            
            //#line 44 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__1968)));
        }
    }
    
    //#line 46 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__2732),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* filename,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(filename, k);
    return this_;
}



//#line 49 "Bwt.x10"
void bwt::Bwt::strRail() {
 
}

//#line 53 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::fileio(::x10::lang::String* filename) {
    
    //#line 54 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 55 "Bwt.x10"
    ::x10::io::File* input = ::x10::io::File::_make(filename);
    
    //#line 56 "Bwt.x10"
    {
        ::x10::lang::Iterator<x10_byte>* c__1934;
        for (c__1934 = ::x10aux::nullCheck(input->bytes())->iterator();
             ::x10::lang::Iterator<x10_byte>::hasNext(::x10aux::nullCheck(c__1934));
             ) {
            x10_byte c = ::x10::lang::Iterator<x10_byte>::next(::x10aux::nullCheck(c__1934));
            
            //#line 57 "Bwt.x10"
            x10_long base = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)3ll)))) + (((x10_long)1ll)));
            
            //#line 58 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base));
        }
    }
    
    //#line 60 "Bwt.x10"
    x10_long i__1936min__1969 = ((x10_long)0ll);
    x10_long i__1936max__1970 = ((x10_long)2ll);
    {
        x10_long i__1971;
        for (i__1971 = i__1936min__1969; ((i__1971) <= (i__1936max__1970));
             i__1971 = ((i__1971) + (((x10_long)1ll)))) {
            x10_long i__1972 = i__1971;
            
            //#line 61 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 63 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 64 "Bwt.x10"
    return string;
    
}

//#line 67 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 69 "Bwt.x10"
    x10_int N = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                    ((x10_long)0ll)));
    
    //#line 70 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)1ll));
    
    //#line 71 "Bwt.x10"
    ::bwt::Bwt* bwa = ::bwt::Bwt::_make(file, N);
    
}

//#line 7 "Bwt.x10"
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

::x10::lang::String bwt::Bwt_Strings::sl__2732("Elapsed time: %ld nanotime.\n");

/* END of Bwt */
/*************************************************/
