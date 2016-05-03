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
#include <bwt/SuffixArray.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
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
        return "SuffixArrayChar.x10:95";
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
        return "SuffixArrayChar.x10:96";
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
        return "SuffixArrayChar.x10:113";
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
        return "SuffixArrayChar.x10:114";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__4_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__5> _itable;
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
        bwt_SuffixArrayChar__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__5>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__5* this_ = new (storage) bwt_SuffixArrayChar__closure__5(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__5(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:115";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
#ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__6_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n02)) + (((x10_long)3ll))));
        
        //#line 117 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          saved_this->FMGL(n02), ((x10_long)0ll));
        
        //#line 118 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          ((saved_this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
        
        //#line 119 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          ((saved_this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
        
        //#line 120 "SuffixArrayChar.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 121 "SuffixArrayChar.x10"
        x10_long i__13629max__17493 = ((((((saved_this->FMGL(n)) + (saved_this->FMGL(n0)))) - (saved_this->FMGL(n1)))) - (((x10_long)1ll)));
        {
            x10_long i__17494;
            for (i__17494 = ((x10_long)0ll); ((i__17494) <= (i__13629max__17493));
                 i__17494 = ((i__17494) + (((x10_long)1ll))))
            {
                
                //#line 122 "SuffixArrayChar.x10"
                if ((!::x10aux::struct_equals(((i__17494) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                              ((x10_long)0ll))))
                {
                    
                    //#line 123 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                      j, i__17494);
                    
                    //#line 124 "SuffixArrayChar.x10"
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
        bwt_SuffixArrayChar__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__6>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__6* this_ = new (storage) bwt_SuffixArrayChar__closure__6(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__6(::bwt::SuffixArrayChar* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:116-127";
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
        x10_long i__13661max__17499 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__17500;
            for (i__17500 = ((x10_long)0ll); ((i__17500) <= (i__13661max__17499));
                 i__17500 = ((i__17500) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__17500), ((i__17500) + (((x10_long)1ll))));
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
        return "SuffixArrayChar.x10:183";
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
        return "SuffixArrayChar.x10:184";
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
              i__17507)) - (((x10_long)1ll))), i__17507);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__17507;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__17507);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__17507 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_saved_this, that_i__17507);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::bwt::SuffixArrayChar* saved_this, x10_long i__17507) : saved_this(saved_this), i__17507(i__17507) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:199";
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
        return "SuffixArrayChar.x10:201";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__10_CLOSURE
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
        lbl__17552 = (__extension__ ({
            x10_long t_lb__17558 = t_lb__17530;
            x10_long t_ub__17559 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__17560 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__17561 = p_lb__17529;
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__17562 = ((((t_lb__17530) + (t_ub__17559))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__17563 = ((((p_lb__17529) + (p_ub__17560))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__17559) - (t_lb__17558))) > (((x10_long)1ll))) ||
                   ((((p_ub__17560) - (p_lb__17561))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__17566;
                        goto __ret__17567; __ret__17567: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__17568 = saved_this->getI(
                                                  t_mid__17562);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__17569 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17563);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17562)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17571 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__17568)));
                                    x10_long a__17572 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17562)) + (saved_this->FMGL(n0))));
                                    x10_long b__17573 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__17569)));
                                    x10_long b__17574 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17569) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17571) < (b__17573)) ||
                                    ((::x10aux::struct_equals(a__17571,
                                                              b__17573)) &&
                                    ((a__17572) <= (b__17574))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17562)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__17568))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__17568) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17562)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__17569))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__17569) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17569) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__17566 = true;
                                goto __ret__17567_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__17566 = false;
                                goto __ret__17567_end_;
                            }
                            
                        }goto __ret__17567_end_; __ret__17567_end_: ;
                        }
                        ret__17566;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__17558 = t_mid__17562;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__17560 = p_mid__17563;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__17559 = t_mid__17562;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__17561 = p_mid__17563;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__17562 = ((((t_lb__17558) + (t_ub__17559))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__17563 = ((((p_lb__17561) + (p_ub__17560))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__17575 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18878 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18878->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17558);
                                                                                                t__18878->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17561);
                                                                                                t__18878;
                                                                                            }))
                                                                                            );
            lb__17575;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl__17552;
        x10aux::captured_struct_lval<x10_long> t_lb__17530;
        ::x10::lang::Rail< x10_long >* lb__17533;
        x10aux::captured_struct_lval<x10_long> p_lb__17529;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbl__17552);
            buf.write(this->t_lb__17530);
            buf.write(this->lb__17533);
            buf.write(this->p_lb__17529);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__11* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__11>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl__17552 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb__17530 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb__17533 = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb__17529 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__11* this_ = new (storage) bwt_SuffixArrayChar__closure__11(that_lbl__17552, that_t_lb__17530, that_lb__17533, that_p_lb__17529, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__11(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl__17552, x10aux::captured_struct_lval<x10_long> t_lb__17530, ::x10::lang::Rail< x10_long >* lb__17533, x10aux::captured_struct_lval<x10_long> p_lb__17529, ::bwt::SuffixArrayChar* saved_this) : lbl__17552(lbl__17552), t_lb__17530(t_lb__17530), lb__17533(lb__17533), p_lb__17529(p_lb__17529), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:263";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__11_CLOSURE
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
        lbll__17554 = (__extension__ ({
            x10_long t_lb__17594 = t_lb__17530;
            x10_long t_ub__17595 = ::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__17596 = ::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__17597 = p_lb__17529;
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__17598 = ((((t_lb__17530) + (t_ub__17595))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__17599 = ((((p_lb__17529) + (p_ub__17596))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__17595) - (t_lb__17594))) > (((x10_long)1ll))) ||
                   ((((p_ub__17596) - (p_lb__17597))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__17602;
                        goto __ret__17603; __ret__17603: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__17604 = saved_this->getI(
                                                  t_mid__17598);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__17605 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17599);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17598)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17607 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__17604)));
                                    x10_long a__17608 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17598)) + (saved_this->FMGL(n0))));
                                    x10_long b__17609 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__17605)));
                                    x10_long b__17610 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17605) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17607) < (b__17609)) ||
                                    ((::x10aux::struct_equals(a__17607,
                                                              b__17609)) &&
                                    ((a__17608) <= (b__17610))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17598)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__17604))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__17604) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17598)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__17605))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__17605) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17605) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__17602 = true;
                                goto __ret__17603_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__17602 = false;
                                goto __ret__17603_end_;
                            }
                            
                        }goto __ret__17603_end_; __ret__17603_end_: ;
                        }
                        ret__17602;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__17594 = t_mid__17598;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__17596 = p_mid__17599;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__17595 = t_mid__17598;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__17597 = p_mid__17599;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__17598 = ((((t_lb__17594) + (t_ub__17595))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__17599 = ((((p_lb__17597) + (p_ub__17596))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__17611 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18890 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18890->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17594);
                                                                                                t__18890->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17597);
                                                                                                t__18890;
                                                                                            }))
                                                                                            );
            lb__17611;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll__17554;
        x10aux::captured_struct_lval<x10_long> t_lb__17530;
        ::x10::lang::Rail< x10_long >* lbl__17552;
        x10aux::captured_struct_lval<x10_long> p_lb__17529;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbll__17554);
            buf.write(this->t_lb__17530);
            buf.write(this->lbl__17552);
            buf.write(this->p_lb__17529);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__12* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__12>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll__17554 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb__17530 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lbl__17552 = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb__17529 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__12* this_ = new (storage) bwt_SuffixArrayChar__closure__12(that_lbll__17554, that_t_lb__17530, that_lbl__17552, that_p_lb__17529, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__12(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll__17554, x10aux::captured_struct_lval<x10_long> t_lb__17530, ::x10::lang::Rail< x10_long >* lbl__17552, x10aux::captured_struct_lval<x10_long> p_lb__17529, ::bwt::SuffixArrayChar* saved_this) : lbll__17554(lbll__17554), t_lb__17530(t_lb__17530), lbl__17552(lbl__17552), p_lb__17529(p_lb__17529), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:267";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__12_CLOSURE
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
        lbrr__17557 = (__extension__ ({
            x10_long t_lb__17612 = ::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__17613 = t_ub__17532;
            x10_long p_ub__17614 = p_ub__17531;
            x10_long p_lb__17615 = ::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__17616 = ((((t_lb__17612) + (t_ub__17532))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__17617 = ((((p_lb__17615) + (p_ub__17531))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__17613) - (t_lb__17612))) > (((x10_long)1ll))) ||
                   ((((p_ub__17614) - (p_lb__17615))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__17620;
                        goto __ret__17621; __ret__17621: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__17622 = saved_this->getI(
                                                  t_mid__17616);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__17623 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17617);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17616)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17625 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__17622)));
                                    x10_long a__17626 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17616)) + (saved_this->FMGL(n0))));
                                    x10_long b__17627 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__17623)));
                                    x10_long b__17628 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17623) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17625) < (b__17627)) ||
                                    ((::x10aux::struct_equals(a__17625,
                                                              b__17627)) &&
                                    ((a__17626) <= (b__17628))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17616)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__17622))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__17622) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17616)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__17623))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__17623) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17623) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__17620 = true;
                                goto __ret__17621_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__17620 = false;
                                goto __ret__17621_end_;
                            }
                            
                        }goto __ret__17621_end_; __ret__17621_end_: ;
                        }
                        ret__17620;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__17612 = t_mid__17616;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__17614 = p_mid__17617;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__17613 = t_mid__17616;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__17615 = p_mid__17617;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__17616 = ((((t_lb__17612) + (t_ub__17613))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__17617 = ((((p_lb__17615) + (p_ub__17614))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__17629 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18896 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18896->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17612);
                                                                                                t__18896->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17615);
                                                                                                t__18896;
                                                                                            }))
                                                                                            );
            lb__17629;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr__17557;
        ::x10::lang::Rail< x10_long >* lbr__17553;
        x10aux::captured_struct_lval<x10_long> t_ub__17532;
        x10aux::captured_struct_lval<x10_long> p_ub__17531;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbrr__17557);
            buf.write(this->lbr__17553);
            buf.write(this->t_ub__17532);
            buf.write(this->p_ub__17531);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__13* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__13>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr__17557 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbr__17553 = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_t_ub__17532 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            x10aux::captured_struct_lval<x10_long> that_p_ub__17531 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__13* this_ = new (storage) bwt_SuffixArrayChar__closure__13(that_lbrr__17557, that_lbr__17553, that_t_ub__17532, that_p_ub__17531, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__13(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr__17557, ::x10::lang::Rail< x10_long >* lbr__17553, x10aux::captured_struct_lval<x10_long> t_ub__17532, x10aux::captured_struct_lval<x10_long> p_ub__17531, ::bwt::SuffixArrayChar* saved_this) : lbrr__17557(lbrr__17557), lbr__17553(lbr__17553), t_ub__17532(t_ub__17532), p_ub__17531(p_ub__17531), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:268";
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
        lblr__17555 = (__extension__ ({
            x10_long t_lb__17630 = ::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__17631 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__17632 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__17633 = ::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__17634 = ((((t_lb__17630) + (t_ub__17631))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__17635 = ((((p_lb__17633) + (p_ub__17632))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__17631) - (t_lb__17630))) > (((x10_long)1ll))) ||
                   ((((p_ub__17632) - (p_lb__17633))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__17638;
                        goto __ret__17639; __ret__17639: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__17640 = saved_this->getI(
                                                  t_mid__17634);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__17641 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17635);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17634)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17643 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__17640)));
                                    x10_long a__17644 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17634)) + (saved_this->FMGL(n0))));
                                    x10_long b__17645 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__17641)));
                                    x10_long b__17646 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17641) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17643) < (b__17645)) ||
                                    ((::x10aux::struct_equals(a__17643,
                                                              b__17645)) &&
                                    ((a__17644) <= (b__17646))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17634)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__17640))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__17640) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17634)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__17641))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__17641) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17641) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__17638 = true;
                                goto __ret__17639_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__17638 = false;
                                goto __ret__17639_end_;
                            }
                            
                        }goto __ret__17639_end_; __ret__17639_end_: ;
                        }
                        ret__17638;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__17630 = t_mid__17634;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__17632 = p_mid__17635;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__17631 = t_mid__17634;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__17633 = p_mid__17635;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__17634 = ((((t_lb__17630) + (t_ub__17631))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__17635 = ((((p_lb__17633) + (p_ub__17632))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__17647 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18902 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18902->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17630);
                                                                                                t__18902->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17633);
                                                                                                t__18902;
                                                                                            }))
                                                                                            );
            lb__17647;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr__17555;
        ::x10::lang::Rail< x10_long >* lbl__17552;
        ::x10::lang::Rail< x10_long >* lb__17533;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lblr__17555);
            buf.write(this->lbl__17552);
            buf.write(this->lb__17533);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__14* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__14>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr__17555 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbl__17552 = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::x10::lang::Rail< x10_long >* that_lb__17533 = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__14* this_ = new (storage) bwt_SuffixArrayChar__closure__14(that_lblr__17555, that_lbl__17552, that_lb__17533, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__14(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr__17555, ::x10::lang::Rail< x10_long >* lbl__17552, ::x10::lang::Rail< x10_long >* lb__17533, ::bwt::SuffixArrayChar* saved_this) : lblr__17555(lblr__17555), lbl__17552(lbl__17552), lb__17533(lb__17533), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:269";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__14_CLOSURE
    #ifndef BWT_SUFFIXARRAYCHAR__CLOSURE__15_CLOSURE
#define BWT_SUFFIXARRAYCHAR__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArrayChar__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 297 "SuffixArrayChar.x10"
        x10_long k__17517 = krail__17673->x10::lang::Rail< x10_long >::__apply(
                              l__17528);
        
        //#line 298 "SuffixArrayChar.x10"
        x10_long t__17518 = trail__17676->x10::lang::Rail< x10_long >::__apply(
                              l__17528);
        
        //#line 299 "SuffixArrayChar.x10"
        x10_long p__17519 = prail__17675->x10::lang::Rail< x10_long >::__apply(
                              l__17528);
        
        //#line 300 "SuffixArrayChar.x10"
        while (((k__17517) < (nrail__17674->x10::lang::Rail< x10_long >::__apply(
                                l__17528)))) {
            
            //#line 301 "SuffixArrayChar.x10"
            k__17517 = ((k__17517) + (((x10_long)1ll)));
            
            //#line 302 "SuffixArrayChar.x10"
            x10_long i__17520 = saved_this->getI(t__17518);
            
            //#line 303 "SuffixArrayChar.x10"
            x10_long j__17521 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__17519);
            
            //#line 305 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__17518)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__17523 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i__17520)));
                    x10_long a__17524 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__17518)) + (saved_this->FMGL(n0))));
                    x10_long b__17525 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j__17521)));
                    x10_long b__17526 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__17521) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__17523) < (b__17525)) || ((::x10aux::struct_equals(a__17523,
                                                                            b__17525)) &&
                    ((a__17524) <= (b__17526))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__17518)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              i__17520))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((i__17520) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__17518)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              j__17521))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((j__17521) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__17521) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 308 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__17528,
                                                 ((x10_long)0ll))) &&
                    ((k__17517) <= (((krail__17673->x10::lang::Rail< x10_long >::__apply(
                                        l__17528)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 309 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__17517, i__17520);
                }
                
                //#line 311 "SuffixArrayChar.x10"
                t__17518 = ((t__17518) + (((x10_long)1ll)));
                
                //#line 312 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__17518, saved_this->FMGL(n02))))
                {
                    
                    //#line 313 "SuffixArrayChar.x10"
                    k__17517 = ((k__17517) + (((x10_long)1ll)));
                    
                    //#line 314 "SuffixArrayChar.x10"
                    x10_long i__13725max__17511 = ((((saved_this->FMGL(n0)) - (p__17519))) - (((x10_long)1ll)));
                    {
                        x10_long i__17512;
                        for (i__17512 = ((x10_long)0ll); ((i__17512) <= (i__13725max__17511));
                             i__17512 = ((i__17512) + (((x10_long)1ll))))
                        {
                            
                            //#line 315 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__17517, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__17519));
                            
                            //#line 316 "SuffixArrayChar.x10"
                            p__17519 = ((p__17519) + (((x10_long)1ll)));
                            
                            //#line 317 "SuffixArrayChar.x10"
                            k__17517 = ((k__17517) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 321 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__17528,
                                                 ((x10_long)0ll))) &&
                    ((k__17517) <= (((krail__17673->x10::lang::Rail< x10_long >::__apply(
                                        l__17528)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 322 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__17517, j__17521);
                }
                
                //#line 324 "SuffixArrayChar.x10"
                p__17519 = ((p__17519) + (((x10_long)1ll)));
                
                //#line 325 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__17519, saved_this->FMGL(n0))))
                {
                    
                    //#line 326 "SuffixArrayChar.x10"
                    k__17517 = ((k__17517) + (((x10_long)1ll)));
                    
                    //#line 327 "SuffixArrayChar.x10"
                    x10_long i__13741max__17514 = ((((saved_this->FMGL(n02)) - (t__17518))) - (((x10_long)1ll)));
                    {
                        x10_long i__17515;
                        for (i__17515 = ((x10_long)0ll); ((i__17515) <= (i__13741max__17514));
                             i__17515 = ((i__17515) + (((x10_long)1ll))))
                        {
                            
                            //#line 328 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__17517, saved_this->getI(
                                          t__17518));
                            
                            //#line 329 "SuffixArrayChar.x10"
                            t__17518 = ((t__17518) + (((x10_long)1ll)));
                            
                            //#line 330 "SuffixArrayChar.x10"
                            k__17517 = ((k__17517) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail__17673;
    x10_long l__17528;
    ::x10::lang::Rail< x10_long >* trail__17676;
    ::x10::lang::Rail< x10_long >* prail__17675;
    ::x10::lang::Rail< x10_long >* nrail__17674;
    ::bwt::SuffixArrayChar* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->krail__17673);
        buf.write(this->l__17528);
        buf.write(this->trail__17676);
        buf.write(this->prail__17675);
        buf.write(this->nrail__17674);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__15* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__15>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail__17673 = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__17528 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail__17676 = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail__17675 = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail__17674 = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__15* this_ = new (storage) bwt_SuffixArrayChar__closure__15(that_krail__17673, that_l__17528, that_trail__17676, that_prail__17675, that_nrail__17674, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__15(::x10::lang::Rail< x10_long >* krail__17673, x10_long l__17528, ::x10::lang::Rail< x10_long >* trail__17676, ::x10::lang::Rail< x10_long >* prail__17675, ::x10::lang::Rail< x10_long >* nrail__17674, ::bwt::SuffixArrayChar* saved_this) : krail__17673(krail__17673), l__17528(l__17528), trail__17676(trail__17676), prail__17675(prail__17675), nrail__17674(nrail__17674), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:296-335";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__15_CLOSURE

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

//#line 26 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize) {
    
    //#line 9 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* this__17467 = this;
    ::x10aux::nullCheck(this__17467)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__17467)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__17467)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__17467)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__17467)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__17467)->FMGL(name) = ((x10_long)0ll);
    
    //#line 27 "SuffixArrayChar.x10"
    this->FMGL(string) = input;
    
    //#line 28 "SuffixArrayChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 29 "SuffixArrayChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 30 "SuffixArrayChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArrayChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 32 "SuffixArrayChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 33 "SuffixArrayChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                    x10_long charsize)
{
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 36 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairs(::x10::lang::Rail< x10_byte >* keys,
                                     ::x10::lang::Rail< x10_long >* values,
                                     x10_ulong num_elems, x10_int num_threads,
                                     x10_byte offset){
    parallel_radix_sort::SortPairsByte((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 39 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairsThree(::x10::lang::Rail< x10_byte >* keys,
                                          ::x10::lang::Rail< x10_long >* values,
                                          x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsByteThree((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 43 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                     ::x10::lang::Rail< x10_long >* b,
                                     x10_byte rOffs, x10_long nt) {
    
    //#line 44 "SuffixArrayChar.x10"
    x10_long i__13533max__17475 = this->FMGL(k);
    {
        x10_long i__17476;
        for (i__17476 = ((x10_long)0ll); ((i__17476) <= (i__13533max__17475));
             i__17476 = ((i__17476) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__17476, ((x10_long)0ll));
        }
    }
    
    //#line 45 "SuffixArrayChar.x10"
    x10_long i__13549max__17478 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__17479;
        for (i__17479 = ((x10_long)0ll); ((i__17479) <= (i__13549max__17478));
             i__17479 = ((i__17479) + (((x10_long)1ll))))
        {
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__17468 = this->FMGL(c);
            x10_long i__17469 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__17479)) + (((x10_long)(rOffs)))))));
            x10_long r__17470 = ((::x10aux::nullCheck(a__17468)->x10::lang::Rail< x10_long >::__apply(
                                    i__17469)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__17468)->x10::lang::Rail< x10_long >::__set(
              i__17469, r__17470);
        }
    }
    
    //#line 48 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__13565max__17481 = this->FMGL(k);
    {
        x10_long i__17482;
        for (i__17482 = ((x10_long)0ll); ((i__17482) <= (i__13565max__17481));
             i__17482 = ((i__17482) + (((x10_long)1ll))))
        {
            
            //#line 50 "SuffixArrayChar.x10"
            x10_long t__17471 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                  i__17482);
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__17482, sum);
            
            //#line 52 "SuffixArrayChar.x10"
            sum = ((sum) + (t__17471));
        }
    }
    
    //#line 54 "SuffixArrayChar.x10"
    x10_long i__13581max__17484 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__17485;
        for (i__17485 = ((x10_long)0ll); ((i__17485) <= (i__13581max__17484));
             i__17485 = ((i__17485) + (((x10_long)1ll))))
        {
            
            //#line 55 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__17485)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__17485));
            
            //#line 56 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__17472 = this->FMGL(c);
            x10_long i__17473 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__17485)) + (((x10_long)(rOffs)))))));
            x10_long r__17474 = ((::x10aux::nullCheck(a__17472)->x10::lang::Rail< x10_long >::__apply(
                                    i__17473)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__17472)->x10::lang::Rail< x10_long >::__set(
              i__17473, r__17474);
        }
    }
    
}

//#line 60 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 75 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 77 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 79 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 80 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 83 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 84 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 85 "SuffixArrayChar.x10"
    x10_long i__13597max__17487 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__17488;
        for (i__17488 = ((x10_long)0ll); ((i__17488) <= (i__13597max__17487));
             i__17488 = ((i__17488) + (((x10_long)1ll))))
        {
            
            //#line 86 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__17488), ((x10_long)0ll))))
            {
                
                //#line 87 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__17488)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 90 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 93 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    {
        
        //#line 94 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17681 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 95 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__1)))bwt_SuffixArrayChar__closure__1(this))));
                
                //#line 96 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__2)))bwt_SuffixArrayChar__closure__2(this))));
                
                //#line 97 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 98 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 99 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 100 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 101 "SuffixArrayChar.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 102 "SuffixArrayChar.x10"
                x10_long i__13613max__17490 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__17491;
                    for (i__17491 = ((x10_long)0ll); ((i__17491) <= (i__13613max__17490));
                         i__17491 = ((i__17491) + (((x10_long)1ll))))
                    {
                        
                        //#line 103 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__17491) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 104 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__17491);
                            
                            //#line 105 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc30) {
            {
                ::x10::lang::CheckedThrowable* ct__17679 =
                  __exc30;
                {
                    ::x10::xrx::Runtime::pushException(ct__17679);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__17681);
    }
}

//#line 111 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSampleR() {
    {
        
        //#line 112 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17689 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 113 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__3)))bwt_SuffixArrayChar__closure__3(this))));
                
                //#line 114 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__4)))bwt_SuffixArrayChar__closure__4(this))));
                
                //#line 115 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__5)))bwt_SuffixArrayChar__closure__5(this))));
                
                //#line 116 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__6)))bwt_SuffixArrayChar__closure__6(this))));
                
                //#line 128 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 129 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 130 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 131 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc32) {
            {
                ::x10::lang::CheckedThrowable* ct__17687 =
                  __exc32;
                {
                    ::x10::xrx::Runtime::pushException(ct__17687);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__17689);
    }
}

//#line 136 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 137 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 138 "SuffixArrayChar.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 139 "SuffixArrayChar.x10"
    this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                         size, num_threads);
    
    //#line 154 "SuffixArrayChar.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 155 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 156 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 157 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 158 "SuffixArrayChar.x10"
    x10_long i__13645max__17496 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__17497;
        for (i__17497 = ((x10_long)0ll); ((i__17497) <= (i__13645max__17496));
             i__17497 = ((i__17497) + (((x10_long)1ll))))
        {
            
            //#line 159 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__17497)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__17497)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__17497)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 160 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 161 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__17497));
                
                //#line 162 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__17497)) + (((x10_long)1ll))));
                
                //#line 163 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__17497)) + (((x10_long)2ll))));
            }
            
            //#line 166 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__17497)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 167 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__17497)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 169 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__17497)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 176 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 177 "SuffixArrayChar.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 178 "SuffixArrayChar.x10"
        this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make((((x10_long)(::x10aux::nullCheck(this->FMGL(R))->FMGL(size))) + (((x10_long)3ll))));
        
        //#line 179 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                this->FMGL(name),
                                                this->FMGL(SA12));
        
        //#line 180 "SuffixArrayChar.x10"
        bwa->run();
        {
            
            //#line 182 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__17695 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 183 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(this))));
                    
                    //#line 184 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(this))));
                    
                    //#line 185 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 186 "SuffixArrayChar.x10"
                    x10_long i__13677max__17502 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__17503;
                        for (i__17503 = ((x10_long)0ll); ((i__17503) <= (i__13677max__17502));
                             i__17503 = ((i__17503) + (((x10_long)1ll))))
                        {
                            
                            //#line 187 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__17503)) < (this->FMGL(n0))))
                            {
                                
                                //#line 189 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__17503))));
                                
                                //#line 190 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 193 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 194 "SuffixArrayChar.x10"
                    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
                    
                    //#line 196 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, num_threads, ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc35) {
                {
                    ::x10::lang::CheckedThrowable* ct__17693 =
                      __exc35;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17693);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__17695);
        }
    } else {
        {
            
            //#line 199 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__17700 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__13693max__17505 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__17506;
                        for (i__17506 = ((x10_long)0ll); ((i__17506) <= (i__13693max__17505));
                             i__17506 = ((i__17506) + (((x10_long)1ll))))
                        {
                            x10_long i__17507 = i__17506;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(this, i__17507))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc36) {
                {
                    ::x10::lang::CheckedThrowable* ct__17698 =
                      __exc36;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17698);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__17700);
        }
        {
            
            //#line 200 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__17705 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 201 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__10)))bwt_SuffixArrayChar__closure__10(this))));
                    
                    //#line 202 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 203 "SuffixArrayChar.x10"
                    x10_long i__13709max__17508 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__17509;
                        for (i__17509 = ((x10_long)0ll); ((i__17509) <= (i__13709max__17508));
                             i__17509 = ((i__17509) + (((x10_long)1ll))))
                        {
                            
                            //#line 204 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__17509)) < (this->FMGL(n0))))
                            {
                                
                                //#line 206 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__17509))));
                                
                                //#line 207 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 210 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 211 "SuffixArrayChar.x10"
                    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
                    
                    //#line 213 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, num_threads, ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc37) {
                {
                    ::x10::lang::CheckedThrowable* ct__17703 =
                      __exc37;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17703);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__17705);
        }
    }
    
    //#line 217 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__18985)));
    
    //#line 221 "SuffixArrayChar.x10"
    x10_long p_lb__17529 = ((x10_long)0ll);
    
    //#line 222 "SuffixArrayChar.x10"
    x10_long t_lb__17530 = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 223 "SuffixArrayChar.x10"
    x10_long p_ub__17531 = ((this->FMGL(n0)) - (((x10_long)1ll)));
    
    //#line 224 "SuffixArrayChar.x10"
    x10_long t_ub__17532 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    
    //#line 255 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lb__17533 = (__extension__ ({
        x10_long t_lb__17534 = t_lb__17530;
        x10_long t_ub__17535 = t_ub__17532;
        x10_long p_ub__17536 = p_ub__17531;
        x10_long p_lb__17537 = p_lb__17529;
        
        //#line 238 "SuffixArrayChar.x10"
        x10_long t_mid__17538 = ((((t_lb__17530) + (t_ub__17532))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 239 "SuffixArrayChar.x10"
        x10_long p_mid__17539 = ((((p_lb__17529) + (p_ub__17531))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 240 "SuffixArrayChar.x10"
        while ((((((t_ub__17535) - (t_lb__17534))) > (((x10_long)1ll))) ||
               ((((p_ub__17536) - (p_lb__17537))) > (((x10_long)1ll)))))
        {
            
            //#line 241 "SuffixArrayChar.x10"
            if ((__extension__ ({
                    
                    //#line 225 "SuffixArrayChar.x10"
                    x10_boolean ret__17542;
                    goto __ret__17543; __ret__17543: {
                    {
                        
                        //#line 226 "SuffixArrayChar.x10"
                        x10_long i__17544 = this->getI(t_mid__17538);
                        
                        //#line 227 "SuffixArrayChar.x10"
                        x10_long j__17545 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                              p_mid__17539);
                        
                        //#line 228 "SuffixArrayChar.x10"
                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                  t_mid__17538)) < (this->FMGL(n0))) &&
                            (__extension__ ({
                                x10_long a__17547 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                  i__17544)));
                                x10_long a__17548 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                      ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                          t_mid__17538)) + (this->FMGL(n0))));
                                x10_long b__17549 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                  j__17545)));
                                x10_long b__17550 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                      ((j__17545) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                (((a__17547) < (b__17549)) ||
                                ((::x10aux::struct_equals(a__17547,
                                                          b__17549)) &&
                                ((a__17548) <= (b__17550))));
                            }))
                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17538)) >= (this->FMGL(n0))) &&
                            this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                    i__17544))),
                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                    ((i__17544) + (((x10_long)1ll)))))),
                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t_mid__17538)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                    j__17545))),
                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                    ((j__17545) + (((x10_long)1ll)))))),
                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                        ((((j__17545) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                        {
                            
                            //#line 231 "SuffixArrayChar.x10"
                            ret__17542 = true;
                            goto __ret__17543_end_;
                        } else {
                            
                            //#line 233 "SuffixArrayChar.x10"
                            ret__17542 = false;
                            goto __ret__17543_end_;
                        }
                        
                    }goto __ret__17543_end_; __ret__17543_end_: ;
                    }
                    ret__17542;
                    }))
                    ) {
                    
                    //#line 242 "SuffixArrayChar.x10"
                    t_lb__17534 = t_mid__17538;
                    
                    //#line 243 "SuffixArrayChar.x10"
                    p_ub__17536 = p_mid__17539;
                } else {
                    
                    //#line 245 "SuffixArrayChar.x10"
                    t_ub__17535 = t_mid__17538;
                    
                    //#line 246 "SuffixArrayChar.x10"
                    p_lb__17537 = p_mid__17539;
                }
                
            
            //#line 248 "SuffixArrayChar.x10"
            t_mid__17538 = ((((t_lb__17534) + (t_ub__17535))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 249 "SuffixArrayChar.x10"
            p_mid__17539 = ((((p_lb__17537) + (p_ub__17536))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            }
            
        
        //#line 251 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lb__17551 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__18872 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                            t__18872->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              t_lb__17534);
                                                                                            t__18872->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              p_lb__17537);
                                                                                            t__18872;
                                                                                        }))
                                                                                        );
        lb__17551;
        }))
        ;
        
    
    //#line 256 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lbl__17552;
    
    //#line 257 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lbr__17553;
    
    //#line 258 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lbll__17554;
    
    //#line 259 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lblr__17555;
    
    //#line 260 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lbrl__17556;
    
    //#line 261 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* lbrr__17557;
    {
        
        //#line 262 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17710 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 263 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__11)))bwt_SuffixArrayChar__closure__11(&(lbl__17552), &(t_lb__17530), lb__17533, &(p_lb__17529), this))));
                
                //#line 264 "SuffixArrayChar.x10"
                lbr__17553 = (__extension__ ({
                    x10_long t_lb__17576 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)0ll));
                    x10_long t_ub__17577 = t_ub__17532;
                    x10_long p_ub__17578 = p_ub__17531;
                    x10_long p_lb__17579 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)1ll));
                    
                    //#line 238 "SuffixArrayChar.x10"
                    x10_long t_mid__17580 = ((((t_lb__17576) + (t_ub__17532))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 239 "SuffixArrayChar.x10"
                    x10_long p_mid__17581 = ((((p_lb__17579) + (p_ub__17531))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 240 "SuffixArrayChar.x10"
                    while ((((((t_ub__17577) - (t_lb__17576))) > (((x10_long)1ll))) ||
                           ((((p_ub__17578) - (p_lb__17579))) > (((x10_long)1ll)))))
                    {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        if ((__extension__ ({
                                
                                //#line 225 "SuffixArrayChar.x10"
                                x10_boolean ret__17584;
                                goto __ret__17585; __ret__17585: {
                                {
                                    
                                    //#line 226 "SuffixArrayChar.x10"
                                    x10_long i__17586 = this->getI(
                                                          t_mid__17580);
                                    
                                    //#line 227 "SuffixArrayChar.x10"
                                    x10_long j__17587 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                          p_mid__17581);
                                    
                                    //#line 228 "SuffixArrayChar.x10"
                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t_mid__17580)) < (this->FMGL(n0))) &&
                                        (__extension__ ({
                                            x10_long a__17589 =
                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            i__17586)));
                                            x10_long a__17590 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                    t_mid__17580)) + (this->FMGL(n0))));
                                            x10_long b__17591 =
                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            j__17587)));
                                            x10_long b__17592 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((j__17587) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                            (((a__17589) < (b__17591)) ||
                                            ((::x10aux::struct_equals(a__17589,
                                                                      b__17591)) &&
                                            ((a__17590) <= (b__17592))));
                                        }))
                                        ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__17580)) >= (this->FMGL(n0))) &&
                                        this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__17586))),
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                ((i__17586) + (((x10_long)1ll)))))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                          t_mid__17580)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__17587))),
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                ((j__17587) + (((x10_long)1ll)))))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((j__17587) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                    {
                                        
                                        //#line 231 "SuffixArrayChar.x10"
                                        ret__17584 = true;
                                        goto __ret__17585_end_;
                                    } else {
                                        
                                        //#line 233 "SuffixArrayChar.x10"
                                        ret__17584 = false;
                                        goto __ret__17585_end_;
                                    }
                                    
                                }goto __ret__17585_end_; __ret__17585_end_: ;
                                }
                                ret__17584;
                                }))
                                ) {
                                
                                //#line 242 "SuffixArrayChar.x10"
                                t_lb__17576 = t_mid__17580;
                                
                                //#line 243 "SuffixArrayChar.x10"
                                p_ub__17578 = p_mid__17581;
                            } else {
                                
                                //#line 245 "SuffixArrayChar.x10"
                                t_ub__17577 = t_mid__17580;
                                
                                //#line 246 "SuffixArrayChar.x10"
                                p_lb__17579 = p_mid__17581;
                            }
                            
                        
                        //#line 248 "SuffixArrayChar.x10"
                        t_mid__17580 = ((((t_lb__17576) + (t_ub__17577))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 249 "SuffixArrayChar.x10"
                        p_mid__17581 = ((((p_lb__17579) + (p_ub__17578))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        }
                        
                    
                    //#line 251 "SuffixArrayChar.x10"
                    ::x10::lang::Rail< x10_long >* lb__17593 =
                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                               ::x10::lang::Rail< x10_long >* t__18884 =
                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                               t__18884->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)0ll),
                                                                 t_lb__17576);
                                                               t__18884->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)1ll),
                                                                 p_lb__17579);
                                                               t__18884;
                                                           }))
                                                           );
                    lb__17593;
                    }))
                    ;
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc38) {
                {
                    ::x10::lang::CheckedThrowable* ct__17708 =
                      __exc38;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17708);
                    }
                }
            }
        ::x10::xrx::Runtime::stopFinish(fs__17710);
        }
    {
        
        //#line 266 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17717 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 267 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__12)))bwt_SuffixArrayChar__closure__12(&(lbll__17554), &(t_lb__17530), lbl__17552, &(p_lb__17529), this))));
                
                //#line 268 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__13)))bwt_SuffixArrayChar__closure__13(&(lbrr__17557), lbr__17553, &(t_ub__17532), &(p_ub__17531), this))));
                
                //#line 269 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__14)))bwt_SuffixArrayChar__closure__14(&(lblr__17555), lbl__17552, lb__17533, this))));
                
                //#line 270 "SuffixArrayChar.x10"
                lbrl__17556 = (__extension__ ({
                    x10_long t_lb__17648 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)0ll));
                    x10_long t_ub__17649 = ::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)0ll));
                    x10_long p_ub__17650 = ::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)1ll));
                    x10_long p_lb__17651 = ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)1ll));
                    
                    //#line 238 "SuffixArrayChar.x10"
                    x10_long t_mid__17652 = ((((t_lb__17648) + (t_ub__17649))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 239 "SuffixArrayChar.x10"
                    x10_long p_mid__17653 = ((((p_lb__17651) + (p_ub__17650))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 240 "SuffixArrayChar.x10"
                    while ((((((t_ub__17649) - (t_lb__17648))) > (((x10_long)1ll))) ||
                           ((((p_ub__17650) - (p_lb__17651))) > (((x10_long)1ll)))))
                    {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        if ((__extension__ ({
                                
                                //#line 225 "SuffixArrayChar.x10"
                                x10_boolean ret__17656;
                                goto __ret__17657; __ret__17657: {
                                {
                                    
                                    //#line 226 "SuffixArrayChar.x10"
                                    x10_long i__17658 = this->getI(
                                                          t_mid__17652);
                                    
                                    //#line 227 "SuffixArrayChar.x10"
                                    x10_long j__17659 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                          p_mid__17653);
                                    
                                    //#line 228 "SuffixArrayChar.x10"
                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t_mid__17652)) < (this->FMGL(n0))) &&
                                        (__extension__ ({
                                            x10_long a__17661 =
                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            i__17658)));
                                            x10_long a__17662 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                    t_mid__17652)) + (this->FMGL(n0))));
                                            x10_long b__17663 =
                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            j__17659)));
                                            x10_long b__17664 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((j__17659) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                            (((a__17661) < (b__17663)) ||
                                            ((::x10aux::struct_equals(a__17661,
                                                                      b__17663)) &&
                                            ((a__17662) <= (b__17664))));
                                        }))
                                        ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__17652)) >= (this->FMGL(n0))) &&
                                        this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__17658))),
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                ((i__17658) + (((x10_long)1ll)))))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                          t_mid__17652)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__17659))),
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                ((j__17659) + (((x10_long)1ll)))))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((j__17659) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                    {
                                        
                                        //#line 231 "SuffixArrayChar.x10"
                                        ret__17656 = true;
                                        goto __ret__17657_end_;
                                    } else {
                                        
                                        //#line 233 "SuffixArrayChar.x10"
                                        ret__17656 = false;
                                        goto __ret__17657_end_;
                                    }
                                    
                                }goto __ret__17657_end_; __ret__17657_end_: ;
                                }
                                ret__17656;
                                }))
                                ) {
                                
                                //#line 242 "SuffixArrayChar.x10"
                                t_lb__17648 = t_mid__17652;
                                
                                //#line 243 "SuffixArrayChar.x10"
                                p_ub__17650 = p_mid__17653;
                            } else {
                                
                                //#line 245 "SuffixArrayChar.x10"
                                t_ub__17649 = t_mid__17652;
                                
                                //#line 246 "SuffixArrayChar.x10"
                                p_lb__17651 = p_mid__17653;
                            }
                            
                        
                        //#line 248 "SuffixArrayChar.x10"
                        t_mid__17652 = ((((t_lb__17648) + (t_ub__17649))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 249 "SuffixArrayChar.x10"
                        p_mid__17653 = ((((p_lb__17651) + (p_ub__17650))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        }
                        
                    
                    //#line 251 "SuffixArrayChar.x10"
                    ::x10::lang::Rail< x10_long >* lb__17665 =
                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                               ::x10::lang::Rail< x10_long >* t__18908 =
                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                               t__18908->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)0ll),
                                                                 t_lb__17648);
                                                               t__18908->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)1ll),
                                                                 p_lb__17651);
                                                               t__18908;
                                                           }))
                                                           );
                    lb__17665;
                    }))
                    ;
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc39) {
                {
                    ::x10::lang::CheckedThrowable* ct__17715 =
                      __exc39;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17715);
                    }
                }
            }
        ::x10::xrx::Runtime::stopFinish(fs__17717);
        }
    
    //#line 274 "SuffixArrayChar.x10"
    x10_long midl__17666 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 275 "SuffixArrayChar.x10"
    x10_long mid__17667 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                   ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 276 "SuffixArrayChar.x10"
    x10_long midr__17668 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 277 "SuffixArrayChar.x10"
    x10_long midll__17669 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbll__17554)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbll__17554)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbll__17554)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbll__17554)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 278 "SuffixArrayChar.x10"
    x10_long midrl__17670 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbrl__17556)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl__17556)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbrl__17556)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl__17556)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 279 "SuffixArrayChar.x10"
    x10_long midlr__17671 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lblr__17555)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lblr__17555)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lblr__17555)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lblr__17555)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 280 "SuffixArrayChar.x10"
    x10_long midrr__17672 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbrr__17557)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr__17557)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbrr__17557)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr__17557)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 282 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* krail__17673 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18914 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((x10_long)-1ll));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ((midll__17669) - (((x10_long)1ll))));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ((midl__17666) - (((x10_long)1ll))));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ((midlr__17671) - (((x10_long)1ll))));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ((mid__17667) - (((x10_long)1ll))));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ((midrl__17670) - (((x10_long)1ll))));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ((midr__17668) - (((x10_long)1ll))));
                                                                                           t__18914->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             ((midrr__17672) - (((x10_long)1ll))));
                                                                                           t__18914;
                                                                                       }))
                                                                                       );
    
    //#line 283 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* nrail__17674 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18932 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((midl__17666) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ((midl__17666) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ((midlr__17671) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ((mid__17667) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ((midrl__17670) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ((midr__17668) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ((midrr__17672) + (((x10_long)1ll))));
                                                                                           t__18932->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             this->FMGL(n));
                                                                                           t__18932;
                                                                                       }))
                                                                                       );
    
    //#line 284 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* prail__17675 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18950 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((x10_long)0ll));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ::x10aux::nullCheck(lbll__17554)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ::x10aux::nullCheck(lblr__17555)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ::x10aux::nullCheck(lbrl__17556)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             ::x10aux::nullCheck(lbrr__17557)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18950;
                                                                                       }))
                                                                                       );
    
    //#line 285 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* trail__17676 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18968 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ::x10aux::nullCheck(lbll__17554)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ::x10aux::nullCheck(lbl__17552)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ::x10aux::nullCheck(lblr__17555)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ::x10aux::nullCheck(lb__17533)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ::x10aux::nullCheck(lbrl__17556)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ::x10aux::nullCheck(lbr__17553)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             ::x10aux::nullCheck(lbrr__17557)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18968;
                                                                                       }))
                                                                                       );
    {
        
        //#line 296 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17722 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    x10_long i__17527;
                    for (i__17527 = ((x10_long)0ll); ((i__17527) <= (((x10_long)7ll)));
                         i__17527 = ((i__17527) + (((x10_long)1ll))))
                    {
                        x10_long l__17528 = i__17527;
                        ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__15)))bwt_SuffixArrayChar__closure__15(krail__17673, l__17528, trail__17676, prail__17675, nrail__17674, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc40) {
            {
                ::x10::lang::CheckedThrowable* ct__17720 =
                  __exc40;
                {
                    ::x10::xrx::Runtime::pushException(ct__17720);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__17722);
    }
    }
    
    //#line 441 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long b1, x10_long b2) {
        
        //#line 442 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 445 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long a3, x10_long b1,
                                          x10_long b2, x10_long b3) {
        
        //#line 446 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 449 "SuffixArrayChar.x10"
    x10_long bwt::SuffixArrayChar::getI(x10_long t) {
        
        //#line 450 "SuffixArrayChar.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 451 "SuffixArrayChar.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 453 "SuffixArrayChar.x10"
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
    }
    
    ::x10aux::RuntimeType bwt::SuffixArrayChar::rtt;
    void bwt::SuffixArrayChar::_initRTT() {
        if (rtt.initStageOne(&rtt)) return;
        const ::x10aux::RuntimeType** parents = NULL; 
        rtt.initStageTwo("bwt.SuffixArrayChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
    }
    
    ::x10::lang::String bwt::SuffixArrayChar_Strings::sl__18985("Start Merge Final");

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

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__5>bwt_SuffixArrayChar__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__5::__apply, &bwt_SuffixArrayChar__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__5::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__6>bwt_SuffixArrayChar__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__6::__apply, &bwt_SuffixArrayChar__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__6::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__11>bwt_SuffixArrayChar__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__11::__apply, &bwt_SuffixArrayChar__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__11::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__11::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__11::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__12>bwt_SuffixArrayChar__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__12::__apply, &bwt_SuffixArrayChar__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__12::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__12::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__12::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__15>bwt_SuffixArrayChar__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__15::__apply, &bwt_SuffixArrayChar__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__15::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__15::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__15::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SuffixArrayChar */
/*************************************************/
