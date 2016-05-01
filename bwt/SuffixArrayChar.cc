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
        x10_long i__9285max__11871 = ((((((saved_this->FMGL(n)) + (saved_this->FMGL(n0)))) - (saved_this->FMGL(n1)))) - (((x10_long)1ll)));
        {
            x10_long i__11872;
            for (i__11872 = ((x10_long)0ll); ((i__11872) <= (i__9285max__11871));
                 i__11872 = ((i__11872) + (((x10_long)1ll))))
            {
                
                //#line 122 "SuffixArrayChar.x10"
                if ((!::x10aux::struct_equals(((i__11872) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                              ((x10_long)0ll))))
                {
                    
                    //#line 123 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                      j, i__11872);
                    
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
        x10_long i__9317max__11877 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__11878;
            for (i__11878 = ((x10_long)0ll); ((i__11878) <= (i__9317max__11877));
                 i__11878 = ((i__11878) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__11878), ((i__11878) + (((x10_long)1ll))));
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
              i__11885)) - (((x10_long)1ll))), i__11885);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__11885;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__11885);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__11885 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_saved_this, that_i__11885);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::bwt::SuffixArrayChar* saved_this, x10_long i__11885) : saved_this(saved_this), i__11885(i__11885) { }
    
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
        
        //#line 259 "SuffixArrayChar.x10"
        ::x10::util::RailBuilder<x10_long>* rb__11907 =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
        (rb__11907)->::x10::util::RailBuilder<x10_long>::_constructor();
        
        //#line 260 "SuffixArrayChar.x10"
        x10_long p__11908 = ((((x10_long)0ll)) + (((((saved_this->FMGL(n0)) / ::x10aux::zeroCheck(((x10_long)11ll)))) * (l__11922))));
        
        //#line 261 "SuffixArrayChar.x10"
        x10_long t__11909 = ((((saved_this->FMGL(n0)) - (saved_this->FMGL(n1)))) + (((((saved_this->FMGL(n02)) / ::x10aux::zeroCheck(((x10_long)11ll)))) * (l__11922))));
        
        //#line 262 "SuffixArrayChar.x10"
        x10_long initp__11910 = p__11908;
        
        //#line 263 "SuffixArrayChar.x10"
        x10_long initt__11911 = t__11909;
        
        //#line 264 "SuffixArrayChar.x10"
        x10_long lastp__11912 = ((((p__11908) + (((saved_this->FMGL(n0)) / ::x10aux::zeroCheck(((x10_long)11ll)))))) + (((x10_long)1ll)));
        
        //#line 265 "SuffixArrayChar.x10"
        x10_long lastt__11913 = ((((t__11909) + (((saved_this->FMGL(n02)) / ::x10aux::zeroCheck(((x10_long)11ll)))))) + (((x10_long)1ll)));
        
        //#line 266 "SuffixArrayChar.x10"
        while (((((t__11909) < ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(SA12))->FMGL(size)))) &&
               ((p__11908) < ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(SA0))->FMGL(size))))) &&
               ((((p__11908) < (lastp__11912)) || ((t__11909) < (lastt__11913))))))
        {
            
            //#line 267 "SuffixArrayChar.x10"
            x10_long i__11914 = saved_this->getI(t__11909);
            
            //#line 268 "SuffixArrayChar.x10"
            x10_long j__11915 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__11908);
            
            //#line 270 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__11909)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__11917 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i__11914)));
                    x10_long a__11918 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__11909)) + (saved_this->FMGL(n0))));
                    x10_long b__11919 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j__11915)));
                    x10_long b__11920 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__11915) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__11917) < (b__11919)) || ((::x10aux::struct_equals(a__11917,
                                                                            b__11919)) &&
                    ((a__11918) <= (b__11920))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__11909)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              i__11914))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((i__11914) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__11909)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              j__11915))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((j__11915) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__11915) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 273 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11907->add(
                                                                         i__11914));
                
                //#line 274 "SuffixArrayChar.x10"
                t__11909 = ((t__11909) + (((x10_long)1ll)));
                
                //#line 275 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__11908, initp__11910)))
                {
                    
                    //#line 276 "SuffixArrayChar.x10"
                    x10_long r__11897 = ((::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                            l__11922)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__set(
                      l__11922, r__11897);
                }
                
                //#line 278 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__11909, saved_this->FMGL(n02))))
                {
                    
                    //#line 279 "SuffixArrayChar.x10"
                    x10_long i__9413max__11898 = ((((saved_this->FMGL(n0)) - (p__11908))) - (((x10_long)1ll)));
                    {
                        x10_long i__11899;
                        for (i__11899 = ((x10_long)0ll); ((i__11899) <= (i__9413max__11898));
                             i__11899 = ((i__11899) + (((x10_long)1ll))))
                        {
                            
                            //#line 280 "SuffixArrayChar.x10"
                            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11907->add(
                                                                                     ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                                                       p__11908)));
                            
                            //#line 281 "SuffixArrayChar.x10"
                            p__11908 = ((p__11908) + (((x10_long)1ll)));
                        }
                    }
                    
                    //#line 283 "SuffixArrayChar.x10"
                    break;
                }
                
            } else {
                
                //#line 286 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11907->add(
                                                                         j__11915));
                
                //#line 287 "SuffixArrayChar.x10"
                p__11908 = ((p__11908) + (((x10_long)1ll)));
                
                //#line 288 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__11909, initt__11911)))
                {
                    
                    //#line 289 "SuffixArrayChar.x10"
                    x10_long r__11903 = ((::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                            l__11922)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__set(
                      l__11922, r__11903);
                }
                
                //#line 291 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__11908, saved_this->FMGL(n0))))
                {
                    
                    //#line 292 "SuffixArrayChar.x10"
                    x10_long i__9429max__11904 = ((((saved_this->FMGL(n02)) - (t__11909))) - (((x10_long)1ll)));
                    {
                        x10_long i__11905;
                        for (i__11905 = ((x10_long)0ll); ((i__11905) <= (i__9429max__11904));
                             i__11905 = ((i__11905) + (((x10_long)1ll))))
                        {
                            
                            //#line 293 "SuffixArrayChar.x10"
                            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11907->add(
                                                                                     saved_this->getI(
                                                                                       t__11909)));
                            
                            //#line 294 "SuffixArrayChar.x10"
                            t__11909 = ((t__11909) + (((x10_long)1ll)));
                        }
                    }
                    
                    //#line 296 "SuffixArrayChar.x10"
                    break;
                }
                
            }
            
        }
        
        //#line 300 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
          l__11922, rb__11907->result());
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long l__11922;
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > bothstart;
    x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > sa;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->l__11922);
        buf.write(this->bothstart);
        buf.write(this->sa);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__11* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__11>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_l__11922 = buf.read<x10_long>();
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_bothstart = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > that_sa = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > >();
        bwt_SuffixArrayChar__closure__11* this_ = new (storage) bwt_SuffixArrayChar__closure__11(that_saved_this, that_l__11922, that_bothstart, that_sa);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__11(::bwt::SuffixArrayChar* saved_this, x10_long l__11922, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > bothstart, x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > sa) : saved_this(saved_this), l__11922(l__11922), bothstart(bothstart), sa(sa) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:258-301";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__11_CLOSURE

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
    ::bwt::SuffixArrayChar* this__11845 = this;
    ::x10aux::nullCheck(this__11845)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11845)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11845)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11845)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11845)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11845)->FMGL(name) = ((x10_long)0ll);
    
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
    x10_long i__9189max__11853 = this->FMGL(k);
    {
        x10_long i__11854;
        for (i__11854 = ((x10_long)0ll); ((i__11854) <= (i__9189max__11853));
             i__11854 = ((i__11854) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__11854, ((x10_long)0ll));
        }
    }
    
    //#line 45 "SuffixArrayChar.x10"
    x10_long i__9205max__11856 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__11857;
        for (i__11857 = ((x10_long)0ll); ((i__11857) <= (i__9205max__11856));
             i__11857 = ((i__11857) + (((x10_long)1ll))))
        {
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__11846 = this->FMGL(c);
            x10_long i__11847 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__11857)) + (((x10_long)(rOffs)))))));
            x10_long r__11848 = ((::x10aux::nullCheck(a__11846)->x10::lang::Rail< x10_long >::__apply(
                                    i__11847)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__11846)->x10::lang::Rail< x10_long >::__set(
              i__11847, r__11848);
        }
    }
    
    //#line 48 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__9221max__11859 = this->FMGL(k);
    {
        x10_long i__11860;
        for (i__11860 = ((x10_long)0ll); ((i__11860) <= (i__9221max__11859));
             i__11860 = ((i__11860) + (((x10_long)1ll))))
        {
            
            //#line 50 "SuffixArrayChar.x10"
            x10_long t__11849 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                  i__11860);
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__11860, sum);
            
            //#line 52 "SuffixArrayChar.x10"
            sum = ((sum) + (t__11849));
        }
    }
    
    //#line 54 "SuffixArrayChar.x10"
    x10_long i__9237max__11862 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__11863;
        for (i__11863 = ((x10_long)0ll); ((i__11863) <= (i__9237max__11862));
             i__11863 = ((i__11863) + (((x10_long)1ll))))
        {
            
            //#line 55 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__11863)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__11863));
            
            //#line 56 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__11850 = this->FMGL(c);
            x10_long i__11851 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__11863)) + (((x10_long)(rOffs)))))));
            x10_long r__11852 = ((::x10aux::nullCheck(a__11850)->x10::lang::Rail< x10_long >::__apply(
                                    i__11851)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__11850)->x10::lang::Rail< x10_long >::__set(
              i__11851, r__11852);
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
    x10_long i__9253max__11865 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__11866;
        for (i__11866 = ((x10_long)0ll); ((i__11866) <= (i__9253max__11865));
             i__11866 = ((i__11866) + (((x10_long)1ll))))
        {
            
            //#line 86 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__11866), ((x10_long)0ll))))
            {
                
                //#line 87 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__11866)) - (((x10_long)1ll))))))));
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
        ::x10::xrx::FinishState* fs__11936 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__9269max__11868 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__11869;
                    for (i__11869 = ((x10_long)0ll); ((i__11869) <= (i__9269max__11868));
                         i__11869 = ((i__11869) + (((x10_long)1ll))))
                    {
                        
                        //#line 103 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__11869) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 104 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__11869);
                            
                            //#line 105 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc28) {
            {
                ::x10::lang::CheckedThrowable* ct__11934 =
                  __exc28;
                {
                    ::x10::xrx::Runtime::pushException(ct__11934);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__11936);
    }
}

//#line 111 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSampleR() {
    {
        
        //#line 112 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__11944 = ::x10::xrx::Runtime::startFinish();
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
        catch (::x10::lang::CheckedThrowable* __exc30) {
            {
                ::x10::lang::CheckedThrowable* ct__11942 =
                  __exc30;
                {
                    ::x10::xrx::Runtime::pushException(ct__11942);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__11944);
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
    x10_long i__9301max__11874 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__11875;
        for (i__11875 = ((x10_long)0ll); ((i__11875) <= (i__9301max__11874));
             i__11875 = ((i__11875) + (((x10_long)1ll))))
        {
            
            //#line 159 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__11875)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__11875)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__11875)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 160 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 161 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__11875));
                
                //#line 162 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__11875)) + (((x10_long)1ll))));
                
                //#line 163 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__11875)) + (((x10_long)2ll))));
            }
            
            //#line 166 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__11875)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 167 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__11875)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 169 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__11875)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
            ::x10::xrx::FinishState* fs__11950 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 183 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(this))));
                    
                    //#line 184 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(this))));
                    
                    //#line 185 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 186 "SuffixArrayChar.x10"
                    x10_long i__9333max__11880 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__11881;
                        for (i__11881 = ((x10_long)0ll); ((i__11881) <= (i__9333max__11880));
                             i__11881 = ((i__11881) + (((x10_long)1ll))))
                        {
                            
                            //#line 187 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__11881)) < (this->FMGL(n0))))
                            {
                                
                                //#line 189 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__11881))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc33) {
                {
                    ::x10::lang::CheckedThrowable* ct__11948 =
                      __exc33;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11948);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11950);
        }
    } else {
        {
            
            //#line 199 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__11955 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__9349max__11883 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__11884;
                        for (i__11884 = ((x10_long)0ll); ((i__11884) <= (i__9349max__11883));
                             i__11884 = ((i__11884) + (((x10_long)1ll))))
                        {
                            x10_long i__11885 = i__11884;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(this, i__11885))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc34) {
                {
                    ::x10::lang::CheckedThrowable* ct__11953 =
                      __exc34;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11953);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11955);
        }
        {
            
            //#line 200 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__11960 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 201 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__10)))bwt_SuffixArrayChar__closure__10(this))));
                    
                    //#line 202 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 203 "SuffixArrayChar.x10"
                    x10_long i__9365max__11886 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__11887;
                        for (i__11887 = ((x10_long)0ll); ((i__11887) <= (i__9365max__11886));
                             i__11887 = ((i__11887) + (((x10_long)1ll))))
                        {
                            
                            //#line 204 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__11887)) < (this->FMGL(n0))))
                            {
                                
                                //#line 206 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__11887))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc35) {
                {
                    ::x10::lang::CheckedThrowable* ct__11958 =
                      __exc35;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11958);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11960);
        }
    }
    
    //#line 217 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__12862)));
    
    //#line 219 "SuffixArrayChar.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) < (((x10_long)11ll))))
    {
        
        //#line 220 "SuffixArrayChar.x10"
        x10_long p = ((x10_long)0ll);
        
        //#line 221 "SuffixArrayChar.x10"
        x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 222 "SuffixArrayChar.x10"
        x10_long k = ((x10_long)-1ll);
        
        //#line 223 "SuffixArrayChar.x10"
        while (((k) < (this->FMGL(n)))) {
            
            //#line 224 "SuffixArrayChar.x10"
            k = ((k) + (((x10_long)1ll)));
            
            //#line 225 "SuffixArrayChar.x10"
            x10_long i = this->getI(t);
            
            //#line 226 "SuffixArrayChar.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                           p);
            
            //#line 228 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) < (this->FMGL(n0))) && (__extension__ ({
                    x10_long a__11827 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i)));
                    x10_long a__11828 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t)) + (this->FMGL(n0))));
                    x10_long b__11829 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j)));
                    x10_long b__11830 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__11827) < (b__11829)) || ((::x10aux::struct_equals(a__11827,
                                                                            b__11829)) &&
                    ((a__11828) <= (b__11830))));
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
                
                //#line 231 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, i);
                
                //#line 232 "SuffixArrayChar.x10"
                t = ((t) + (((x10_long)1ll)));
                
                //#line 233 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                {
                    
                    //#line 234 "SuffixArrayChar.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 235 "SuffixArrayChar.x10"
                    x10_long i__9381max__11889 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                    {
                        x10_long i__11890;
                        for (i__11890 = ((x10_long)0ll); ((i__11890) <= (i__9381max__11889));
                             i__11890 = ((i__11890) + (((x10_long)1ll))))
                        {
                            
                            //#line 236 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                   p));
                            
                            //#line 237 "SuffixArrayChar.x10"
                            p = ((p) + (((x10_long)1ll)));
                            
                            //#line 238 "SuffixArrayChar.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 242 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, j);
                
                //#line 243 "SuffixArrayChar.x10"
                p = ((p) + (((x10_long)1ll)));
                
                //#line 244 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                {
                    
                    //#line 245 "SuffixArrayChar.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 246 "SuffixArrayChar.x10"
                    x10_long i__9397max__11892 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                    {
                        x10_long i__11893;
                        for (i__11893 = ((x10_long)0ll); ((i__11893) <= (i__9397max__11892));
                             i__11893 = ((i__11893) + (((x10_long)1ll))))
                        {
                            
                            //#line 247 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, this->getI(t));
                            
                            //#line 248 "SuffixArrayChar.x10"
                            t = ((t) + (((x10_long)1ll)));
                            
                            //#line 249 "SuffixArrayChar.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    } else {
        
        //#line 255 "SuffixArrayChar.x10"
        ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* sa =
          ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(((x10_long)11ll));
        
        //#line 256 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* bothstart = ::x10::lang::Rail< x10_long >::_make(((x10_long)11ll));
        {
            
            //#line 258 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__11965 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long i__11921;
                        for (i__11921 = ((x10_long)0ll); ((i__11921) <= (((x10_long)10ll)));
                             i__11921 = ((i__11921) + (((x10_long)1ll))))
                        {
                            x10_long l__11922 = i__11921;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__11)))bwt_SuffixArrayChar__closure__11(this, l__11922, &(bothstart), &(sa)))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc36) {
                {
                    ::x10::lang::CheckedThrowable* ct__11963 =
                      __exc36;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11963);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11965);
        }
        
        //#line 303 "SuffixArrayChar.x10"
        ::x10::lang::Rail< void >::copy< x10_long >(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                      ((x10_long)0ll)),
                                                    ((x10_long)0ll),
                                                    this->FMGL(SA),
                                                    ((x10_long)0ll),
                                                    (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                                     ((x10_long)0ll)))->FMGL(size)));
        
        //#line 304 "SuffixArrayChar.x10"
        {
            x10_long i__11928;
            for (i__11928 = ((x10_long)1ll); ((i__11928) <= (((x10_long)10ll)));
                 i__11928 = ((i__11928) + (((x10_long)1ll))))
            {
                
                //#line 306 "SuffixArrayChar.x10"
                x10_long r__11925 = ((::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                        i__11928)) + (((x10_long)1ll)));
                ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__set(
                  i__11928, r__11925);
            }
        }
        
        //#line 308 "SuffixArrayChar.x10"
        x10_long nowsize = (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                            ((x10_long)0ll)))->FMGL(size));
        
        //#line 309 "SuffixArrayChar.x10"
        {
            x10_long i__11930;
            for (i__11930 = ((x10_long)1ll); ((i__11930) <= (((x10_long)10ll)));
                 i__11930 = ((i__11930) + (((x10_long)1ll))))
            {
                
                //#line 310 "SuffixArrayChar.x10"
                ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                  ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                                                       i__11930)));
                
                //#line 311 "SuffixArrayChar.x10"
                x10_long nextsize__11926 = (((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                              i__11930))->FMGL(size))) - (::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                                                                                            i__11930)));
                
                //#line 312 "SuffixArrayChar.x10"
                x10_long width__11927 = ((((nowsize) + (nextsize__11926))) < (((this->FMGL(n)) + (((x10_long)2ll)))))
                  ? (nextsize__11926) : (((((this->FMGL(n)) + (((x10_long)2ll)))) - (nowsize)));
                
                //#line 313 "SuffixArrayChar.x10"
                if (((nowsize) < (this->FMGL(n)))) {
                    
                    //#line 314 "SuffixArrayChar.x10"
                    ::x10::lang::Rail< void >::copy< x10_long >(
                      ::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                        i__11930), ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                     i__11930), this->FMGL(SA),
                      nowsize, width__11927);
                    
                    //#line 315 "SuffixArrayChar.x10"
                    nowsize = ((nowsize) + (nextsize__11926));
                }
                
            }
        }
        
        //#line 318 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
          this->FMGL(n), ((x10_long)0ll));
        
        //#line 319 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
          ((this->FMGL(n)) + (((x10_long)1ll))), ((x10_long)0ll));
        
        //#line 320 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
          ((this->FMGL(n)) + (((x10_long)2ll))), ((x10_long)0ll));
    }
    
}

//#line 324 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 325 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 328 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 329 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 332 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 333 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 334 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 336 "SuffixArrayChar.x10"
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

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__12862("Start Merge Final");

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

/* END of SuffixArrayChar */
/*************************************************/
