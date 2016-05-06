/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Byte.h>
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
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>
#ifndef BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n02)) + (((x10_long)3ll))));
    }
    
    // captured environment
    ::bwt::SuffixArray* saved_this;
    
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
        bwt_SuffixArray__closure__1* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__1>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__1* this_ = new (storage) bwt_SuffixArray__closure__1(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__1(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:90";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        saved_this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(saved_this->FMGL(n0));
    }
    
    // captured environment
    ::bwt::SuffixArray* saved_this;
    
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
        bwt_SuffixArray__closure__2* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__2>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__2* this_ = new (storage) bwt_SuffixArray__closure__2(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__2(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:91";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        x10_long i__5439min__5617 = ((x10_long)0ll);
        x10_long i__5439max__5618 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5619;
            for (i__5619 = i__5439min__5617; ((i__5619) <= (i__5439max__5618));
                 i__5619 = ((i__5619) + (((x10_long)1ll)))) {
                x10_long i__5620 = i__5619;
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5620), ((i__5620) + (((x10_long)1ll))));
            }
        }
        
    }
    
    // captured environment
    ::bwt::SuffixArray* saved_this;
    
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
        bwt_SuffixArray__closure__3* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__3>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__3* this_ = new (storage) bwt_SuffixArray__closure__3(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__3(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:158";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class bwt_SuffixArray__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>::itable<bwt_SuffixArray__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(x10_long t1, x10_long p1){
        
        //#line 196 "SuffixArray.x10"
        x10_long i = saved_this->getI(t1);
        
        //#line 197 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                       p1);
        
        //#line 198 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t1)) < (saved_this->FMGL(n0))) && saved_this->leq(
                                                      ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i),
                                                      ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                            t1)) + (saved_this->FMGL(n0)))),
                                                      ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j),
                                                      ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
            (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                 t1)) >= (saved_this->FMGL(n0))) && saved_this->leq(
                                                      ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i),
                                                      ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t1)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j),
                                                      ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
        {
            
            //#line 201 "SuffixArray.x10"
            return true;
            
        } else {
            
            //#line 203 "SuffixArray.x10"
            return false;
            
        }
        
    }
    
    // captured environment
    ::bwt::SuffixArray* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__4(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:195-205";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
class bwt_SuffixArray__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_long >* __apply(x10_long t_lb, x10_long t_ub, x10_long p_ub, x10_long p_lb){
        
        //#line 208 "SuffixArray.x10"
        x10_long t_mid = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 209 "SuffixArray.x10"
        x10_long p_mid = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 210 "SuffixArray.x10"
        while ((((((t_ub) - (t_lb))) > (((x10_long)1ll))) || ((((p_ub) - (p_lb))) > (((x10_long)1ll)))))
        {
            
            //#line 211 "SuffixArray.x10"
            if (::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>::__apply(::x10aux::nullCheck(closure), 
                  t_mid, p_mid)) {
                
                //#line 212 "SuffixArray.x10"
                t_lb = t_mid;
                
                //#line 213 "SuffixArray.x10"
                p_ub = p_mid;
            } else {
                
                //#line 215 "SuffixArray.x10"
                t_ub = t_mid;
                
                //#line 216 "SuffixArray.x10"
                p_lb = p_mid;
            }
            
            //#line 218 "SuffixArray.x10"
            t_mid = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 219 "SuffixArray.x10"
            p_mid = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        }
        
        //#line 221 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                     ::x10::lang::Rail< x10_long >* t__5705 =
                                                                                       ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                     t__5705->x10::lang::Rail< x10_long >::__set(
                                                                                       ((x10_long)0ll),
                                                                                       t_lb);
                                                                                     t__5705->x10::lang::Rail< x10_long >::__set(
                                                                                       ((x10_long)1ll),
                                                                                       p_lb);
                                                                                     t__5705;
                                                                                 }))
                                                                                 );
        
        //#line 222 "SuffixArray.x10"
        return lb;
        
    }
    
    // captured environment
    ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* closure;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->closure);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__5>();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* that_closure = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>*>();
        bwt_SuffixArray__closure__5* this_ = new (storage) bwt_SuffixArray__closure__5(that_closure);
        return this_;
    }
    
    bwt_SuffixArray__closure__5(::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* closure) : closure(closure) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:207-223";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__6_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbl = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          t_lb, ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)0ll)), ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll)), p_lb);
    }
    
    // captured environment
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl;
    x10aux::captured_struct_lval<x10_long> t_lb;
    ::x10::lang::Rail< x10_long >* lb;
    x10aux::captured_struct_lval<x10_long> p_lb;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search;
    
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
        buf.write(this->binary_search);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__6>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        bwt_SuffixArray__closure__6* this_ = new (storage) bwt_SuffixArray__closure__6(that_lbl, that_t_lb, that_lb, that_p_lb, that_binary_search);
        return this_;
    }
    
    bwt_SuffixArray__closure__6(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), binary_search(binary_search) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:233";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__6_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__7_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbll = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          t_lb, ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)0ll)), ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll)), p_lb);
    }
    
    // captured environment
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll;
    x10aux::captured_struct_lval<x10_long> t_lb;
    ::x10::lang::Rail< x10_long >* lbl;
    x10aux::captured_struct_lval<x10_long> p_lb;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search;
    
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
        buf.write(this->binary_search);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__7>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        bwt_SuffixArray__closure__7* this_ = new (storage) bwt_SuffixArray__closure__7(that_lbll, that_t_lb, that_lbl, that_p_lb, that_binary_search);
        return this_;
    }
    
    bwt_SuffixArray__closure__7(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lbl, x10aux::captured_struct_lval<x10_long> p_lb, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search) : lbll(lbll), t_lb(t_lb), lbl(lbl), p_lb(p_lb), binary_search(binary_search) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:237";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__7_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__8_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbrr = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
            ((x10_long)0ll)), t_ub, p_ub, ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)));
    }
    
    // captured environment
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr;
    ::x10::lang::Rail< x10_long >* lbr;
    x10aux::captured_struct_lval<x10_long> t_ub;
    x10aux::captured_struct_lval<x10_long> p_ub;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search;
    
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
        buf.write(this->binary_search);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__8* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__8>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        ::x10::lang::Rail< x10_long >* that_lbr = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10aux::captured_struct_lval<x10_long> that_t_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_p_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        bwt_SuffixArray__closure__8* this_ = new (storage) bwt_SuffixArray__closure__8(that_lbrr, that_lbr, that_t_ub, that_p_ub, that_binary_search);
        return this_;
    }
    
    bwt_SuffixArray__closure__8(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr, ::x10::lang::Rail< x10_long >* lbr, x10aux::captured_struct_lval<x10_long> t_ub, x10aux::captured_struct_lval<x10_long> p_ub, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search) : lbrr(lbrr), lbr(lbr), t_ub(t_ub), p_ub(p_ub), binary_search(binary_search) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:238";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__8_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__9_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lblr = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
            ((x10_long)0ll)), ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                ((x10_long)0ll)), ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                    ((x10_long)1ll)),
          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
            ((x10_long)1ll)));
    }
    
    // captured environment
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr;
    ::x10::lang::Rail< x10_long >* lbl;
    ::x10::lang::Rail< x10_long >* lb;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search;
    
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
        buf.write(this->binary_search);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__9>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        bwt_SuffixArray__closure__9* this_ = new (storage) bwt_SuffixArray__closure__9(that_lblr, that_lbl, that_lb, that_binary_search);
        return this_;
    }
    
    bwt_SuffixArray__closure__9(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr, ::x10::lang::Rail< x10_long >* lbl, ::x10::lang::Rail< x10_long >* lb, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search) : lblr(lblr), lbl(lbl), lb(lb), binary_search(binary_search) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:239";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__9_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__10_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 258 "SuffixArray.x10"
        x10_long k__5641 = krail->x10::lang::Rail< x10_long >::__apply(l__5649);
        
        //#line 259 "SuffixArray.x10"
        x10_long t__5642 = trail->x10::lang::Rail< x10_long >::__apply(l__5649);
        
        //#line 260 "SuffixArray.x10"
        x10_long p__5643 = prail->x10::lang::Rail< x10_long >::__apply(l__5649);
        
        //#line 261 "SuffixArray.x10"
        while (((k__5641) < (nrail->x10::lang::Rail< x10_long >::__apply(
                               l__5649)))) {
            
            //#line 262 "SuffixArray.x10"
            k__5641 = ((k__5641) + (((x10_long)1ll)));
            
            //#line 263 "SuffixArray.x10"
            x10_long i__5644 = saved_this->getI(t__5642);
            
            //#line 264 "SuffixArray.x10"
            x10_long j__5645 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                 p__5643);
            
            //#line 266 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__5642)) < (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__5644), ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t__5642)) + (saved_this->FMGL(n0)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__5645), ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j__5645) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
                (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t__5642)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__5644), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ((i__5644) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__5642)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__5645), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ((j__5645) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__5645) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 269 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__5649,
                                                 ((x10_long)0ll))) &&
                    ((k__5641) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                       l__5649)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 270 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__5641, i__5644);
                }
                
                //#line 272 "SuffixArray.x10"
                t__5642 = ((t__5642) + (((x10_long)1ll)));
                
                //#line 273 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__5642, saved_this->FMGL(n02))))
                {
                    
                    //#line 274 "SuffixArray.x10"
                    k__5641 = ((k__5641) + (((x10_long)1ll)));
                    
                    //#line 275 "SuffixArray.x10"
                    x10_long i__5503min__5633 = ((x10_long)0ll);
                    x10_long i__5503max__5634 = ((((saved_this->FMGL(n0)) - (p__5643))) - (((x10_long)1ll)));
                    {
                        x10_long i__5635;
                        for (i__5635 = i__5503min__5633; ((i__5635) <= (i__5503max__5634));
                             i__5635 = ((i__5635) + (((x10_long)1ll))))
                        {
                            x10_long q__5636 = i__5635;
                            
                            //#line 276 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__5641, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                         p__5643));
                            
                            //#line 277 "SuffixArray.x10"
                            p__5643 = ((p__5643) + (((x10_long)1ll)));
                            
                            //#line 278 "SuffixArray.x10"
                            k__5641 = ((k__5641) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 282 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__5649,
                                                 ((x10_long)0ll))) &&
                    ((k__5641) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                       l__5649)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 283 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__5641, j__5645);
                }
                
                //#line 285 "SuffixArray.x10"
                p__5643 = ((p__5643) + (((x10_long)1ll)));
                
                //#line 286 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__5643, saved_this->FMGL(n0))))
                {
                    
                    //#line 287 "SuffixArray.x10"
                    k__5641 = ((k__5641) + (((x10_long)1ll)));
                    
                    //#line 288 "SuffixArray.x10"
                    x10_long i__5519min__5637 = ((x10_long)0ll);
                    x10_long i__5519max__5638 = ((((saved_this->FMGL(n02)) - (t__5642))) - (((x10_long)1ll)));
                    {
                        x10_long i__5639;
                        for (i__5639 = i__5519min__5637; ((i__5639) <= (i__5519max__5638));
                             i__5639 = ((i__5639) + (((x10_long)1ll))))
                        {
                            x10_long q__5640 = i__5639;
                            
                            //#line 289 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__5641, saved_this->getI(t__5642));
                            
                            //#line 290 "SuffixArray.x10"
                            t__5642 = ((t__5642) + (((x10_long)1ll)));
                            
                            //#line 291 "SuffixArray.x10"
                            k__5641 = ((k__5641) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    x10_long l__5649;
    ::x10::lang::Rail< x10_long >* krail;
    ::x10::lang::Rail< x10_long >* trail;
    ::x10::lang::Rail< x10_long >* prail;
    ::x10::lang::Rail< x10_long >* nrail;
    ::bwt::SuffixArray* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->l__5649);
        buf.write(this->krail);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__10* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__10>();
        buf.record_reference(storage);
        x10_long that_l__5649 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__10* this_ = new (storage) bwt_SuffixArray__closure__10(that_l__5649, that_krail, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__10(x10_long l__5649, ::x10::lang::Rail< x10_long >* krail, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArray* saved_this) : l__5649(l__5649), krail(krail), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:257-296";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__10_CLOSURE

//#line 12 "SuffixArray.x10"

//#line 13 "SuffixArray.x10"

//#line 14 "SuffixArray.x10"

//#line 15 "SuffixArray.x10"

//#line 16 "SuffixArray.x10"

//#line 17 "SuffixArray.x10"

//#line 18 "SuffixArray.x10"

//#line 19 "SuffixArray.x10"

//#line 20 "SuffixArray.x10"

//#line 21 "SuffixArray.x10"

//#line 22 "SuffixArray.x10"

//#line 23 "SuffixArray.x10"

//#line 24 "SuffixArray.x10"

//#line 26 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize, ::x10::lang::Rail< x10_long >* sa,
                                    x10_byte threads) {
    
    //#line 9 "SuffixArray.x10"
    this->bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray();
    
    //#line 27 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 28 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 29 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 30 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 32 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 33 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
    
    //#line 34 "SuffixArray.x10"
    this->FMGL(SA) = sa;
    
    //#line 35 "SuffixArray.x10"
    this->FMGL(num_threads) = threads;
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize,
                                            ::x10::lang::Rail< x10_long >* sa,
                                            x10_byte threads)
{
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize, sa, threads);
    return this_;
}



//#line 38 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads,
                                 x10_byte offset){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 41 "SuffixArray.x10"
void bwt::SuffixArray::sortPairsThree(::x10::lang::Rail< x10_long >* keys,
                                      ::x10::lang::Rail< x10_long >* values,
                                      x10_ulong num_elems,
                                      x10_int num_threads){
    parallel_radix_sort::SortPairsLongThree((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 44 "SuffixArray.x10"
void bwt::SuffixArray::sortPairsThreeFast(::x10::lang::Rail< x10_long >* keys,
                                          ::x10::lang::Rail< x10_long >* values,
                                          x10_ulong num_elems,
                                          x10_int num_threads){
    parallel_radix_sort::SortPairsLongThreeFast((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 48 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 49 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 50 "SuffixArray.x10"
    x10_long i__5327min__5589 = ((x10_long)0ll);
    x10_long i__5327max__5590 = this->FMGL(k);
    {
        x10_long i__5591;
        for (i__5591 = i__5327min__5589; ((i__5591) <= (i__5327max__5590));
             i__5591 = ((i__5591) + (((x10_long)1ll)))) {
            x10_long i__5592 = i__5591;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5592, ((x10_long)0ll));
        }
    }
    
    //#line 51 "SuffixArray.x10"
    x10_long i__5343min__5593 = ((x10_long)0ll);
    x10_long i__5343max__5594 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5595;
        for (i__5595 = i__5343min__5593; ((i__5595) <= (i__5343max__5594));
             i__5595 = ((i__5595) + (((x10_long)1ll)))) {
            x10_long i__5596 = i__5595;
            
            //#line 52 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__5582 = c;
            x10_long i__5583 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5596)) + (((x10_long)(rOffs)))));
            x10_long r__5584 = ((::x10aux::nullCheck(a__5582)->x10::lang::Rail< x10_long >::__apply(
                                   i__5583)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5582)->x10::lang::Rail< x10_long >::__set(
              i__5583, r__5584);
        }
    }
    
    //#line 54 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 55 "SuffixArray.x10"
    x10_long i__5359min__5597 = ((x10_long)0ll);
    x10_long i__5359max__5598 = this->FMGL(k);
    {
        x10_long i__5599;
        for (i__5599 = i__5359min__5597; ((i__5599) <= (i__5359max__5598));
             i__5599 = ((i__5599) + (((x10_long)1ll)))) {
            x10_long i__5600 = i__5599;
            
            //#line 56 "SuffixArray.x10"
            x10_long t__5585 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__5600);
            
            //#line 57 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5600, sum);
            
            //#line 58 "SuffixArray.x10"
            sum = ((sum) + (t__5585));
        }
    }
    
    //#line 60 "SuffixArray.x10"
    x10_long i__5375min__5601 = ((x10_long)0ll);
    x10_long i__5375max__5602 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5603;
        for (i__5603 = i__5375min__5601; ((i__5603) <= (i__5375max__5602));
             i__5603 = ((i__5603) + (((x10_long)1ll)))) {
            x10_long i__5604 = i__5603;
            
            //#line 61 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__5604)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5604));
            
            //#line 62 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__5586 = c;
            x10_long i__5587 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__5604)) + (((x10_long)(rOffs)))));
            x10_long r__5588 = ((::x10aux::nullCheck(a__5586)->x10::lang::Rail< x10_long >::__apply(
                                   i__5587)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5586)->x10::lang::Rail< x10_long >::__set(
              i__5587, r__5588);
        }
    }
    
}

//#line 66 "SuffixArray.x10"
void bwt::SuffixArray::run() {
    
    //#line 68 "SuffixArray.x10"
    this->constructSample();
    
    //#line 70 "SuffixArray.x10"
    this->sortSample();
    
    //#line 72 "SuffixArray.x10"
    this->sortNonSample();
}

//#line 76 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 77 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 78 "SuffixArray.x10"
    x10_long i__5391min__5605 = ((x10_long)0ll);
    x10_long i__5391max__5606 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5607;
        for (i__5607 = i__5391min__5605; ((i__5607) <= (i__5391max__5606));
             i__5607 = ((i__5607) + (((x10_long)1ll)))) {
            x10_long i__5608 = i__5607;
            
            //#line 79 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5608), ((x10_long)0ll))))
            {
                
                //#line 80 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__5608)) - (((x10_long)1ll))))));
            } else {
                
                //#line 82 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((this->FMGL(n)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 85 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 88 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    {
        
        //#line 89 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__5662 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 90 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__1)))bwt_SuffixArray__closure__1(this))));
                
                //#line 91 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__2)))bwt_SuffixArray__closure__2(this))));
                
                //#line 92 "SuffixArray.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 93 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 94 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 95 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 96 "SuffixArray.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 97 "SuffixArray.x10"
                x10_long i__5407min__5609 = ((x10_long)0ll);
                x10_long i__5407max__5610 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__5611;
                    for (i__5611 = i__5407min__5609; ((i__5611) <= (i__5407max__5610));
                         i__5611 = ((i__5611) + (((x10_long)1ll))))
                    {
                        x10_long i__5612 = i__5611;
                        
                        //#line 98 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__5612) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 99 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__5612);
                            
                            //#line 100 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc13) {
            {
                ::x10::lang::CheckedThrowable* ct__5660 =
                  __exc13;
                {
                    ::x10::xrx::Runtime::pushException(ct__5660);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__5662);
    }
}

//#line 106 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 107 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 108 "SuffixArray.x10"
    if (((this->FMGL(k)) < (((x10_long)2097152ll)))) {
        
        //#line 109 "SuffixArray.x10"
        this->sortPairsThreeFast(this->FMGL(string), this->FMGL(SA12),
                                 size, ((x10_int) (this->FMGL(num_threads))));
    } else {
        
        //#line 111 "SuffixArray.x10"
        this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                             size, ((x10_int) (this->FMGL(num_threads))));
    }
    
    //#line 130 "SuffixArray.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 131 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 132 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 133 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 134 "SuffixArray.x10"
    x10_long i__5423min__5613 = ((x10_long)0ll);
    x10_long i__5423max__5614 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5615;
        for (i__5615 = i__5423min__5613; ((i__5615) <= (i__5423max__5614));
             i__5615 = ((i__5615) + (((x10_long)1ll)))) {
            x10_long i__5616 = i__5615;
            
            //#line 135 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5616)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5616)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5616)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 136 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 137 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5616));
                
                //#line 138 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5616)) + (((x10_long)1ll))));
                
                //#line 139 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5616)) + (((x10_long)2ll))));
            }
            
            //#line 142 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5616)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 143 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5616)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 145 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5616)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 151 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 152 "SuffixArray.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 153 "SuffixArray.x10"
        this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make((((x10_long)(::x10aux::nullCheck(this->FMGL(R))->FMGL(size))) + (((x10_long)3ll))));
        
        //#line 154 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            this->FMGL(name),
                                                            this->FMGL(SA12),
                                                            this->FMGL(num_threads));
        
        //#line 155 "SuffixArray.x10"
        bwa->run();
        {
            
            //#line 157 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5667 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 158 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 160 "SuffixArray.x10"
                    x10_long i__5455min__5621 = ((x10_long)0ll);
                    x10_long i__5455max__5622 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__5623;
                        for (i__5623 = i__5455min__5621; ((i__5623) <= (i__5455max__5622));
                             i__5623 = ((i__5623) + (((x10_long)1ll))))
                        {
                            x10_long i__5624 = i__5623;
                            
                            //#line 161 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__5624)) < (this->FMGL(n0))))
                            {
                                
                                //#line 162 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__5624))));
                                
                                //#line 163 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 166 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 168 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc16) {
                {
                    ::x10::lang::CheckedThrowable* ct__5665 =
                      __exc16;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5665);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5667);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__5471min__5629 = ((x10_long)0ll);
        x10_long i__5471max__5630 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5631;
            for (i__5631 = i__5471min__5629; ((i__5631) <= (i__5471max__5630));
                 i__5631 = ((i__5631) + (((x10_long)1ll))))
            {
                x10_long i__5632 = i__5631;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5632)) - (((x10_long)1ll))), i__5632);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5671 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long i__5487min__5625 = ((x10_long)0ll);
                    x10_long i__5487max__5626 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__5627;
                        for (i__5627 = i__5487min__5625; ((i__5627) <= (i__5487max__5626));
                             i__5627 = ((i__5627) + (((x10_long)1ll))))
                        {
                            x10_long i__5628 = i__5627;
                            
                            //#line 176 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__5628)) < (this->FMGL(n0))))
                            {
                                
                                //#line 178 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__5628))));
                                
                                //#line 179 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 182 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 184 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc17) {
                {
                    ::x10::lang::CheckedThrowable* ct__5669 =
                      __exc17;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5669);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5671);
        }
    }
    
    //#line 188 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5792)));
    
    //#line 190 "SuffixArray.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)(this->FMGL(num_threads))))))
    {
        
        //#line 191 "SuffixArray.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 192 "SuffixArray.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 193 "SuffixArray.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 194 "SuffixArray.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 195 "SuffixArray.x10"
        ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* closure =
          reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(this)));
        
        //#line 207 "SuffixArray.x10"
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search =
          reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(closure)));
        
        //#line 225 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          t_lb, t_ub, p_ub, p_lb);
        
        //#line 226 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 227 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 228 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 229 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 230 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 231 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 232 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5676 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 233 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__6)))bwt_SuffixArray__closure__6(&(lbl), &(t_lb), lb, &(p_lb), binary_search))));
                    
                    //#line 234 "SuffixArray.x10"
                    lbr = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll)), t_ub, p_ub, ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                        ((x10_long)1ll)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc18) {
                {
                    ::x10::lang::CheckedThrowable* ct__5674 =
                      __exc18;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5674);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5676);
        }
        {
            
            //#line 236 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5683 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 237 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__7)))bwt_SuffixArray__closure__7(&(lbll), &(t_lb), lbl, &(p_lb), binary_search))));
                    
                    //#line 238 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__8)))bwt_SuffixArray__closure__8(&(lbrr), lbr, &(t_ub), &(p_ub), binary_search))));
                    
                    //#line 239 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__9)))bwt_SuffixArray__closure__9(&(lblr), lbl, lb, binary_search))));
                    
                    //#line 240 "SuffixArray.x10"
                    lbrl = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll)), ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)0ll)),
                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)1ll)), ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc19) {
                {
                    ::x10::lang::CheckedThrowable* ct__5681 =
                      __exc19;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5681);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5683);
        }
        
        //#line 243 "SuffixArray.x10"
        x10_long split = ((x10_long)7ll);
        
        //#line 244 "SuffixArray.x10"
        x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 245 "SuffixArray.x10"
        x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 246 "SuffixArray.x10"
        x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 247 "SuffixArray.x10"
        x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 248 "SuffixArray.x10"
        x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 249 "SuffixArray.x10"
        x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 250 "SuffixArray.x10"
        x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 252 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5711 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)-1ll));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midll) - (((x10_long)1ll))));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midl) - (((x10_long)1ll))));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((midlr) - (((x10_long)1ll))));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((mid) - (((x10_long)1ll))));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midrl) - (((x10_long)1ll))));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midr) - (((x10_long)1ll))));
                                                                                        t__5711->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ((midrr) - (((x10_long)1ll))));
                                                                                        t__5711;
                                                                                    }))
                                                                                    );
        
        //#line 253 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5729 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midlr) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((mid) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((midrl) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midr) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midrr) + (((x10_long)1ll))));
                                                                                        t__5729->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          this->FMGL(n));
                                                                                        t__5729;
                                                                                    }))
                                                                                    );
        
        //#line 254 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5747 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)0ll));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5747;
                                                                                    }))
                                                                                    );
        
        //#line 255 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5765 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5765;
                                                                                    }))
                                                                                    );
        {
            
            //#line 257 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5688 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__5535min__5646 = ((x10_long)0ll);
                    x10_long i__5535max__5647 = split;
                    {
                        x10_long i__5648;
                        for (i__5648 = i__5535min__5646; ((i__5648) <= (i__5535max__5647));
                             i__5648 = ((i__5648) + (((x10_long)1ll))))
                        {
                            x10_long l__5649 = i__5648;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__10)))bwt_SuffixArray__closure__10(l__5649, krail, trail, prail, nrail, this))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc20) {
                {
                    ::x10::lang::CheckedThrowable* ct__5686 =
                      __exc20;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5686);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5688);
        }
    } else {
        
        //#line 298 "SuffixArray.x10"
        x10_long p = ((x10_long)0ll);
        
        //#line 299 "SuffixArray.x10"
        x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 300 "SuffixArray.x10"
        x10_long k = ((x10_long)-1ll);
        
        //#line 301 "SuffixArray.x10"
        while (((k) < (this->FMGL(n)))) {
            
            //#line 302 "SuffixArray.x10"
            k = ((k) + (((x10_long)1ll)));
            
            //#line 303 "SuffixArray.x10"
            x10_long i = this->getI(t);
            
            //#line 304 "SuffixArray.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                           p);
            
            //#line 306 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) < (this->FMGL(n0))) && this->leq(
                                                   ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                     i), ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                           ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                               t)) + (this->FMGL(n0)))),
                                                   ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                     j), ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                           ((j) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
                (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) >= (this->FMGL(n0))) && this->leq(
                                                   ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                     i), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                           ((i) + (((x10_long)1ll)))),
                                                   ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                     ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                           t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                   ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                     j), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                           ((j) + (((x10_long)1ll)))),
                                                   ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                     ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
            {
                
                //#line 309 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, i);
                
                //#line 310 "SuffixArray.x10"
                t = ((t) + (((x10_long)1ll)));
                
                //#line 311 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                {
                    
                    //#line 312 "SuffixArray.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 313 "SuffixArray.x10"
                    x10_long i__5551min__5650 = ((x10_long)0ll);
                    x10_long i__5551max__5651 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                    {
                        x10_long i__5652;
                        for (i__5652 = i__5551min__5650; ((i__5652) <= (i__5551max__5651));
                             i__5652 = ((i__5652) + (((x10_long)1ll))))
                        {
                            x10_long q__5653 = i__5652;
                            
                            //#line 314 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                   p));
                            
                            //#line 315 "SuffixArray.x10"
                            p = ((p) + (((x10_long)1ll)));
                            
                            //#line 316 "SuffixArray.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 320 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, j);
                
                //#line 321 "SuffixArray.x10"
                p = ((p) + (((x10_long)1ll)));
                
                //#line 322 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                {
                    
                    //#line 323 "SuffixArray.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 324 "SuffixArray.x10"
                    x10_long i__5567min__5654 = ((x10_long)0ll);
                    x10_long i__5567max__5655 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                    {
                        x10_long i__5656;
                        for (i__5656 = i__5567min__5654; ((i__5656) <= (i__5567max__5655));
                             i__5656 = ((i__5656) + (((x10_long)1ll))))
                        {
                            x10_long q__5657 = i__5656;
                            
                            //#line 325 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, this->getI(t));
                            
                            //#line 326 "SuffixArray.x10"
                            t = ((t) + (((x10_long)1ll)));
                            
                            //#line 327 "SuffixArray.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
}

//#line 334 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 335 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 337 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 338 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 341 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 342 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 343 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 345 "SuffixArray.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 9 "SuffixArray.x10"
::bwt::SuffixArray* bwt::SuffixArray::bwt__SuffixArray____this__bwt__SuffixArray(
  ) {
    return this;
    
}
void bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray(
  ) {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(name) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t bwt::SuffixArray::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArray::_deserializer);

void bwt::SuffixArray::_serialize_body(::x10aux::serialization_buffer& buf) {
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
    buf.write(this->FMGL(name));
    buf.write(this->FMGL(num_threads));
    
}

::x10::lang::Reference* ::bwt::SuffixArray::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArray::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(string) = buf.read< ::x10::lang::Rail< x10_long >*>();
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
    FMGL(name) = buf.read<x10_long>();
    FMGL(num_threads) = buf.read<x10_byte>();
}

::x10aux::RuntimeType bwt::SuffixArray::rtt;
void bwt::SuffixArray::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArray_Strings::sl__5792("Start Merge");

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__1>bwt_SuffixArray__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__1::__apply, &bwt_SuffixArray__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__1::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__2>bwt_SuffixArray__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__2::__apply, &bwt_SuffixArray__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__2::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__3>bwt_SuffixArray__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__3::__apply, &bwt_SuffixArray__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__3::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>::itable<bwt_SuffixArray__closure__4>bwt_SuffixArray__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__4::__apply, &bwt_SuffixArray__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >, &bwt_SuffixArray__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__4::_deserialize);

::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__5>bwt_SuffixArray__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__5::__apply, &bwt_SuffixArray__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >, &bwt_SuffixArray__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__5::_deserialize);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__6>bwt_SuffixArray__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__6::__apply, &bwt_SuffixArray__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__6::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__7>bwt_SuffixArray__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__7::__apply, &bwt_SuffixArray__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__7::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__8>bwt_SuffixArray__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__8::__apply, &bwt_SuffixArray__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__8::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__8::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__8::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__9>bwt_SuffixArray__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__9::__apply, &bwt_SuffixArray__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__9::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__9::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__9::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__10>bwt_SuffixArray__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__10::__apply, &bwt_SuffixArray__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__10::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__10::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__10::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SuffixArray */
/*************************************************/
