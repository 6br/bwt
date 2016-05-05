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
        x10_long i__14258max__14720 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__14721;
            for (i__14721 = ((x10_long)0ll); ((i__14721) <= (i__14258max__14720));
                 i__14721 = ((i__14721) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__14721), ((i__14721) + (((x10_long)1ll))));
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
#include <x10/lang/VoidFun_0_0.h>
class bwt_SuffixArray__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        lbl = (__extension__ ({
            x10_long t_lb__14465 = t_lb;
            x10_long t_ub__14466 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14467 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14468 = p_lb;
            
            //#line 208 "SuffixArray.x10"
            x10_long t_mid__14469 = ((((t_lb) + (t_ub__14466))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 209 "SuffixArray.x10"
            x10_long p_mid__14470 = ((((p_lb) + (p_ub__14467))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            while ((((((t_ub__14466) - (t_lb__14465))) > (((x10_long)1ll))) ||
                   ((((p_ub__14467) - (p_lb__14468))) > (((x10_long)1ll)))))
            {
                
                //#line 211 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 195 "SuffixArray.x10"
                        x10_boolean ret__14473;
                        goto __ret__14474; __ret__14474: {
                        {
                            
                            //#line 196 "SuffixArray.x10"
                            x10_long i__14475 = saved_this->getI(
                                                  t_mid__14469);
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long j__14476 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14470);
                            
                            //#line 198 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14469)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14478 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14475);
                                    x10_long a__14479 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14469)) + (saved_this->FMGL(n0))));
                                    x10_long b__14480 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14476);
                                    x10_long b__14481 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14476) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14478) < (b__14480)) ||
                                    ((::x10aux::struct_equals(a__14478,
                                                              b__14480)) &&
                                    ((a__14479) <= (b__14481))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14469)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14475),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14475) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14469)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14476),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14476) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14476) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 201 "SuffixArray.x10"
                                ret__14473 = true;
                                goto __ret__14474_end_;
                            } else {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14473 = false;
                                goto __ret__14474_end_;
                            }
                            
                        }goto __ret__14474_end_; __ret__14474_end_: ;
                        }
                        ret__14473;
                        }))
                        ) {
                        
                        //#line 212 "SuffixArray.x10"
                        t_lb__14465 = t_mid__14469;
                        
                        //#line 213 "SuffixArray.x10"
                        p_ub__14467 = p_mid__14470;
                    } else {
                        
                        //#line 215 "SuffixArray.x10"
                        t_ub__14466 = t_mid__14469;
                        
                        //#line 216 "SuffixArray.x10"
                        p_lb__14468 = p_mid__14470;
                    }
                    
                
                //#line 218 "SuffixArray.x10"
                t_mid__14469 = ((((t_lb__14465) + (t_ub__14466))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 219 "SuffixArray.x10"
                p_mid__14470 = ((((p_lb__14468) + (p_ub__14467))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 221 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14482 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15979 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15979->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14465);
                                                                                                t__15979->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14468);
                                                                                                t__15979;
                                                                                            }))
                                                                                            );
            lb__14482;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl;
        x10aux::captured_struct_lval<x10_long> t_lb;
        ::x10::lang::Rail< x10_long >* lb;
        x10aux::captured_struct_lval<x10_long> p_lb;
        ::bwt::SuffixArray* saved_this;
        
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
            bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_lbl, that_t_lb, that_lb, that_p_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__4(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArray* saved_this) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:233";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE
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
        lbll = (__extension__ ({
            x10_long t_lb__14537 = t_lb;
            x10_long t_ub__14538 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14539 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14540 = p_lb;
            
            //#line 208 "SuffixArray.x10"
            x10_long t_mid__14541 = ((((t_lb) + (t_ub__14538))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 209 "SuffixArray.x10"
            x10_long p_mid__14542 = ((((p_lb) + (p_ub__14539))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            while ((((((t_ub__14538) - (t_lb__14537))) > (((x10_long)1ll))) ||
                   ((((p_ub__14539) - (p_lb__14540))) > (((x10_long)1ll)))))
            {
                
                //#line 211 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 195 "SuffixArray.x10"
                        x10_boolean ret__14545;
                        goto __ret__14546; __ret__14546: {
                        {
                            
                            //#line 196 "SuffixArray.x10"
                            x10_long i__14547 = saved_this->getI(
                                                  t_mid__14541);
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long j__14548 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14542);
                            
                            //#line 198 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14541)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14550 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14547);
                                    x10_long a__14551 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14541)) + (saved_this->FMGL(n0))));
                                    x10_long b__14552 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14548);
                                    x10_long b__14553 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14548) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14550) < (b__14552)) ||
                                    ((::x10aux::struct_equals(a__14550,
                                                              b__14552)) &&
                                    ((a__14551) <= (b__14553))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14541)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14547),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14547) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14541)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14548),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14548) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14548) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 201 "SuffixArray.x10"
                                ret__14545 = true;
                                goto __ret__14546_end_;
                            } else {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14545 = false;
                                goto __ret__14546_end_;
                            }
                            
                        }goto __ret__14546_end_; __ret__14546_end_: ;
                        }
                        ret__14545;
                        }))
                        ) {
                        
                        //#line 212 "SuffixArray.x10"
                        t_lb__14537 = t_mid__14541;
                        
                        //#line 213 "SuffixArray.x10"
                        p_ub__14539 = p_mid__14542;
                    } else {
                        
                        //#line 215 "SuffixArray.x10"
                        t_ub__14538 = t_mid__14541;
                        
                        //#line 216 "SuffixArray.x10"
                        p_lb__14540 = p_mid__14542;
                    }
                    
                
                //#line 218 "SuffixArray.x10"
                t_mid__14541 = ((((t_lb__14537) + (t_ub__14538))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 219 "SuffixArray.x10"
                p_mid__14542 = ((((p_lb__14540) + (p_ub__14539))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 221 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14554 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15991 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15991->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14537);
                                                                                                t__15991->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14540);
                                                                                                t__15991;
                                                                                            }))
                                                                                            );
            lb__14554;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll;
        x10aux::captured_struct_lval<x10_long> t_lb;
        ::x10::lang::Rail< x10_long >* lbl;
        x10aux::captured_struct_lval<x10_long> p_lb;
        ::bwt::SuffixArray* saved_this;
        
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
            bwt_SuffixArray__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__5>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__5* this_ = new (storage) bwt_SuffixArray__closure__5(that_lbll, that_t_lb, that_lbl, that_p_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__5(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lbl, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArray* saved_this) : lbll(lbll), t_lb(t_lb), lbl(lbl), p_lb(p_lb), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:237";
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
        lbrr = (__extension__ ({
            x10_long t_lb__14573 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__14574 = t_ub;
            x10_long p_ub__14575 = p_ub;
            x10_long p_lb__14576 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 208 "SuffixArray.x10"
            x10_long t_mid__14577 = ((((t_lb__14573) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 209 "SuffixArray.x10"
            x10_long p_mid__14578 = ((((p_lb__14576) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            while ((((((t_ub__14574) - (t_lb__14573))) > (((x10_long)1ll))) ||
                   ((((p_ub__14575) - (p_lb__14576))) > (((x10_long)1ll)))))
            {
                
                //#line 211 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 195 "SuffixArray.x10"
                        x10_boolean ret__14581;
                        goto __ret__14582; __ret__14582: {
                        {
                            
                            //#line 196 "SuffixArray.x10"
                            x10_long i__14583 = saved_this->getI(
                                                  t_mid__14577);
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long j__14584 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14578);
                            
                            //#line 198 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14577)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14586 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14583);
                                    x10_long a__14587 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14577)) + (saved_this->FMGL(n0))));
                                    x10_long b__14588 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14584);
                                    x10_long b__14589 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14584) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14586) < (b__14588)) ||
                                    ((::x10aux::struct_equals(a__14586,
                                                              b__14588)) &&
                                    ((a__14587) <= (b__14589))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14577)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14583),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14583) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14577)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14584),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14584) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14584) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 201 "SuffixArray.x10"
                                ret__14581 = true;
                                goto __ret__14582_end_;
                            } else {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14581 = false;
                                goto __ret__14582_end_;
                            }
                            
                        }goto __ret__14582_end_; __ret__14582_end_: ;
                        }
                        ret__14581;
                        }))
                        ) {
                        
                        //#line 212 "SuffixArray.x10"
                        t_lb__14573 = t_mid__14577;
                        
                        //#line 213 "SuffixArray.x10"
                        p_ub__14575 = p_mid__14578;
                    } else {
                        
                        //#line 215 "SuffixArray.x10"
                        t_ub__14574 = t_mid__14577;
                        
                        //#line 216 "SuffixArray.x10"
                        p_lb__14576 = p_mid__14578;
                    }
                    
                
                //#line 218 "SuffixArray.x10"
                t_mid__14577 = ((((t_lb__14573) + (t_ub__14574))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 219 "SuffixArray.x10"
                p_mid__14578 = ((((p_lb__14576) + (p_ub__14575))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 221 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14590 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15997 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15997->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14573);
                                                                                                t__15997->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14576);
                                                                                                t__15997;
                                                                                            }))
                                                                                            );
            lb__14590;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr;
        ::x10::lang::Rail< x10_long >* lbr;
        x10aux::captured_struct_lval<x10_long> t_ub;
        x10aux::captured_struct_lval<x10_long> p_ub;
        ::bwt::SuffixArray* saved_this;
        
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
            bwt_SuffixArray__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__6>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbr = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_t_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            x10aux::captured_struct_lval<x10_long> that_p_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__6* this_ = new (storage) bwt_SuffixArray__closure__6(that_lbrr, that_lbr, that_t_ub, that_p_ub, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__6(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr, ::x10::lang::Rail< x10_long >* lbr, x10aux::captured_struct_lval<x10_long> t_ub, x10aux::captured_struct_lval<x10_long> p_ub, ::bwt::SuffixArray* saved_this) : lbrr(lbrr), lbr(lbr), t_ub(t_ub), p_ub(p_ub), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:238";
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
        lblr = (__extension__ ({
            x10_long t_lb__14609 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__14610 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14611 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14612 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 208 "SuffixArray.x10"
            x10_long t_mid__14613 = ((((t_lb__14609) + (t_ub__14610))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 209 "SuffixArray.x10"
            x10_long p_mid__14614 = ((((p_lb__14612) + (p_ub__14611))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            while ((((((t_ub__14610) - (t_lb__14609))) > (((x10_long)1ll))) ||
                   ((((p_ub__14611) - (p_lb__14612))) > (((x10_long)1ll)))))
            {
                
                //#line 211 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 195 "SuffixArray.x10"
                        x10_boolean ret__14617;
                        goto __ret__14618; __ret__14618: {
                        {
                            
                            //#line 196 "SuffixArray.x10"
                            x10_long i__14619 = saved_this->getI(
                                                  t_mid__14613);
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long j__14620 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14614);
                            
                            //#line 198 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14613)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14622 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14619);
                                    x10_long a__14623 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14613)) + (saved_this->FMGL(n0))));
                                    x10_long b__14624 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14620);
                                    x10_long b__14625 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14620) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14622) < (b__14624)) ||
                                    ((::x10aux::struct_equals(a__14622,
                                                              b__14624)) &&
                                    ((a__14623) <= (b__14625))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14613)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14619),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14619) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14613)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14620),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14620) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14620) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 201 "SuffixArray.x10"
                                ret__14617 = true;
                                goto __ret__14618_end_;
                            } else {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14617 = false;
                                goto __ret__14618_end_;
                            }
                            
                        }goto __ret__14618_end_; __ret__14618_end_: ;
                        }
                        ret__14617;
                        }))
                        ) {
                        
                        //#line 212 "SuffixArray.x10"
                        t_lb__14609 = t_mid__14613;
                        
                        //#line 213 "SuffixArray.x10"
                        p_ub__14611 = p_mid__14614;
                    } else {
                        
                        //#line 215 "SuffixArray.x10"
                        t_ub__14610 = t_mid__14613;
                        
                        //#line 216 "SuffixArray.x10"
                        p_lb__14612 = p_mid__14614;
                    }
                    
                
                //#line 218 "SuffixArray.x10"
                t_mid__14613 = ((((t_lb__14609) + (t_ub__14610))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 219 "SuffixArray.x10"
                p_mid__14614 = ((((p_lb__14612) + (p_ub__14611))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 221 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14626 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__16003 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__16003->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14609);
                                                                                                t__16003->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14612);
                                                                                                t__16003;
                                                                                            }))
                                                                                            );
            lb__14626;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr;
        ::x10::lang::Rail< x10_long >* lbl;
        ::x10::lang::Rail< x10_long >* lb;
        ::bwt::SuffixArray* saved_this;
        
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
            bwt_SuffixArray__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__7>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__7* this_ = new (storage) bwt_SuffixArray__closure__7(that_lblr, that_lbl, that_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__7(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr, ::x10::lang::Rail< x10_long >* lbl, ::x10::lang::Rail< x10_long >* lb, ::bwt::SuffixArray* saved_this) : lblr(lblr), lbl(lbl), lb(lb), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:239";
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
        
        //#line 258 "SuffixArray.x10"
        x10_long k__14738 = krail->x10::lang::Rail< x10_long >::__apply(l__14749);
        
        //#line 259 "SuffixArray.x10"
        x10_long t__14739 = trail->x10::lang::Rail< x10_long >::__apply(l__14749);
        
        //#line 260 "SuffixArray.x10"
        x10_long p__14740 = prail->x10::lang::Rail< x10_long >::__apply(l__14749);
        
        //#line 261 "SuffixArray.x10"
        while (((k__14738) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__14749)))) {
            
            //#line 262 "SuffixArray.x10"
            k__14738 = ((k__14738) + (((x10_long)1ll)));
            
            //#line 263 "SuffixArray.x10"
            x10_long i__14741 = saved_this->getI(t__14739);
            
            //#line 264 "SuffixArray.x10"
            x10_long j__14742 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__14740);
            
            //#line 266 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__14739)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__14744 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i__14741);
                    x10_long a__14745 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__14739)) + (saved_this->FMGL(n0))));
                    x10_long b__14746 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j__14742);
                    x10_long b__14747 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__14742) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__14744) < (b__14746)) || ((::x10aux::struct_equals(a__14744,
                                                                            b__14746)) &&
                    ((a__14745) <= (b__14747))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__14739)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__14741), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((i__14741) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__14739)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__14742), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((j__14742) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__14742) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 269 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__14749,
                                                 ((x10_long)0ll))) &&
                    ((k__14738) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__14749)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 270 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__14738, i__14741);
                }
                
                //#line 272 "SuffixArray.x10"
                t__14739 = ((t__14739) + (((x10_long)1ll)));
                
                //#line 273 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__14739, saved_this->FMGL(n02))))
                {
                    
                    //#line 274 "SuffixArray.x10"
                    k__14738 = ((k__14738) + (((x10_long)1ll)));
                    
                    //#line 275 "SuffixArray.x10"
                    x10_long i__14322max__14732 = ((((saved_this->FMGL(n0)) - (p__14740))) - (((x10_long)1ll)));
                    {
                        x10_long i__14733;
                        for (i__14733 = ((x10_long)0ll); ((i__14733) <= (i__14322max__14732));
                             i__14733 = ((i__14733) + (((x10_long)1ll))))
                        {
                            
                            //#line 276 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__14738, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__14740));
                            
                            //#line 277 "SuffixArray.x10"
                            p__14740 = ((p__14740) + (((x10_long)1ll)));
                            
                            //#line 278 "SuffixArray.x10"
                            k__14738 = ((k__14738) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 282 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__14749,
                                                 ((x10_long)0ll))) &&
                    ((k__14738) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__14749)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 283 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__14738, j__14742);
                }
                
                //#line 285 "SuffixArray.x10"
                p__14740 = ((p__14740) + (((x10_long)1ll)));
                
                //#line 286 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__14740, saved_this->FMGL(n0))))
                {
                    
                    //#line 287 "SuffixArray.x10"
                    k__14738 = ((k__14738) + (((x10_long)1ll)));
                    
                    //#line 288 "SuffixArray.x10"
                    x10_long i__14338max__14735 = ((((saved_this->FMGL(n02)) - (t__14739))) - (((x10_long)1ll)));
                    {
                        x10_long i__14736;
                        for (i__14736 = ((x10_long)0ll); ((i__14736) <= (i__14338max__14735));
                             i__14736 = ((i__14736) + (((x10_long)1ll))))
                        {
                            
                            //#line 289 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__14738, saved_this->getI(
                                          t__14739));
                            
                            //#line 290 "SuffixArray.x10"
                            t__14739 = ((t__14739) + (((x10_long)1ll)));
                            
                            //#line 291 "SuffixArray.x10"
                            k__14738 = ((k__14738) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__14749;
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
        buf.write(this->krail);
        buf.write(this->l__14749);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__8* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__8>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__14749 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__8* this_ = new (storage) bwt_SuffixArray__closure__8(that_krail, that_l__14749, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__8(::x10::lang::Rail< x10_long >* krail, x10_long l__14749, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArray* saved_this) : krail(krail), l__14749(l__14749), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:257-296";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__8_CLOSURE

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
    ::bwt::SuffixArray* this__14691 = this;
    ::x10aux::nullCheck(this__14691)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14691)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14691)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14691)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14691)->FMGL(name) = ((x10_long)0ll);
    
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
    x10_long i__14146max__14699 = this->FMGL(k);
    {
        x10_long i__14700;
        for (i__14700 = ((x10_long)0ll); ((i__14700) <= (i__14146max__14699));
             i__14700 = ((i__14700) + (((x10_long)1ll))))
        {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14700, ((x10_long)0ll));
        }
    }
    
    //#line 51 "SuffixArray.x10"
    x10_long i__14162max__14702 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__14703;
        for (i__14703 = ((x10_long)0ll); ((i__14703) <= (i__14162max__14702));
             i__14703 = ((i__14703) + (((x10_long)1ll))))
        {
            
            //#line 52 "SuffixArray.x10"
            x10_long i__14693 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__14703)) + (((x10_long)(rOffs)))));
            x10_long r__14694 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__14693)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14693, r__14694);
        }
    }
    
    //#line 54 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 55 "SuffixArray.x10"
    x10_long i__14178max__14705 = this->FMGL(k);
    {
        x10_long i__14706;
        for (i__14706 = ((x10_long)0ll); ((i__14706) <= (i__14178max__14705));
             i__14706 = ((i__14706) + (((x10_long)1ll))))
        {
            
            //#line 56 "SuffixArray.x10"
            x10_long t__14695 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__14706);
            
            //#line 57 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14706, sum);
            
            //#line 58 "SuffixArray.x10"
            sum = ((sum) + (t__14695));
        }
    }
    
    //#line 60 "SuffixArray.x10"
    x10_long i__14194max__14708 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__14709;
        for (i__14709 = ((x10_long)0ll); ((i__14709) <= (i__14194max__14708));
             i__14709 = ((i__14709) + (((x10_long)1ll))))
        {
            
            //#line 61 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__14709)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__14709));
            
            //#line 62 "SuffixArray.x10"
            x10_long i__14697 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__14709)) + (((x10_long)(rOffs)))));
            x10_long r__14698 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__14697)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14697, r__14698);
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
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 78 "SuffixArray.x10"
    x10_long i__14210max__14711 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__14712;
        for (i__14712 = ((x10_long)0ll); ((i__14712) <= (i__14210max__14711));
             i__14712 = ((i__14712) + (((x10_long)1ll))))
        {
            
            //#line 79 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__14712), ((x10_long)0ll))))
            {
                
                //#line 80 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__14712)) - (((x10_long)1ll))))));
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
        ::x10::xrx::FinishState* fs__14760 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__14226max__14714 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__14715;
                    for (i__14715 = ((x10_long)0ll); ((i__14715) <= (i__14226max__14714));
                         i__14715 = ((i__14715) + (((x10_long)1ll))))
                    {
                        
                        //#line 98 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__14715) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 99 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__14715);
                            
                            //#line 100 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            {
                ::x10::lang::CheckedThrowable* ct__14758 =
                  __exc11;
                {
                    ::x10::xrx::Runtime::pushException(ct__14758);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__14760);
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
    x10_long i__14242max__14717 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__14718;
        for (i__14718 = ((x10_long)0ll); ((i__14718) <= (i__14242max__14717));
             i__14718 = ((i__14718) + (((x10_long)1ll))))
        {
            
            //#line 135 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__14718)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__14718)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__14718)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 136 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 137 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__14718));
                
                //#line 138 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__14718)) + (((x10_long)1ll))));
                
                //#line 139 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__14718)) + (((x10_long)2ll))));
            }
            
            //#line 142 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__14718)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 143 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__14718)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 145 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__14718)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                this->FMGL(name),
                                                this->FMGL(SA12),
                                                this->FMGL(num_threads));
        
        //#line 155 "SuffixArray.x10"
        bwa->run();
        {
            
            //#line 157 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14765 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 158 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 160 "SuffixArray.x10"
                    x10_long i__14274max__14723 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14724;
                        for (i__14724 = ((x10_long)0ll); ((i__14724) <= (i__14274max__14723));
                             i__14724 = ((i__14724) + (((x10_long)1ll))))
                        {
                            
                            //#line 161 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__14724)) < (this->FMGL(n0))))
                            {
                                
                                //#line 162 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__14724))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc14) {
                {
                    ::x10::lang::CheckedThrowable* ct__14763 =
                      __exc14;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__14763);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__14765);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__14290max__14729 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__14730;
            for (i__14730 = ((x10_long)0ll); ((i__14730) <= (i__14290max__14729));
                 i__14730 = ((i__14730) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__14730)) - (((x10_long)1ll))), i__14730);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14769 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long i__14306max__14726 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14727;
                        for (i__14727 = ((x10_long)0ll); ((i__14727) <= (i__14306max__14726));
                             i__14727 = ((i__14727) + (((x10_long)1ll))))
                        {
                            
                            //#line 176 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__14727)) < (this->FMGL(n0))))
                            {
                                
                                //#line 178 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__14727))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc15) {
                {
                    ::x10::lang::CheckedThrowable* ct__14767 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__14767);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__14769);
        }
    }
    
    //#line 188 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__16096)));
    
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
        
        //#line 225 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__14429 = t_lb;
            x10_long t_ub__14430 = t_ub;
            x10_long p_ub__14431 = p_ub;
            x10_long p_lb__14432 = p_lb;
            
            //#line 208 "SuffixArray.x10"
            x10_long t_mid__14433 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 209 "SuffixArray.x10"
            x10_long p_mid__14434 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            while ((((((t_ub__14430) - (t_lb__14429))) > (((x10_long)1ll))) ||
                   ((((p_ub__14431) - (p_lb__14432))) > (((x10_long)1ll)))))
            {
                
                //#line 211 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 195 "SuffixArray.x10"
                        x10_boolean ret__14437;
                        goto __ret__14438; __ret__14438: {
                        {
                            
                            //#line 196 "SuffixArray.x10"
                            x10_long i__14439 = this->getI(
                                                  t_mid__14433);
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long j__14440 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14434);
                            
                            //#line 198 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14433)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14442 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14439);
                                    x10_long a__14443 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14433)) + (this->FMGL(n0))));
                                    x10_long b__14444 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14440);
                                    x10_long b__14445 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14440) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14442) < (b__14444)) ||
                                    ((::x10aux::struct_equals(a__14442,
                                                              b__14444)) &&
                                    ((a__14443) <= (b__14445))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14433)) >= (this->FMGL(n0))) &&
                                this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            i__14439), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((i__14439) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14433)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            j__14440), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j__14440) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__14440) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 201 "SuffixArray.x10"
                                ret__14437 = true;
                                goto __ret__14438_end_;
                            } else {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14437 = false;
                                goto __ret__14438_end_;
                            }
                            
                        }goto __ret__14438_end_; __ret__14438_end_: ;
                        }
                        ret__14437;
                        }))
                        ) {
                        
                        //#line 212 "SuffixArray.x10"
                        t_lb__14429 = t_mid__14433;
                        
                        //#line 213 "SuffixArray.x10"
                        p_ub__14431 = p_mid__14434;
                    } else {
                        
                        //#line 215 "SuffixArray.x10"
                        t_ub__14430 = t_mid__14433;
                        
                        //#line 216 "SuffixArray.x10"
                        p_lb__14432 = p_mid__14434;
                    }
                    
                
                //#line 218 "SuffixArray.x10"
                t_mid__14433 = ((((t_lb__14429) + (t_ub__14430))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 219 "SuffixArray.x10"
                p_mid__14434 = ((((p_lb__14432) + (p_ub__14431))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 221 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14446 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15973 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15973->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14429);
                                                                                                t__15973->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14432);
                                                                                                t__15973;
                                                                                            }))
                                                                                            );
            lb__14446;
            }))
            ;
            
        
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
            ::x10::xrx::FinishState* fs__14774 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 233 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(&(lbl), &(t_lb), lb, &(p_lb), this))));
                    
                    //#line 234 "SuffixArray.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__14501 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__14502 = t_ub;
                        x10_long p_ub__14503 = p_ub;
                        x10_long p_lb__14504 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 208 "SuffixArray.x10"
                        x10_long t_mid__14505 = ((((t_lb__14501) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 209 "SuffixArray.x10"
                        x10_long p_mid__14506 = ((((p_lb__14504) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 210 "SuffixArray.x10"
                        while ((((((t_ub__14502) - (t_lb__14501))) > (((x10_long)1ll))) ||
                               ((((p_ub__14503) - (p_lb__14504))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 211 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 195 "SuffixArray.x10"
                                    x10_boolean ret__14509;
                                    goto __ret__14510; __ret__14510: {
                                    {
                                        
                                        //#line 196 "SuffixArray.x10"
                                        x10_long i__14511 =
                                          this->getI(t_mid__14505);
                                        
                                        //#line 197 "SuffixArray.x10"
                                        x10_long j__14512 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__14506);
                                        
                                        //#line 198 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14505)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__14514 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__14511);
                                                x10_long a__14515 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14505)) + (this->FMGL(n0))));
                                                x10_long b__14516 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__14512);
                                                x10_long b__14517 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__14512) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__14514) < (b__14516)) ||
                                                ((::x10aux::struct_equals(a__14514,
                                                                          b__14516)) &&
                                                ((a__14515) <= (b__14517))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__14505)) >= (this->FMGL(n0))) &&
                                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i__14511),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i__14511) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14505)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j__14512),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j__14512) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__14512) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 201 "SuffixArray.x10"
                                            ret__14509 = true;
                                            goto __ret__14510_end_;
                                        } else {
                                            
                                            //#line 203 "SuffixArray.x10"
                                            ret__14509 = false;
                                            goto __ret__14510_end_;
                                        }
                                        
                                    }goto __ret__14510_end_; __ret__14510_end_: ;
                                    }
                                    ret__14509;
                                    }))
                                    ) {
                                    
                                    //#line 212 "SuffixArray.x10"
                                    t_lb__14501 = t_mid__14505;
                                    
                                    //#line 213 "SuffixArray.x10"
                                    p_ub__14503 = p_mid__14506;
                                } else {
                                    
                                    //#line 215 "SuffixArray.x10"
                                    t_ub__14502 = t_mid__14505;
                                    
                                    //#line 216 "SuffixArray.x10"
                                    p_lb__14504 = p_mid__14506;
                                }
                                
                            
                            //#line 218 "SuffixArray.x10"
                            t_mid__14505 = ((((t_lb__14501) + (t_ub__14502))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 219 "SuffixArray.x10"
                            p_mid__14506 = ((((p_lb__14504) + (p_ub__14503))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 221 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__14518 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15985 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15985->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__14501);
                                                                   t__15985->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__14504);
                                                                   t__15985;
                                                               }))
                                                               );
                        lb__14518;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc16) {
                    {
                        ::x10::lang::CheckedThrowable* ct__14772 =
                          __exc16;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__14772);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__14774);
            }
        {
            
            //#line 236 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14781 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 237 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(&(lbll), &(t_lb), lbl, &(p_lb), this))));
                    
                    //#line 238 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__6)))bwt_SuffixArray__closure__6(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                    
                    //#line 239 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__7)))bwt_SuffixArray__closure__7(&(lblr), lbl, lb, this))));
                    
                    //#line 240 "SuffixArray.x10"
                    lbrl = (__extension__ ({
                        x10_long t_lb__14645 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__14646 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__14647 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__14648 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 208 "SuffixArray.x10"
                        x10_long t_mid__14649 = ((((t_lb__14645) + (t_ub__14646))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 209 "SuffixArray.x10"
                        x10_long p_mid__14650 = ((((p_lb__14648) + (p_ub__14647))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 210 "SuffixArray.x10"
                        while ((((((t_ub__14646) - (t_lb__14645))) > (((x10_long)1ll))) ||
                               ((((p_ub__14647) - (p_lb__14648))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 211 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 195 "SuffixArray.x10"
                                    x10_boolean ret__14653;
                                    goto __ret__14654; __ret__14654: {
                                    {
                                        
                                        //#line 196 "SuffixArray.x10"
                                        x10_long i__14655 =
                                          this->getI(t_mid__14649);
                                        
                                        //#line 197 "SuffixArray.x10"
                                        x10_long j__14656 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__14650);
                                        
                                        //#line 198 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14649)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__14658 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__14655);
                                                x10_long a__14659 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14649)) + (this->FMGL(n0))));
                                                x10_long b__14660 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__14656);
                                                x10_long b__14661 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__14656) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__14658) < (b__14660)) ||
                                                ((::x10aux::struct_equals(a__14658,
                                                                          b__14660)) &&
                                                ((a__14659) <= (b__14661))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__14649)) >= (this->FMGL(n0))) &&
                                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i__14655),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i__14655) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14649)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j__14656),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j__14656) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__14656) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 201 "SuffixArray.x10"
                                            ret__14653 = true;
                                            goto __ret__14654_end_;
                                        } else {
                                            
                                            //#line 203 "SuffixArray.x10"
                                            ret__14653 = false;
                                            goto __ret__14654_end_;
                                        }
                                        
                                    }goto __ret__14654_end_; __ret__14654_end_: ;
                                    }
                                    ret__14653;
                                    }))
                                    ) {
                                    
                                    //#line 212 "SuffixArray.x10"
                                    t_lb__14645 = t_mid__14649;
                                    
                                    //#line 213 "SuffixArray.x10"
                                    p_ub__14647 = p_mid__14650;
                                } else {
                                    
                                    //#line 215 "SuffixArray.x10"
                                    t_ub__14646 = t_mid__14649;
                                    
                                    //#line 216 "SuffixArray.x10"
                                    p_lb__14648 = p_mid__14650;
                                }
                                
                            
                            //#line 218 "SuffixArray.x10"
                            t_mid__14649 = ((((t_lb__14645) + (t_ub__14646))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 219 "SuffixArray.x10"
                            p_mid__14650 = ((((p_lb__14648) + (p_ub__14647))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 221 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__14662 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__16009 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__16009->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__14645);
                                                                   t__16009->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__14648);
                                                                   t__16009;
                                                               }))
                                                               );
                        lb__14662;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc17) {
                    {
                        ::x10::lang::CheckedThrowable* ct__14779 =
                          __exc17;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__14779);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__14781);
            }
        
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
                                                                                        ::x10::lang::Rail< x10_long >* t__16015 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)-1ll));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midll) - (((x10_long)1ll))));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midl) - (((x10_long)1ll))));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((midlr) - (((x10_long)1ll))));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((mid) - (((x10_long)1ll))));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midrl) - (((x10_long)1ll))));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midr) - (((x10_long)1ll))));
                                                                                        t__16015->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ((midrr) - (((x10_long)1ll))));
                                                                                        t__16015;
                                                                                    }))
                                                                                    );
        
        //#line 253 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16033 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midlr) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((mid) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((midrl) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midr) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midrr) + (((x10_long)1ll))));
                                                                                        t__16033->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          this->FMGL(n));
                                                                                        t__16033;
                                                                                    }))
                                                                                    );
        
        //#line 254 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16051 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)0ll));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__16051;
                                                                                    }))
                                                                                    );
        
        //#line 255 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__16069 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__16069;
                                                                                    }))
                                                                                    );
        {
            
            //#line 257 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14786 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long i__14748;
                        for (i__14748 = ((x10_long)0ll); ((i__14748) <= (((x10_long)7ll)));
                             i__14748 = ((i__14748) + (((x10_long)1ll))))
                        {
                            x10_long l__14749 = i__14748;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__8)))bwt_SuffixArray__closure__8(krail, l__14749, trail, prail, nrail, this))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc18) {
                {
                    ::x10::lang::CheckedThrowable* ct__14784 =
                      __exc18;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__14784);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__14786);
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
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__14679 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              i);
                        x10_long a__14680 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__14681 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              j);
                        x10_long b__14682 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__14679) < (b__14681)) || ((::x10aux::struct_equals(a__14679,
                                                                                b__14681)) &&
                        ((a__14680) <= (b__14682))));
                    }))
                    ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                              t)) >= (this->FMGL(n0))) &&
                    this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
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
                        x10_long i__14370max__14750 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__14751;
                            for (i__14751 = ((x10_long)0ll);
                                 ((i__14751) <= (i__14370max__14750));
                                 i__14751 = ((i__14751) + (((x10_long)1ll))))
                            {
                                
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
                        x10_long i__14386max__14753 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__14754;
                            for (i__14754 = ((x10_long)0ll);
                                 ((i__14754) <= (i__14386max__14753));
                                 i__14754 = ((i__14754) + (((x10_long)1ll))))
                            {
                                
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
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
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
    
    ::x10::lang::String bwt::SuffixArray_Strings::sl__16096("Start Merge");

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

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__4>bwt_SuffixArray__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__4::__apply, &bwt_SuffixArray__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__4::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__4::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__4::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__5>bwt_SuffixArray__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__5::__apply, &bwt_SuffixArray__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__5::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__5::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__5::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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

/* END of SuffixArray */
/*************************************************/
