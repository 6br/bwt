/*************************************************/
/* START of SuffixArrayChar */
#include <bwt/SuffixArrayChar.h>

#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/util/RailBuilder.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/VoidFun_0_1.h>
#include <bwt/SuffixArray.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__1_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n02)) + (((x10_long)3ll))));
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__1* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__1>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__1* this_ = new (storage) bwt_SuffixArrayChar__closure__1(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__1(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:84";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__1_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__2_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(c) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(k)) + (((x10_long)1ll))));
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__2* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__2>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__2* this_ = new (storage) bwt_SuffixArrayChar__closure__2(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__2(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:101";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__2_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__3_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(saved_this->FMGL(n0));
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__3* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__3>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__3* this_ = new (storage) bwt_SuffixArrayChar__closure__3(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__3(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:102";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__3_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__4_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n02)) + (((x10_long)3ll))));
        
        //#line 104 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          saved_this->FMGL(n02), ((x10_long)0ll));
        
        //#line 105 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          ((saved_this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
        
        //#line 106 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          ((saved_this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
        
        //#line 107 "SuffixArrayChar.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 108 "SuffixArrayChar.x10"
        x10_long i__17164max__20426 = ((((((saved_this->FMGL(n)) + (saved_this->FMGL(n0)))) - (saved_this->FMGL(n1)))) - (((x10_long)1ll)));
        {
            x10_long i__20427;
            for (i__20427 = ((x10_long)0ll); ((i__20427) <= (i__17164max__20426));
                 i__20427 = ((i__20427) + (((x10_long)1ll))))
            {
                
                //#line 109 "SuffixArrayChar.x10"
                if ((!::x10aux::struct_equals(((i__20427) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                              ((x10_long)0ll))))
                {
                    
                    //#line 110 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                      j, i__20427);
                    
                    //#line 111 "SuffixArrayChar.x10"
                    j = ((j) + (((x10_long)1ll)));
                }
                
            }
        }
        
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__4>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__4* this_ = new (storage) bwt_SuffixArrayChar__closure__4(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__4(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:103-114";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__4_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class bwt_SuffixArrayChar__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArrayChar__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Rail< x10_long >* sa12){
        
        //#line 167 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(saved_this->FMGL(R), saved_this->FMGL(name),
                                                sa12, saved_this->FMGL(num_threads));
        
        //#line 168 "SuffixArrayChar.x10"
        bwa->run();
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__5>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__5* this_ = new (storage) bwt_SuffixArrayChar__closure__5(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__5(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:166-169";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__6_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class bwt_SuffixArrayChar__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArrayChar__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Rail< x10_long >* sa12){
     
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__6>();
        buf.record_reference(storage);
        bwt_SuffixArrayChar__closure__6* this_ = new (storage) bwt_SuffixArrayChar__closure__6();
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:171";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__6_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__7_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        x10_long i__17196max__20432 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__20433;
            for (i__20433 = ((x10_long)0ll); ((i__20433) <= (i__17196max__20432));
                 i__20433 = ((i__20433) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__20433), ((i__20433) + (((x10_long)1ll))));
            }
        }
        
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__7>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__7* this_ = new (storage) bwt_SuffixArrayChar__closure__7(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__7(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:174";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__7_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__8_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n)) + (((x10_long)3ll))));
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__8* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__8>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__8* this_ = new (storage) bwt_SuffixArrayChar__closure__8(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__8(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:175";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__8_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__9_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
          ((::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
              i__20440)) - (((x10_long)1ll))), i__20440);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__20440;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__20440);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__20440 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_saved_this, that_i__20440);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::bwt::SuffixArrayChar* saved_this, x10_long i__20440) : saved_this(saved_this), i__20440(i__20440) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:190";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__9_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__10_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n)) + (((x10_long)3ll))));
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__10* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__10>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__10* this_ = new (storage) bwt_SuffixArrayChar__closure__10(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__10(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:192";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__10_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__12_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbll = (__extension__ ({
            x10_long t_lb__20219 = t_lb;
            x10_long t_ub__20220 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__20221 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__20222 = p_lb;
            
            //#line 228 "SuffixArrayChar.x10"
            x10_long t_mid__20223 = ((((t_lb) + (t_ub__20220))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 229 "SuffixArrayChar.x10"
            x10_long p_mid__20224 = ((((p_lb) + (p_ub__20221))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 230 "SuffixArrayChar.x10"
            while ((((((t_ub__20220) - (t_lb__20219))) > (((x10_long)1ll))) ||
                   ((((p_ub__20221) - (p_lb__20222))) > (((x10_long)1ll)))))
            {
                
                //#line 231 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 215 "SuffixArrayChar.x10"
                        x10_boolean ret__20227;
                        goto __ret__20228; __ret__20228: {
                        {
                            
                            //#line 216 "SuffixArrayChar.x10"
                            x10_long i__20229 = saved_this->getI(
                                                  t_mid__20223);
                            
                            //#line 217 "SuffixArrayChar.x10"
                            x10_long j__20230 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__20224);
                            
                            //#line 218 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__20223)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__20232 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__20229)));
                                    x10_long a__20233 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__20223)) + (saved_this->FMGL(n0))));
                                    x10_long b__20234 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__20230)));
                                    x10_long b__20235 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__20230) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__20232) < (b__20234)) ||
                                    ((::x10aux::struct_equals(a__20232,
                                                              b__20234)) &&
                                    ((a__20233) <= (b__20235))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__20223)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__20229))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__20229) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__20223)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__20230))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__20230) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__20230) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 221 "SuffixArrayChar.x10"
                                ret__20227 = true;
                                goto __ret__20228_end_;
                            } else {
                                
                                //#line 223 "SuffixArrayChar.x10"
                                ret__20227 = false;
                                goto __ret__20228_end_;
                            }
                            
                        }goto __ret__20228_end_; __ret__20228_end_: ;
                        }
                        ret__20227;
                        }))
                        ) {
                        
                        //#line 232 "SuffixArrayChar.x10"
                        t_lb__20219 = t_mid__20223;
                        
                        //#line 233 "SuffixArrayChar.x10"
                        p_ub__20221 = p_mid__20224;
                    } else {
                        
                        //#line 235 "SuffixArrayChar.x10"
                        t_ub__20220 = t_mid__20223;
                        
                        //#line 236 "SuffixArrayChar.x10"
                        p_lb__20222 = p_mid__20224;
                    }
                    
                
                //#line 238 "SuffixArrayChar.x10"
                t_mid__20223 = ((((t_lb__20219) + (t_ub__20220))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 239 "SuffixArrayChar.x10"
                p_mid__20224 = ((((p_lb__20222) + (p_ub__20221))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 241 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__20236 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21697 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21697->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__20219);
                                                                                                t__21697->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__20222);
                                                                                                t__21697;
                                                                                            }))
                                                                                            );
            lb__20236;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll;
        x10aux::captured_struct_lval<x10_long> t_lb;
        ::x10::lang::Rail< x10_long >* lbl;
        x10aux::captured_struct_lval<x10_long> p_lb;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbll);
            buf.write(this->t_lb);
            buf.write(this->lbl);
            buf.write(this->p_lb);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__12* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__12>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__12* this_ = new (storage) bwt_SuffixArrayChar__closure__12(that_lbll, that_t_lb, that_lbl, that_p_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__12(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lbl, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArrayChar* saved_this) : lbll(lbll), t_lb(t_lb), lbl(lbl), p_lb(p_lb), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:255";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__12_CLOSURE
    #ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__11_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbl = (__extension__ ({
            x10_long t_lb__20183 = t_lb;
            x10_long t_ub__20184 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__20185 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__20186 = p_lb;
            
            //#line 228 "SuffixArrayChar.x10"
            x10_long t_mid__20187 = ((((t_lb) + (t_ub__20184))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 229 "SuffixArrayChar.x10"
            x10_long p_mid__20188 = ((((p_lb) + (p_ub__20185))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 230 "SuffixArrayChar.x10"
            while ((((((t_ub__20184) - (t_lb__20183))) > (((x10_long)1ll))) ||
                   ((((p_ub__20185) - (p_lb__20186))) > (((x10_long)1ll)))))
            {
                
                //#line 231 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 215 "SuffixArrayChar.x10"
                        x10_boolean ret__20191;
                        goto __ret__20192; __ret__20192: {
                        {
                            
                            //#line 216 "SuffixArrayChar.x10"
                            x10_long i__20193 = saved_this->getI(
                                                  t_mid__20187);
                            
                            //#line 217 "SuffixArrayChar.x10"
                            x10_long j__20194 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__20188);
                            
                            //#line 218 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__20187)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__20196 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__20193)));
                                    x10_long a__20197 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__20187)) + (saved_this->FMGL(n0))));
                                    x10_long b__20198 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__20194)));
                                    x10_long b__20199 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__20194) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__20196) < (b__20198)) ||
                                    ((::x10aux::struct_equals(a__20196,
                                                              b__20198)) &&
                                    ((a__20197) <= (b__20199))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__20187)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__20193))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__20193) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__20187)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__20194))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__20194) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__20194) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 221 "SuffixArrayChar.x10"
                                ret__20191 = true;
                                goto __ret__20192_end_;
                            } else {
                                
                                //#line 223 "SuffixArrayChar.x10"
                                ret__20191 = false;
                                goto __ret__20192_end_;
                            }
                            
                        }goto __ret__20192_end_; __ret__20192_end_: ;
                        }
                        ret__20191;
                        }))
                        ) {
                        
                        //#line 232 "SuffixArrayChar.x10"
                        t_lb__20183 = t_mid__20187;
                        
                        //#line 233 "SuffixArrayChar.x10"
                        p_ub__20185 = p_mid__20188;
                    } else {
                        
                        //#line 235 "SuffixArrayChar.x10"
                        t_ub__20184 = t_mid__20187;
                        
                        //#line 236 "SuffixArrayChar.x10"
                        p_lb__20186 = p_mid__20188;
                    }
                    
                
                //#line 238 "SuffixArrayChar.x10"
                t_mid__20187 = ((((t_lb__20183) + (t_ub__20184))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 239 "SuffixArrayChar.x10"
                p_mid__20188 = ((((p_lb__20186) + (p_ub__20185))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 241 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__20200 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21691 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21691->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__20183);
                                                                                                t__21691->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__20186);
                                                                                                t__21691;
                                                                                            }))
                                                                                            );
            lb__20200;
            }))
            ;
        {
            
            //#line 254 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20499 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 255 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__12)))bwt_SuffixArrayChar__closure__12(&(lbll), &(t_lb), lbl, &(p_lb), saved_this))));
                    
                    //#line 256 "SuffixArrayChar.x10"
                    lblr = (__extension__ ({
                        x10_long t_lb__20255 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__20256 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__20257 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__20258 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 228 "SuffixArrayChar.x10"
                        x10_long t_mid__20259 = ((((t_lb__20255) + (t_ub__20256))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 229 "SuffixArrayChar.x10"
                        x10_long p_mid__20260 = ((((p_lb__20258) + (p_ub__20257))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 230 "SuffixArrayChar.x10"
                        while ((((((t_ub__20256) - (t_lb__20255))) > (((x10_long)1ll))) ||
                               ((((p_ub__20257) - (p_lb__20258))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 231 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 215 "SuffixArrayChar.x10"
                                    x10_boolean ret__20263;
                                    goto __ret__20264; __ret__20264: {
                                    {
                                        
                                        //#line 216 "SuffixArrayChar.x10"
                                        x10_long i__20265 =
                                          saved_this->getI(
                                            t_mid__20259);
                                        
                                        //#line 217 "SuffixArrayChar.x10"
                                        x10_long j__20266 =
                                          ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__20260);
                                        
                                        //#line 218 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__20259)) < (saved_this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__20268 =
                                                  ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__20265)));
                                                x10_long a__20269 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__20259)) + (saved_this->FMGL(n0))));
                                                x10_long b__20270 =
                                                  ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__20266)));
                                                x10_long b__20271 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__20266) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__20268) < (b__20270)) ||
                                                ((::x10aux::struct_equals(a__20268,
                                                                          b__20270)) &&
                                                ((a__20269) <= (b__20271))));
                                            }))
                                            ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__20259)) >= (saved_this->FMGL(n0))) &&
                                            saved_this->leq(
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            i__20265))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            ((i__20265) + (((x10_long)1ll)))))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__20259)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            j__20266))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            ((j__20266) + (((x10_long)1ll)))))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((j__20266) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 221 "SuffixArrayChar.x10"
                                            ret__20263 = true;
                                            goto __ret__20264_end_;
                                        } else {
                                            
                                            //#line 223 "SuffixArrayChar.x10"
                                            ret__20263 = false;
                                            goto __ret__20264_end_;
                                        }
                                        
                                    }goto __ret__20264_end_; __ret__20264_end_: ;
                                    }
                                    ret__20263;
                                    }))
                                    ) {
                                    
                                    //#line 232 "SuffixArrayChar.x10"
                                    t_lb__20255 = t_mid__20259;
                                    
                                    //#line 233 "SuffixArrayChar.x10"
                                    p_ub__20257 = p_mid__20260;
                                } else {
                                    
                                    //#line 235 "SuffixArrayChar.x10"
                                    t_ub__20256 = t_mid__20259;
                                    
                                    //#line 236 "SuffixArrayChar.x10"
                                    p_lb__20258 = p_mid__20260;
                                }
                                
                            
                            //#line 238 "SuffixArrayChar.x10"
                            t_mid__20259 = ((((t_lb__20255) + (t_ub__20256))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 239 "SuffixArrayChar.x10"
                            p_mid__20260 = ((((p_lb__20258) + (p_ub__20257))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 241 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__20272 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__21703 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__21703->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__20255);
                                                                   t__21703->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__20258);
                                                                   t__21703;
                                                               }))
                                                               );
                        lb__20272;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc40) {
                    {
                        ::x10::lang::CheckedThrowable* ct__20497 =
                          __exc40;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__20497);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__20499);
            }
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl;
        x10aux::captured_struct_lval<x10_long> t_lb;
        ::x10::lang::Rail< x10_long >* lb;
        x10aux::captured_struct_lval<x10_long> p_lb;
        ::bwt::SuffixArrayChar* saved_this;
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll;
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbl);
            buf.write(this->t_lb);
            buf.write(this->lb);
            buf.write(this->p_lb);
            buf.write(this->saved_this);
            buf.write(this->lbll);
            buf.write(this->lblr);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__11* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__11>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            bwt_SuffixArrayChar__closure__11* this_ = new (storage) bwt_SuffixArrayChar__closure__11(that_lbl, that_t_lb, that_lb, that_p_lb, that_saved_this, that_lbll, that_lblr);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__11(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArrayChar* saved_this, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), saved_this(saved_this), lbll(lbll), lblr(lblr) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:253-257";
        }
        
        };
        
        #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__11_CLOSURE
        #ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__13_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbrr = (__extension__ ({
            x10_long t_lb__20327 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__20328 = t_ub;
            x10_long p_ub__20329 = p_ub;
            x10_long p_lb__20330 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 228 "SuffixArrayChar.x10"
            x10_long t_mid__20331 = ((((t_lb__20327) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 229 "SuffixArrayChar.x10"
            x10_long p_mid__20332 = ((((p_lb__20330) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 230 "SuffixArrayChar.x10"
            while ((((((t_ub__20328) - (t_lb__20327))) > (((x10_long)1ll))) ||
                   ((((p_ub__20329) - (p_lb__20330))) > (((x10_long)1ll)))))
            {
                
                //#line 231 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 215 "SuffixArrayChar.x10"
                        x10_boolean ret__20335;
                        goto __ret__20336; __ret__20336: {
                        {
                            
                            //#line 216 "SuffixArrayChar.x10"
                            x10_long i__20337 = saved_this->getI(
                                                  t_mid__20331);
                            
                            //#line 217 "SuffixArrayChar.x10"
                            x10_long j__20338 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__20332);
                            
                            //#line 218 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__20331)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__20340 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__20337)));
                                    x10_long a__20341 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__20331)) + (saved_this->FMGL(n0))));
                                    x10_long b__20342 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__20338)));
                                    x10_long b__20343 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__20338) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__20340) < (b__20342)) ||
                                    ((::x10aux::struct_equals(a__20340,
                                                              b__20342)) &&
                                    ((a__20341) <= (b__20343))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__20331)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__20337))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__20337) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__20331)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__20338))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__20338) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__20338) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 221 "SuffixArrayChar.x10"
                                ret__20335 = true;
                                goto __ret__20336_end_;
                            } else {
                                
                                //#line 223 "SuffixArrayChar.x10"
                                ret__20335 = false;
                                goto __ret__20336_end_;
                            }
                            
                        }goto __ret__20336_end_; __ret__20336_end_: ;
                        }
                        ret__20335;
                        }))
                        ) {
                        
                        //#line 232 "SuffixArrayChar.x10"
                        t_lb__20327 = t_mid__20331;
                        
                        //#line 233 "SuffixArrayChar.x10"
                        p_ub__20329 = p_mid__20332;
                    } else {
                        
                        //#line 235 "SuffixArrayChar.x10"
                        t_ub__20328 = t_mid__20331;
                        
                        //#line 236 "SuffixArrayChar.x10"
                        p_lb__20330 = p_mid__20332;
                    }
                    
                
                //#line 238 "SuffixArrayChar.x10"
                t_mid__20331 = ((((t_lb__20327) + (t_ub__20328))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 239 "SuffixArrayChar.x10"
                p_mid__20332 = ((((p_lb__20330) + (p_ub__20329))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 241 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__20344 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21715 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21715->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__20327);
                                                                                                t__21715->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__20330);
                                                                                                t__21715;
                                                                                            }))
                                                                                            );
            lb__20344;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr;
        ::x10::lang::Rail< x10_long >* lbr;
        x10aux::captured_struct_lval<x10_long> t_ub;
        x10aux::captured_struct_lval<x10_long> p_ub;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbrr);
            buf.write(this->lbr);
            buf.write(this->t_ub);
            buf.write(this->p_ub);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__13* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__13>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbr = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_t_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            x10aux::captured_struct_lval<x10_long> that_p_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__13* this_ = new (storage) bwt_SuffixArrayChar__closure__13(that_lbrr, that_lbr, that_t_ub, that_p_ub, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__13(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr, ::x10::lang::Rail< x10_long >* lbr, x10aux::captured_struct_lval<x10_long> t_ub, x10aux::captured_struct_lval<x10_long> p_ub, ::bwt::SuffixArrayChar* saved_this) : lbrr(lbrr), lbr(lbr), t_ub(t_ub), p_ub(p_ub), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:260";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__13_CLOSURE
    #ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__14_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 289 "SuffixArrayChar.x10"
        x10_long k__20450 = krail->x10::lang::Rail< x10_long >::__apply(l__20461);
        
        //#line 290 "SuffixArrayChar.x10"
        x10_long t__20451 = trail->x10::lang::Rail< x10_long >::__apply(l__20461);
        
        //#line 291 "SuffixArrayChar.x10"
        x10_long p__20452 = prail->x10::lang::Rail< x10_long >::__apply(l__20461);
        
        //#line 292 "SuffixArrayChar.x10"
        while (((k__20450) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__20461)))) {
            
            //#line 293 "SuffixArrayChar.x10"
            k__20450 = ((k__20450) + (((x10_long)1ll)));
            
            //#line 294 "SuffixArrayChar.x10"
            x10_long i__20453 = saved_this->getI(t__20451);
            
            //#line 295 "SuffixArrayChar.x10"
            x10_long j__20454 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__20452);
            
            //#line 297 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__20451)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__20456 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i__20453)));
                    x10_long a__20457 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__20451)) + (saved_this->FMGL(n0))));
                    x10_long b__20458 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j__20454)));
                    x10_long b__20459 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__20454) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__20456) < (b__20458)) || ((::x10aux::struct_equals(a__20456,
                                                                            b__20458)) &&
                    ((a__20457) <= (b__20459))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__20451)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              i__20453))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((i__20453) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__20451)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              j__20454))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((j__20454) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__20454) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 300 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__20461,
                                                 ((x10_long)0ll))) &&
                    ((k__20450) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__20461)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 301 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__20450, i__20453);
                }
                
                //#line 303 "SuffixArrayChar.x10"
                t__20451 = ((t__20451) + (((x10_long)1ll)));
                
                //#line 304 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__20451, saved_this->FMGL(n02))))
                {
                    
                    //#line 305 "SuffixArrayChar.x10"
                    k__20450 = ((k__20450) + (((x10_long)1ll)));
                    
                    //#line 306 "SuffixArrayChar.x10"
                    x10_long i__17260max__20444 = ((((saved_this->FMGL(n0)) - (p__20452))) - (((x10_long)1ll)));
                    {
                        x10_long i__20445;
                        for (i__20445 = ((x10_long)0ll); ((i__20445) <= (i__17260max__20444));
                             i__20445 = ((i__20445) + (((x10_long)1ll))))
                        {
                            
                            //#line 307 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__20450, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__20452));
                            
                            //#line 308 "SuffixArrayChar.x10"
                            p__20452 = ((p__20452) + (((x10_long)1ll)));
                            
                            //#line 309 "SuffixArrayChar.x10"
                            k__20450 = ((k__20450) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 313 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__20461,
                                                 ((x10_long)0ll))) &&
                    ((k__20450) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__20461)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 314 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__20450, j__20454);
                }
                
                //#line 316 "SuffixArrayChar.x10"
                p__20452 = ((p__20452) + (((x10_long)1ll)));
                
                //#line 317 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__20452, saved_this->FMGL(n0))))
                {
                    
                    //#line 318 "SuffixArrayChar.x10"
                    k__20450 = ((k__20450) + (((x10_long)1ll)));
                    
                    //#line 319 "SuffixArrayChar.x10"
                    x10_long i__17276max__20447 = ((((saved_this->FMGL(n02)) - (t__20451))) - (((x10_long)1ll)));
                    {
                        x10_long i__20448;
                        for (i__20448 = ((x10_long)0ll); ((i__20448) <= (i__17276max__20447));
                             i__20448 = ((i__20448) + (((x10_long)1ll))))
                        {
                            
                            //#line 320 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__20450, saved_this->getI(
                                          t__20451));
                            
                            //#line 321 "SuffixArrayChar.x10"
                            t__20451 = ((t__20451) + (((x10_long)1ll)));
                            
                            //#line 322 "SuffixArrayChar.x10"
                            k__20450 = ((k__20450) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__20461;
    ::x10::lang::Rail< x10_long >* trail;
    ::x10::lang::Rail< x10_long >* prail;
    ::x10::lang::Rail< x10_long >* nrail;
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->krail);
        buf.write(this->l__20461);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__14* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__14>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__20461 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__14* this_ = new (storage) bwt_SuffixArrayChar__closure__14(that_krail, that_l__20461, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__14(::x10::lang::Rail< x10_long >* krail, x10_long l__20461, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArrayChar* saved_this) : krail(krail), l__20461(l__20461), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:288-327";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__14_CLOSURE

//#line 12 "SuffixArrayChar.x10"

//#line 13 "SuffixArrayChar.x10"

//#line 14 "SuffixArrayChar.x10"

//#line 15 "SuffixArrayChar.x10"

//#line 16 "SuffixArrayChar.x10"

//#line 17 "SuffixArrayChar.x10"

//#line 18 "SuffixArrayChar.x10"

//#line 19 "SuffixArrayChar.x10"

//#line 20 "SuffixArrayChar.x10"

//#line 21 "SuffixArrayChar.x10"

//#line 22 "SuffixArrayChar.x10"

//#line 23 "SuffixArrayChar.x10"

//#line 24 "SuffixArrayChar.x10"

//#line 25 "SuffixArrayChar.x10"

//#line 27 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize, x10_byte threads) {
    
    //#line 9 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* this__20400 = this;
    ::x10aux::nullCheck(this__20400)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20400)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20400)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20400)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20400)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20400)->FMGL(name) = ((x10_long)0ll);
    
    //#line 28 "SuffixArrayChar.x10"
    this->FMGL(string) = input;
    
    //#line 29 "SuffixArrayChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 30 "SuffixArrayChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 31 "SuffixArrayChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 32 "SuffixArrayChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 33 "SuffixArrayChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 34 "SuffixArrayChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
    
    //#line 35 "SuffixArrayChar.x10"
    this->FMGL(num_threads) = threads;
}
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                    x10_long charsize,
                                                    x10_byte threads)
{
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    this_->_constructor(input, charsize, threads);
    return this_;
}



//#line 38 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairs(::x10::lang::Rail< x10_byte >* keys,
                                     ::x10::lang::Rail< x10_long >* values,
                                     x10_ulong num_elems, x10_int num_threads,
                                     x10_byte offset){
    parallel_radix_sort::SortPairsByte((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 41 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairsThree(::x10::lang::Rail< x10_byte >* keys,
                                          ::x10::lang::Rail< x10_long >* values,
                                          x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsByteThree((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 45 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                     ::x10::lang::Rail< x10_long >* b,
                                     x10_byte rOffs, x10_long nt) {
    
    //#line 46 "SuffixArrayChar.x10"
    x10_long i__17068max__20408 = this->FMGL(k);
    {
        x10_long i__20409;
        for (i__20409 = ((x10_long)0ll); ((i__20409) <= (i__17068max__20408));
             i__20409 = ((i__20409) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__20409, ((x10_long)0ll));
        }
    }
    
    //#line 47 "SuffixArrayChar.x10"
    x10_long i__17084max__20411 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__20412;
        for (i__20412 = ((x10_long)0ll); ((i__20412) <= (i__17084max__20411));
             i__20412 = ((i__20412) + (((x10_long)1ll))))
        {
            
            //#line 48 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__20401 = this->FMGL(c);
            x10_long i__20402 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__20412)) + (((x10_long)(rOffs)))))));
            x10_long r__20403 = ((::x10aux::nullCheck(a__20401)->x10::lang::Rail< x10_long >::__apply(
                                    i__20402)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__20401)->x10::lang::Rail< x10_long >::__set(
              i__20402, r__20403);
        }
    }
    
    //#line 50 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 51 "SuffixArrayChar.x10"
    x10_long i__17100max__20414 = this->FMGL(k);
    {
        x10_long i__20415;
        for (i__20415 = ((x10_long)0ll); ((i__20415) <= (i__17100max__20414));
             i__20415 = ((i__20415) + (((x10_long)1ll))))
        {
            
            //#line 52 "SuffixArrayChar.x10"
            x10_long t__20404 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                  i__20415);
            
            //#line 53 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__20415, sum);
            
            //#line 54 "SuffixArrayChar.x10"
            sum = ((sum) + (t__20404));
        }
    }
    
    //#line 56 "SuffixArrayChar.x10"
    x10_long i__17116max__20417 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__20418;
        for (i__20418 = ((x10_long)0ll); ((i__20418) <= (i__17116max__20417));
             i__20418 = ((i__20418) + (((x10_long)1ll))))
        {
            
            //#line 57 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__20418)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__20418));
            
            //#line 58 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__20405 = this->FMGL(c);
            x10_long i__20406 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__20418)) + (((x10_long)(rOffs)))))));
            x10_long r__20407 = ((::x10aux::nullCheck(a__20405)->x10::lang::Rail< x10_long >::__apply(
                                    i__20406)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__20405)->x10::lang::Rail< x10_long >::__set(
              i__20406, r__20407);
        }
    }
    
}

//#line 62 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 64 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 66 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 68 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 69 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 72 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 73 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 74 "SuffixArrayChar.x10"
    x10_long i__17132max__20420 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__20421;
        for (i__20421 = ((x10_long)0ll); ((i__20421) <= (i__17132max__20420));
             i__20421 = ((i__20421) + (((x10_long)1ll))))
        {
            
            //#line 75 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__20421), ((x10_long)0ll))))
            {
                
                //#line 76 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__20421)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 79 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 82 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    {
        
        //#line 83 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__20471 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 84 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__1)))bwt_SuffixArrayChar__closure__1(this))));
                
                //#line 85 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 86 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 87 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 88 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 89 "SuffixArrayChar.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 90 "SuffixArrayChar.x10"
                x10_long i__17148max__20423 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__20424;
                    for (i__20424 = ((x10_long)0ll); ((i__20424) <= (i__17148max__20423));
                         i__20424 = ((i__20424) + (((x10_long)1ll))))
                    {
                        
                        //#line 91 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__20424) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 92 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__20424);
                            
                            //#line 93 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc32) {
            {
                ::x10::lang::CheckedThrowable* ct__20469 =
                  __exc32;
                {
                    ::x10::xrx::Runtime::pushException(ct__20469);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__20471);
    }
}

//#line 99 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSampleR() {
    {
        
        //#line 100 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__20478 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 101 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__2)))bwt_SuffixArrayChar__closure__2(this))));
                
                //#line 102 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__3)))bwt_SuffixArrayChar__closure__3(this))));
                
                //#line 103 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__4)))bwt_SuffixArrayChar__closure__4(this))));
                
                //#line 115 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 116 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 117 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 118 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc34) {
            {
                ::x10::lang::CheckedThrowable* ct__20476 =
                  __exc34;
                {
                    ::x10::xrx::Runtime::pushException(ct__20476);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__20478);
    }
}

//#line 123 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 124 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 125 "SuffixArrayChar.x10"
    this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                         size, ((x10_int) (this->FMGL(num_threads))));
    
    //#line 126 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArrayChar_Strings::sl__21798),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 141 "SuffixArrayChar.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 142 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 143 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 144 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 145 "SuffixArrayChar.x10"
    x10_long i__17180max__20429 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__20430;
        for (i__20430 = ((x10_long)0ll); ((i__20430) <= (i__17180max__20429));
             i__20430 = ((i__20430) + (((x10_long)1ll))))
        {
            
            //#line 146 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__20430)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__20430)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__20430)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 147 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 148 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__20430));
                
                //#line 149 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__20430)) + (((x10_long)1ll))));
                
                //#line 150 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__20430)) + (((x10_long)2ll))));
            }
            
            //#line 153 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__20430)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 154 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__20430)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 156 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__20430)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 163 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 164 "SuffixArrayChar.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 165 "SuffixArrayChar.x10"
        this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make((((x10_long)(::x10aux::nullCheck(this->FMGL(R))->FMGL(size))) + (((x10_long)3ll))));
        
        //#line 166 "SuffixArrayChar.x10"
        ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>* sa_iter =
          reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(sizeof(bwt_SuffixArrayChar__closure__5)))bwt_SuffixArrayChar__closure__5(this)));
        
        //#line 170 "SuffixArrayChar.x10"
        ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(sa_iter), 
          this->FMGL(SA12));
        
        //#line 171 "SuffixArrayChar.x10"
        sa_iter = reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(sizeof(bwt_SuffixArrayChar__closure__6)))bwt_SuffixArrayChar__closure__6()));
        {
            
            //#line 173 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20484 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(this))));
                    
                    //#line 175 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(this))));
                    
                    //#line 176 "SuffixArrayChar.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 177 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 178 "SuffixArrayChar.x10"
                    x10_long i__17212max__20435 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__20436;
                        for (i__20436 = ((x10_long)0ll); ((i__20436) <= (i__17212max__20435));
                             i__20436 = ((i__20436) + (((x10_long)1ll))))
                        {
                            
                            //#line 179 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__20436)) < (this->FMGL(n0))))
                            {
                                
                                //#line 181 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__20436))));
                                
                                //#line 182 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 185 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 187 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc37) {
                {
                    ::x10::lang::CheckedThrowable* ct__20482 =
                      __exc37;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__20482);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__20484);
        }
    } else {
        {
            
            //#line 190 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20489 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__17228max__20438 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__20439;
                        for (i__20439 = ((x10_long)0ll); ((i__20439) <= (i__17228max__20438));
                             i__20439 = ((i__20439) + (((x10_long)1ll))))
                        {
                            x10_long i__20440 = i__20439;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(this, i__20440))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc38) {
                {
                    ::x10::lang::CheckedThrowable* ct__20487 =
                      __exc38;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__20487);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__20489);
        }
        {
            
            //#line 191 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20494 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 192 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__10)))bwt_SuffixArrayChar__closure__10(this))));
                    
                    //#line 193 "SuffixArrayChar.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 194 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 195 "SuffixArrayChar.x10"
                    x10_long i__17244max__20441 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__20442;
                        for (i__20442 = ((x10_long)0ll); ((i__20442) <= (i__17244max__20441));
                             i__20442 = ((i__20442) + (((x10_long)1ll))))
                        {
                            
                            //#line 196 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__20442)) < (this->FMGL(n0))))
                            {
                                
                                //#line 198 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__20442))));
                                
                                //#line 199 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 202 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 204 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc39) {
                {
                    ::x10::lang::CheckedThrowable* ct__20492 =
                      __exc39;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__20492);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__20494);
        }
    }
    
    //#line 208 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__21799)));
    
    //#line 210 "SuffixArrayChar.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)(this->FMGL(num_threads))))))
    {
        
        //#line 211 "SuffixArrayChar.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 212 "SuffixArrayChar.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 213 "SuffixArrayChar.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 214 "SuffixArrayChar.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 245 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__20147 = t_lb;
            x10_long t_ub__20148 = t_ub;
            x10_long p_ub__20149 = p_ub;
            x10_long p_lb__20150 = p_lb;
            
            //#line 228 "SuffixArrayChar.x10"
            x10_long t_mid__20151 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 229 "SuffixArrayChar.x10"
            x10_long p_mid__20152 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 230 "SuffixArrayChar.x10"
            while ((((((t_ub__20148) - (t_lb__20147))) > (((x10_long)1ll))) ||
                   ((((p_ub__20149) - (p_lb__20150))) > (((x10_long)1ll)))))
            {
                
                //#line 231 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 215 "SuffixArrayChar.x10"
                        x10_boolean ret__20155;
                        goto __ret__20156; __ret__20156: {
                        {
                            
                            //#line 216 "SuffixArrayChar.x10"
                            x10_long i__20157 = this->getI(
                                                  t_mid__20151);
                            
                            //#line 217 "SuffixArrayChar.x10"
                            x10_long j__20158 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__20152);
                            
                            //#line 218 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__20151)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__20160 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__20157)));
                                    x10_long a__20161 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__20151)) + (this->FMGL(n0))));
                                    x10_long b__20162 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__20158)));
                                    x10_long b__20163 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__20158) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__20160) < (b__20162)) ||
                                    ((::x10aux::struct_equals(a__20160,
                                                              b__20162)) &&
                                    ((a__20161) <= (b__20163))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__20151)) >= (this->FMGL(n0))) &&
                                this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        i__20157))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((i__20157) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__20151)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        j__20158))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((j__20158) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__20158) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 221 "SuffixArrayChar.x10"
                                ret__20155 = true;
                                goto __ret__20156_end_;
                            } else {
                                
                                //#line 223 "SuffixArrayChar.x10"
                                ret__20155 = false;
                                goto __ret__20156_end_;
                            }
                            
                        }goto __ret__20156_end_; __ret__20156_end_: ;
                        }
                        ret__20155;
                        }))
                        ) {
                        
                        //#line 232 "SuffixArrayChar.x10"
                        t_lb__20147 = t_mid__20151;
                        
                        //#line 233 "SuffixArrayChar.x10"
                        p_ub__20149 = p_mid__20152;
                    } else {
                        
                        //#line 235 "SuffixArrayChar.x10"
                        t_ub__20148 = t_mid__20151;
                        
                        //#line 236 "SuffixArrayChar.x10"
                        p_lb__20150 = p_mid__20152;
                    }
                    
                
                //#line 238 "SuffixArrayChar.x10"
                t_mid__20151 = ((((t_lb__20147) + (t_ub__20148))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 239 "SuffixArrayChar.x10"
                p_mid__20152 = ((((p_lb__20150) + (p_ub__20149))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 241 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__20164 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21685 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21685->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__20147);
                                                                                                t__21685->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__20150);
                                                                                                t__21685;
                                                                                            }))
                                                                                            );
            lb__20164;
            }))
            ;
            
        
        //#line 246 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 247 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 248 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 249 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 250 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 251 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 252 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20509 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 253 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__11)))bwt_SuffixArrayChar__closure__11(&(lbl), &(t_lb), lb, &(p_lb), this, &(lbll), &(lblr)))));
                    
                    //#line 258 "SuffixArrayChar.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__20291 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__20292 = t_ub;
                        x10_long p_ub__20293 = p_ub;
                        x10_long p_lb__20294 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 228 "SuffixArrayChar.x10"
                        x10_long t_mid__20295 = ((((t_lb__20291) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 229 "SuffixArrayChar.x10"
                        x10_long p_mid__20296 = ((((p_lb__20294) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 230 "SuffixArrayChar.x10"
                        while ((((((t_ub__20292) - (t_lb__20291))) > (((x10_long)1ll))) ||
                               ((((p_ub__20293) - (p_lb__20294))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 231 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 215 "SuffixArrayChar.x10"
                                    x10_boolean ret__20299;
                                    goto __ret__20300; __ret__20300: {
                                    {
                                        
                                        //#line 216 "SuffixArrayChar.x10"
                                        x10_long i__20301 =
                                          this->getI(t_mid__20295);
                                        
                                        //#line 217 "SuffixArrayChar.x10"
                                        x10_long j__20302 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__20296);
                                        
                                        //#line 218 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__20295)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__20304 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__20301)));
                                                x10_long a__20305 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__20295)) + (this->FMGL(n0))));
                                                x10_long b__20306 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__20302)));
                                                x10_long b__20307 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__20302) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__20304) < (b__20306)) ||
                                                ((::x10aux::struct_equals(a__20304,
                                                                          b__20306)) &&
                                                ((a__20305) <= (b__20307))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__20295)) >= (this->FMGL(n0))) &&
                                            this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    i__20301))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((i__20301) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__20295)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    j__20302))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((j__20302) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__20302) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 221 "SuffixArrayChar.x10"
                                            ret__20299 = true;
                                            goto __ret__20300_end_;
                                        } else {
                                            
                                            //#line 223 "SuffixArrayChar.x10"
                                            ret__20299 = false;
                                            goto __ret__20300_end_;
                                        }
                                        
                                    }goto __ret__20300_end_; __ret__20300_end_: ;
                                    }
                                    ret__20299;
                                    }))
                                    ) {
                                    
                                    //#line 232 "SuffixArrayChar.x10"
                                    t_lb__20291 = t_mid__20295;
                                    
                                    //#line 233 "SuffixArrayChar.x10"
                                    p_ub__20293 = p_mid__20296;
                                } else {
                                    
                                    //#line 235 "SuffixArrayChar.x10"
                                    t_ub__20292 = t_mid__20295;
                                    
                                    //#line 236 "SuffixArrayChar.x10"
                                    p_lb__20294 = p_mid__20296;
                                }
                                
                            
                            //#line 238 "SuffixArrayChar.x10"
                            t_mid__20295 = ((((t_lb__20291) + (t_ub__20292))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 239 "SuffixArrayChar.x10"
                            p_mid__20296 = ((((p_lb__20294) + (p_ub__20293))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 241 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__20308 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__21709 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__21709->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__20291);
                                                                   t__21709->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__20294);
                                                                   t__21709;
                                                               }))
                                                               );
                        lb__20308;
                        }))
                        ;
                    {
                        
                        //#line 259 "SuffixArrayChar.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__20505 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 260 "SuffixArrayChar.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__13)))bwt_SuffixArrayChar__closure__13(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                                
                                //#line 261 "SuffixArrayChar.x10"
                                lbrl = (__extension__ ({
                                    x10_long t_lb__20363 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long t_ub__20364 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long p_ub__20365 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    x10_long p_lb__20366 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 228 "SuffixArrayChar.x10"
                                    x10_long t_mid__20367 =
                                      ((((t_lb__20363) + (t_ub__20364))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 229 "SuffixArrayChar.x10"
                                    x10_long p_mid__20368 =
                                      ((((p_lb__20366) + (p_ub__20365))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 230 "SuffixArrayChar.x10"
                                    while ((((((t_ub__20364) - (t_lb__20363))) > (((x10_long)1ll))) ||
                                           ((((p_ub__20365) - (p_lb__20366))) > (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 231 "SuffixArrayChar.x10"
                                        if ((__extension__ ({
                                                
                                                //#line 215 "SuffixArrayChar.x10"
                                                x10_boolean ret__20371;
                                                goto __ret__20372; __ret__20372: {
                                                {
                                                    
                                                    //#line 216 "SuffixArrayChar.x10"
                                                    x10_long i__20373 =
                                                      this->getI(
                                                        t_mid__20367);
                                                    
                                                    //#line 217 "SuffixArrayChar.x10"
                                                    x10_long j__20374 =
                                                      ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                        p_mid__20368);
                                                    
                                                    //#line 218 "SuffixArrayChar.x10"
                                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__20367)) < (this->FMGL(n0))) &&
                                                        (__extension__ ({
                                                            x10_long a__20376 =
                                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                            i__20373)));
                                                            x10_long a__20377 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                    t_mid__20367)) + (this->FMGL(n0))));
                                                            x10_long b__20378 =
                                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                            j__20374)));
                                                            x10_long b__20379 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((j__20374) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                            (((a__20376) < (b__20378)) ||
                                                            ((::x10aux::struct_equals(a__20376,
                                                                                      b__20378)) &&
                                                            ((a__20377) <= (b__20379))));
                                                        }))
                                                        ) ||
                                                        (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t_mid__20367)) >= (this->FMGL(n0))) &&
                                                        this->leq(
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        i__20373))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        ((i__20373) + (((x10_long)1ll)))))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                  t_mid__20367)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        j__20374))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        ((j__20374) + (((x10_long)1ll)))))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((j__20374) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                                    {
                                                        
                                                        //#line 221 "SuffixArrayChar.x10"
                                                        ret__20371 =
                                                          true;
                                                        goto __ret__20372_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 223 "SuffixArrayChar.x10"
                                                        ret__20371 =
                                                          false;
                                                        goto __ret__20372_end_;
                                                    }
                                                    
                                                }goto __ret__20372_end_; __ret__20372_end_: ;
                                                }
                                                ret__20371;
                                                }))
                                                ) {
                                                
                                                //#line 232 "SuffixArrayChar.x10"
                                                t_lb__20363 =
                                                  t_mid__20367;
                                                
                                                //#line 233 "SuffixArrayChar.x10"
                                                p_ub__20365 =
                                                  p_mid__20368;
                                            } else {
                                                
                                                //#line 235 "SuffixArrayChar.x10"
                                                t_ub__20364 =
                                                  t_mid__20367;
                                                
                                                //#line 236 "SuffixArrayChar.x10"
                                                p_lb__20366 =
                                                  p_mid__20368;
                                            }
                                            
                                        
                                        //#line 238 "SuffixArrayChar.x10"
                                        t_mid__20367 = ((((t_lb__20363) + (t_ub__20364))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        
                                        //#line 239 "SuffixArrayChar.x10"
                                        p_mid__20368 = ((((p_lb__20366) + (p_ub__20365))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        }
                                        
                                    
                                    //#line 241 "SuffixArrayChar.x10"
                                    ::x10::lang::Rail< x10_long >* lb__20380 =
                                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                               ::x10::lang::Rail< x10_long >* t__21721 =
                                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                               t__21721->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)0ll),
                                                                                 t_lb__20363);
                                                                               t__21721->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)1ll),
                                                                                 p_lb__20366);
                                                                               t__21721;
                                                                           }))
                                                                           );
                                    lb__20380;
                                    }))
                                    ;
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc41) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__20503 =
                                      __exc41;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__20503);
                                    }
                                }
                            }
                        ::x10::xrx::Runtime::stopFinish(fs__20505);
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc42) {
                    {
                        ::x10::lang::CheckedThrowable* ct__20507 =
                          __exc42;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__20507);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__20509);
            }
            
            //#line 266 "SuffixArrayChar.x10"
            x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 267 "SuffixArrayChar.x10"
            x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 268 "SuffixArrayChar.x10"
            x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 269 "SuffixArrayChar.x10"
            x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 270 "SuffixArrayChar.x10"
            x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 271 "SuffixArrayChar.x10"
            x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 272 "SuffixArrayChar.x10"
            x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 274 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21727 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)-1ll));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midll) - (((x10_long)1ll))));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midl) - (((x10_long)1ll))));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((midlr) - (((x10_long)1ll))));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((mid) - (((x10_long)1ll))));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midrl) - (((x10_long)1ll))));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midr) - (((x10_long)1ll))));
                                                                                            t__21727->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ((midrr) - (((x10_long)1ll))));
                                                                                            t__21727;
                                                                                        }))
                                                                                        );
            
            //#line 275 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21745 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midlr) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((mid) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((midrl) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midr) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midrr) + (((x10_long)1ll))));
                                                                                            t__21745->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              this->FMGL(n));
                                                                                            t__21745;
                                                                                        }))
                                                                                        );
            
            //#line 276 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21763 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)0ll));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21763;
                                                                                        }))
                                                                                        );
            
            //#line 277 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21781 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21781;
                                                                                        }))
                                                                                        );
            {
                
                //#line 288 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__20514 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long i__20460;
                            for (i__20460 = ((x10_long)0ll);
                                 ((i__20460) <= (((x10_long)7ll)));
                                 i__20460 = ((i__20460) + (((x10_long)1ll))))
                            {
                                x10_long l__20461 = i__20460;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__14)))bwt_SuffixArrayChar__closure__14(krail, l__20461, trail, prail, nrail, this))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc43) {
                    {
                        ::x10::lang::CheckedThrowable* ct__20512 =
                          __exc43;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__20512);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__20514);
            }
        } else {
            
            //#line 329 "SuffixArrayChar.x10"
            x10_long p = ((x10_long)0ll);
            
            //#line 330 "SuffixArrayChar.x10"
            x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
            
            //#line 331 "SuffixArrayChar.x10"
            x10_long k = ((x10_long)-1ll);
            
            //#line 332 "SuffixArrayChar.x10"
            while (((k) < (this->FMGL(n)))) {
                
                //#line 333 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 334 "SuffixArrayChar.x10"
                x10_long i = this->getI(t);
                
                //#line 335 "SuffixArrayChar.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p);
                
                //#line 337 "SuffixArrayChar.x10"
                if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__20388 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          i)));
                        x10_long a__20389 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__20390 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          j)));
                        x10_long b__20391 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__20388) < (b__20390)) || ((::x10aux::struct_equals(a__20388,
                                                                                b__20390)) &&
                        ((a__20389) <= (b__20391))));
                    }))
                    ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                              t)) >= (this->FMGL(n0))) &&
                    this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            i))), ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                ((i) + (((x10_long)1ll)))))),
                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            j))), ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                ((j) + (((x10_long)1ll)))))),
                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                {
                    
                    //#line 340 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, i);
                    
                    //#line 341 "SuffixArrayChar.x10"
                    t = ((t) + (((x10_long)1ll)));
                    
                    //#line 342 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                    {
                        
                        //#line 343 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 344 "SuffixArrayChar.x10"
                        x10_long i__17308max__20462 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__20463;
                            for (i__20463 = ((x10_long)0ll);
                                 ((i__20463) <= (i__17308max__20462));
                                 i__20463 = ((i__20463) + (((x10_long)1ll))))
                            {
                                
                                //#line 345 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                       p));
                                
                                //#line 346 "SuffixArrayChar.x10"
                                p = ((p) + (((x10_long)1ll)));
                                
                                //#line 347 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                } else {
                    
                    //#line 351 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, j);
                    
                    //#line 352 "SuffixArrayChar.x10"
                    p = ((p) + (((x10_long)1ll)));
                    
                    //#line 353 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                    {
                        
                        //#line 354 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 355 "SuffixArrayChar.x10"
                        x10_long i__17324max__20465 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__20466;
                            for (i__20466 = ((x10_long)0ll);
                                 ((i__20466) <= (i__17324max__20465));
                                 i__20466 = ((i__20466) + (((x10_long)1ll))))
                            {
                                
                                //#line 356 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, this->getI(t));
                                
                                //#line 357 "SuffixArrayChar.x10"
                                t = ((t) + (((x10_long)1ll)));
                                
                                //#line 358 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                }
                
            }
            
        }
        }
        
    
    //#line 366 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long b1, x10_long b2) {
        
        //#line 367 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 370 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long a3, x10_long b1,
                                          x10_long b2, x10_long b3) {
        
        //#line 371 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 374 "SuffixArrayChar.x10"
    x10_long bwt::SuffixArrayChar::getI(x10_long t) {
        
        //#line 375 "SuffixArrayChar.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 376 "SuffixArrayChar.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 378 "SuffixArrayChar.x10"
            return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
            
        }
        
    }
    
    //#line 9 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* bwt::SuffixArrayChar::bwt__SuffixArrayChar____this__bwt__SuffixArrayChar(
      ) {
        return this;
        
    }
    void bwt::SuffixArrayChar::__fieldInitializers_bwt_SuffixArrayChar(
      ) {
        this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        this->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        this->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        this->FMGL(name) = ((x10_long)0ll);
    }
    const ::x10aux::serialization_id_t bwt::SuffixArrayChar::_serialization_id = 
        ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArrayChar::_deserializer);
    
    void bwt::SuffixArrayChar::_serialize_body(::x10aux::serialization_buffer& buf) {
        buf.write(this->FMGL(string));
        buf.write(this->FMGL(n));
        buf.write(this->FMGL(n0));
        buf.write(this->FMGL(n1));
        buf.write(this->FMGL(n2));
        buf.write(this->FMGL(k));
        buf.write(this->FMGL(n02));
        buf.write(this->FMGL(R));
        buf.write(this->FMGL(SA12));
        buf.write(this->FMGL(SA));
        buf.write(this->FMGL(SA0));
        buf.write(this->FMGL(c));
        buf.write(this->FMGL(name));
        buf.write(this->FMGL(num_threads));
        
    }
    
    ::x10::lang::Reference* ::bwt::SuffixArrayChar::_deserializer(::x10aux::deserialization_buffer& buf) {
        ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
        buf.record_reference(this_);
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void bwt::SuffixArrayChar::_deserialize_body(::x10aux::deserialization_buffer& buf) {
        FMGL(string) = buf.read< ::x10::lang::Rail< x10_byte >*>();
        FMGL(n) = buf.read<x10_long>();
        FMGL(n0) = buf.read<x10_long>();
        FMGL(n1) = buf.read<x10_long>();
        FMGL(n2) = buf.read<x10_long>();
        FMGL(k) = buf.read<x10_long>();
        FMGL(n02) = buf.read<x10_long>();
        FMGL(R) = buf.read< ::x10::lang::Rail< x10_long >*>();
        FMGL(SA12) = buf.read< ::x10::lang::Rail< x10_long >*>();
        FMGL(SA) = buf.read< ::x10::lang::Rail< x10_long >*>();
        FMGL(SA0) = buf.read< ::x10::lang::Rail< x10_long >*>();
        FMGL(c) = buf.read< ::x10::lang::Rail< x10_long >*>();
        FMGL(name) = buf.read<x10_long>();
        FMGL(num_threads) = buf.read<x10_byte>();
    }
    
    ::x10aux::RuntimeType bwt::SuffixArrayChar::rtt;
    void bwt::SuffixArrayChar::_initRTT() {
        if (rtt.initStageOne(&rtt)) return;
        const ::x10aux::RuntimeType** parents = NULL; 
        rtt.initStageTwo("bwt.SuffixArrayChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
    }
    
    ::x10::lang::String bwt::SuffixArrayChar_Strings::sl__21798("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__21799("Start Merge Final");

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__1>bwt_SuffixArrayChar__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__1::__apply, &bwt_SuffixArrayChar__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__1::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__2>bwt_SuffixArrayChar__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__2::__apply, &bwt_SuffixArrayChar__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__2::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__3>bwt_SuffixArrayChar__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__3::__apply, &bwt_SuffixArrayChar__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__3::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__4>bwt_SuffixArrayChar__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__4::__apply, &bwt_SuffixArrayChar__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__4::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArrayChar__closure__5>bwt_SuffixArrayChar__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__5::__apply, &bwt_SuffixArrayChar__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >, &bwt_SuffixArrayChar__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__5::_deserialize);

::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArrayChar__closure__6>bwt_SuffixArrayChar__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__6::__apply, &bwt_SuffixArrayChar__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >, &bwt_SuffixArrayChar__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__6::_deserialize);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__7>bwt_SuffixArrayChar__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__7::__apply, &bwt_SuffixArrayChar__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__7::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__8>bwt_SuffixArrayChar__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__8::__apply, &bwt_SuffixArrayChar__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__8::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__8::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__8::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__9>bwt_SuffixArrayChar__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__9::__apply, &bwt_SuffixArrayChar__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__9::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__9::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__9::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__10>bwt_SuffixArrayChar__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__10::__apply, &bwt_SuffixArrayChar__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__10::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__10::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__10::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__12>bwt_SuffixArrayChar__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__12::__apply, &bwt_SuffixArrayChar__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__12::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__11>bwt_SuffixArrayChar__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__11::__apply, &bwt_SuffixArrayChar__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__11::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__11::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__11::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__13>bwt_SuffixArrayChar__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__13::__apply, &bwt_SuffixArrayChar__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__13::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__13::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__13::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__14>bwt_SuffixArrayChar__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__14::__apply, &bwt_SuffixArrayChar__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__14::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__14::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__14::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SuffixArrayChar */
/*************************************************/
