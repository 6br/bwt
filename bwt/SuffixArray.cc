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
        x10_long i__12336max__12896 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__12897;
            for (i__12897 = ((x10_long)0ll); ((i__12897) <= (i__12336max__12896));
                 i__12897 = ((i__12897) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__12897), ((i__12897) + (((x10_long)1ll))));
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
        lbll = (__extension__ ({
            x10_long t_lb__12696 = t_lb;
            x10_long t_ub__12697 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__12698 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__12699 = p_lb;
            
            //#line 209 "SuffixArray.x10"
            x10_long t_mid__12700 = ((((t_lb) + (t_ub__12697))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            x10_long p_mid__12701 = ((((p_lb) + (p_ub__12698))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            while ((((((t_ub__12697) - (t_lb__12696))) > (((x10_long)1ll))) ||
                   ((((p_ub__12698) - (p_lb__12699))) > (((x10_long)1ll)))))
            {
                
                //#line 212 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 196 "SuffixArray.x10"
                        x10_boolean ret__12704;
                        goto __ret__12705; __ret__12705: {
                        {
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long i__12706 = saved_this->getI(
                                                  t_mid__12700);
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long j__12707 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__12701);
                            
                            //#line 199 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__12700)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__12709 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__12706);
                                    x10_long a__12710 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12700)) + (saved_this->FMGL(n0))));
                                    x10_long b__12711 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__12707);
                                    x10_long b__12712 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__12707) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__12709) < (b__12711)) ||
                                    ((::x10aux::struct_equals(a__12709,
                                                              b__12711)) &&
                                    ((a__12710) <= (b__12712))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__12700)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__12706),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__12706) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__12700)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__12707),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__12707) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__12707) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 202 "SuffixArray.x10"
                                ret__12704 = true;
                                goto __ret__12705_end_;
                            } else {
                                
                                //#line 204 "SuffixArray.x10"
                                ret__12704 = false;
                                goto __ret__12705_end_;
                            }
                            
                        }goto __ret__12705_end_; __ret__12705_end_: ;
                        }
                        ret__12704;
                        }))
                        ) {
                        
                        //#line 213 "SuffixArray.x10"
                        t_lb__12696 = t_mid__12700;
                        
                        //#line 214 "SuffixArray.x10"
                        p_ub__12698 = p_mid__12701;
                    } else {
                        
                        //#line 216 "SuffixArray.x10"
                        t_ub__12697 = t_mid__12700;
                        
                        //#line 217 "SuffixArray.x10"
                        p_lb__12699 = p_mid__12701;
                    }
                    
                
                //#line 219 "SuffixArray.x10"
                t_mid__12700 = ((((t_lb__12696) + (t_ub__12697))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 220 "SuffixArray.x10"
                p_mid__12701 = ((((p_lb__12699) + (p_ub__12698))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 222 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__12713 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__14805 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__14805->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__12696);
                                                                                                t__14805->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__12699);
                                                                                                t__14805;
                                                                                            }))
                                                                                            );
            lb__12713;
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
            bwt_SuffixArray__closure__3* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__3>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lbl = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__3* this_ = new (storage) bwt_SuffixArray__closure__3(that_lbll, that_t_lb, that_lbl, that_p_lb, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__3(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lbl, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArray* saved_this) : lbll(lbll), t_lb(t_lb), lbl(lbl), p_lb(p_lb), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:236";
        }
    
    };
    
    #endif // BWT_SUFFIXARRAY__CLOSURE__3_CLOSURE
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
        lbl = (__extension__ ({
            x10_long t_lb__12660 = t_lb;
            x10_long t_ub__12661 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__12662 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__12663 = p_lb;
            
            //#line 209 "SuffixArray.x10"
            x10_long t_mid__12664 = ((((t_lb) + (t_ub__12661))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            x10_long p_mid__12665 = ((((p_lb) + (p_ub__12662))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            while ((((((t_ub__12661) - (t_lb__12660))) > (((x10_long)1ll))) ||
                   ((((p_ub__12662) - (p_lb__12663))) > (((x10_long)1ll)))))
            {
                
                //#line 212 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 196 "SuffixArray.x10"
                        x10_boolean ret__12668;
                        goto __ret__12669; __ret__12669: {
                        {
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long i__12670 = saved_this->getI(
                                                  t_mid__12664);
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long j__12671 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__12665);
                            
                            //#line 199 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__12664)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__12673 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__12670);
                                    x10_long a__12674 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12664)) + (saved_this->FMGL(n0))));
                                    x10_long b__12675 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__12671);
                                    x10_long b__12676 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__12671) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__12673) < (b__12675)) ||
                                    ((::x10aux::struct_equals(a__12673,
                                                              b__12675)) &&
                                    ((a__12674) <= (b__12676))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__12664)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__12670),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__12670) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__12664)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__12671),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__12671) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__12671) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 202 "SuffixArray.x10"
                                ret__12668 = true;
                                goto __ret__12669_end_;
                            } else {
                                
                                //#line 204 "SuffixArray.x10"
                                ret__12668 = false;
                                goto __ret__12669_end_;
                            }
                            
                        }goto __ret__12669_end_; __ret__12669_end_: ;
                        }
                        ret__12668;
                        }))
                        ) {
                        
                        //#line 213 "SuffixArray.x10"
                        t_lb__12660 = t_mid__12664;
                        
                        //#line 214 "SuffixArray.x10"
                        p_ub__12662 = p_mid__12665;
                    } else {
                        
                        //#line 216 "SuffixArray.x10"
                        t_ub__12661 = t_mid__12664;
                        
                        //#line 217 "SuffixArray.x10"
                        p_lb__12663 = p_mid__12665;
                    }
                    
                
                //#line 219 "SuffixArray.x10"
                t_mid__12664 = ((((t_lb__12660) + (t_ub__12661))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 220 "SuffixArray.x10"
                p_mid__12665 = ((((p_lb__12663) + (p_ub__12662))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 222 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__12677 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__14799 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__14799->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__12660);
                                                                                                t__14799->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__12663);
                                                                                                t__14799;
                                                                                            }))
                                                                                            );
            lb__12677;
            }))
            ;
        {
            
            //#line 235 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__12948 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 236 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(&(lbll), &(t_lb), lbl, &(p_lb), saved_this))));
                    
                    //#line 237 "SuffixArray.x10"
                    lblr = (__extension__ ({
                        x10_long t_lb__12732 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__12733 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__12734 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__12735 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 209 "SuffixArray.x10"
                        x10_long t_mid__12736 = ((((t_lb__12732) + (t_ub__12733))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 210 "SuffixArray.x10"
                        x10_long p_mid__12737 = ((((p_lb__12735) + (p_ub__12734))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 211 "SuffixArray.x10"
                        while ((((((t_ub__12733) - (t_lb__12732))) > (((x10_long)1ll))) ||
                               ((((p_ub__12734) - (p_lb__12735))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 212 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 196 "SuffixArray.x10"
                                    x10_boolean ret__12740;
                                    goto __ret__12741; __ret__12741: {
                                    {
                                        
                                        //#line 197 "SuffixArray.x10"
                                        x10_long i__12742 =
                                          saved_this->getI(
                                            t_mid__12736);
                                        
                                        //#line 198 "SuffixArray.x10"
                                        x10_long j__12743 =
                                          ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__12737);
                                        
                                        //#line 199 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__12736)) < (saved_this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__12745 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__12742);
                                                x10_long a__12746 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__12736)) + (saved_this->FMGL(n0))));
                                                x10_long b__12747 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__12743);
                                                x10_long b__12748 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__12743) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__12745) < (b__12747)) ||
                                                ((::x10aux::struct_equals(a__12745,
                                                                          b__12747)) &&
                                                ((a__12746) <= (b__12748))));
                                            }))
                                            ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__12736)) >= (saved_this->FMGL(n0))) &&
                                            saved_this->leq(
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                i__12742),
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                ((i__12742) + (((x10_long)1ll)))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__12736)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                j__12743),
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                ((j__12743) + (((x10_long)1ll)))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((j__12743) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 202 "SuffixArray.x10"
                                            ret__12740 = true;
                                            goto __ret__12741_end_;
                                        } else {
                                            
                                            //#line 204 "SuffixArray.x10"
                                            ret__12740 = false;
                                            goto __ret__12741_end_;
                                        }
                                        
                                    }goto __ret__12741_end_; __ret__12741_end_: ;
                                    }
                                    ret__12740;
                                    }))
                                    ) {
                                    
                                    //#line 213 "SuffixArray.x10"
                                    t_lb__12732 = t_mid__12736;
                                    
                                    //#line 214 "SuffixArray.x10"
                                    p_ub__12734 = p_mid__12737;
                                } else {
                                    
                                    //#line 216 "SuffixArray.x10"
                                    t_ub__12733 = t_mid__12736;
                                    
                                    //#line 217 "SuffixArray.x10"
                                    p_lb__12735 = p_mid__12737;
                                }
                                
                            
                            //#line 219 "SuffixArray.x10"
                            t_mid__12736 = ((((t_lb__12732) + (t_ub__12733))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 220 "SuffixArray.x10"
                            p_mid__12737 = ((((p_lb__12735) + (p_ub__12734))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 222 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__12749 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__14811 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__14811->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__12732);
                                                                   t__14811->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__12735);
                                                                   t__14811;
                                                               }))
                                                               );
                        lb__12749;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc16) {
                    {
                        ::x10::lang::CheckedThrowable* ct__12946 =
                          __exc16;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__12946);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__12948);
            }
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl;
        x10aux::captured_struct_lval<x10_long> t_lb;
        ::x10::lang::Rail< x10_long >* lb;
        x10aux::captured_struct_lval<x10_long> p_lb;
        ::bwt::SuffixArray* saved_this;
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
            bwt_SuffixArray__closure__2* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__2>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            bwt_SuffixArray__closure__2* this_ = new (storage) bwt_SuffixArray__closure__2(that_lbl, that_t_lb, that_lb, that_p_lb, that_saved_this, that_lbll, that_lblr);
            return this_;
        }
        
        bwt_SuffixArray__closure__2(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArray* saved_this, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), saved_this(saved_this), lbll(lbll), lblr(lblr) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:234-238";
        }
        
        };
        
        #endif // BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
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
        lbrr = (__extension__ ({
            x10_long t_lb__12804 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__12805 = t_ub;
            x10_long p_ub__12806 = p_ub;
            x10_long p_lb__12807 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 209 "SuffixArray.x10"
            x10_long t_mid__12808 = ((((t_lb__12804) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            x10_long p_mid__12809 = ((((p_lb__12807) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            while ((((((t_ub__12805) - (t_lb__12804))) > (((x10_long)1ll))) ||
                   ((((p_ub__12806) - (p_lb__12807))) > (((x10_long)1ll)))))
            {
                
                //#line 212 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 196 "SuffixArray.x10"
                        x10_boolean ret__12812;
                        goto __ret__12813; __ret__12813: {
                        {
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long i__12814 = saved_this->getI(
                                                  t_mid__12808);
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long j__12815 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__12809);
                            
                            //#line 199 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__12808)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__12817 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__12814);
                                    x10_long a__12818 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12808)) + (saved_this->FMGL(n0))));
                                    x10_long b__12819 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__12815);
                                    x10_long b__12820 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__12815) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__12817) < (b__12819)) ||
                                    ((::x10aux::struct_equals(a__12817,
                                                              b__12819)) &&
                                    ((a__12818) <= (b__12820))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__12808)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__12814),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__12814) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__12808)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__12815),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__12815) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__12815) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 202 "SuffixArray.x10"
                                ret__12812 = true;
                                goto __ret__12813_end_;
                            } else {
                                
                                //#line 204 "SuffixArray.x10"
                                ret__12812 = false;
                                goto __ret__12813_end_;
                            }
                            
                        }goto __ret__12813_end_; __ret__12813_end_: ;
                        }
                        ret__12812;
                        }))
                        ) {
                        
                        //#line 213 "SuffixArray.x10"
                        t_lb__12804 = t_mid__12808;
                        
                        //#line 214 "SuffixArray.x10"
                        p_ub__12806 = p_mid__12809;
                    } else {
                        
                        //#line 216 "SuffixArray.x10"
                        t_ub__12805 = t_mid__12808;
                        
                        //#line 217 "SuffixArray.x10"
                        p_lb__12807 = p_mid__12809;
                    }
                    
                
                //#line 219 "SuffixArray.x10"
                t_mid__12808 = ((((t_lb__12804) + (t_ub__12805))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 220 "SuffixArray.x10"
                p_mid__12809 = ((((p_lb__12807) + (p_ub__12806))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 222 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__12821 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__14823 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__14823->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__12804);
                                                                                                t__14823->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__12807);
                                                                                                t__14823;
                                                                                            }))
                                                                                            );
            lb__12821;
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
            bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbr = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_t_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            x10aux::captured_struct_lval<x10_long> that_p_ub = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_lbrr, that_lbr, that_t_ub, that_p_ub, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__4(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr, ::x10::lang::Rail< x10_long >* lbr, x10aux::captured_struct_lval<x10_long> t_ub, x10aux::captured_struct_lval<x10_long> p_ub, ::bwt::SuffixArray* saved_this) : lbrr(lbrr), lbr(lbr), t_ub(t_ub), p_ub(p_ub), saved_this(saved_this) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:241";
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
        
        //#line 261 "SuffixArray.x10"
        x10_long k__12914 = krail->x10::lang::Rail< x10_long >::__apply(l__12925);
        
        //#line 262 "SuffixArray.x10"
        x10_long t__12915 = trail->x10::lang::Rail< x10_long >::__apply(l__12925);
        
        //#line 263 "SuffixArray.x10"
        x10_long p__12916 = prail->x10::lang::Rail< x10_long >::__apply(l__12925);
        
        //#line 264 "SuffixArray.x10"
        while (((k__12914) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__12925)))) {
            
            //#line 265 "SuffixArray.x10"
            k__12914 = ((k__12914) + (((x10_long)1ll)));
            
            //#line 266 "SuffixArray.x10"
            x10_long i__12917 = saved_this->getI(t__12915);
            
            //#line 267 "SuffixArray.x10"
            x10_long j__12918 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__12916);
            
            //#line 269 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__12915)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__12920 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i__12917);
                    x10_long a__12921 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__12915)) + (saved_this->FMGL(n0))));
                    x10_long b__12922 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j__12918);
                    x10_long b__12923 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__12918) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__12920) < (b__12922)) || ((::x10aux::struct_equals(a__12920,
                                                                            b__12922)) &&
                    ((a__12921) <= (b__12923))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__12915)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__12917), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((i__12917) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__12915)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__12918), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((j__12918) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__12918) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 272 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__12925,
                                                 ((x10_long)0ll))) &&
                    ((k__12914) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__12925)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 273 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__12914, i__12917);
                }
                
                //#line 275 "SuffixArray.x10"
                t__12915 = ((t__12915) + (((x10_long)1ll)));
                
                //#line 276 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__12915, saved_this->FMGL(n02))))
                {
                    
                    //#line 277 "SuffixArray.x10"
                    k__12914 = ((k__12914) + (((x10_long)1ll)));
                    
                    //#line 278 "SuffixArray.x10"
                    x10_long i__12400max__12908 = ((((saved_this->FMGL(n0)) - (p__12916))) - (((x10_long)1ll)));
                    {
                        x10_long i__12909;
                        for (i__12909 = ((x10_long)0ll); ((i__12909) <= (i__12400max__12908));
                             i__12909 = ((i__12909) + (((x10_long)1ll))))
                        {
                            
                            //#line 279 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__12914, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__12916));
                            
                            //#line 280 "SuffixArray.x10"
                            p__12916 = ((p__12916) + (((x10_long)1ll)));
                            
                            //#line 281 "SuffixArray.x10"
                            k__12914 = ((k__12914) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 285 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__12925,
                                                 ((x10_long)0ll))) &&
                    ((k__12914) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__12925)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 286 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__12914, j__12918);
                }
                
                //#line 288 "SuffixArray.x10"
                p__12916 = ((p__12916) + (((x10_long)1ll)));
                
                //#line 289 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__12916, saved_this->FMGL(n0))))
                {
                    
                    //#line 290 "SuffixArray.x10"
                    k__12914 = ((k__12914) + (((x10_long)1ll)));
                    
                    //#line 291 "SuffixArray.x10"
                    x10_long i__12416max__12911 = ((((saved_this->FMGL(n02)) - (t__12915))) - (((x10_long)1ll)));
                    {
                        x10_long i__12912;
                        for (i__12912 = ((x10_long)0ll); ((i__12912) <= (i__12416max__12911));
                             i__12912 = ((i__12912) + (((x10_long)1ll))))
                        {
                            
                            //#line 292 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__12914, saved_this->getI(
                                          t__12915));
                            
                            //#line 293 "SuffixArray.x10"
                            t__12915 = ((t__12915) + (((x10_long)1ll)));
                            
                            //#line 294 "SuffixArray.x10"
                            k__12914 = ((k__12914) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__12925;
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
        buf.write(this->l__12925);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__5>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__12925 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__5* this_ = new (storage) bwt_SuffixArray__closure__5(that_krail, that_l__12925, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__5(::x10::lang::Rail< x10_long >* krail, x10_long l__12925, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArray* saved_this) : krail(krail), l__12925(l__12925), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:260-299";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__5_CLOSURE

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
    ::bwt::SuffixArray* this__12886 = this;
    ::x10aux::nullCheck(this__12886)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12886)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12886)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12886)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12886)->FMGL(name) = ((x10_long)0ll);
    
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
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 82 "SuffixArray.x10"
    x10_long i__12288max__12887 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__12888;
        for (i__12888 = ((x10_long)0ll); ((i__12888) <= (i__12288max__12887));
             i__12888 = ((i__12888) + (((x10_long)1ll))))
        {
            
            //#line 83 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__12888), ((x10_long)0ll))))
            {
                
                //#line 84 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__12888)) - (((x10_long)1ll))))));
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
        ::x10::xrx::FinishState* fs__12934 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__12304max__12890 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__12891;
                    for (i__12891 = ((x10_long)0ll); ((i__12891) <= (i__12304max__12890));
                         i__12891 = ((i__12891) + (((x10_long)1ll))))
                    {
                        
                        //#line 100 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__12891) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 101 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__12891);
                            
                            //#line 102 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            {
                ::x10::lang::CheckedThrowable* ct__12932 =
                  __exc11;
                {
                    ::x10::xrx::Runtime::pushException(ct__12932);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__12934);
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
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__14916),
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
    x10_long i__12320max__12893 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__12894;
        for (i__12894 = ((x10_long)0ll); ((i__12894) <= (i__12320max__12893));
             i__12894 = ((i__12894) + (((x10_long)1ll))))
        {
            
            //#line 132 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__12894)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__12894)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__12894)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 133 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 134 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__12894));
                
                //#line 135 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__12894)) + (((x10_long)1ll))));
                
                //#line 136 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__12894)) + (((x10_long)2ll))));
            }
            
            //#line 139 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__12894)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 140 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__12894)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 142 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__12894)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
        ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__14917),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(name)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
        
        //#line 152 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
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
            ::x10::xrx::FinishState* fs__12939 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 157 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__1)))bwt_SuffixArray__closure__1(this))));
                    
                    //#line 158 "SuffixArray.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 160 "SuffixArray.x10"
                    x10_long i__12352max__12899 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__12900;
                        for (i__12900 = ((x10_long)0ll); ((i__12900) <= (i__12352max__12899));
                             i__12900 = ((i__12900) + (((x10_long)1ll))))
                        {
                            
                            //#line 161 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__12900)) < (this->FMGL(n0))))
                            {
                                
                                //#line 162 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__12900))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__12937 =
                      __exc14;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__12937);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__12939);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__12368max__12905 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__12906;
            for (i__12906 = ((x10_long)0ll); ((i__12906) <= (i__12368max__12905));
                 i__12906 = ((i__12906) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__12906)) - (((x10_long)1ll))), i__12906);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__12943 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 176 "SuffixArray.x10"
                    x10_long i__12384max__12902 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__12903;
                        for (i__12903 = ((x10_long)0ll); ((i__12903) <= (i__12384max__12902));
                             i__12903 = ((i__12903) + (((x10_long)1ll))))
                        {
                            
                            //#line 177 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__12903)) < (this->FMGL(n0))))
                            {
                                
                                //#line 179 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__12903))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc15) {
                {
                    ::x10::lang::CheckedThrowable* ct__12941 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__12941);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__12943);
        }
    }
    
    //#line 189 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__14918)));
    
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
        
        //#line 226 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__12624 = t_lb;
            x10_long t_ub__12625 = t_ub;
            x10_long p_ub__12626 = p_ub;
            x10_long p_lb__12627 = p_lb;
            
            //#line 209 "SuffixArray.x10"
            x10_long t_mid__12628 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 210 "SuffixArray.x10"
            x10_long p_mid__12629 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            while ((((((t_ub__12625) - (t_lb__12624))) > (((x10_long)1ll))) ||
                   ((((p_ub__12626) - (p_lb__12627))) > (((x10_long)1ll)))))
            {
                
                //#line 212 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 196 "SuffixArray.x10"
                        x10_boolean ret__12632;
                        goto __ret__12633; __ret__12633: {
                        {
                            
                            //#line 197 "SuffixArray.x10"
                            x10_long i__12634 = this->getI(
                                                  t_mid__12628);
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long j__12635 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__12629);
                            
                            //#line 199 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__12628)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__12637 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__12634);
                                    x10_long a__12638 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12628)) + (this->FMGL(n0))));
                                    x10_long b__12639 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__12635);
                                    x10_long b__12640 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__12635) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__12637) < (b__12639)) ||
                                    ((::x10aux::struct_equals(a__12637,
                                                              b__12639)) &&
                                    ((a__12638) <= (b__12640))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__12628)) >= (this->FMGL(n0))) &&
                                this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            i__12634), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((i__12634) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__12628)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            j__12635), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j__12635) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__12635) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 202 "SuffixArray.x10"
                                ret__12632 = true;
                                goto __ret__12633_end_;
                            } else {
                                
                                //#line 204 "SuffixArray.x10"
                                ret__12632 = false;
                                goto __ret__12633_end_;
                            }
                            
                        }goto __ret__12633_end_; __ret__12633_end_: ;
                        }
                        ret__12632;
                        }))
                        ) {
                        
                        //#line 213 "SuffixArray.x10"
                        t_lb__12624 = t_mid__12628;
                        
                        //#line 214 "SuffixArray.x10"
                        p_ub__12626 = p_mid__12629;
                    } else {
                        
                        //#line 216 "SuffixArray.x10"
                        t_ub__12625 = t_mid__12628;
                        
                        //#line 217 "SuffixArray.x10"
                        p_lb__12627 = p_mid__12629;
                    }
                    
                
                //#line 219 "SuffixArray.x10"
                t_mid__12628 = ((((t_lb__12624) + (t_ub__12625))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 220 "SuffixArray.x10"
                p_mid__12629 = ((((p_lb__12627) + (p_ub__12626))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 222 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__12641 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__14793 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__14793->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__12624);
                                                                                                t__14793->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__12627);
                                                                                                t__14793;
                                                                                            }))
                                                                                            );
            lb__12641;
            }))
            ;
            
        
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
            ::x10::xrx::FinishState* fs__12958 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 234 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__2)))bwt_SuffixArray__closure__2(&(lbl), &(t_lb), lb, &(p_lb), this, &(lbll), &(lblr)))));
                    
                    //#line 239 "SuffixArray.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__12768 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__12769 = t_ub;
                        x10_long p_ub__12770 = p_ub;
                        x10_long p_lb__12771 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 209 "SuffixArray.x10"
                        x10_long t_mid__12772 = ((((t_lb__12768) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 210 "SuffixArray.x10"
                        x10_long p_mid__12773 = ((((p_lb__12771) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 211 "SuffixArray.x10"
                        while ((((((t_ub__12769) - (t_lb__12768))) > (((x10_long)1ll))) ||
                               ((((p_ub__12770) - (p_lb__12771))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 212 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 196 "SuffixArray.x10"
                                    x10_boolean ret__12776;
                                    goto __ret__12777; __ret__12777: {
                                    {
                                        
                                        //#line 197 "SuffixArray.x10"
                                        x10_long i__12778 =
                                          this->getI(t_mid__12772);
                                        
                                        //#line 198 "SuffixArray.x10"
                                        x10_long j__12779 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__12773);
                                        
                                        //#line 199 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__12772)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__12781 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__12778);
                                                x10_long a__12782 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__12772)) + (this->FMGL(n0))));
                                                x10_long b__12783 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__12779);
                                                x10_long b__12784 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__12779) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__12781) < (b__12783)) ||
                                                ((::x10aux::struct_equals(a__12781,
                                                                          b__12783)) &&
                                                ((a__12782) <= (b__12784))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__12772)) >= (this->FMGL(n0))) &&
                                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i__12778),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i__12778) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12772)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j__12779),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j__12779) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__12779) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 202 "SuffixArray.x10"
                                            ret__12776 = true;
                                            goto __ret__12777_end_;
                                        } else {
                                            
                                            //#line 204 "SuffixArray.x10"
                                            ret__12776 = false;
                                            goto __ret__12777_end_;
                                        }
                                        
                                    }goto __ret__12777_end_; __ret__12777_end_: ;
                                    }
                                    ret__12776;
                                    }))
                                    ) {
                                    
                                    //#line 213 "SuffixArray.x10"
                                    t_lb__12768 = t_mid__12772;
                                    
                                    //#line 214 "SuffixArray.x10"
                                    p_ub__12770 = p_mid__12773;
                                } else {
                                    
                                    //#line 216 "SuffixArray.x10"
                                    t_ub__12769 = t_mid__12772;
                                    
                                    //#line 217 "SuffixArray.x10"
                                    p_lb__12771 = p_mid__12773;
                                }
                                
                            
                            //#line 219 "SuffixArray.x10"
                            t_mid__12772 = ((((t_lb__12768) + (t_ub__12769))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 220 "SuffixArray.x10"
                            p_mid__12773 = ((((p_lb__12771) + (p_ub__12770))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 222 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__12785 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__14817 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__14817->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__12768);
                                                                   t__14817->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__12771);
                                                                   t__14817;
                                                               }))
                                                               );
                        lb__12785;
                        }))
                        ;
                    {
                        
                        //#line 240 "SuffixArray.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__12954 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 241 "SuffixArray.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                                
                                //#line 242 "SuffixArray.x10"
                                lbrl = (__extension__ ({
                                    x10_long t_lb__12840 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long t_ub__12841 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long p_ub__12842 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    x10_long p_lb__12843 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 209 "SuffixArray.x10"
                                    x10_long t_mid__12844 =
                                      ((((t_lb__12840) + (t_ub__12841))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 210 "SuffixArray.x10"
                                    x10_long p_mid__12845 =
                                      ((((p_lb__12843) + (p_ub__12842))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 211 "SuffixArray.x10"
                                    while ((((((t_ub__12841) - (t_lb__12840))) > (((x10_long)1ll))) ||
                                           ((((p_ub__12842) - (p_lb__12843))) > (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 212 "SuffixArray.x10"
                                        if ((__extension__ ({
                                                
                                                //#line 196 "SuffixArray.x10"
                                                x10_boolean ret__12848;
                                                goto __ret__12849; __ret__12849: {
                                                {
                                                    
                                                    //#line 197 "SuffixArray.x10"
                                                    x10_long i__12850 =
                                                      this->getI(
                                                        t_mid__12844);
                                                    
                                                    //#line 198 "SuffixArray.x10"
                                                    x10_long j__12851 =
                                                      ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                        p_mid__12845);
                                                    
                                                    //#line 199 "SuffixArray.x10"
                                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12844)) < (this->FMGL(n0))) &&
                                                        (__extension__ ({
                                                            x10_long a__12853 =
                                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                i__12850);
                                                            x10_long a__12854 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                    t_mid__12844)) + (this->FMGL(n0))));
                                                            x10_long b__12855 =
                                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                j__12851);
                                                            x10_long b__12856 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((j__12851) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                            (((a__12853) < (b__12855)) ||
                                                            ((::x10aux::struct_equals(a__12853,
                                                                                      b__12855)) &&
                                                            ((a__12854) <= (b__12856))));
                                                        }))
                                                        ) ||
                                                        (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t_mid__12844)) >= (this->FMGL(n0))) &&
                                                        this->leq(
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            i__12850),
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            ((i__12850) + (((x10_long)1ll)))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                  t_mid__12844)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            j__12851),
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            ((j__12851) + (((x10_long)1ll)))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((j__12851) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                                    {
                                                        
                                                        //#line 202 "SuffixArray.x10"
                                                        ret__12848 =
                                                          true;
                                                        goto __ret__12849_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 204 "SuffixArray.x10"
                                                        ret__12848 =
                                                          false;
                                                        goto __ret__12849_end_;
                                                    }
                                                    
                                                }goto __ret__12849_end_; __ret__12849_end_: ;
                                                }
                                                ret__12848;
                                                }))
                                                ) {
                                                
                                                //#line 213 "SuffixArray.x10"
                                                t_lb__12840 =
                                                  t_mid__12844;
                                                
                                                //#line 214 "SuffixArray.x10"
                                                p_ub__12842 =
                                                  p_mid__12845;
                                            } else {
                                                
                                                //#line 216 "SuffixArray.x10"
                                                t_ub__12841 =
                                                  t_mid__12844;
                                                
                                                //#line 217 "SuffixArray.x10"
                                                p_lb__12843 =
                                                  p_mid__12845;
                                            }
                                            
                                        
                                        //#line 219 "SuffixArray.x10"
                                        t_mid__12844 = ((((t_lb__12840) + (t_ub__12841))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        
                                        //#line 220 "SuffixArray.x10"
                                        p_mid__12845 = ((((p_lb__12843) + (p_ub__12842))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        }
                                        
                                    
                                    //#line 222 "SuffixArray.x10"
                                    ::x10::lang::Rail< x10_long >* lb__12857 =
                                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                               ::x10::lang::Rail< x10_long >* t__14829 =
                                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                               t__14829->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)0ll),
                                                                                 t_lb__12840);
                                                                               t__14829->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)1ll),
                                                                                 p_lb__12843);
                                                                               t__14829;
                                                                           }))
                                                                           );
                                    lb__12857;
                                    }))
                                    ;
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc17) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__12952 =
                                      __exc17;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__12952);
                                    }
                                }
                            }
                        ::x10::xrx::Runtime::stopFinish(fs__12954);
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc18) {
                    {
                        ::x10::lang::CheckedThrowable* ct__12956 =
                          __exc18;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__12956);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__12958);
            }
            
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
                                                                                            ::x10::lang::Rail< x10_long >* t__14835 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)-1ll));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midll) - (((x10_long)1ll))));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midl) - (((x10_long)1ll))));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((midlr) - (((x10_long)1ll))));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((mid) - (((x10_long)1ll))));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midrl) - (((x10_long)1ll))));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midr) - (((x10_long)1ll))));
                                                                                            t__14835->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ((midrr) - (((x10_long)1ll))));
                                                                                            t__14835;
                                                                                        }))
                                                                                        );
            
            //#line 256 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__14853 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midlr) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((mid) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((midrl) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midr) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midrr) + (((x10_long)1ll))));
                                                                                            t__14853->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              this->FMGL(n));
                                                                                            t__14853;
                                                                                        }))
                                                                                        );
            
            //#line 257 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__14871 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)0ll));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__14871;
                                                                                        }))
                                                                                        );
            
            //#line 258 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__14889 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__14889;
                                                                                        }))
                                                                                        );
            {
                
                //#line 260 "SuffixArray.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__12963 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long i__12924;
                            for (i__12924 = ((x10_long)0ll);
                                 ((i__12924) <= (((x10_long)7ll)));
                                 i__12924 = ((i__12924) + (((x10_long)1ll))))
                            {
                                x10_long l__12925 = i__12924;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(krail, l__12925, trail, prail, nrail, this))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc19) {
                    {
                        ::x10::lang::CheckedThrowable* ct__12961 =
                          __exc19;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__12961);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__12963);
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
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__12874 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              i);
                        x10_long a__12875 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__12876 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              j);
                        x10_long b__12877 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__12874) < (b__12876)) || ((::x10aux::struct_equals(a__12874,
                                                                                b__12876)) &&
                        ((a__12875) <= (b__12877))));
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
                        x10_long i__12448max__12926 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__12927;
                            for (i__12927 = ((x10_long)0ll);
                                 ((i__12927) <= (i__12448max__12926));
                                 i__12927 = ((i__12927) + (((x10_long)1ll))))
                            {
                                
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
                        x10_long i__12464max__12929 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__12930;
                            for (i__12930 = ((x10_long)0ll);
                                 ((i__12930) <= (i__12464max__12929));
                                 i__12930 = ((i__12930) + (((x10_long)1ll))))
                            {
                                
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
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
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
    
    ::x10::lang::String bwt::SuffixArray_Strings::sl__14918("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__14917("name: %ld, n02: %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__14916("Ended 3rd Radix Sort %ld, max: %ld\n");

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__1>bwt_SuffixArray__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__1::__apply, &bwt_SuffixArray__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__1::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__3>bwt_SuffixArray__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__3::__apply, &bwt_SuffixArray__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__3::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__2>bwt_SuffixArray__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__2::__apply, &bwt_SuffixArray__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__2::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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

/* END of SuffixArray */
/*************************************************/
