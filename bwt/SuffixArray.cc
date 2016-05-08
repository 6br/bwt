/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
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
        x10_long i__5062min__5217 = ((x10_long)0ll);
        x10_long i__5062max__5218 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5219;
            for (i__5219 = i__5062min__5217; ((i__5219) <= (i__5062max__5218));
                 i__5219 = ((i__5219) + (((x10_long)1ll)))) {
                x10_long i__5220 = i__5219;
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5220), ((i__5220) + (((x10_long)1ll))));
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
        return "SuffixArray.x10:157";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class bwt_SuffixArray__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>::itable<bwt_SuffixArray__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply(x10_long t1, x10_long p1){
        
        //#line 197 "SuffixArray.x10"
        x10_long i = saved_this->getI(t1);
        
        //#line 198 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                       p1);
        
        //#line 199 "SuffixArray.x10"
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
            
            //#line 202 "SuffixArray.x10"
            return true;
            
        } else {
            
            //#line 204 "SuffixArray.x10"
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
        bwt_SuffixArray__closure__2* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__2>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__2* this_ = new (storage) bwt_SuffixArray__closure__2(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__2(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:196-206";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
class bwt_SuffixArray__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    ::x10::lang::Rail< x10_long >* __apply(x10_long t_lb, x10_long t_ub, x10_long p_ub, x10_long p_lb){
        
        //#line 209 "SuffixArray.x10"
        x10_long t_mid = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 210 "SuffixArray.x10"
        x10_long p_mid = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 211 "SuffixArray.x10"
        while ((((((t_ub) - (t_lb))) > (((x10_long)1ll))) || ((((p_ub) - (p_lb))) > (((x10_long)1ll)))))
        {
            
            //#line 212 "SuffixArray.x10"
            if (::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>::__apply(::x10aux::nullCheck(closure), 
                  t_mid, p_mid)) {
                
                //#line 213 "SuffixArray.x10"
                t_lb = t_mid;
                
                //#line 214 "SuffixArray.x10"
                p_ub = p_mid;
            } else {
                
                //#line 216 "SuffixArray.x10"
                t_ub = t_mid;
                
                //#line 217 "SuffixArray.x10"
                p_lb = p_mid;
            }
            
            //#line 219 "SuffixArray.x10"
            t_mid = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 220 "SuffixArray.x10"
            p_mid = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        }
        
        //#line 222 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                     ::x10::lang::Rail< x10_long >* t__5306 =
                                                                                       ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                     t__5306->x10::lang::Rail< x10_long >::__set(
                                                                                       ((x10_long)0ll),
                                                                                       t_lb);
                                                                                     t__5306->x10::lang::Rail< x10_long >::__set(
                                                                                       ((x10_long)1ll),
                                                                                       p_lb);
                                                                                     t__5306;
                                                                                 }))
                                                                                 );
        
        //#line 223 "SuffixArray.x10"
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
        bwt_SuffixArray__closure__3* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* that_closure = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>*>();
        bwt_SuffixArray__closure__3* this_ = new (storage) bwt_SuffixArray__closure__3(that_closure);
        return this_;
    }
    
    bwt_SuffixArray__closure__3(::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* closure) : closure(closure) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:208-224";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__5> _itable;
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
        bwt_SuffixArray__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__5>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        bwt_SuffixArray__closure__5* this_ = new (storage) bwt_SuffixArray__closure__5(that_lbll, that_t_lb, that_lbl, that_p_lb, that_binary_search);
        return this_;
    }
    
    bwt_SuffixArray__closure__5(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lbl, x10aux::captured_struct_lval<x10_long> p_lb, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search) : lbll(lbll), t_lb(t_lb), lbl(lbl), p_lb(p_lb), binary_search(binary_search) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:236";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbl = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          t_lb, ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)0ll)), ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll)), p_lb);
        {
            
            //#line 235 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5274 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 236 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(&(lbll), &(t_lb), lbl, &(p_lb), binary_search))));
                    
                    //#line 237 "SuffixArray.x10"
                    lblr = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
                      ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll)), ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)0ll)),
                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)1ll)), ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc18) {
                {
                    ::x10::lang::CheckedThrowable* ct__5272 =
                      __exc18;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5272);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5274);
        }
    }
    
    // captured environment
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl;
    x10aux::captured_struct_lval<x10_long> t_lb;
    ::x10::lang::Rail< x10_long >* lb;
    x10aux::captured_struct_lval<x10_long> p_lb;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search;
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
        buf.write(this->binary_search);
        buf.write(this->lbll);
        buf.write(this->lblr);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_lbl, that_t_lb, that_lb, that_p_lb, that_binary_search, that_lbll, that_lblr);
        return this_;
    }
    
    bwt_SuffixArray__closure__4(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), binary_search(binary_search), lbll(lbll), lblr(lblr) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:234-238";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
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
        bwt_SuffixArray__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__6>();
        buf.record_reference(storage);
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        ::x10::lang::Rail< x10_long >* that_lbr = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10aux::captured_struct_lval<x10_long> that_t_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_p_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* that_binary_search = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>();
        bwt_SuffixArray__closure__6* this_ = new (storage) bwt_SuffixArray__closure__6(that_lbrr, that_lbr, that_t_ub, that_p_ub, that_binary_search);
        return this_;
    }
    
    bwt_SuffixArray__closure__6(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr, ::x10::lang::Rail< x10_long >* lbr, x10aux::captured_struct_lval<x10_long> t_ub, x10aux::captured_struct_lval<x10_long> p_ub, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search) : lbrr(lbrr), lbr(lbr), t_ub(t_ub), p_ub(p_ub), binary_search(binary_search) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:241";
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
        
        //#line 261 "SuffixArray.x10"
        x10_long k__5241 = krail->x10::lang::Rail< x10_long >::__apply(l__5249);
        
        //#line 262 "SuffixArray.x10"
        x10_long t__5242 = trail->x10::lang::Rail< x10_long >::__apply(l__5249);
        
        //#line 263 "SuffixArray.x10"
        x10_long p__5243 = prail->x10::lang::Rail< x10_long >::__apply(l__5249);
        
        //#line 264 "SuffixArray.x10"
        while (((k__5241) < (nrail->x10::lang::Rail< x10_long >::__apply(
                               l__5249)))) {
            
            //#line 265 "SuffixArray.x10"
            k__5241 = ((k__5241) + (((x10_long)1ll)));
            
            //#line 266 "SuffixArray.x10"
            x10_long i__5244 = saved_this->getI(t__5242);
            
            //#line 267 "SuffixArray.x10"
            x10_long j__5245 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                 p__5243);
            
            //#line 269 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__5242)) < (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__5244), ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t__5242)) + (saved_this->FMGL(n0)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__5245), ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j__5245) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
                (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t__5242)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__5244), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ((i__5244) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__5242)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__5245), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ((j__5245) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__5245) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 272 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__5249,
                                                 ((x10_long)0ll))) &&
                    ((k__5241) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                       l__5249)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 273 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__5241, i__5244);
                }
                
                //#line 275 "SuffixArray.x10"
                t__5242 = ((t__5242) + (((x10_long)1ll)));
                
                //#line 276 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__5242, saved_this->FMGL(n02))))
                {
                    
                    //#line 277 "SuffixArray.x10"
                    k__5241 = ((k__5241) + (((x10_long)1ll)));
                    
                    //#line 278 "SuffixArray.x10"
                    x10_long i__5126min__5233 = ((x10_long)0ll);
                    x10_long i__5126max__5234 = ((((saved_this->FMGL(n0)) - (p__5243))) - (((x10_long)1ll)));
                    {
                        x10_long i__5235;
                        for (i__5235 = i__5126min__5233; ((i__5235) <= (i__5126max__5234));
                             i__5235 = ((i__5235) + (((x10_long)1ll))))
                        {
                            x10_long q__5236 = i__5235;
                            
                            //#line 279 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__5241, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                         p__5243));
                            
                            //#line 280 "SuffixArray.x10"
                            p__5243 = ((p__5243) + (((x10_long)1ll)));
                            
                            //#line 281 "SuffixArray.x10"
                            k__5241 = ((k__5241) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 285 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__5249,
                                                 ((x10_long)0ll))) &&
                    ((k__5241) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                       l__5249)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 286 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__5241, j__5245);
                }
                
                //#line 288 "SuffixArray.x10"
                p__5243 = ((p__5243) + (((x10_long)1ll)));
                
                //#line 289 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__5243, saved_this->FMGL(n0))))
                {
                    
                    //#line 290 "SuffixArray.x10"
                    k__5241 = ((k__5241) + (((x10_long)1ll)));
                    
                    //#line 291 "SuffixArray.x10"
                    x10_long i__5142min__5237 = ((x10_long)0ll);
                    x10_long i__5142max__5238 = ((((saved_this->FMGL(n02)) - (t__5242))) - (((x10_long)1ll)));
                    {
                        x10_long i__5239;
                        for (i__5239 = i__5142min__5237; ((i__5239) <= (i__5142max__5238));
                             i__5239 = ((i__5239) + (((x10_long)1ll))))
                        {
                            x10_long q__5240 = i__5239;
                            
                            //#line 292 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__5241, saved_this->getI(t__5242));
                            
                            //#line 293 "SuffixArray.x10"
                            t__5242 = ((t__5242) + (((x10_long)1ll)));
                            
                            //#line 294 "SuffixArray.x10"
                            k__5241 = ((k__5241) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    x10_long l__5249;
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
        buf.write(this->l__5249);
        buf.write(this->krail);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__7>();
        buf.record_reference(storage);
        x10_long that_l__5249 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__7* this_ = new (storage) bwt_SuffixArray__closure__7(that_l__5249, that_krail, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__7(x10_long l__5249, ::x10::lang::Rail< x10_long >* krail, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArray* saved_this) : l__5249(l__5249), krail(krail), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:260-299";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__7_CLOSURE

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
void bwt::SuffixArray::sortPairsThreeNormal(::x10::lang::Rail< x10_long >* keys,
                                            ::x10::lang::Rail< x10_long >* values,
                                            x10_ulong num_elems,
                                            x10_int num_threads){
    parallel_radix_sort::SortPairsLongThreeNormal((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 47 "SuffixArray.x10"
void bwt::SuffixArray::sortPairsThreeFast(::x10::lang::Rail< x10_long >* keys,
                                          ::x10::lang::Rail< x10_long >* values,
                                          x10_ulong num_elems,
                                          x10_int num_threads){
    parallel_radix_sort::SortPairsLongThreeFast((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 70 "SuffixArray.x10"
void bwt::SuffixArray::run() {
    
    //#line 72 "SuffixArray.x10"
    this->constructSample();
    
    //#line 74 "SuffixArray.x10"
    this->sortSample();
    
    //#line 76 "SuffixArray.x10"
    this->sortNonSample();
}

//#line 80 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 81 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 82 "SuffixArray.x10"
    x10_long i__5014min__5205 = ((x10_long)0ll);
    x10_long i__5014max__5206 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5207;
        for (i__5207 = i__5014min__5205; ((i__5207) <= (i__5014max__5206));
             i__5207 = ((i__5207) + (((x10_long)1ll)))) {
            x10_long i__5208 = i__5207;
            
            //#line 83 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5208), ((x10_long)0ll))))
            {
                
                //#line 84 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__5208)) - (((x10_long)1ll))))));
            } else {
                
                //#line 86 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((this->FMGL(n)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 89 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 92 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    {
        
        //#line 93 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__5260 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 94 "SuffixArray.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 95 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 96 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 97 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 98 "SuffixArray.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 99 "SuffixArray.x10"
                x10_long i__5030min__5209 = ((x10_long)0ll);
                x10_long i__5030max__5210 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__5211;
                    for (i__5211 = i__5030min__5209; ((i__5211) <= (i__5030max__5210));
                         i__5211 = ((i__5211) + (((x10_long)1ll))))
                    {
                        x10_long i__5212 = i__5211;
                        
                        //#line 100 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__5212) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 101 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__5212);
                            
                            //#line 102 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc13) {
            {
                ::x10::lang::CheckedThrowable* ct__5258 =
                  __exc13;
                {
                    ::x10::xrx::Runtime::pushException(ct__5258);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__5260);
    }
}

//#line 108 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 109 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 110 "SuffixArray.x10"
    if (((this->FMGL(k)) < (((x10_long)2097152ll)))) {
        
        //#line 111 "SuffixArray.x10"
        this->sortPairsThreeFast(this->FMGL(string), this->FMGL(SA12),
                                 size, ((x10_int) (this->FMGL(num_threads))));
    } else 
    //#line 112 "SuffixArray.x10"
    if (((this->FMGL(k)) < (((x10_long)2147483647ll)))) {
        
        //#line 113 "SuffixArray.x10"
        this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                             size, ((x10_int) (this->FMGL(num_threads))));
    } else {
        
        //#line 115 "SuffixArray.x10"
        this->sortPairsThreeNormal(this->FMGL(string), this->FMGL(SA12),
                                   size, ((x10_int) (this->FMGL(num_threads))));
    }
    
    //#line 117 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__5393),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(k)));
    
    //#line 126 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 127 "SuffixArray.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 128 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 129 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 130 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 131 "SuffixArray.x10"
    x10_long i__5046min__5213 = ((x10_long)0ll);
    x10_long i__5046max__5214 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5215;
        for (i__5215 = i__5046min__5213; ((i__5215) <= (i__5046max__5214));
             i__5215 = ((i__5215) + (((x10_long)1ll)))) {
            x10_long i__5216 = i__5215;
            
            //#line 132 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5216)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5216)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5216)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 133 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 134 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5216));
                
                //#line 135 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5216)) + (((x10_long)1ll))));
                
                //#line 136 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5216)) + (((x10_long)2ll))));
            }
            
            //#line 139 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5216)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 140 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5216)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 142 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5216)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 148 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 149 "SuffixArray.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 151 "SuffixArray.x10"
        ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__5394),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(name)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
        
        //#line 152 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            this->FMGL(name),
                                                            this->FMGL(SA12),
                                                            this->FMGL(num_threads));
        
        //#line 153 "SuffixArray.x10"
        ::x10aux::nullCheck(bwa)->run();
        
        //#line 154 "SuffixArray.x10"
        bwa = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        {
            
            //#line 156 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5265 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 157 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__1)))bwt_SuffixArray__closure__1(this))));
                    
                    //#line 158 "SuffixArray.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 160 "SuffixArray.x10"
                    x10_long i__5078min__5221 = ((x10_long)0ll);
                    x10_long i__5078max__5222 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__5223;
                        for (i__5223 = i__5078min__5221; ((i__5223) <= (i__5078max__5222));
                             i__5223 = ((i__5223) + (((x10_long)1ll))))
                        {
                            x10_long i__5224 = i__5223;
                            
                            //#line 161 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__5224)) < (this->FMGL(n0))))
                            {
                                
                                //#line 162 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__5224))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__5263 =
                      __exc16;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5263);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5265);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__5094min__5229 = ((x10_long)0ll);
        x10_long i__5094max__5230 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5231;
            for (i__5231 = i__5094min__5229; ((i__5231) <= (i__5094max__5230));
                 i__5231 = ((i__5231) + (((x10_long)1ll))))
            {
                x10_long i__5232 = i__5231;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5232)) - (((x10_long)1ll))), i__5232);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5269 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 176 "SuffixArray.x10"
                    x10_long i__5110min__5225 = ((x10_long)0ll);
                    x10_long i__5110max__5226 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__5227;
                        for (i__5227 = i__5110min__5225; ((i__5227) <= (i__5110max__5226));
                             i__5227 = ((i__5227) + (((x10_long)1ll))))
                        {
                            x10_long i__5228 = i__5227;
                            
                            //#line 177 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__5228)) < (this->FMGL(n0))))
                            {
                                
                                //#line 179 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__5228))));
                                
                                //#line 180 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 183 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 185 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc17) {
                {
                    ::x10::lang::CheckedThrowable* ct__5267 =
                      __exc17;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5267);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5269);
        }
    }
    
    //#line 189 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5395)));
    
    //#line 191 "SuffixArray.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)(this->FMGL(num_threads))))))
    {
        
        //#line 192 "SuffixArray.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 193 "SuffixArray.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 194 "SuffixArray.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 195 "SuffixArray.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 196 "SuffixArray.x10"
        ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>* closure =
          reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >(sizeof(bwt_SuffixArray__closure__2)))bwt_SuffixArray__closure__2(this)));
        
        //#line 208 "SuffixArray.x10"
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>* binary_search =
          reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(closure)));
        
        //#line 226 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
          t_lb, t_ub, p_ub, p_lb);
        
        //#line 227 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 228 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 229 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 230 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 231 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 232 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 233 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5284 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 234 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(&(lbl), &(t_lb), lb, &(p_lb), binary_search, &(lbll), &(lblr)))));
                    
                    //#line 239 "SuffixArray.x10"
                    lbr = ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(binary_search), 
                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll)), t_ub, p_ub, ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                        ((x10_long)1ll)));
                    {
                        
                        //#line 240 "SuffixArray.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__5280 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 241 "SuffixArray.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__6)))bwt_SuffixArray__closure__6(&(lbrr), lbr, &(t_ub), &(p_ub), binary_search))));
                                
                                //#line 242 "SuffixArray.x10"
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
                                ::x10::lang::CheckedThrowable* ct__5278 =
                                  __exc19;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__5278);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__5280);
                    }
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc20) {
                {
                    ::x10::lang::CheckedThrowable* ct__5282 =
                      __exc20;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5282);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5284);
        }
        
        //#line 246 "SuffixArray.x10"
        x10_long split = ((x10_long)7ll);
        
        //#line 247 "SuffixArray.x10"
        x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 248 "SuffixArray.x10"
        x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 249 "SuffixArray.x10"
        x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 250 "SuffixArray.x10"
        x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 251 "SuffixArray.x10"
        x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 252 "SuffixArray.x10"
        x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 253 "SuffixArray.x10"
        x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 255 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5312 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)-1ll));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midll) - (((x10_long)1ll))));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midl) - (((x10_long)1ll))));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((midlr) - (((x10_long)1ll))));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((mid) - (((x10_long)1ll))));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midrl) - (((x10_long)1ll))));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midr) - (((x10_long)1ll))));
                                                                                        t__5312->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ((midrr) - (((x10_long)1ll))));
                                                                                        t__5312;
                                                                                    }))
                                                                                    );
        
        //#line 256 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5330 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midlr) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((mid) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((midrl) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midr) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midrr) + (((x10_long)1ll))));
                                                                                        t__5330->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          this->FMGL(n));
                                                                                        t__5330;
                                                                                    }))
                                                                                    );
        
        //#line 257 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5348 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)0ll));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__5348;
                                                                                    }))
                                                                                    );
        
        //#line 258 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__5366 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__5366;
                                                                                    }))
                                                                                    );
        {
            
            //#line 260 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__5289 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__5158min__5246 = ((x10_long)0ll);
                    x10_long i__5158max__5247 = split;
                    {
                        x10_long i__5248;
                        for (i__5248 = i__5158min__5246; ((i__5248) <= (i__5158max__5247));
                             i__5248 = ((i__5248) + (((x10_long)1ll))))
                        {
                            x10_long l__5249 = i__5248;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__7)))bwt_SuffixArray__closure__7(l__5249, krail, trail, prail, nrail, this))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc21) {
                {
                    ::x10::lang::CheckedThrowable* ct__5287 =
                      __exc21;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__5287);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__5289);
        }
    } else {
        
        //#line 301 "SuffixArray.x10"
        x10_long p = ((x10_long)0ll);
        
        //#line 302 "SuffixArray.x10"
        x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 303 "SuffixArray.x10"
        x10_long k = ((x10_long)-1ll);
        
        //#line 304 "SuffixArray.x10"
        while (((k) < (this->FMGL(n)))) {
            
            //#line 305 "SuffixArray.x10"
            k = ((k) + (((x10_long)1ll)));
            
            //#line 306 "SuffixArray.x10"
            x10_long i = this->getI(t);
            
            //#line 307 "SuffixArray.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                           p);
            
            //#line 309 "SuffixArray.x10"
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
                
                //#line 312 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, i);
                
                //#line 313 "SuffixArray.x10"
                t = ((t) + (((x10_long)1ll)));
                
                //#line 314 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                {
                    
                    //#line 315 "SuffixArray.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 316 "SuffixArray.x10"
                    x10_long i__5174min__5250 = ((x10_long)0ll);
                    x10_long i__5174max__5251 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                    {
                        x10_long i__5252;
                        for (i__5252 = i__5174min__5250; ((i__5252) <= (i__5174max__5251));
                             i__5252 = ((i__5252) + (((x10_long)1ll))))
                        {
                            x10_long q__5253 = i__5252;
                            
                            //#line 317 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                   p));
                            
                            //#line 318 "SuffixArray.x10"
                            p = ((p) + (((x10_long)1ll)));
                            
                            //#line 319 "SuffixArray.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 323 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, j);
                
                //#line 324 "SuffixArray.x10"
                p = ((p) + (((x10_long)1ll)));
                
                //#line 325 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                {
                    
                    //#line 326 "SuffixArray.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 327 "SuffixArray.x10"
                    x10_long i__5190min__5254 = ((x10_long)0ll);
                    x10_long i__5190max__5255 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                    {
                        x10_long i__5256;
                        for (i__5256 = i__5190min__5254; ((i__5256) <= (i__5190max__5255));
                             i__5256 = ((i__5256) + (((x10_long)1ll))))
                        {
                            x10_long q__5257 = i__5256;
                            
                            //#line 328 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, this->getI(t));
                            
                            //#line 329 "SuffixArray.x10"
                            t = ((t) + (((x10_long)1ll)));
                            
                            //#line 330 "SuffixArray.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    //#line 336 "SuffixArray.x10"
    this->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 337 "SuffixArray.x10"
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 338 "SuffixArray.x10"
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}

//#line 341 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 342 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 344 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 345 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 348 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 349 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 350 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 352 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__5395("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5394("name: %ld, n02: %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__5393("Ended 3rd Radix Sort %ld, max: %ld\n");

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__1>bwt_SuffixArray__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__1::__apply, &bwt_SuffixArray__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__1::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean>::itable<bwt_SuffixArray__closure__2>bwt_SuffixArray__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__2::__apply, &bwt_SuffixArray__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_boolean> >, &bwt_SuffixArray__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__2::_deserialize);

::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__3>bwt_SuffixArray__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__3::__apply, &bwt_SuffixArray__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, ::x10::lang::Rail< x10_long >*> >, &bwt_SuffixArray__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__3::_deserialize);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__5>bwt_SuffixArray__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__5::__apply, &bwt_SuffixArray__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__5::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__4>bwt_SuffixArray__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__4::__apply, &bwt_SuffixArray__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__4::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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

/* END of SuffixArray */
/*************************************************/
