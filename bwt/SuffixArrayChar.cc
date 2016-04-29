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
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <bwt/SuffixArray.h>
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
        return "SuffixArrayChar.x10:97";
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
        return "SuffixArrayChar.x10:116";
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
        saved_this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n02)) + (((x10_long)3ll))));
        
        //#line 118 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          saved_this->FMGL(n02), ((x10_long)0ll));
        
        //#line 119 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          ((saved_this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
        
        //#line 120 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
          ((saved_this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
        
        //#line 121 "SuffixArrayChar.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 122 "SuffixArrayChar.x10"
        x10_long i__4543max__6206 = ((((((saved_this->FMGL(n)) + (saved_this->FMGL(n0)))) - (saved_this->FMGL(n1)))) - (((x10_long)1ll)));
        {
            x10_long i__6207;
            for (i__6207 = ((x10_long)0ll); ((i__6207) <= (i__4543max__6206));
                 i__6207 = ((i__6207) + (((x10_long)1ll))))
            {
                
                //#line 123 "SuffixArrayChar.x10"
                if ((!::x10aux::struct_equals(((i__6207) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                              ((x10_long)0ll))))
                {
                    
                    //#line 124 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                      j, i__6207);
                    
                    //#line 125 "SuffixArrayChar.x10"
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
        return "SuffixArrayChar.x10:117-128";
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
        x10_long i__4575max__6212 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6213;
            for (i__6213 = ((x10_long)0ll); ((i__6213) <= (i__4575max__6212));
                 i__6213 = ((i__6213) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__6213), ((i__6213) + (((x10_long)1ll))));
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
        return "SuffixArrayChar.x10:183";
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
              i__6220)) - (((x10_long)1ll))), i__6220);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__6220;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__6220);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__6220 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_saved_this, that_i__6220);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::bwt::SuffixArrayChar* saved_this, x10_long i__6220) : saved_this(saved_this), i__6220(i__6220) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:198";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__9_CLOSURE

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
    ::bwt::SuffixArrayChar* this__6180 = this;
    ::x10aux::nullCheck(this__6180)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6180)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6180)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6180)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6180)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6180)->FMGL(name) = ((x10_long)0ll);
    
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
    x10_long i__4447max__6188 = this->FMGL(k);
    {
        x10_long i__6189;
        for (i__6189 = ((x10_long)0ll); ((i__6189) <= (i__4447max__6188));
             i__6189 = ((i__6189) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__6189, ((x10_long)0ll));
        }
    }
    
    //#line 45 "SuffixArrayChar.x10"
    x10_long i__4463max__6191 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__6192;
        for (i__6192 = ((x10_long)0ll); ((i__6192) <= (i__4463max__6191));
             i__6192 = ((i__6192) + (((x10_long)1ll)))) {
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__6181 = this->FMGL(c);
            x10_long i__6182 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__6192)) + (((x10_long)(rOffs)))))));
            x10_long r__6183 = ((::x10aux::nullCheck(a__6181)->x10::lang::Rail< x10_long >::__apply(
                                   i__6182)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__6181)->x10::lang::Rail< x10_long >::__set(
              i__6182, r__6183);
        }
    }
    
    //#line 48 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__4479max__6194 = this->FMGL(k);
    {
        x10_long i__6195;
        for (i__6195 = ((x10_long)0ll); ((i__6195) <= (i__4479max__6194));
             i__6195 = ((i__6195) + (((x10_long)1ll)))) {
            
            //#line 50 "SuffixArrayChar.x10"
            x10_long t__6184 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                 i__6195);
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__6195, sum);
            
            //#line 52 "SuffixArrayChar.x10"
            sum = ((sum) + (t__6184));
        }
    }
    
    //#line 54 "SuffixArrayChar.x10"
    x10_long i__4495max__6197 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__6198;
        for (i__6198 = ((x10_long)0ll); ((i__6198) <= (i__4495max__6197));
             i__6198 = ((i__6198) + (((x10_long)1ll)))) {
            
            //#line 55 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__6198)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__6198));
            
            //#line 56 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__6185 = this->FMGL(c);
            x10_long i__6186 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__6198)) + (((x10_long)(rOffs)))))));
            x10_long r__6187 = ((::x10aux::nullCheck(a__6185)->x10::lang::Rail< x10_long >::__apply(
                                   i__6186)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__6185)->x10::lang::Rail< x10_long >::__set(
              i__6186, r__6187);
        }
    }
    
}

//#line 60 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 74 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6345)));
    
    //#line 75 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 76 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6346)));
    
    //#line 77 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 78 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6347)));
    
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
    x10_long i__4511max__6200 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__6201;
        for (i__6201 = ((x10_long)0ll); ((i__6201) <= (i__4511max__6200));
             i__6201 = ((i__6201) + (((x10_long)1ll)))) {
            
            //#line 86 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__6201), ((x10_long)0ll))))
            {
                
                //#line 87 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__6201)) - (((x10_long)1ll))))))));
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
        ::x10::xrx::FinishState* fs__6235 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 95 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__1)))bwt_SuffixArrayChar__closure__1(this))));
                
                //#line 96 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__2)))bwt_SuffixArrayChar__closure__2(this))));
                
                //#line 97 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__3)))bwt_SuffixArrayChar__closure__3(this))));
                
                //#line 98 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 99 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 100 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 101 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 102 "SuffixArrayChar.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 103 "SuffixArrayChar.x10"
                x10_long i__4527max__6203 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__6204;
                    for (i__6204 = ((x10_long)0ll); ((i__6204) <= (i__4527max__6203));
                         i__6204 = ((i__6204) + (((x10_long)1ll))))
                    {
                        
                        //#line 104 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__6204) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 105 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__6204);
                            
                            //#line 106 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc27) {
            {
                ::x10::lang::CheckedThrowable* ct__6233 =
                  __exc27;
                {
                    ::x10::xrx::Runtime::pushException(ct__6233);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__6235);
    }
}

//#line 112 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSampleR() {
    {
        
        //#line 113 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__6243 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 114 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__4)))bwt_SuffixArrayChar__closure__4(this))));
                
                //#line 115 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__5)))bwt_SuffixArrayChar__closure__5(this))));
                
                //#line 116 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__6)))bwt_SuffixArrayChar__closure__6(this))));
                
                //#line 117 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(this))));
                
                //#line 129 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 130 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 131 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 132 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc29) {
            {
                ::x10::lang::CheckedThrowable* ct__6241 =
                  __exc29;
                {
                    ::x10::xrx::Runtime::pushException(ct__6241);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__6243);
    }
    
    //#line 134 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6348)));
}

//#line 137 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 138 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 139 "SuffixArrayChar.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 140 "SuffixArrayChar.x10"
    this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                         size, num_threads);
    
    //#line 155 "SuffixArrayChar.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 156 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 157 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 158 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 159 "SuffixArrayChar.x10"
    x10_long i__4559max__6209 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__6210;
        for (i__6210 = ((x10_long)0ll); ((i__6210) <= (i__4559max__6209));
             i__6210 = ((i__6210) + (((x10_long)1ll)))) {
            
            //#line 160 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__6210)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__6210)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__6210)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 161 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 162 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__6210));
                
                //#line 163 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__6210)) + (((x10_long)1ll))));
                
                //#line 164 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__6210)) + (((x10_long)2ll))));
            }
            
            //#line 167 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__6210)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 168 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__6210)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 170 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__6210)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
    //#line 174 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6349)));
}

//#line 177 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 178 "SuffixArrayChar.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 179 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                this->FMGL(name));
        
        //#line 180 "SuffixArrayChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 181 "SuffixArrayChar.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6350)));
        {
            
            //#line 182 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__6248 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 183 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(this))));
                    
                    //#line 184 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 185 "SuffixArrayChar.x10"
                    x10_long i__4591max__6215 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__6216;
                        for (i__6216 = ((x10_long)0ll); ((i__6216) <= (i__4591max__6215));
                             i__6216 = ((i__6216) + (((x10_long)1ll))))
                        {
                            
                            //#line 186 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__6216)) < (this->FMGL(n0))))
                            {
                                
                                //#line 188 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__6216))));
                                
                                //#line 189 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 192 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 193 "SuffixArrayChar.x10"
                    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
                    
                    //#line 194 "SuffixArrayChar.x10"
                    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6351)));
                    
                    //#line 195 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, num_threads, ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc32) {
                {
                    ::x10::lang::CheckedThrowable* ct__6246 =
                      __exc32;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__6246);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__6248);
        }
    } else {
        {
            
            //#line 198 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__6253 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__4607max__6218 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__6219;
                        for (i__6219 = ((x10_long)0ll); ((i__6219) <= (i__4607max__6218));
                             i__6219 = ((i__6219) + (((x10_long)1ll))))
                        {
                            x10_long i__6220 = i__6219;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(this, i__6220))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc33) {
                {
                    ::x10::lang::CheckedThrowable* ct__6251 =
                      __exc33;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__6251);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__6253);
        }
        
        //#line 200 "SuffixArrayChar.x10"
        x10_long m = ((x10_long)0ll);
        
        //#line 201 "SuffixArrayChar.x10"
        x10_long i__4623max__6221 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6222;
            for (i__6222 = ((x10_long)0ll); ((i__6222) <= (i__4623max__6221));
                 i__6222 = ((i__6222) + (((x10_long)1ll))))
            {
                
                //#line 202 "SuffixArrayChar.x10"
                if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__6222)) < (this->FMGL(n0)))) {
                    
                    //#line 204 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                      m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                 i__6222))));
                    
                    //#line 205 "SuffixArrayChar.x10"
                    m = ((m) + (((x10_long)1ll)));
                }
                
            }
        }
        
        //#line 208 "SuffixArrayChar.x10"
        x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
        
        //#line 209 "SuffixArrayChar.x10"
        x10_int num_threads = ((x10_int) (((x10_long)11ll)));
        
        //#line 210 "SuffixArrayChar.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6351)));
        
        //#line 211 "SuffixArrayChar.x10"
        this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                        size, num_threads, ((x10_byte)0));
    }
    
    //#line 214 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__6352)));
    
    //#line 215 "SuffixArrayChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 216 "SuffixArrayChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 217 "SuffixArrayChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 218 "SuffixArrayChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 219 "SuffixArrayChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 220 "SuffixArrayChar.x10"
        x10_long i = this->getI(t);
        
        //#line 221 "SuffixArrayChar.x10"
        x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 223 "SuffixArrayChar.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__6168 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                 i)));
                x10_long a__6169 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__6170 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                 j)));
                x10_long b__6171 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__6168) < (b__6170)) || ((::x10aux::struct_equals(a__6168,
                                                                      b__6170)) &&
                ((a__6169) <= (b__6171))));
            }))
            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) >= (this->FMGL(n0))) && this->leq(
                                                    ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                  i))),
                                                    ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                  ((i) + (((x10_long)1ll)))))),
                                                    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                      ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                            t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                    ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                  j))),
                                                    ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                  ((j) + (((x10_long)1ll)))))),
                                                    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                      ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
        {
            
            //#line 226 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 227 "SuffixArrayChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 228 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 229 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 230 "SuffixArrayChar.x10"
                x10_long i__4639max__6224 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__6225;
                    for (i__6225 = ((x10_long)0ll); ((i__6225) <= (i__4639max__6224));
                         i__6225 = ((i__6225) + (((x10_long)1ll))))
                    {
                        
                        //#line 231 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 232 "SuffixArrayChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 233 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 237 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 238 "SuffixArrayChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 240 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 241 "SuffixArrayChar.x10"
                x10_long i__4655max__6227 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__6228;
                    for (i__6228 = ((x10_long)0ll); ((i__6228) <= (i__4655max__6227));
                         i__6228 = ((i__6228) + (((x10_long)1ll))))
                    {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 243 "SuffixArrayChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 244 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 251 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 252 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 255 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 256 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 259 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 260 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 261 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 263 "SuffixArrayChar.x10"
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

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6347("Start Sort Char NonSample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6346("Start Sort Char Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6349("Ended Sort Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6350("Ended BWA run");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6348("Malloc End");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6352("Start Merge Final");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6351("Start SortPairs Char");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__6345("Start Constructuring Char Sample");

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

/* END of SuffixArrayChar */
/*************************************************/
