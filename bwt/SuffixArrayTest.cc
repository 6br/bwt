/*************************************************/
/* START of SuffixArrayTest */
#include <bwt/SuffixArrayTest.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <bwt/SuffixArray.h>
#include <x10/lang/Long.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "SuffixArrayTest.x10"
void bwt::SuffixArrayTest::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 5 "SuffixArrayTest.x10"
    ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make((__extension__ ({
                                                            ::x10::lang::Rail< x10_long >* t__2231 =
                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)19ll), false);
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)0ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)1ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)2ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)3ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)4ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)5ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)6ll),
                                                              ((x10_long)2ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)7ll),
                                                              ((x10_long)3ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)8ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)9ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)10ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)11ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)12ll),
                                                              ((x10_long)4ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)13ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)14ll),
                                                              ((x10_long)1ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)15ll),
                                                              ((x10_long)0ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)16ll),
                                                              ((x10_long)0ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)17ll),
                                                              ((x10_long)0ll));
                                                            t__2231->x10::lang::Rail< x10_long >::__set(
                                                              ((x10_long)18ll),
                                                              ((x10_long)0ll));
                                                            t__2231;
                                                        }))
                                                        ,
                                                        ((x10_long)5ll));
    
    //#line 6 "SuffixArrayTest.x10"
    ::x10::lang::Rail< x10_long >* sa = bwa->run();
    
    //#line 7 "SuffixArrayTest.x10"
    x10_long i__1486min__1501 = ((x10_long)0ll);
    x10_long i__1486max__1502 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1503;
        for (i__1503 = i__1486min__1501; ((i__1503) <= (i__1486max__1502));
             i__1503 = ((i__1503) + (((x10_long)1ll)))) {
            x10_long i__1504 = i__1503;
            
            //#line 8 "SuffixArrayTest.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__1504)));
        }
    }
    
}

//#line 3 "SuffixArrayTest.x10"
::bwt::SuffixArrayTest* bwt::SuffixArrayTest::bwt__SuffixArrayTest____this__bwt__SuffixArrayTest(
  ) {
    return this;
    
}
void bwt::SuffixArrayTest::_constructor() {
    this->bwt::SuffixArrayTest::__fieldInitializers_bwt_SuffixArrayTest();
}
::bwt::SuffixArrayTest* bwt::SuffixArrayTest::_make() {
    ::bwt::SuffixArrayTest* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayTest>()) ::bwt::SuffixArrayTest();
    this_->_constructor();
    return this_;
}


void bwt::SuffixArrayTest::__fieldInitializers_bwt_SuffixArrayTest(
  ) {
 
}
const ::x10aux::serialization_id_t bwt::SuffixArrayTest::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArrayTest::_deserializer);

void bwt::SuffixArrayTest::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::bwt::SuffixArrayTest::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArrayTest* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayTest>()) ::bwt::SuffixArrayTest();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArrayTest::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType bwt::SuffixArrayTest::rtt;
void bwt::SuffixArrayTest::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayTest",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of SuffixArrayTest */
/*************************************************/
