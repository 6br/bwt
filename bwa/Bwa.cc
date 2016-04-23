/*************************************************/
/* START of Bwa */
#include <bwa/Bwa.h>

#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 6 "Bwa.x10"

//#line 7 "Bwa.x10"

//#line 8 "Bwa.x10"

//#line 9 "Bwa.x10"

//#line 10 "Bwa.x10"

//#line 11 "Bwa.x10"

//#line 12 "Bwa.x10"

//#line 14 "Bwa.x10"
void bwa::Bwa::_constructor(::x10::lang::String* input) {
    
    //#line 5 "Bwa.x10"
    this->bwa::Bwa::__fieldInitializers_bwa_Bwa();
    
    //#line 15 "Bwa.x10"
    ::x10::util::RailBuilder<x10_byte>* strBuilder = ::x10::util::RailBuilder<x10_byte>::_make(((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 16 "Bwa.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 17 "Bwa.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 19 "Bwa.x10"
    x10_long i__261min__294 = ((x10_long)0ll);
    x10_long i__261max__295 = ((x10_long)(length));
    {
        x10_long i__296;
        for (i__296 = i__261min__294; ((i__296) <= (i__261max__295)); i__296 =
                                                                        ((i__296) + (((x10_long)1ll))))
        {
            x10_long i__297 = i__296;
            
            //#line 20 "Bwa.x10"
            x10_byte c__292 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                i__297);
            
            //#line 21 "Bwa.x10"
            x10_byte base__293 = ((x10_byte) (((((x10_long)(((x10_byte) ((c__292) >> (0x7 & (x10_int)(((x10_long)2ll)))))))) ^ (((((x10_long)(((x10_byte) ((c__292) >> (0x7 & (x10_int)(((x10_long)3ll)))))))) & (((x10_long)3ll)))))));
            
            //#line 22 "Bwa.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_byte>*>(strBuilder->add(
                                                                     base__293));
        }
    }
    
    //#line 24 "Bwa.x10"
    this->FMGL(string) = strBuilder->result();
    
    //#line 27 "Bwa.x10"
    this->FMGL(n) = (x10_long)(::x10aux::nullCheck(this->FMGL(string))->FMGL(size));
    
    //#line 28 "Bwa.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "Bwa.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "Bwa.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "Bwa.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwa::Bwa* bwa::Bwa::_make(::x10::lang::String* input) {
    ::bwa::Bwa* this_ = new (::x10aux::alloc_z< ::bwa::Bwa>()) ::bwa::Bwa();
    this_->_constructor(input);
    return this_;
}



//#line 35 "Bwa.x10"
void bwa::Bwa::constructSample() {
    
    //#line 36 "Bwa.x10"
    ::x10::util::RailBuilder<x10_long>* r = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 38 "Bwa.x10"
    x10_long i__277min__298 = ((x10_long)0ll);
    x10_long i__277max__299 = ((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)));
    {
        x10_long i__300;
        for (i__300 = i__277min__298; ((i__300) <= (i__277max__299));
             i__300 = ((i__300) + (((x10_long)1ll)))) {
            x10_long i__301 = i__300;
            
            //#line 39 "Bwa.x10"
            if ((!::x10aux::struct_equals(((i__301) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 42 "Bwa.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(r)->add(
                                                                         i__301));
            }
            
        }
    }
    
    //#line 45 "Bwa.x10"
    this->FMGL(R) = ::x10aux::nullCheck(r)->result();
}

//#line 48 "Bwa.x10"
void bwa::Bwa::sortSample() {
 
}

//#line 52 "Bwa.x10"
void bwa::Bwa::sortNonSample() {
 
}

//#line 55 "Bwa.x10"
void bwa::Bwa::merge() {
 
}

//#line 58 "Bwa.x10"
void bwa::Bwa::show() {
 
}

//#line 62 "Bwa.x10"
void bwa::Bwa::radixPass(::x10::lang::Rail< x10_long >* a,
                         ::x10::lang::Rail< x10_long >* b,
                         ::x10::lang::Rail< x10_byte >* r,
                         x10_int n) {
 
}

//#line 66 "Bwa.x10"
void bwa::Bwa::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 67 "Bwa.x10"
    ::bwa::Bwa* bwa = ::bwa::Bwa::_make((&::bwa::Bwa_Strings::sl__302));
    
    //#line 68 "Bwa.x10"
    bwa->constructSample();
    
    //#line 69 "Bwa.x10"
    bwa->sortSample();
    
    //#line 70 "Bwa.x10"
    bwa->sortNonSample();
    
    //#line 71 "Bwa.x10"
    bwa->merge();
    
    //#line 72 "Bwa.x10"
    bwa->show();
}

//#line 5 "Bwa.x10"
::bwa::Bwa* bwa::Bwa::bwa__Bwa____this__bwa__Bwa() {
    return this;
    
}
void bwa::Bwa::__fieldInitializers_bwa_Bwa() {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwa::Bwa::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwa::Bwa::_deserializer);

void bwa::Bwa::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(string));
    buf.write(this->FMGL(n));
    buf.write(this->FMGL(n0));
    buf.write(this->FMGL(n1));
    buf.write(this->FMGL(n2));
    buf.write(this->FMGL(n02));
    buf.write(this->FMGL(R));
    
}

::x10::lang::Reference* ::bwa::Bwa::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwa::Bwa* this_ = new (::x10aux::alloc_z< ::bwa::Bwa>()) ::bwa::Bwa();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwa::Bwa::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(string) = buf.read< ::x10::lang::Rail< x10_byte >*>();
    FMGL(n) = buf.read<x10_long>();
    FMGL(n0) = buf.read<x10_long>();
    FMGL(n1) = buf.read<x10_long>();
    FMGL(n2) = buf.read<x10_long>();
    FMGL(n02) = buf.read<x10_long>();
    FMGL(R) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType bwa::Bwa::rtt;
void bwa::Bwa::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwa.Bwa",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwa::Bwa_Strings::sl__302("40300303120300300");

/* END of Bwa */
/*************************************************/
