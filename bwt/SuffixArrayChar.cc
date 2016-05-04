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
        x10_long i__11725max__14974 = ((((((saved_this->FMGL(n)) + (saved_this->FMGL(n0)))) - (saved_this->FMGL(n1)))) - (((x10_long)1ll)));
        {
            x10_long i__14975;
            for (i__14975 = ((x10_long)0ll); ((i__14975) <= (i__11725max__14974));
                 i__14975 = ((i__14975) + (((x10_long)1ll))))
            {
                
                //#line 122 "SuffixArrayChar.x10"
                if ((!::x10aux::struct_equals(((i__14975) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                              ((x10_long)0ll))))
                {
                    
                    //#line 123 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                      j, i__14975);
                    
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
        x10_long i__11757max__14980 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__14981;
            for (i__14981 = ((x10_long)0ll); ((i__14981) <= (i__11757max__14980));
                 i__14981 = ((i__14981) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__14981), ((i__14981) + (((x10_long)1ll))));
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
              i__14988)) - (((x10_long)1ll))), i__14988);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__14988;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__14988);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__14988 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_saved_this, that_i__14988);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::bwt::SuffixArrayChar* saved_this, x10_long i__14988) : saved_this(saved_this), i__14988(i__14988) { }
    
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
        lbl = (__extension__ ({
            x10_long t_lb__14731 = t_lb;
            x10_long t_ub__14732 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14733 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14734 = p_lb;
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__14735 = ((((t_lb) + (t_ub__14732))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__14736 = ((((p_lb) + (p_ub__14733))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__14732) - (t_lb__14731))) > (((x10_long)1ll))) ||
                   ((((p_ub__14733) - (p_lb__14734))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__14739;
                        goto __ret__14740; __ret__14740: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__14741 = saved_this->getI(
                                                  t_mid__14735);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__14742 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14736);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14735)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14744 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__14741)));
                                    x10_long a__14745 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14735)) + (saved_this->FMGL(n0))));
                                    x10_long b__14746 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__14742)));
                                    x10_long b__14747 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14742) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14744) < (b__14746)) ||
                                    ((::x10aux::struct_equals(a__14744,
                                                              b__14746)) &&
                                    ((a__14745) <= (b__14747))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14735)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__14741))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__14741) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14735)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__14742))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__14742) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14742) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__14739 = true;
                                goto __ret__14740_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__14739 = false;
                                goto __ret__14740_end_;
                            }
                            
                        }goto __ret__14740_end_; __ret__14740_end_: ;
                        }
                        ret__14739;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__14731 = t_mid__14735;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__14733 = p_mid__14736;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__14732 = t_mid__14735;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__14734 = p_mid__14736;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__14735 = ((((t_lb__14731) + (t_ub__14732))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__14736 = ((((p_lb__14734) + (p_ub__14733))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__14748 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__16233 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__16233->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14731);
                                                                                                t__16233->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14734);
                                                                                                t__16233;
                                                                                            }))
                                                                                            );
            lb__14748;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl;
        x10aux::captured_struct_lval<x10_long> t_lb;
        ::x10::lang::Rail< x10_long >* lb;
        x10aux::captured_struct_lval<x10_long> p_lb;
        ::bwt::SuffixArrayChar* saved_this;
        
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
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__11* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__11>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__11* this_ = new (storage) bwt_SuffixArrayChar__closure__11(that_lbl, that_t_lb, that_lb, that_p_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__11(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArrayChar* saved_this) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), saved_this(saved_this) { }
        
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
        lbll = (__extension__ ({
            x10_long t_lb__14803 = t_lb;
            x10_long t_ub__14804 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14805 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14806 = p_lb;
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__14807 = ((((t_lb) + (t_ub__14804))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__14808 = ((((p_lb) + (p_ub__14805))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__14804) - (t_lb__14803))) > (((x10_long)1ll))) ||
                   ((((p_ub__14805) - (p_lb__14806))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__14811;
                        goto __ret__14812; __ret__14812: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__14813 = saved_this->getI(
                                                  t_mid__14807);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__14814 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14808);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14807)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14816 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__14813)));
                                    x10_long a__14817 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14807)) + (saved_this->FMGL(n0))));
                                    x10_long b__14818 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__14814)));
                                    x10_long b__14819 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14814) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14816) < (b__14818)) ||
                                    ((::x10aux::struct_equals(a__14816,
                                                              b__14818)) &&
                                    ((a__14817) <= (b__14819))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14807)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__14813))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__14813) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14807)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__14814))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__14814) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14814) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__14811 = true;
                                goto __ret__14812_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__14811 = false;
                                goto __ret__14812_end_;
                            }
                            
                        }goto __ret__14812_end_; __ret__14812_end_: ;
                        }
                        ret__14811;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__14803 = t_mid__14807;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__14805 = p_mid__14808;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__14804 = t_mid__14807;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__14806 = p_mid__14808;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__14807 = ((((t_lb__14803) + (t_ub__14804))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__14808 = ((((p_lb__14806) + (p_ub__14805))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__14820 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__16245 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__16245->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14803);
                                                                                                t__16245->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14806);
                                                                                                t__16245;
                                                                                            }))
                                                                                            );
            lb__14820;
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
        lbrr = (__extension__ ({
            x10_long t_lb__14839 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__14840 = t_ub;
            x10_long p_ub__14841 = p_ub;
            x10_long p_lb__14842 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__14843 = ((((t_lb__14839) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__14844 = ((((p_lb__14842) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__14840) - (t_lb__14839))) > (((x10_long)1ll))) ||
                   ((((p_ub__14841) - (p_lb__14842))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__14847;
                        goto __ret__14848; __ret__14848: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__14849 = saved_this->getI(
                                                  t_mid__14843);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__14850 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14844);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14843)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14852 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__14849)));
                                    x10_long a__14853 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14843)) + (saved_this->FMGL(n0))));
                                    x10_long b__14854 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__14850)));
                                    x10_long b__14855 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14850) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14852) < (b__14854)) ||
                                    ((::x10aux::struct_equals(a__14852,
                                                              b__14854)) &&
                                    ((a__14853) <= (b__14855))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14843)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__14849))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__14849) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14843)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__14850))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__14850) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14850) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__14847 = true;
                                goto __ret__14848_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__14847 = false;
                                goto __ret__14848_end_;
                            }
                            
                        }goto __ret__14848_end_; __ret__14848_end_: ;
                        }
                        ret__14847;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__14839 = t_mid__14843;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__14841 = p_mid__14844;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__14840 = t_mid__14843;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__14842 = p_mid__14844;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__14843 = ((((t_lb__14839) + (t_ub__14840))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__14844 = ((((p_lb__14842) + (p_ub__14841))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__14856 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__16251 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__16251->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14839);
                                                                                                t__16251->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14842);
                                                                                                t__16251;
                                                                                            }))
                                                                                            );
            lb__14856;
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
        lblr = (__extension__ ({
            x10_long t_lb__14875 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__14876 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14877 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14878 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__14879 = ((((t_lb__14875) + (t_ub__14876))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__14880 = ((((p_lb__14878) + (p_ub__14877))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__14876) - (t_lb__14875))) > (((x10_long)1ll))) ||
                   ((((p_ub__14877) - (p_lb__14878))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__14883;
                        goto __ret__14884; __ret__14884: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__14885 = saved_this->getI(
                                                  t_mid__14879);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__14886 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14880);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14879)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14888 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__14885)));
                                    x10_long a__14889 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14879)) + (saved_this->FMGL(n0))));
                                    x10_long b__14890 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__14886)));
                                    x10_long b__14891 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14886) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14888) < (b__14890)) ||
                                    ((::x10aux::struct_equals(a__14888,
                                                              b__14890)) &&
                                    ((a__14889) <= (b__14891))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14879)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__14885))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__14885) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14879)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__14886))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__14886) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14886) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__14883 = true;
                                goto __ret__14884_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__14883 = false;
                                goto __ret__14884_end_;
                            }
                            
                        }goto __ret__14884_end_; __ret__14884_end_: ;
                        }
                        ret__14883;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__14875 = t_mid__14879;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__14877 = p_mid__14880;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__14876 = t_mid__14879;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__14878 = p_mid__14880;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__14879 = ((((t_lb__14875) + (t_ub__14876))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__14880 = ((((p_lb__14878) + (p_ub__14877))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__14892 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__16257 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__16257->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14875);
                                                                                                t__16257->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14878);
                                                                                                t__16257;
                                                                                            }))
                                                                                            );
            lb__14892;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr;
        ::x10::lang::Rail< x10_long >* lbl;
        ::x10::lang::Rail< x10_long >* lb;
        ::bwt::SuffixArrayChar* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lblr);
            buf.write(this->lbl);
            buf.write(this->lb);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArrayChar__closure__14* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__14>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__14* this_ = new (storage) bwt_SuffixArrayChar__closure__14(that_lblr, that_lbl, that_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__14(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr, ::x10::lang::Rail< x10_long >* lbl, ::x10::lang::Rail< x10_long >* lb, ::bwt::SuffixArrayChar* saved_this) : lblr(lblr), lbl(lbl), lb(lb), saved_this(saved_this) { }
        
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
        x10_long k__14998 = krail->x10::lang::Rail< x10_long >::__apply(l__15009);
        
        //#line 298 "SuffixArrayChar.x10"
        x10_long t__14999 = trail->x10::lang::Rail< x10_long >::__apply(l__15009);
        
        //#line 299 "SuffixArrayChar.x10"
        x10_long p__15000 = prail->x10::lang::Rail< x10_long >::__apply(l__15009);
        
        //#line 300 "SuffixArrayChar.x10"
        while (((k__14998) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__15009)))) {
            
            //#line 301 "SuffixArrayChar.x10"
            k__14998 = ((k__14998) + (((x10_long)1ll)));
            
            //#line 302 "SuffixArrayChar.x10"
            x10_long i__15001 = saved_this->getI(t__14999);
            
            //#line 303 "SuffixArrayChar.x10"
            x10_long j__15002 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__15000);
            
            //#line 305 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__14999)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__15004 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i__15001)));
                    x10_long a__15005 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__14999)) + (saved_this->FMGL(n0))));
                    x10_long b__15006 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j__15002)));
                    x10_long b__15007 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__15002) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__15004) < (b__15006)) || ((::x10aux::struct_equals(a__15004,
                                                                            b__15006)) &&
                    ((a__15005) <= (b__15007))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__14999)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              i__15001))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((i__15001) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__14999)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              j__15002))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((j__15002) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__15002) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 308 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__15009,
                                                 ((x10_long)0ll))) &&
                    ((k__14998) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__15009)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 309 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__14998, i__15001);
                }
                
                //#line 311 "SuffixArrayChar.x10"
                t__14999 = ((t__14999) + (((x10_long)1ll)));
                
                //#line 312 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__14999, saved_this->FMGL(n02))))
                {
                    
                    //#line 313 "SuffixArrayChar.x10"
                    k__14998 = ((k__14998) + (((x10_long)1ll)));
                    
                    //#line 314 "SuffixArrayChar.x10"
                    x10_long i__11821max__14992 = ((((saved_this->FMGL(n0)) - (p__15000))) - (((x10_long)1ll)));
                    {
                        x10_long i__14993;
                        for (i__14993 = ((x10_long)0ll); ((i__14993) <= (i__11821max__14992));
                             i__14993 = ((i__14993) + (((x10_long)1ll))))
                        {
                            
                            //#line 315 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__14998, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__15000));
                            
                            //#line 316 "SuffixArrayChar.x10"
                            p__15000 = ((p__15000) + (((x10_long)1ll)));
                            
                            //#line 317 "SuffixArrayChar.x10"
                            k__14998 = ((k__14998) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 321 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__15009,
                                                 ((x10_long)0ll))) &&
                    ((k__14998) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__15009)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 322 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__14998, j__15002);
                }
                
                //#line 324 "SuffixArrayChar.x10"
                p__15000 = ((p__15000) + (((x10_long)1ll)));
                
                //#line 325 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__15000, saved_this->FMGL(n0))))
                {
                    
                    //#line 326 "SuffixArrayChar.x10"
                    k__14998 = ((k__14998) + (((x10_long)1ll)));
                    
                    //#line 327 "SuffixArrayChar.x10"
                    x10_long i__11837max__14995 = ((((saved_this->FMGL(n02)) - (t__14999))) - (((x10_long)1ll)));
                    {
                        x10_long i__14996;
                        for (i__14996 = ((x10_long)0ll); ((i__14996) <= (i__11837max__14995));
                             i__14996 = ((i__14996) + (((x10_long)1ll))))
                        {
                            
                            //#line 328 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__14998, saved_this->getI(
                                          t__14999));
                            
                            //#line 329 "SuffixArrayChar.x10"
                            t__14999 = ((t__14999) + (((x10_long)1ll)));
                            
                            //#line 330 "SuffixArrayChar.x10"
                            k__14998 = ((k__14998) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__15009;
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
        buf.write(this->l__15009);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__15* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__15>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__15009 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__15* this_ = new (storage) bwt_SuffixArrayChar__closure__15(that_krail, that_l__15009, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__15(::x10::lang::Rail< x10_long >* krail, x10_long l__15009, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArrayChar* saved_this) : krail(krail), l__15009(l__15009), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
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
    ::bwt::SuffixArrayChar* this__14948 = this;
    ::x10aux::nullCheck(this__14948)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14948)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14948)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14948)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14948)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14948)->FMGL(name) = ((x10_long)0ll);
    
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
    x10_long i__11629max__14956 = this->FMGL(k);
    {
        x10_long i__14957;
        for (i__14957 = ((x10_long)0ll); ((i__14957) <= (i__11629max__14956));
             i__14957 = ((i__14957) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__14957, ((x10_long)0ll));
        }
    }
    
    //#line 45 "SuffixArrayChar.x10"
    x10_long i__11645max__14959 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__14960;
        for (i__14960 = ((x10_long)0ll); ((i__14960) <= (i__11645max__14959));
             i__14960 = ((i__14960) + (((x10_long)1ll))))
        {
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__14949 = this->FMGL(c);
            x10_long i__14950 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__14960)) + (((x10_long)(rOffs)))))));
            x10_long r__14951 = ((::x10aux::nullCheck(a__14949)->x10::lang::Rail< x10_long >::__apply(
                                    i__14950)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__14949)->x10::lang::Rail< x10_long >::__set(
              i__14950, r__14951);
        }
    }
    
    //#line 48 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__11661max__14962 = this->FMGL(k);
    {
        x10_long i__14963;
        for (i__14963 = ((x10_long)0ll); ((i__14963) <= (i__11661max__14962));
             i__14963 = ((i__14963) + (((x10_long)1ll))))
        {
            
            //#line 50 "SuffixArrayChar.x10"
            x10_long t__14952 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                  i__14963);
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__14963, sum);
            
            //#line 52 "SuffixArrayChar.x10"
            sum = ((sum) + (t__14952));
        }
    }
    
    //#line 54 "SuffixArrayChar.x10"
    x10_long i__11677max__14965 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__14966;
        for (i__14966 = ((x10_long)0ll); ((i__14966) <= (i__11677max__14965));
             i__14966 = ((i__14966) + (((x10_long)1ll))))
        {
            
            //#line 55 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__14966)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__14966));
            
            //#line 56 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__14953 = this->FMGL(c);
            x10_long i__14954 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__14966)) + (((x10_long)(rOffs)))))));
            x10_long r__14955 = ((::x10aux::nullCheck(a__14953)->x10::lang::Rail< x10_long >::__apply(
                                    i__14954)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__14953)->x10::lang::Rail< x10_long >::__set(
              i__14954, r__14955);
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
    x10_long i__11693max__14968 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__14969;
        for (i__14969 = ((x10_long)0ll); ((i__14969) <= (i__11693max__14968));
             i__14969 = ((i__14969) + (((x10_long)1ll))))
        {
            
            //#line 86 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__14969), ((x10_long)0ll))))
            {
                
                //#line 87 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__14969)) - (((x10_long)1ll))))))));
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
        ::x10::xrx::FinishState* fs__15020 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__11709max__14971 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__14972;
                    for (i__14972 = ((x10_long)0ll); ((i__14972) <= (i__11709max__14971));
                         i__14972 = ((i__14972) + (((x10_long)1ll))))
                    {
                        
                        //#line 103 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__14972) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 104 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__14972);
                            
                            //#line 105 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc30) {
            {
                ::x10::lang::CheckedThrowable* ct__15018 =
                  __exc30;
                {
                    ::x10::xrx::Runtime::pushException(ct__15018);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__15020);
    }
}

//#line 111 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSampleR() {
    {
        
        //#line 112 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__15028 = ::x10::xrx::Runtime::startFinish();
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
                ::x10::lang::CheckedThrowable* ct__15026 =
                  __exc32;
                {
                    ::x10::xrx::Runtime::pushException(ct__15026);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__15028);
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
    x10_long i__11741max__14977 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__14978;
        for (i__14978 = ((x10_long)0ll); ((i__14978) <= (i__11741max__14977));
             i__14978 = ((i__14978) + (((x10_long)1ll))))
        {
            
            //#line 159 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__14978)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__14978)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__14978)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 160 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 161 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__14978));
                
                //#line 162 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__14978)) + (((x10_long)1ll))));
                
                //#line 163 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__14978)) + (((x10_long)2ll))));
            }
            
            //#line 166 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__14978)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 167 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__14978)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 169 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__14978)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
            ::x10::xrx::FinishState* fs__15034 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 183 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(this))));
                    
                    //#line 184 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(this))));
                    
                    //#line 185 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 186 "SuffixArrayChar.x10"
                    x10_long i__11773max__14983 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14984;
                        for (i__14984 = ((x10_long)0ll); ((i__14984) <= (i__11773max__14983));
                             i__14984 = ((i__14984) + (((x10_long)1ll))))
                        {
                            
                            //#line 187 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__14984)) < (this->FMGL(n0))))
                            {
                                
                                //#line 189 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__14984))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__15032 =
                      __exc35;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__15032);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__15034);
        }
    } else {
        {
            
            //#line 199 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__15039 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__11789max__14986 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14987;
                        for (i__14987 = ((x10_long)0ll); ((i__14987) <= (i__11789max__14986));
                             i__14987 = ((i__14987) + (((x10_long)1ll))))
                        {
                            x10_long i__14988 = i__14987;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(this, i__14988))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc36) {
                {
                    ::x10::lang::CheckedThrowable* ct__15037 =
                      __exc36;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__15037);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__15039);
        }
        {
            
            //#line 200 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__15044 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 201 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__10)))bwt_SuffixArrayChar__closure__10(this))));
                    
                    //#line 202 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 203 "SuffixArrayChar.x10"
                    x10_long i__11805max__14989 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14990;
                        for (i__14990 = ((x10_long)0ll); ((i__14990) <= (i__11805max__14989));
                             i__14990 = ((i__14990) + (((x10_long)1ll))))
                        {
                            
                            //#line 204 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__14990)) < (this->FMGL(n0))))
                            {
                                
                                //#line 206 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__14990))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__15042 =
                      __exc37;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__15042);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__15044);
        }
    }
    
    //#line 217 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__16340)));
    
    //#line 220 "SuffixArrayChar.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)11ll))))
    {
        
        //#line 221 "SuffixArrayChar.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 222 "SuffixArrayChar.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 223 "SuffixArrayChar.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 224 "SuffixArrayChar.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 255 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__14695 = t_lb;
            x10_long t_ub__14696 = t_ub;
            x10_long p_ub__14697 = p_ub;
            x10_long p_lb__14698 = p_lb;
            
            //#line 238 "SuffixArrayChar.x10"
            x10_long t_mid__14699 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 239 "SuffixArrayChar.x10"
            x10_long p_mid__14700 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 240 "SuffixArrayChar.x10"
            while ((((((t_ub__14696) - (t_lb__14695))) > (((x10_long)1ll))) ||
                   ((((p_ub__14697) - (p_lb__14698))) > (((x10_long)1ll)))))
            {
                
                //#line 241 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 225 "SuffixArrayChar.x10"
                        x10_boolean ret__14703;
                        goto __ret__14704; __ret__14704: {
                        {
                            
                            //#line 226 "SuffixArrayChar.x10"
                            x10_long i__14705 = this->getI(
                                                  t_mid__14699);
                            
                            //#line 227 "SuffixArrayChar.x10"
                            x10_long j__14706 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14700);
                            
                            //#line 228 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14699)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14708 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__14705)));
                                    x10_long a__14709 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14699)) + (this->FMGL(n0))));
                                    x10_long b__14710 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__14706)));
                                    x10_long b__14711 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14706) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14708) < (b__14710)) ||
                                    ((::x10aux::struct_equals(a__14708,
                                                              b__14710)) &&
                                    ((a__14709) <= (b__14711))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14699)) >= (this->FMGL(n0))) &&
                                this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        i__14705))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((i__14705) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14699)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        j__14706))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((j__14706) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__14706) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 231 "SuffixArrayChar.x10"
                                ret__14703 = true;
                                goto __ret__14704_end_;
                            } else {
                                
                                //#line 233 "SuffixArrayChar.x10"
                                ret__14703 = false;
                                goto __ret__14704_end_;
                            }
                            
                        }goto __ret__14704_end_; __ret__14704_end_: ;
                        }
                        ret__14703;
                        }))
                        ) {
                        
                        //#line 242 "SuffixArrayChar.x10"
                        t_lb__14695 = t_mid__14699;
                        
                        //#line 243 "SuffixArrayChar.x10"
                        p_ub__14697 = p_mid__14700;
                    } else {
                        
                        //#line 245 "SuffixArrayChar.x10"
                        t_ub__14696 = t_mid__14699;
                        
                        //#line 246 "SuffixArrayChar.x10"
                        p_lb__14698 = p_mid__14700;
                    }
                    
                
                //#line 248 "SuffixArrayChar.x10"
                t_mid__14699 = ((((t_lb__14695) + (t_ub__14696))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 249 "SuffixArrayChar.x10"
                p_mid__14700 = ((((p_lb__14698) + (p_ub__14697))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 251 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__14712 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__16227 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__16227->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14695);
                                                                                                t__16227->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14698);
                                                                                                t__16227;
                                                                                            }))
                                                                                            );
            lb__14712;
            }))
            ;
            
        
        //#line 256 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 257 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 258 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 259 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 260 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 261 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 262 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__15049 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 263 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__11)))bwt_SuffixArrayChar__closure__11(&(lbl), &(t_lb), lb, &(p_lb), this))));
                    
                    //#line 264 "SuffixArrayChar.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__14767 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__14768 = t_ub;
                        x10_long p_ub__14769 = p_ub;
                        x10_long p_lb__14770 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 238 "SuffixArrayChar.x10"
                        x10_long t_mid__14771 = ((((t_lb__14767) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 239 "SuffixArrayChar.x10"
                        x10_long p_mid__14772 = ((((p_lb__14770) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 240 "SuffixArrayChar.x10"
                        while ((((((t_ub__14768) - (t_lb__14767))) > (((x10_long)1ll))) ||
                               ((((p_ub__14769) - (p_lb__14770))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 241 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 225 "SuffixArrayChar.x10"
                                    x10_boolean ret__14775;
                                    goto __ret__14776; __ret__14776: {
                                    {
                                        
                                        //#line 226 "SuffixArrayChar.x10"
                                        x10_long i__14777 =
                                          this->getI(t_mid__14771);
                                        
                                        //#line 227 "SuffixArrayChar.x10"
                                        x10_long j__14778 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__14772);
                                        
                                        //#line 228 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14771)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__14780 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__14777)));
                                                x10_long a__14781 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14771)) + (this->FMGL(n0))));
                                                x10_long b__14782 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__14778)));
                                                x10_long b__14783 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__14778) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__14780) < (b__14782)) ||
                                                ((::x10aux::struct_equals(a__14780,
                                                                          b__14782)) &&
                                                ((a__14781) <= (b__14783))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__14771)) >= (this->FMGL(n0))) &&
                                            this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    i__14777))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((i__14777) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14771)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    j__14778))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((j__14778) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__14778) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 231 "SuffixArrayChar.x10"
                                            ret__14775 = true;
                                            goto __ret__14776_end_;
                                        } else {
                                            
                                            //#line 233 "SuffixArrayChar.x10"
                                            ret__14775 = false;
                                            goto __ret__14776_end_;
                                        }
                                        
                                    }goto __ret__14776_end_; __ret__14776_end_: ;
                                    }
                                    ret__14775;
                                    }))
                                    ) {
                                    
                                    //#line 242 "SuffixArrayChar.x10"
                                    t_lb__14767 = t_mid__14771;
                                    
                                    //#line 243 "SuffixArrayChar.x10"
                                    p_ub__14769 = p_mid__14772;
                                } else {
                                    
                                    //#line 245 "SuffixArrayChar.x10"
                                    t_ub__14768 = t_mid__14771;
                                    
                                    //#line 246 "SuffixArrayChar.x10"
                                    p_lb__14770 = p_mid__14772;
                                }
                                
                            
                            //#line 248 "SuffixArrayChar.x10"
                            t_mid__14771 = ((((t_lb__14767) + (t_ub__14768))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 249 "SuffixArrayChar.x10"
                            p_mid__14772 = ((((p_lb__14770) + (p_ub__14769))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 251 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__14784 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__16239 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__16239->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__14767);
                                                                   t__16239->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__14770);
                                                                   t__16239;
                                                               }))
                                                               );
                        lb__14784;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc38) {
                    {
                        ::x10::lang::CheckedThrowable* ct__15047 =
                          __exc38;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__15047);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__15049);
            }
        {
            
            //#line 266 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__15056 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 267 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__12)))bwt_SuffixArrayChar__closure__12(&(lbll), &(t_lb), lbl, &(p_lb), this))));
                    
                    //#line 268 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__13)))bwt_SuffixArrayChar__closure__13(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                    
                    //#line 269 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__14)))bwt_SuffixArrayChar__closure__14(&(lblr), lbl, lb, this))));
                    
                    //#line 270 "SuffixArrayChar.x10"
                    lbrl = (__extension__ ({
                        x10_long t_lb__14911 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__14912 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__14913 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__14914 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 238 "SuffixArrayChar.x10"
                        x10_long t_mid__14915 = ((((t_lb__14911) + (t_ub__14912))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 239 "SuffixArrayChar.x10"
                        x10_long p_mid__14916 = ((((p_lb__14914) + (p_ub__14913))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 240 "SuffixArrayChar.x10"
                        while ((((((t_ub__14912) - (t_lb__14911))) > (((x10_long)1ll))) ||
                               ((((p_ub__14913) - (p_lb__14914))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 241 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 225 "SuffixArrayChar.x10"
                                    x10_boolean ret__14919;
                                    goto __ret__14920; __ret__14920: {
                                    {
                                        
                                        //#line 226 "SuffixArrayChar.x10"
                                        x10_long i__14921 =
                                          this->getI(t_mid__14915);
                                        
                                        //#line 227 "SuffixArrayChar.x10"
                                        x10_long j__14922 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__14916);
                                        
                                        //#line 228 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14915)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__14924 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__14921)));
                                                x10_long a__14925 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14915)) + (this->FMGL(n0))));
                                                x10_long b__14926 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__14922)));
                                                x10_long b__14927 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__14922) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__14924) < (b__14926)) ||
                                                ((::x10aux::struct_equals(a__14924,
                                                                          b__14926)) &&
                                                ((a__14925) <= (b__14927))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__14915)) >= (this->FMGL(n0))) &&
                                            this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    i__14921))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((i__14921) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14915)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    j__14922))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((j__14922) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__14922) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 231 "SuffixArrayChar.x10"
                                            ret__14919 = true;
                                            goto __ret__14920_end_;
                                        } else {
                                            
                                            //#line 233 "SuffixArrayChar.x10"
                                            ret__14919 = false;
                                            goto __ret__14920_end_;
                                        }
                                        
                                    }goto __ret__14920_end_; __ret__14920_end_: ;
                                    }
                                    ret__14919;
                                    }))
                                    ) {
                                    
                                    //#line 242 "SuffixArrayChar.x10"
                                    t_lb__14911 = t_mid__14915;
                                    
                                    //#line 243 "SuffixArrayChar.x10"
                                    p_ub__14913 = p_mid__14916;
                                } else {
                                    
                                    //#line 245 "SuffixArrayChar.x10"
                                    t_ub__14912 = t_mid__14915;
                                    
                                    //#line 246 "SuffixArrayChar.x10"
                                    p_lb__14914 = p_mid__14916;
                                }
                                
                            
                            //#line 248 "SuffixArrayChar.x10"
                            t_mid__14915 = ((((t_lb__14911) + (t_ub__14912))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 249 "SuffixArrayChar.x10"
                            p_mid__14916 = ((((p_lb__14914) + (p_ub__14913))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 251 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__14928 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__16263 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__16263->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__14911);
                                                                   t__16263->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__14914);
                                                                   t__16263;
                                                               }))
                                                               );
                        lb__14928;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc39) {
                    {
                        ::x10::lang::CheckedThrowable* ct__15054 =
                          __exc39;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__15054);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__15056);
            }
        
        //#line 274 "SuffixArrayChar.x10"
        x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 275 "SuffixArrayChar.x10"
        x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 276 "SuffixArrayChar.x10"
        x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 277 "SuffixArrayChar.x10"
        x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 278 "SuffixArrayChar.x10"
        x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 279 "SuffixArrayChar.x10"
        x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 280 "SuffixArrayChar.x10"
        x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 282 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16269 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)-1ll));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midll) - (((x10_long)1ll))));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midl) - (((x10_long)1ll))));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((midlr) - (((x10_long)1ll))));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((mid) - (((x10_long)1ll))));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midrl) - (((x10_long)1ll))));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midr) - (((x10_long)1ll))));
                                                                                        t__16269->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ((midrr) - (((x10_long)1ll))));
                                                                                        t__16269;
                                                                                    }))
                                                                                    );
        
        //#line 283 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16287 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midlr) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((mid) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((midrl) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midr) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midrr) + (((x10_long)1ll))));
                                                                                        t__16287->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          this->FMGL(n));
                                                                                        t__16287;
                                                                                    }))
                                                                                    );
        
        //#line 284 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16305 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)0ll));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16305;
                                                                                    }))
                                                                                    );
        
        //#line 285 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16323 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16323;
                                                                                    }))
                                                                                    );
        {
            
            //#line 296 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__15061 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long i__15008;
                        for (i__15008 = ((x10_long)0ll); ((i__15008) <= (((x10_long)7ll)));
                             i__15008 = ((i__15008) + (((x10_long)1ll))))
                        {
                            x10_long l__15009 = i__15008;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__15)))bwt_SuffixArrayChar__closure__15(krail, l__15009, trail, prail, nrail, this))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc40) {
                {
                    ::x10::lang::CheckedThrowable* ct__15059 =
                      __exc40;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__15059);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__15061);
        }
        } else {
            
            //#line 337 "SuffixArrayChar.x10"
            x10_long p = ((x10_long)0ll);
            
            //#line 338 "SuffixArrayChar.x10"
            x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
            
            //#line 339 "SuffixArrayChar.x10"
            x10_long k = ((x10_long)-1ll);
            
            //#line 340 "SuffixArrayChar.x10"
            while (((k) < (this->FMGL(n)))) {
                
                //#line 341 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 342 "SuffixArrayChar.x10"
                x10_long i = this->getI(t);
                
                //#line 343 "SuffixArrayChar.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p);
                
                //#line 345 "SuffixArrayChar.x10"
                if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__14936 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          i)));
                        x10_long a__14937 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__14938 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          j)));
                        x10_long b__14939 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__14936) < (b__14938)) || ((::x10aux::struct_equals(a__14936,
                                                                                b__14938)) &&
                        ((a__14937) <= (b__14939))));
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
                    
                    //#line 348 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, i);
                    
                    //#line 349 "SuffixArrayChar.x10"
                    t = ((t) + (((x10_long)1ll)));
                    
                    //#line 350 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                    {
                        
                        //#line 351 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 352 "SuffixArrayChar.x10"
                        x10_long i__11869max__15010 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__15011;
                            for (i__15011 = ((x10_long)0ll);
                                 ((i__15011) <= (i__11869max__15010));
                                 i__15011 = ((i__15011) + (((x10_long)1ll))))
                            {
                                
                                //#line 353 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                       p));
                                
                                //#line 354 "SuffixArrayChar.x10"
                                p = ((p) + (((x10_long)1ll)));
                                
                                //#line 355 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                } else {
                    
                    //#line 359 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, j);
                    
                    //#line 360 "SuffixArrayChar.x10"
                    p = ((p) + (((x10_long)1ll)));
                    
                    //#line 361 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                    {
                        
                        //#line 362 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 363 "SuffixArrayChar.x10"
                        x10_long i__11885max__15013 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__15014;
                            for (i__15014 = ((x10_long)0ll);
                                 ((i__15014) <= (i__11885max__15013));
                                 i__15014 = ((i__15014) + (((x10_long)1ll))))
                            {
                                
                                //#line 364 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, this->getI(t));
                                
                                //#line 365 "SuffixArrayChar.x10"
                                t = ((t) + (((x10_long)1ll)));
                                
                                //#line 366 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                }
                
            }
            
        }
        }
        
    
    //#line 374 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long b1, x10_long b2) {
        
        //#line 375 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 378 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long a3, x10_long b1,
                                          x10_long b2, x10_long b3) {
        
        //#line 379 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 382 "SuffixArrayChar.x10"
    x10_long bwt::SuffixArrayChar::getI(x10_long t) {
        
        //#line 383 "SuffixArrayChar.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 384 "SuffixArrayChar.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 386 "SuffixArrayChar.x10"
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
    
    ::x10::lang::String bwt::SuffixArrayChar_Strings::sl__16340("Start Merge Final");

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
