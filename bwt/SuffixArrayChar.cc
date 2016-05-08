/*************************************************/
/* START of SuffixArrayChar */
#include <bwt/SuffixArrayChar.h>

#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
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
        return "SuffixArrayChar.x10:93";
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
        x10_long i__11122max__13659 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__13660;
            for (i__13660 = ((x10_long)0ll); ((i__13660) <= (i__11122max__13659));
                 i__13660 = ((i__13660) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__13660), ((i__13660) + (((x10_long)1ll))));
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
        return "SuffixArrayChar.x10:180";
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
        saved_this->FMGL(SA) = ::x10::lang::Rail< x10_byte >::_make(((saved_this->FMGL(n)) + (((x10_long)3ll))));
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
        return "SuffixArrayChar.x10:181";
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
        ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
          ((::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
              i__13667)) - (((x10_long)1ll))), i__13667);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__13667;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__13667);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__4>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__13667 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__4* this_ = new (storage) bwt_SuffixArrayChar__closure__4(that_saved_this, that_i__13667);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__4(::bwt::SuffixArrayChar* saved_this, x10_long i__13667) : saved_this(saved_this), i__13667(i__13667) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:196";
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
        saved_this->FMGL(SA) = ::x10::lang::Rail< x10_byte >::_make(((saved_this->FMGL(n)) + (((x10_long)3ll))));
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
        return "SuffixArrayChar.x10:198";
    }

};

#endif // BWT_SUFFIXARRAYCHAR__CLOSURE__5_CLOSURE
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
        lbll = (__extension__ ({
            x10_long t_lb__13471 = t_lb;
            x10_long t_ub__13472 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__13473 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__13474 = p_lb;
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13475 = ((((t_lb) + (t_ub__13472))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13476 = ((((p_lb) + (p_ub__13473))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13472) - (t_lb__13471))) > (((x10_long)1ll))) ||
                   ((((p_ub__13473) - (p_lb__13474))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13479;
                        goto __ret__13480; __ret__13480: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13481 = saved_this->getI(
                                                  t_mid__13475);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13482 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13476);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13475)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13484 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13481)));
                                    x10_long a__13485 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13475)) + (saved_this->FMGL(n0))));
                                    x10_long b__13486 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13482)));
                                    x10_long b__13487 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13482) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13484) < (b__13486)) ||
                                    ((::x10aux::struct_equals(a__13484,
                                                              b__13486)) &&
                                    ((a__13485) <= (b__13487))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13475)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__13481))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__13481) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13475)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__13482))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__13482) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__13482) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13479 = true;
                                goto __ret__13480_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13479 = false;
                                goto __ret__13480_end_;
                            }
                            
                        }goto __ret__13480_end_; __ret__13480_end_: ;
                        }
                        ret__13479;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13471 = t_mid__13475;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13473 = p_mid__13476;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13472 = t_mid__13475;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13474 = p_mid__13476;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13475 = ((((t_lb__13471) + (t_ub__13472))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13476 = ((((p_lb__13474) + (p_ub__13473))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13488 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15589 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15589->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13471);
                                                                                                t__15589->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13474);
                                                                                                t__15589;
                                                                                            }))
                                                                                            );
            lb__13488;
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
            bwt_SuffixArrayChar__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__7>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__7* this_ = new (storage) bwt_SuffixArrayChar__closure__7(that_lbll, that_t_lb, that_lbl, that_p_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__7(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lbl, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArrayChar* saved_this) : lbll(lbll), t_lb(t_lb), lbl(lbl), p_lb(p_lb), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:261";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__7_CLOSURE
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
        lbl = (__extension__ ({
            x10_long t_lb__13435 = t_lb;
            x10_long t_ub__13436 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__13437 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__13438 = p_lb;
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13439 = ((((t_lb) + (t_ub__13436))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13440 = ((((p_lb) + (p_ub__13437))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13436) - (t_lb__13435))) > (((x10_long)1ll))) ||
                   ((((p_ub__13437) - (p_lb__13438))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13443;
                        goto __ret__13444; __ret__13444: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13445 = saved_this->getI(
                                                  t_mid__13439);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13446 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13440);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13439)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13448 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13445)));
                                    x10_long a__13449 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13439)) + (saved_this->FMGL(n0))));
                                    x10_long b__13450 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13446)));
                                    x10_long b__13451 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13446) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13448) < (b__13450)) ||
                                    ((::x10aux::struct_equals(a__13448,
                                                              b__13450)) &&
                                    ((a__13449) <= (b__13451))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13439)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__13445))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__13445) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13439)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__13446))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__13446) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__13446) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13443 = true;
                                goto __ret__13444_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13443 = false;
                                goto __ret__13444_end_;
                            }
                            
                        }goto __ret__13444_end_; __ret__13444_end_: ;
                        }
                        ret__13443;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13435 = t_mid__13439;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13437 = p_mid__13440;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13436 = t_mid__13439;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13438 = p_mid__13440;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13439 = ((((t_lb__13435) + (t_ub__13436))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13440 = ((((p_lb__13438) + (p_ub__13437))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13452 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15583 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15583->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13435);
                                                                                                t__15583->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13438);
                                                                                                t__15583;
                                                                                            }))
                                                                                            );
            lb__13452;
            }))
            ;
        {
            
            //#line 260 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13719 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 261 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(&(lbll), &(t_lb), lbl, &(p_lb), saved_this))));
                    
                    //#line 262 "SuffixArrayChar.x10"
                    lblr = (__extension__ ({
                        x10_long t_lb__13507 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__13508 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__13509 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__13510 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 234 "SuffixArrayChar.x10"
                        x10_long t_mid__13511 = ((((t_lb__13507) + (t_ub__13508))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 235 "SuffixArrayChar.x10"
                        x10_long p_mid__13512 = ((((p_lb__13510) + (p_ub__13509))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 236 "SuffixArrayChar.x10"
                        while ((((((t_ub__13508) - (t_lb__13507))) > (((x10_long)1ll))) ||
                               ((((p_ub__13509) - (p_lb__13510))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 237 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 221 "SuffixArrayChar.x10"
                                    x10_boolean ret__13515;
                                    goto __ret__13516; __ret__13516: {
                                    {
                                        
                                        //#line 222 "SuffixArrayChar.x10"
                                        x10_long i__13517 =
                                          saved_this->getI(
                                            t_mid__13511);
                                        
                                        //#line 223 "SuffixArrayChar.x10"
                                        x10_long j__13518 =
                                          ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__13512);
                                        
                                        //#line 224 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__13511)) < (saved_this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__13520 =
                                                  ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__13517)));
                                                x10_long a__13521 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13511)) + (saved_this->FMGL(n0))));
                                                x10_long b__13522 =
                                                  ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__13518)));
                                                x10_long b__13523 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__13518) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__13520) < (b__13522)) ||
                                                ((::x10aux::struct_equals(a__13520,
                                                                          b__13522)) &&
                                                ((a__13521) <= (b__13523))));
                                            }))
                                            ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__13511)) >= (saved_this->FMGL(n0))) &&
                                            saved_this->leq(
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            i__13517))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            ((i__13517) + (((x10_long)1ll)))))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__13511)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            j__13518))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            ((j__13518) + (((x10_long)1ll)))))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((j__13518) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 227 "SuffixArrayChar.x10"
                                            ret__13515 = true;
                                            goto __ret__13516_end_;
                                        } else {
                                            
                                            //#line 229 "SuffixArrayChar.x10"
                                            ret__13515 = false;
                                            goto __ret__13516_end_;
                                        }
                                        
                                    }goto __ret__13516_end_; __ret__13516_end_: ;
                                    }
                                    ret__13515;
                                    }))
                                    ) {
                                    
                                    //#line 238 "SuffixArrayChar.x10"
                                    t_lb__13507 = t_mid__13511;
                                    
                                    //#line 239 "SuffixArrayChar.x10"
                                    p_ub__13509 = p_mid__13512;
                                } else {
                                    
                                    //#line 241 "SuffixArrayChar.x10"
                                    t_ub__13508 = t_mid__13511;
                                    
                                    //#line 242 "SuffixArrayChar.x10"
                                    p_lb__13510 = p_mid__13512;
                                }
                                
                            
                            //#line 244 "SuffixArrayChar.x10"
                            t_mid__13511 = ((((t_lb__13507) + (t_ub__13508))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 245 "SuffixArrayChar.x10"
                            p_mid__13512 = ((((p_lb__13510) + (p_ub__13509))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 247 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__13524 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15595 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15595->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__13507);
                                                                   t__15595->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__13510);
                                                                   t__15595;
                                                               }))
                                                               );
                        lb__13524;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc37) {
                    {
                        ::x10::lang::CheckedThrowable* ct__13717 =
                          __exc37;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__13717);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__13719);
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
            bwt_SuffixArrayChar__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__6>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            bwt_SuffixArrayChar__closure__6* this_ = new (storage) bwt_SuffixArrayChar__closure__6(that_lbl, that_t_lb, that_lb, that_p_lb, that_saved_this, that_lbll, that_lblr);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__6(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArrayChar* saved_this, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), saved_this(saved_this), lbll(lbll), lblr(lblr) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:259-263";
        }
        
        };
        
        #endif // BWT_SUFFIXARRAYCHAR__CLOSURE__6_CLOSURE
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
        lbrr = (__extension__ ({
            x10_long t_lb__13579 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__13580 = t_ub;
            x10_long p_ub__13581 = p_ub;
            x10_long p_lb__13582 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13583 = ((((t_lb__13579) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13584 = ((((p_lb__13582) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13580) - (t_lb__13579))) > (((x10_long)1ll))) ||
                   ((((p_ub__13581) - (p_lb__13582))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13587;
                        goto __ret__13588; __ret__13588: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13589 = saved_this->getI(
                                                  t_mid__13583);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13590 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13584);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13583)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13592 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13589)));
                                    x10_long a__13593 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13583)) + (saved_this->FMGL(n0))));
                                    x10_long b__13594 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13590)));
                                    x10_long b__13595 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13590) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13592) < (b__13594)) ||
                                    ((::x10aux::struct_equals(a__13592,
                                                              b__13594)) &&
                                    ((a__13593) <= (b__13595))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13583)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__13589))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__13589) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13583)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__13590))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__13590) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__13590) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13587 = true;
                                goto __ret__13588_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13587 = false;
                                goto __ret__13588_end_;
                            }
                            
                        }goto __ret__13588_end_; __ret__13588_end_: ;
                        }
                        ret__13587;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13579 = t_mid__13583;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13581 = p_mid__13584;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13580 = t_mid__13583;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13582 = p_mid__13584;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13583 = ((((t_lb__13579) + (t_ub__13580))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13584 = ((((p_lb__13582) + (p_ub__13581))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13596 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15607 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15607->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13579);
                                                                                                t__15607->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13582);
                                                                                                t__15607;
                                                                                            }))
                                                                                            );
            lb__13596;
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
            bwt_SuffixArrayChar__closure__8* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__8>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbr = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_t_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            x10aux::captured_struct_lval<x10_long> that_p_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
            bwt_SuffixArrayChar__closure__8* this_ = new (storage) bwt_SuffixArrayChar__closure__8(that_lbrr, that_lbr, that_t_ub, that_p_ub, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArrayChar__closure__8(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr, ::x10::lang::Rail< x10_long >* lbr, x10aux::captured_struct_lval<x10_long> t_ub, x10aux::captured_struct_lval<x10_long> p_ub, ::bwt::SuffixArrayChar* saved_this) : lbrr(lbrr), lbr(lbr), t_ub(t_ub), p_ub(p_ub), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArrayChar.x10:266";
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
        
        //#line 295 "SuffixArrayChar.x10"
        x10_long k__13677 = krail->x10::lang::Rail< x10_long >::__apply(l__13688);
        
        //#line 296 "SuffixArrayChar.x10"
        x10_long t__13678 = trail->x10::lang::Rail< x10_long >::__apply(l__13688);
        
        //#line 297 "SuffixArrayChar.x10"
        x10_long p__13679 = prail->x10::lang::Rail< x10_long >::__apply(l__13688);
        
        //#line 298 "SuffixArrayChar.x10"
        while (((k__13677) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__13688)))) {
            
            //#line 299 "SuffixArrayChar.x10"
            k__13677 = ((k__13677) + (((x10_long)1ll)));
            
            //#line 300 "SuffixArrayChar.x10"
            x10_long i__13680 = saved_this->getI(t__13678);
            
            //#line 301 "SuffixArrayChar.x10"
            x10_long j__13681 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__13679);
            
            //#line 303 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__13678)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__13683 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i__13680)));
                    x10_long a__13684 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__13678)) + (saved_this->FMGL(n0))));
                    x10_long b__13685 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j__13681)));
                    x10_long b__13686 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__13681) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__13683) < (b__13685)) || ((::x10aux::struct_equals(a__13683,
                                                                            b__13685)) &&
                    ((a__13684) <= (b__13686))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__13678)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              i__13680))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((i__13680) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__13678)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              j__13681))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((j__13681) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__13681) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 306 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__13688,
                                                 ((x10_long)0ll))) &&
                    ((k__13677) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__13688)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 307 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k__13677, saved_this->bwt(i__13680));
                }
                
                //#line 309 "SuffixArrayChar.x10"
                t__13678 = ((t__13678) + (((x10_long)1ll)));
                
                //#line 310 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__13678, saved_this->FMGL(n02))))
                {
                    
                    //#line 311 "SuffixArrayChar.x10"
                    k__13677 = ((k__13677) + (((x10_long)1ll)));
                    
                    //#line 312 "SuffixArrayChar.x10"
                    x10_long i__11186max__13671 = ((((saved_this->FMGL(n0)) - (p__13679))) - (((x10_long)1ll)));
                    {
                        x10_long i__13672;
                        for (i__13672 = ((x10_long)0ll); ((i__13672) <= (i__11186max__13671));
                             i__13672 = ((i__13672) + (((x10_long)1ll))))
                        {
                            
                            //#line 313 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                              k__13677, saved_this->bwt(::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                          p__13679)));
                            
                            //#line 314 "SuffixArrayChar.x10"
                            p__13679 = ((p__13679) + (((x10_long)1ll)));
                            
                            //#line 315 "SuffixArrayChar.x10"
                            k__13677 = ((k__13677) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 319 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__13688,
                                                 ((x10_long)0ll))) &&
                    ((k__13677) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__13688)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 320 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k__13677, saved_this->bwt(j__13681));
                }
                
                //#line 322 "SuffixArrayChar.x10"
                p__13679 = ((p__13679) + (((x10_long)1ll)));
                
                //#line 323 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__13679, saved_this->FMGL(n0))))
                {
                    
                    //#line 324 "SuffixArrayChar.x10"
                    k__13677 = ((k__13677) + (((x10_long)1ll)));
                    
                    //#line 325 "SuffixArrayChar.x10"
                    x10_long i__11202max__13674 = ((((saved_this->FMGL(n02)) - (t__13678))) - (((x10_long)1ll)));
                    {
                        x10_long i__13675;
                        for (i__13675 = ((x10_long)0ll); ((i__13675) <= (i__11202max__13674));
                             i__13675 = ((i__13675) + (((x10_long)1ll))))
                        {
                            
                            //#line 326 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                              k__13677, saved_this->bwt(saved_this->getI(
                                                          t__13678)));
                            
                            //#line 327 "SuffixArrayChar.x10"
                            t__13678 = ((t__13678) + (((x10_long)1ll)));
                            
                            //#line 328 "SuffixArrayChar.x10"
                            k__13677 = ((k__13677) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__13688;
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
        buf.write(this->l__13688);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__13688 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_krail, that_l__13688, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::x10::lang::Rail< x10_long >* krail, x10_long l__13688, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArrayChar* saved_this) : krail(krail), l__13688(l__13688), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:294-333";
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

//#line 25 "SuffixArrayChar.x10"

//#line 27 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize, x10_byte threads) {
    
    //#line 9 "SuffixArrayChar.x10"
    ::bwt::SuffixArrayChar* this__13652 = this;
    ::x10aux::nullCheck(this__13652)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13652)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13652)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13652)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13652)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13652)->FMGL(name) = ((x10_long)0ll);
    
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

//#line 63 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_byte >* bwt::SuffixArrayChar::run() {
    
    //#line 65 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 67 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 69 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 70 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 83 "SuffixArrayChar.x10"
x10_byte bwt::SuffixArrayChar::bwt(x10_long pos) {
    
    //#line 84 "SuffixArrayChar.x10"
    if ((!::x10aux::struct_equals(pos, ((x10_long)0ll)))) {
        
        //#line 85 "SuffixArrayChar.x10"
        return ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                 ((pos) - (((x10_long)1ll))));
        
    } else {
        
        //#line 87 "SuffixArrayChar.x10"
        return ((x10_byte)0);
        
    }
    
}

//#line 91 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    {
        
        //#line 92 "SuffixArrayChar.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__13698 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 93 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__1)))bwt_SuffixArrayChar__closure__1(this))));
                
                //#line 94 "SuffixArrayChar.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 95 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 96 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 97 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 98 "SuffixArrayChar.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 99 "SuffixArrayChar.x10"
                x10_long i__11090max__13653 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__13654;
                    for (i__13654 = ((x10_long)0ll); ((i__13654) <= (i__11090max__13653));
                         i__13654 = ((i__13654) + (((x10_long)1ll))))
                    {
                        
                        //#line 100 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__13654) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 101 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__13654);
                            
                            //#line 102 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc31) {
            {
                ::x10::lang::CheckedThrowable* ct__13696 =
                  __exc31;
                {
                    ::x10::xrx::Runtime::pushException(ct__13696);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__13698);
    }
}

//#line 132 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 133 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 134 "SuffixArrayChar.x10"
    this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                         size, ((x10_int) (this->FMGL(num_threads))));
    
    //#line 135 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArrayChar_Strings::sl__15690),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 150 "SuffixArrayChar.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 151 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 152 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 153 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 154 "SuffixArrayChar.x10"
    x10_long i__11106max__13656 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__13657;
        for (i__13657 = ((x10_long)0ll); ((i__13657) <= (i__11106max__13656));
             i__13657 = ((i__13657) + (((x10_long)1ll))))
        {
            
            //#line 155 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__13657)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__13657)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__13657)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 156 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 157 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__13657));
                
                //#line 158 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__13657)) + (((x10_long)1ll))));
                
                //#line 159 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__13657)) + (((x10_long)2ll))));
            }
            
            //#line 162 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__13657)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 163 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__13657)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 165 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__13657)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 172 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 173 "SuffixArrayChar.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 175 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                this->FMGL(name),
                                                this->FMGL(SA12),
                                                this->FMGL(num_threads));
        
        //#line 176 "SuffixArrayChar.x10"
        ::x10aux::nullCheck(bwa)->run();
        
        //#line 177 "SuffixArrayChar.x10"
        bwa = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        {
            
            //#line 179 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13704 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 180 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__2)))bwt_SuffixArrayChar__closure__2(this))));
                    
                    //#line 181 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__3)))bwt_SuffixArrayChar__closure__3(this))));
                    
                    //#line 182 "SuffixArrayChar.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 183 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 184 "SuffixArrayChar.x10"
                    x10_long i__11138max__13662 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__13663;
                        for (i__13663 = ((x10_long)0ll); ((i__13663) <= (i__11138max__13662));
                             i__13663 = ((i__13663) + (((x10_long)1ll))))
                        {
                            
                            //#line 185 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__13663)) < (this->FMGL(n0))))
                            {
                                
                                //#line 187 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__13663))));
                                
                                //#line 188 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 191 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 193 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc34) {
                {
                    ::x10::lang::CheckedThrowable* ct__13702 =
                      __exc34;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__13702);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__13704);
        }
    } else {
        {
            
            //#line 196 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13709 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__11154max__13665 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__13666;
                        for (i__13666 = ((x10_long)0ll); ((i__13666) <= (i__11154max__13665));
                             i__13666 = ((i__13666) + (((x10_long)1ll))))
                        {
                            x10_long i__13667 = i__13666;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__4)))bwt_SuffixArrayChar__closure__4(this, i__13667))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc35) {
                {
                    ::x10::lang::CheckedThrowable* ct__13707 =
                      __exc35;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__13707);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__13709);
        }
        {
            
            //#line 197 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13714 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 198 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__5)))bwt_SuffixArrayChar__closure__5(this))));
                    
                    //#line 199 "SuffixArrayChar.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 200 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 201 "SuffixArrayChar.x10"
                    x10_long i__11170max__13668 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__13669;
                        for (i__13669 = ((x10_long)0ll); ((i__13669) <= (i__11170max__13668));
                             i__13669 = ((i__13669) + (((x10_long)1ll))))
                        {
                            
                            //#line 202 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__13669)) < (this->FMGL(n0))))
                            {
                                
                                //#line 204 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__13669))));
                                
                                //#line 205 "SuffixArrayChar.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 208 "SuffixArrayChar.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 210 "SuffixArrayChar.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc36) {
                {
                    ::x10::lang::CheckedThrowable* ct__13712 =
                      __exc36;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__13712);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__13714);
        }
    }
    
    //#line 214 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__15691)));
    
    //#line 216 "SuffixArrayChar.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)(this->FMGL(num_threads))))))
    {
        
        //#line 217 "SuffixArrayChar.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 218 "SuffixArrayChar.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 219 "SuffixArrayChar.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 220 "SuffixArrayChar.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 251 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__13399 = t_lb;
            x10_long t_ub__13400 = t_ub;
            x10_long p_ub__13401 = p_ub;
            x10_long p_lb__13402 = p_lb;
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13403 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13404 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13400) - (t_lb__13399))) > (((x10_long)1ll))) ||
                   ((((p_ub__13401) - (p_lb__13402))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13407;
                        goto __ret__13408; __ret__13408: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13409 = this->getI(
                                                  t_mid__13403);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13410 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13404);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13403)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13412 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13409)));
                                    x10_long a__13413 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13403)) + (this->FMGL(n0))));
                                    x10_long b__13414 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13410)));
                                    x10_long b__13415 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13410) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13412) < (b__13414)) ||
                                    ((::x10aux::struct_equals(a__13412,
                                                              b__13414)) &&
                                    ((a__13413) <= (b__13415))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13403)) >= (this->FMGL(n0))) &&
                                this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        i__13409))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((i__13409) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__13403)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        j__13410))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((j__13410) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__13410) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13407 = true;
                                goto __ret__13408_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13407 = false;
                                goto __ret__13408_end_;
                            }
                            
                        }goto __ret__13408_end_; __ret__13408_end_: ;
                        }
                        ret__13407;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13399 = t_mid__13403;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13401 = p_mid__13404;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13400 = t_mid__13403;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13402 = p_mid__13404;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13403 = ((((t_lb__13399) + (t_ub__13400))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13404 = ((((p_lb__13402) + (p_ub__13401))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13416 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15577 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15577->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13399);
                                                                                                t__15577->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13402);
                                                                                                t__15577;
                                                                                            }))
                                                                                            );
            lb__13416;
            }))
            ;
            
        
        //#line 252 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 253 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 254 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 255 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 256 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 257 "SuffixArrayChar.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 258 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13729 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 259 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__6)))bwt_SuffixArrayChar__closure__6(&(lbl), &(t_lb), lb, &(p_lb), this, &(lbll), &(lblr)))));
                    
                    //#line 264 "SuffixArrayChar.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__13543 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__13544 = t_ub;
                        x10_long p_ub__13545 = p_ub;
                        x10_long p_lb__13546 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 234 "SuffixArrayChar.x10"
                        x10_long t_mid__13547 = ((((t_lb__13543) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 235 "SuffixArrayChar.x10"
                        x10_long p_mid__13548 = ((((p_lb__13546) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 236 "SuffixArrayChar.x10"
                        while ((((((t_ub__13544) - (t_lb__13543))) > (((x10_long)1ll))) ||
                               ((((p_ub__13545) - (p_lb__13546))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 237 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 221 "SuffixArrayChar.x10"
                                    x10_boolean ret__13551;
                                    goto __ret__13552; __ret__13552: {
                                    {
                                        
                                        //#line 222 "SuffixArrayChar.x10"
                                        x10_long i__13553 =
                                          this->getI(t_mid__13547);
                                        
                                        //#line 223 "SuffixArrayChar.x10"
                                        x10_long j__13554 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__13548);
                                        
                                        //#line 224 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__13547)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__13556 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__13553)));
                                                x10_long a__13557 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13547)) + (this->FMGL(n0))));
                                                x10_long b__13558 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__13554)));
                                                x10_long b__13559 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__13554) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__13556) < (b__13558)) ||
                                                ((::x10aux::struct_equals(a__13556,
                                                                          b__13558)) &&
                                                ((a__13557) <= (b__13559))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__13547)) >= (this->FMGL(n0))) &&
                                            this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    i__13553))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((i__13553) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13547)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    j__13554))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((j__13554) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__13554) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 227 "SuffixArrayChar.x10"
                                            ret__13551 = true;
                                            goto __ret__13552_end_;
                                        } else {
                                            
                                            //#line 229 "SuffixArrayChar.x10"
                                            ret__13551 = false;
                                            goto __ret__13552_end_;
                                        }
                                        
                                    }goto __ret__13552_end_; __ret__13552_end_: ;
                                    }
                                    ret__13551;
                                    }))
                                    ) {
                                    
                                    //#line 238 "SuffixArrayChar.x10"
                                    t_lb__13543 = t_mid__13547;
                                    
                                    //#line 239 "SuffixArrayChar.x10"
                                    p_ub__13545 = p_mid__13548;
                                } else {
                                    
                                    //#line 241 "SuffixArrayChar.x10"
                                    t_ub__13544 = t_mid__13547;
                                    
                                    //#line 242 "SuffixArrayChar.x10"
                                    p_lb__13546 = p_mid__13548;
                                }
                                
                            
                            //#line 244 "SuffixArrayChar.x10"
                            t_mid__13547 = ((((t_lb__13543) + (t_ub__13544))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 245 "SuffixArrayChar.x10"
                            p_mid__13548 = ((((p_lb__13546) + (p_ub__13545))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 247 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__13560 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15601 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15601->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__13543);
                                                                   t__15601->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__13546);
                                                                   t__15601;
                                                               }))
                                                               );
                        lb__13560;
                        }))
                        ;
                    {
                        
                        //#line 265 "SuffixArrayChar.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__13725 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 266 "SuffixArrayChar.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                                
                                //#line 267 "SuffixArrayChar.x10"
                                lbrl = (__extension__ ({
                                    x10_long t_lb__13615 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long t_ub__13616 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long p_ub__13617 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    x10_long p_lb__13618 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 234 "SuffixArrayChar.x10"
                                    x10_long t_mid__13619 =
                                      ((((t_lb__13615) + (t_ub__13616))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 235 "SuffixArrayChar.x10"
                                    x10_long p_mid__13620 =
                                      ((((p_lb__13618) + (p_ub__13617))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 236 "SuffixArrayChar.x10"
                                    while ((((((t_ub__13616) - (t_lb__13615))) > (((x10_long)1ll))) ||
                                           ((((p_ub__13617) - (p_lb__13618))) > (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 237 "SuffixArrayChar.x10"
                                        if ((__extension__ ({
                                                
                                                //#line 221 "SuffixArrayChar.x10"
                                                x10_boolean ret__13623;
                                                goto __ret__13624; __ret__13624: {
                                                {
                                                    
                                                    //#line 222 "SuffixArrayChar.x10"
                                                    x10_long i__13625 =
                                                      this->getI(
                                                        t_mid__13619);
                                                    
                                                    //#line 223 "SuffixArrayChar.x10"
                                                    x10_long j__13626 =
                                                      ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                        p_mid__13620);
                                                    
                                                    //#line 224 "SuffixArrayChar.x10"
                                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13619)) < (this->FMGL(n0))) &&
                                                        (__extension__ ({
                                                            x10_long a__13628 =
                                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                            i__13625)));
                                                            x10_long a__13629 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                    t_mid__13619)) + (this->FMGL(n0))));
                                                            x10_long b__13630 =
                                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                            j__13626)));
                                                            x10_long b__13631 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((j__13626) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                            (((a__13628) < (b__13630)) ||
                                                            ((::x10aux::struct_equals(a__13628,
                                                                                      b__13630)) &&
                                                            ((a__13629) <= (b__13631))));
                                                        }))
                                                        ) ||
                                                        (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t_mid__13619)) >= (this->FMGL(n0))) &&
                                                        this->leq(
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        i__13625))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        ((i__13625) + (((x10_long)1ll)))))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                  t_mid__13619)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        j__13626))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        ((j__13626) + (((x10_long)1ll)))))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((j__13626) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                                    {
                                                        
                                                        //#line 227 "SuffixArrayChar.x10"
                                                        ret__13623 =
                                                          true;
                                                        goto __ret__13624_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 229 "SuffixArrayChar.x10"
                                                        ret__13623 =
                                                          false;
                                                        goto __ret__13624_end_;
                                                    }
                                                    
                                                }goto __ret__13624_end_; __ret__13624_end_: ;
                                                }
                                                ret__13623;
                                                }))
                                                ) {
                                                
                                                //#line 238 "SuffixArrayChar.x10"
                                                t_lb__13615 =
                                                  t_mid__13619;
                                                
                                                //#line 239 "SuffixArrayChar.x10"
                                                p_ub__13617 =
                                                  p_mid__13620;
                                            } else {
                                                
                                                //#line 241 "SuffixArrayChar.x10"
                                                t_ub__13616 =
                                                  t_mid__13619;
                                                
                                                //#line 242 "SuffixArrayChar.x10"
                                                p_lb__13618 =
                                                  p_mid__13620;
                                            }
                                            
                                        
                                        //#line 244 "SuffixArrayChar.x10"
                                        t_mid__13619 = ((((t_lb__13615) + (t_ub__13616))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        
                                        //#line 245 "SuffixArrayChar.x10"
                                        p_mid__13620 = ((((p_lb__13618) + (p_ub__13617))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        }
                                        
                                    
                                    //#line 247 "SuffixArrayChar.x10"
                                    ::x10::lang::Rail< x10_long >* lb__13632 =
                                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                               ::x10::lang::Rail< x10_long >* t__15613 =
                                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                               t__15613->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)0ll),
                                                                                 t_lb__13615);
                                                                               t__15613->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)1ll),
                                                                                 p_lb__13618);
                                                                               t__15613;
                                                                           }))
                                                                           );
                                    lb__13632;
                                    }))
                                    ;
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc38) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__13723 =
                                      __exc38;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__13723);
                                    }
                                }
                            }
                        ::x10::xrx::Runtime::stopFinish(fs__13725);
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc39) {
                    {
                        ::x10::lang::CheckedThrowable* ct__13727 =
                          __exc39;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__13727);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__13729);
            }
            
            //#line 272 "SuffixArrayChar.x10"
            x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 273 "SuffixArrayChar.x10"
            x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 274 "SuffixArrayChar.x10"
            x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 275 "SuffixArrayChar.x10"
            x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 276 "SuffixArrayChar.x10"
            x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 277 "SuffixArrayChar.x10"
            x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 278 "SuffixArrayChar.x10"
            x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 280 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15619 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)-1ll));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midll) - (((x10_long)1ll))));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midl) - (((x10_long)1ll))));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((midlr) - (((x10_long)1ll))));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((mid) - (((x10_long)1ll))));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midrl) - (((x10_long)1ll))));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midr) - (((x10_long)1ll))));
                                                                                            t__15619->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ((midrr) - (((x10_long)1ll))));
                                                                                            t__15619;
                                                                                        }))
                                                                                        );
            
            //#line 281 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15637 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midlr) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((mid) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((midrl) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midr) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midrr) + (((x10_long)1ll))));
                                                                                            t__15637->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              this->FMGL(n));
                                                                                            t__15637;
                                                                                        }))
                                                                                        );
            
            //#line 282 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15655 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)0ll));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15655;
                                                                                        }))
                                                                                        );
            
            //#line 283 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15673 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15673;
                                                                                        }))
                                                                                        );
            {
                
                //#line 294 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__13734 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long i__13687;
                            for (i__13687 = ((x10_long)0ll);
                                 ((i__13687) <= (((x10_long)7ll)));
                                 i__13687 = ((i__13687) + (((x10_long)1ll))))
                            {
                                x10_long l__13688 = i__13687;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(krail, l__13688, trail, prail, nrail, this))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc40) {
                    {
                        ::x10::lang::CheckedThrowable* ct__13732 =
                          __exc40;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__13732);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__13734);
            }
        } else {
            
            //#line 335 "SuffixArrayChar.x10"
            x10_long p = ((x10_long)0ll);
            
            //#line 336 "SuffixArrayChar.x10"
            x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
            
            //#line 337 "SuffixArrayChar.x10"
            x10_long k = ((x10_long)-1ll);
            
            //#line 338 "SuffixArrayChar.x10"
            while (((k) < (this->FMGL(n)))) {
                
                //#line 339 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 340 "SuffixArrayChar.x10"
                x10_long i = this->getI(t);
                
                //#line 341 "SuffixArrayChar.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p);
                
                //#line 343 "SuffixArrayChar.x10"
                if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__13640 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          i)));
                        x10_long a__13641 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__13642 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          j)));
                        x10_long b__13643 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__13640) < (b__13642)) || ((::x10aux::struct_equals(a__13640,
                                                                                b__13642)) &&
                        ((a__13641) <= (b__13643))));
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
                    
                    //#line 346 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k, this->bwt(i));
                    
                    //#line 347 "SuffixArrayChar.x10"
                    t = ((t) + (((x10_long)1ll)));
                    
                    //#line 348 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                    {
                        
                        //#line 349 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 350 "SuffixArrayChar.x10"
                        x10_long i__11234max__13689 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__13690;
                            for (i__13690 = ((x10_long)0ll);
                                 ((i__13690) <= (i__11234max__13689));
                                 i__13690 = ((i__13690) + (((x10_long)1ll))))
                            {
                                
                                //#line 351 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                                  k, this->bwt(::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                 p)));
                                
                                //#line 352 "SuffixArrayChar.x10"
                                p = ((p) + (((x10_long)1ll)));
                                
                                //#line 353 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                } else {
                    
                    //#line 357 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k, this->bwt(j));
                    
                    //#line 358 "SuffixArrayChar.x10"
                    p = ((p) + (((x10_long)1ll)));
                    
                    //#line 359 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                    {
                        
                        //#line 360 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 361 "SuffixArrayChar.x10"
                        x10_long i__11250max__13692 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__13693;
                            for (i__13693 = ((x10_long)0ll);
                                 ((i__13693) <= (i__11250max__13692));
                                 i__13693 = ((i__13693) + (((x10_long)1ll))))
                            {
                                
                                //#line 362 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                                  k, this->bwt(this->getI(
                                                 t)));
                                
                                //#line 363 "SuffixArrayChar.x10"
                                t = ((t) + (((x10_long)1ll)));
                                
                                //#line 364 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                }
                
            }
            
        }
        }
        
    
    //#line 372 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long b1, x10_long b2) {
        
        //#line 373 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 376 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long a3, x10_long b1,
                                          x10_long b2, x10_long b3) {
        
        //#line 377 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 380 "SuffixArrayChar.x10"
    x10_long bwt::SuffixArrayChar::getI(x10_long t) {
        
        //#line 381 "SuffixArrayChar.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 382 "SuffixArrayChar.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 384 "SuffixArrayChar.x10"
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
        this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
        FMGL(SA) = buf.read< ::x10::lang::Rail< x10_byte >*>();
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
    
    ::x10::lang::String bwt::SuffixArrayChar_Strings::sl__15690("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__15691("Start Merge Final");

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

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__7>bwt_SuffixArrayChar__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__7::__apply, &bwt_SuffixArrayChar__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__7::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__7::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__7::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArrayChar__closure__6>bwt_SuffixArrayChar__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArrayChar__closure__6::__apply, &bwt_SuffixArrayChar__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArrayChar__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArrayChar__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArrayChar__closure__6::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArrayChar__closure__6::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArrayChar__closure__6::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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
