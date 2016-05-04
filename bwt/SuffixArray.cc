/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/lang/Byte.h>
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
        return "SuffixArray.x10:88";
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
        return "SuffixArray.x10:89";
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
        x10_long i__14146max__14608 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__14609;
            for (i__14609 = ((x10_long)0ll); ((i__14609) <= (i__14146max__14608));
                 i__14609 = ((i__14609) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__14609), ((i__14609) + (((x10_long)1ll))));
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
        return "SuffixArray.x10:157";
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
            x10_long t_lb__14353 = t_lb;
            x10_long t_ub__14354 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14355 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14356 = p_lb;
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__14357 = ((((t_lb) + (t_ub__14354))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__14358 = ((((p_lb) + (p_ub__14355))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__14354) - (t_lb__14353))) > (((x10_long)1ll))) ||
                   ((((p_ub__14355) - (p_lb__14356))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__14361;
                        goto __ret__14362; __ret__14362: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__14363 = saved_this->getI(
                                                  t_mid__14357);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__14364 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14358);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14357)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14366 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14363);
                                    x10_long a__14367 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14357)) + (saved_this->FMGL(n0))));
                                    x10_long b__14368 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14364);
                                    x10_long b__14369 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14364) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14366) < (b__14368)) ||
                                    ((::x10aux::struct_equals(a__14366,
                                                              b__14368)) &&
                                    ((a__14367) <= (b__14369))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14357)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14363),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14363) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14357)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14364),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14364) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14364) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14361 = true;
                                goto __ret__14362_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__14361 = false;
                                goto __ret__14362_end_;
                            }
                            
                        }goto __ret__14362_end_; __ret__14362_end_: ;
                        }
                        ret__14361;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__14353 = t_mid__14357;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__14355 = p_mid__14358;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__14354 = t_mid__14357;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__14356 = p_mid__14358;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__14357 = ((((t_lb__14353) + (t_ub__14354))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__14358 = ((((p_lb__14356) + (p_ub__14355))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14370 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15866 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15866->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14353);
                                                                                                t__15866->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14356);
                                                                                                t__15866;
                                                                                            }))
                                                                                            );
            lb__14370;
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
            return "SuffixArray.x10:235";
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
            x10_long t_lb__14425 = t_lb;
            x10_long t_ub__14426 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14427 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14428 = p_lb;
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__14429 = ((((t_lb) + (t_ub__14426))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__14430 = ((((p_lb) + (p_ub__14427))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__14426) - (t_lb__14425))) > (((x10_long)1ll))) ||
                   ((((p_ub__14427) - (p_lb__14428))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__14433;
                        goto __ret__14434; __ret__14434: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__14435 = saved_this->getI(
                                                  t_mid__14429);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__14436 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14430);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14429)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14438 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14435);
                                    x10_long a__14439 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14429)) + (saved_this->FMGL(n0))));
                                    x10_long b__14440 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14436);
                                    x10_long b__14441 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14436) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14438) < (b__14440)) ||
                                    ((::x10aux::struct_equals(a__14438,
                                                              b__14440)) &&
                                    ((a__14439) <= (b__14441))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14429)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14435),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14435) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14429)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14436),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14436) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14436) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14433 = true;
                                goto __ret__14434_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__14433 = false;
                                goto __ret__14434_end_;
                            }
                            
                        }goto __ret__14434_end_; __ret__14434_end_: ;
                        }
                        ret__14433;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__14425 = t_mid__14429;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__14427 = p_mid__14430;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__14426 = t_mid__14429;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__14428 = p_mid__14430;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__14429 = ((((t_lb__14425) + (t_ub__14426))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__14430 = ((((p_lb__14428) + (p_ub__14427))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14442 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15878 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15878->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14425);
                                                                                                t__15878->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14428);
                                                                                                t__15878;
                                                                                            }))
                                                                                            );
            lb__14442;
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
            return "SuffixArray.x10:239";
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
            x10_long t_lb__14461 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__14462 = t_ub;
            x10_long p_ub__14463 = p_ub;
            x10_long p_lb__14464 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__14465 = ((((t_lb__14461) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__14466 = ((((p_lb__14464) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__14462) - (t_lb__14461))) > (((x10_long)1ll))) ||
                   ((((p_ub__14463) - (p_lb__14464))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__14469;
                        goto __ret__14470; __ret__14470: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__14471 = saved_this->getI(
                                                  t_mid__14465);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__14472 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14466);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14465)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14474 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14471);
                                    x10_long a__14475 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14465)) + (saved_this->FMGL(n0))));
                                    x10_long b__14476 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14472);
                                    x10_long b__14477 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14472) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14474) < (b__14476)) ||
                                    ((::x10aux::struct_equals(a__14474,
                                                              b__14476)) &&
                                    ((a__14475) <= (b__14477))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14465)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14471),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14471) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14465)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14472),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14472) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14472) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14469 = true;
                                goto __ret__14470_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__14469 = false;
                                goto __ret__14470_end_;
                            }
                            
                        }goto __ret__14470_end_; __ret__14470_end_: ;
                        }
                        ret__14469;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__14461 = t_mid__14465;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__14463 = p_mid__14466;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__14462 = t_mid__14465;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__14464 = p_mid__14466;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__14465 = ((((t_lb__14461) + (t_ub__14462))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__14466 = ((((p_lb__14464) + (p_ub__14463))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14478 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15884 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15884->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14461);
                                                                                                t__15884->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14464);
                                                                                                t__15884;
                                                                                            }))
                                                                                            );
            lb__14478;
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
            return "SuffixArray.x10:240";
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
            x10_long t_lb__14497 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__14498 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__14499 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__14500 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__14501 = ((((t_lb__14497) + (t_ub__14498))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__14502 = ((((p_lb__14500) + (p_ub__14499))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__14498) - (t_lb__14497))) > (((x10_long)1ll))) ||
                   ((((p_ub__14499) - (p_lb__14500))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__14505;
                        goto __ret__14506; __ret__14506: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__14507 = saved_this->getI(
                                                  t_mid__14501);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__14508 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14502);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14501)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14510 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14507);
                                    x10_long a__14511 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14501)) + (saved_this->FMGL(n0))));
                                    x10_long b__14512 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14508);
                                    x10_long b__14513 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14508) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14510) < (b__14512)) ||
                                    ((::x10aux::struct_equals(a__14510,
                                                              b__14512)) &&
                                    ((a__14511) <= (b__14513))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14501)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__14507),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__14507) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14501)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__14508),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__14508) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__14508) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14505 = true;
                                goto __ret__14506_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__14505 = false;
                                goto __ret__14506_end_;
                            }
                            
                        }goto __ret__14506_end_; __ret__14506_end_: ;
                        }
                        ret__14505;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__14497 = t_mid__14501;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__14499 = p_mid__14502;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__14498 = t_mid__14501;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__14500 = p_mid__14502;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__14501 = ((((t_lb__14497) + (t_ub__14498))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__14502 = ((((p_lb__14500) + (p_ub__14499))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14514 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15890 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15890->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14497);
                                                                                                t__15890->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14500);
                                                                                                t__15890;
                                                                                            }))
                                                                                            );
            lb__14514;
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
            return "SuffixArray.x10:241";
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
        
        //#line 260 "SuffixArray.x10"
        x10_long k__14626 = krail->x10::lang::Rail< x10_long >::__apply(l__14637);
        
        //#line 261 "SuffixArray.x10"
        x10_long t__14627 = trail->x10::lang::Rail< x10_long >::__apply(l__14637);
        
        //#line 262 "SuffixArray.x10"
        x10_long p__14628 = prail->x10::lang::Rail< x10_long >::__apply(l__14637);
        
        //#line 263 "SuffixArray.x10"
        while (((k__14626) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__14637)))) {
            
            //#line 264 "SuffixArray.x10"
            k__14626 = ((k__14626) + (((x10_long)1ll)));
            
            //#line 265 "SuffixArray.x10"
            x10_long i__14629 = saved_this->getI(t__14627);
            
            //#line 266 "SuffixArray.x10"
            x10_long j__14630 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__14628);
            
            //#line 268 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__14627)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__14632 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i__14629);
                    x10_long a__14633 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__14627)) + (saved_this->FMGL(n0))));
                    x10_long b__14634 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j__14630);
                    x10_long b__14635 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__14630) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__14632) < (b__14634)) || ((::x10aux::struct_equals(a__14632,
                                                                            b__14634)) &&
                    ((a__14633) <= (b__14635))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__14627)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__14629), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((i__14629) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__14627)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__14630), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((j__14630) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__14630) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 271 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__14637,
                                                 ((x10_long)0ll))) &&
                    ((k__14626) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__14637)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 272 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__14626, i__14629);
                }
                
                //#line 274 "SuffixArray.x10"
                t__14627 = ((t__14627) + (((x10_long)1ll)));
                
                //#line 275 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__14627, saved_this->FMGL(n02))))
                {
                    
                    //#line 276 "SuffixArray.x10"
                    k__14626 = ((k__14626) + (((x10_long)1ll)));
                    
                    //#line 277 "SuffixArray.x10"
                    x10_long i__14210max__14620 = ((((saved_this->FMGL(n0)) - (p__14628))) - (((x10_long)1ll)));
                    {
                        x10_long i__14621;
                        for (i__14621 = ((x10_long)0ll); ((i__14621) <= (i__14210max__14620));
                             i__14621 = ((i__14621) + (((x10_long)1ll))))
                        {
                            
                            //#line 278 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__14626, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__14628));
                            
                            //#line 279 "SuffixArray.x10"
                            p__14628 = ((p__14628) + (((x10_long)1ll)));
                            
                            //#line 280 "SuffixArray.x10"
                            k__14626 = ((k__14626) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 284 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__14637,
                                                 ((x10_long)0ll))) &&
                    ((k__14626) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__14637)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 285 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__14626, j__14630);
                }
                
                //#line 287 "SuffixArray.x10"
                p__14628 = ((p__14628) + (((x10_long)1ll)));
                
                //#line 288 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__14628, saved_this->FMGL(n0))))
                {
                    
                    //#line 289 "SuffixArray.x10"
                    k__14626 = ((k__14626) + (((x10_long)1ll)));
                    
                    //#line 290 "SuffixArray.x10"
                    x10_long i__14226max__14623 = ((((saved_this->FMGL(n02)) - (t__14627))) - (((x10_long)1ll)));
                    {
                        x10_long i__14624;
                        for (i__14624 = ((x10_long)0ll); ((i__14624) <= (i__14226max__14623));
                             i__14624 = ((i__14624) + (((x10_long)1ll))))
                        {
                            
                            //#line 291 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__14626, saved_this->getI(
                                          t__14627));
                            
                            //#line 292 "SuffixArray.x10"
                            t__14627 = ((t__14627) + (((x10_long)1ll)));
                            
                            //#line 293 "SuffixArray.x10"
                            k__14626 = ((k__14626) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__14637;
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
        buf.write(this->l__14637);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__8* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__8>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__14637 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__8* this_ = new (storage) bwt_SuffixArray__closure__8(that_krail, that_l__14637, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__8(::x10::lang::Rail< x10_long >* krail, x10_long l__14637, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArray* saved_this) : krail(krail), l__14637(l__14637), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:259-298";
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

//#line 25 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize, ::x10::lang::Rail< x10_long >* sa) {
    
    //#line 9 "SuffixArray.x10"
    ::bwt::SuffixArray* this__14579 = this;
    ::x10aux::nullCheck(this__14579)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14579)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14579)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14579)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__14579)->FMGL(name) = ((x10_long)0ll);
    
    //#line 26 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 27 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 28 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 29 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 32 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
    
    //#line 33 "SuffixArray.x10"
    this->FMGL(SA) = sa;
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize, ::x10::lang::Rail< x10_long >* sa)
{
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize, sa);
    return this_;
}



//#line 36 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads,
                                 x10_byte offset){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 39 "SuffixArray.x10"
void bwt::SuffixArray::sortPairsThree(::x10::lang::Rail< x10_long >* keys,
                                      ::x10::lang::Rail< x10_long >* values,
                                      x10_ulong num_elems,
                                      x10_int num_threads){
    parallel_radix_sort::SortPairsLongThree((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 42 "SuffixArray.x10"
void bwt::SuffixArray::sortPairsThreeFast(::x10::lang::Rail< x10_long >* keys,
                                          ::x10::lang::Rail< x10_long >* values,
                                          x10_ulong num_elems,
                                          x10_int num_threads){
    parallel_radix_sort::SortPairsLongThreeFast((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 46 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 47 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 48 "SuffixArray.x10"
    x10_long i__14034max__14587 = this->FMGL(k);
    {
        x10_long i__14588;
        for (i__14588 = ((x10_long)0ll); ((i__14588) <= (i__14034max__14587));
             i__14588 = ((i__14588) + (((x10_long)1ll))))
        {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14588, ((x10_long)0ll));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__14050max__14590 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__14591;
        for (i__14591 = ((x10_long)0ll); ((i__14591) <= (i__14050max__14590));
             i__14591 = ((i__14591) + (((x10_long)1ll))))
        {
            
            //#line 50 "SuffixArray.x10"
            x10_long i__14581 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__14591)) + (((x10_long)(rOffs)))));
            x10_long r__14582 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__14581)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14581, r__14582);
        }
    }
    
    //#line 52 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 53 "SuffixArray.x10"
    x10_long i__14066max__14593 = this->FMGL(k);
    {
        x10_long i__14594;
        for (i__14594 = ((x10_long)0ll); ((i__14594) <= (i__14066max__14593));
             i__14594 = ((i__14594) + (((x10_long)1ll))))
        {
            
            //#line 54 "SuffixArray.x10"
            x10_long t__14583 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__14594);
            
            //#line 55 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14594, sum);
            
            //#line 56 "SuffixArray.x10"
            sum = ((sum) + (t__14583));
        }
    }
    
    //#line 58 "SuffixArray.x10"
    x10_long i__14082max__14596 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__14597;
        for (i__14597 = ((x10_long)0ll); ((i__14597) <= (i__14082max__14596));
             i__14597 = ((i__14597) + (((x10_long)1ll))))
        {
            
            //#line 59 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__14597)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__14597));
            
            //#line 60 "SuffixArray.x10"
            x10_long i__14585 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__14597)) + (((x10_long)(rOffs)))));
            x10_long r__14586 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__14585)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__14585, r__14586);
        }
    }
    
}

//#line 64 "SuffixArray.x10"
void bwt::SuffixArray::run() {
    
    //#line 66 "SuffixArray.x10"
    this->constructSample();
    
    //#line 68 "SuffixArray.x10"
    this->sortSample();
    
    //#line 70 "SuffixArray.x10"
    this->sortNonSample();
}

//#line 74 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 75 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 76 "SuffixArray.x10"
    x10_long i__14098max__14599 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__14600;
        for (i__14600 = ((x10_long)0ll); ((i__14600) <= (i__14098max__14599));
             i__14600 = ((i__14600) + (((x10_long)1ll))))
        {
            
            //#line 77 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__14600), ((x10_long)0ll))))
            {
                
                //#line 78 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__14600)) - (((x10_long)1ll))))));
            } else {
                
                //#line 80 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((this->FMGL(n)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 83 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 86 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    {
        
        //#line 87 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__14648 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 88 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__1)))bwt_SuffixArray__closure__1(this))));
                
                //#line 89 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__2)))bwt_SuffixArray__closure__2(this))));
                
                //#line 90 "SuffixArray.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 91 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 92 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 93 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 94 "SuffixArray.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 95 "SuffixArray.x10"
                x10_long i__14114max__14602 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__14603;
                    for (i__14603 = ((x10_long)0ll); ((i__14603) <= (i__14114max__14602));
                         i__14603 = ((i__14603) + (((x10_long)1ll))))
                    {
                        
                        //#line 96 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__14603) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 97 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__14603);
                            
                            //#line 98 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            {
                ::x10::lang::CheckedThrowable* ct__14646 =
                  __exc11;
                {
                    ::x10::xrx::Runtime::pushException(ct__14646);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__14648);
    }
}

//#line 104 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 105 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 106 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 107 "SuffixArray.x10"
    if (((this->FMGL(k)) < (((x10_long)2097152ll)))) {
        
        //#line 108 "SuffixArray.x10"
        this->sortPairsThreeFast(this->FMGL(string), this->FMGL(SA12),
                                 size, num_threads);
    } else {
        
        //#line 110 "SuffixArray.x10"
        this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                             size, num_threads);
    }
    
    //#line 129 "SuffixArray.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 130 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 131 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 132 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 133 "SuffixArray.x10"
    x10_long i__14130max__14605 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__14606;
        for (i__14606 = ((x10_long)0ll); ((i__14606) <= (i__14130max__14605));
             i__14606 = ((i__14606) + (((x10_long)1ll))))
        {
            
            //#line 134 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__14606)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__14606)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__14606)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 135 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 136 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__14606));
                
                //#line 137 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__14606)) + (((x10_long)1ll))));
                
                //#line 138 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__14606)) + (((x10_long)2ll))));
            }
            
            //#line 141 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__14606)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 142 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__14606)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 144 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__14606)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 150 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 151 "SuffixArray.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 152 "SuffixArray.x10"
        this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make((((x10_long)(::x10aux::nullCheck(this->FMGL(R))->FMGL(size))) + (((x10_long)3ll))));
        
        //#line 153 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                this->FMGL(name),
                                                this->FMGL(SA12));
        
        //#line 154 "SuffixArray.x10"
        bwa->run();
        {
            
            //#line 156 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14653 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 157 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                    
                    //#line 158 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long i__14162max__14611 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14612;
                        for (i__14612 = ((x10_long)0ll); ((i__14612) <= (i__14162max__14611));
                             i__14612 = ((i__14612) + (((x10_long)1ll))))
                        {
                            
                            //#line 160 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__14612)) < (this->FMGL(n0))))
                            {
                                
                                //#line 161 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__14612))));
                                
                                //#line 162 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 165 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 166 "SuffixArray.x10"
                    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
                    
                    //#line 168 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, num_threads, ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc14) {
                {
                    ::x10::lang::CheckedThrowable* ct__14651 =
                      __exc14;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__14651);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__14653);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__14178max__14617 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__14618;
            for (i__14618 = ((x10_long)0ll); ((i__14618) <= (i__14178max__14617));
                 i__14618 = ((i__14618) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__14618)) - (((x10_long)1ll))), i__14618);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14657 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long i__14194max__14614 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__14615;
                        for (i__14615 = ((x10_long)0ll); ((i__14615) <= (i__14194max__14614));
                             i__14615 = ((i__14615) + (((x10_long)1ll))))
                        {
                            
                            //#line 176 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__14615)) < (this->FMGL(n0))))
                            {
                                
                                //#line 178 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__14615))));
                                
                                //#line 179 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 182 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 183 "SuffixArray.x10"
                    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
                    
                    //#line 185 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, num_threads, ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc15) {
                {
                    ::x10::lang::CheckedThrowable* ct__14655 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__14655);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__14657);
        }
    }
    
    //#line 189 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__15983)));
    
    //#line 192 "SuffixArray.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)11ll))))
    {
        
        //#line 193 "SuffixArray.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 194 "SuffixArray.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 195 "SuffixArray.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 196 "SuffixArray.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 227 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__14317 = t_lb;
            x10_long t_ub__14318 = t_ub;
            x10_long p_ub__14319 = p_ub;
            x10_long p_lb__14320 = p_lb;
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__14321 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__14322 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__14318) - (t_lb__14317))) > (((x10_long)1ll))) ||
                   ((((p_ub__14319) - (p_lb__14320))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__14325;
                        goto __ret__14326; __ret__14326: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__14327 = this->getI(
                                                  t_mid__14321);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__14328 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__14322);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__14321)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__14330 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__14327);
                                    x10_long a__14331 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14321)) + (this->FMGL(n0))));
                                    x10_long b__14332 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__14328);
                                    x10_long b__14333 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__14328) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__14330) < (b__14332)) ||
                                    ((::x10aux::struct_equals(a__14330,
                                                              b__14332)) &&
                                    ((a__14331) <= (b__14333))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__14321)) >= (this->FMGL(n0))) &&
                                this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            i__14327), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((i__14327) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14321)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            j__14328), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j__14328) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__14328) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__14325 = true;
                                goto __ret__14326_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__14325 = false;
                                goto __ret__14326_end_;
                            }
                            
                        }goto __ret__14326_end_; __ret__14326_end_: ;
                        }
                        ret__14325;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__14317 = t_mid__14321;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__14319 = p_mid__14322;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__14318 = t_mid__14321;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__14320 = p_mid__14322;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__14321 = ((((t_lb__14317) + (t_ub__14318))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__14322 = ((((p_lb__14320) + (p_ub__14319))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__14334 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15860 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15860->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__14317);
                                                                                                t__15860->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__14320);
                                                                                                t__15860;
                                                                                            }))
                                                                                            );
            lb__14334;
            }))
            ;
            
        
        //#line 228 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 229 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 230 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 231 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 232 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 233 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 234 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14662 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 235 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(&(lbl), &(t_lb), lb, &(p_lb), this))));
                    
                    //#line 236 "SuffixArray.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__14389 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__14390 = t_ub;
                        x10_long p_ub__14391 = p_ub;
                        x10_long p_lb__14392 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 210 "SuffixArray.x10"
                        x10_long t_mid__14393 = ((((t_lb__14389) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 211 "SuffixArray.x10"
                        x10_long p_mid__14394 = ((((p_lb__14392) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 212 "SuffixArray.x10"
                        while ((((((t_ub__14390) - (t_lb__14389))) > (((x10_long)1ll))) ||
                               ((((p_ub__14391) - (p_lb__14392))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 213 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 197 "SuffixArray.x10"
                                    x10_boolean ret__14397;
                                    goto __ret__14398; __ret__14398: {
                                    {
                                        
                                        //#line 198 "SuffixArray.x10"
                                        x10_long i__14399 =
                                          this->getI(t_mid__14393);
                                        
                                        //#line 199 "SuffixArray.x10"
                                        x10_long j__14400 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__14394);
                                        
                                        //#line 200 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14393)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__14402 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__14399);
                                                x10_long a__14403 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14393)) + (this->FMGL(n0))));
                                                x10_long b__14404 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__14400);
                                                x10_long b__14405 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__14400) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__14402) < (b__14404)) ||
                                                ((::x10aux::struct_equals(a__14402,
                                                                          b__14404)) &&
                                                ((a__14403) <= (b__14405))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__14393)) >= (this->FMGL(n0))) &&
                                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i__14399),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i__14399) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14393)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j__14400),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j__14400) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__14400) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 203 "SuffixArray.x10"
                                            ret__14397 = true;
                                            goto __ret__14398_end_;
                                        } else {
                                            
                                            //#line 205 "SuffixArray.x10"
                                            ret__14397 = false;
                                            goto __ret__14398_end_;
                                        }
                                        
                                    }goto __ret__14398_end_; __ret__14398_end_: ;
                                    }
                                    ret__14397;
                                    }))
                                    ) {
                                    
                                    //#line 214 "SuffixArray.x10"
                                    t_lb__14389 = t_mid__14393;
                                    
                                    //#line 215 "SuffixArray.x10"
                                    p_ub__14391 = p_mid__14394;
                                } else {
                                    
                                    //#line 217 "SuffixArray.x10"
                                    t_ub__14390 = t_mid__14393;
                                    
                                    //#line 218 "SuffixArray.x10"
                                    p_lb__14392 = p_mid__14394;
                                }
                                
                            
                            //#line 220 "SuffixArray.x10"
                            t_mid__14393 = ((((t_lb__14389) + (t_ub__14390))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 221 "SuffixArray.x10"
                            p_mid__14394 = ((((p_lb__14392) + (p_ub__14391))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 223 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__14406 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15872 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15872->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__14389);
                                                                   t__15872->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__14392);
                                                                   t__15872;
                                                               }))
                                                               );
                        lb__14406;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc16) {
                    {
                        ::x10::lang::CheckedThrowable* ct__14660 =
                          __exc16;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__14660);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__14662);
            }
        {
            
            //#line 238 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14669 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 239 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(&(lbll), &(t_lb), lbl, &(p_lb), this))));
                    
                    //#line 240 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__6)))bwt_SuffixArray__closure__6(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                    
                    //#line 241 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__7)))bwt_SuffixArray__closure__7(&(lblr), lbl, lb, this))));
                    
                    //#line 242 "SuffixArray.x10"
                    lbrl = (__extension__ ({
                        x10_long t_lb__14533 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__14534 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__14535 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__14536 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 210 "SuffixArray.x10"
                        x10_long t_mid__14537 = ((((t_lb__14533) + (t_ub__14534))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 211 "SuffixArray.x10"
                        x10_long p_mid__14538 = ((((p_lb__14536) + (p_ub__14535))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 212 "SuffixArray.x10"
                        while ((((((t_ub__14534) - (t_lb__14533))) > (((x10_long)1ll))) ||
                               ((((p_ub__14535) - (p_lb__14536))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 213 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 197 "SuffixArray.x10"
                                    x10_boolean ret__14541;
                                    goto __ret__14542; __ret__14542: {
                                    {
                                        
                                        //#line 198 "SuffixArray.x10"
                                        x10_long i__14543 =
                                          this->getI(t_mid__14537);
                                        
                                        //#line 199 "SuffixArray.x10"
                                        x10_long j__14544 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__14538);
                                        
                                        //#line 200 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__14537)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__14546 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__14543);
                                                x10_long a__14547 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__14537)) + (this->FMGL(n0))));
                                                x10_long b__14548 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__14544);
                                                x10_long b__14549 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__14544) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__14546) < (b__14548)) ||
                                                ((::x10aux::struct_equals(a__14546,
                                                                          b__14548)) &&
                                                ((a__14547) <= (b__14549))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__14537)) >= (this->FMGL(n0))) &&
                                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i__14543),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i__14543) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__14537)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j__14544),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j__14544) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__14544) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 203 "SuffixArray.x10"
                                            ret__14541 = true;
                                            goto __ret__14542_end_;
                                        } else {
                                            
                                            //#line 205 "SuffixArray.x10"
                                            ret__14541 = false;
                                            goto __ret__14542_end_;
                                        }
                                        
                                    }goto __ret__14542_end_; __ret__14542_end_: ;
                                    }
                                    ret__14541;
                                    }))
                                    ) {
                                    
                                    //#line 214 "SuffixArray.x10"
                                    t_lb__14533 = t_mid__14537;
                                    
                                    //#line 215 "SuffixArray.x10"
                                    p_ub__14535 = p_mid__14538;
                                } else {
                                    
                                    //#line 217 "SuffixArray.x10"
                                    t_ub__14534 = t_mid__14537;
                                    
                                    //#line 218 "SuffixArray.x10"
                                    p_lb__14536 = p_mid__14538;
                                }
                                
                            
                            //#line 220 "SuffixArray.x10"
                            t_mid__14537 = ((((t_lb__14533) + (t_ub__14534))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 221 "SuffixArray.x10"
                            p_mid__14538 = ((((p_lb__14536) + (p_ub__14535))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 223 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__14550 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15896 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15896->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__14533);
                                                                   t__15896->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__14536);
                                                                   t__15896;
                                                               }))
                                                               );
                        lb__14550;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc17) {
                    {
                        ::x10::lang::CheckedThrowable* ct__14667 =
                          __exc17;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__14667);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__14669);
            }
        
        //#line 246 "SuffixArray.x10"
        x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 247 "SuffixArray.x10"
        x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 248 "SuffixArray.x10"
        x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                 ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 249 "SuffixArray.x10"
        x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 250 "SuffixArray.x10"
        x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 251 "SuffixArray.x10"
        x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 252 "SuffixArray.x10"
        x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                  ((x10_long)1ll)))
          ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                          ((x10_long)1ll))))) - (((x10_long)1ll))))
          : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                 ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll)))));
        
        //#line 254 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__15902 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)-1ll));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midll) - (((x10_long)1ll))));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midl) - (((x10_long)1ll))));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((midlr) - (((x10_long)1ll))));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((mid) - (((x10_long)1ll))));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midrl) - (((x10_long)1ll))));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midr) - (((x10_long)1ll))));
                                                                                        t__15902->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ((midrr) - (((x10_long)1ll))));
                                                                                        t__15902;
                                                                                    }))
                                                                                    );
        
        //#line 255 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__15920 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ((midl) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ((midlr) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ((mid) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ((midrl) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ((midr) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ((midrr) + (((x10_long)1ll))));
                                                                                        t__15920->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          this->FMGL(n));
                                                                                        t__15920;
                                                                                    }))
                                                                                    );
        
        //#line 256 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__15938 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((x10_long)0ll));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)1ll)));
                                                                                        t__15938;
                                                                                    }))
                                                                                    );
        
        //#line 257 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                        ::x10::lang::Rail< x10_long >* t__15956 =
                                                                                          ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)0ll),
                                                                                          ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)1ll),
                                                                                          ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)2ll),
                                                                                          ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)3ll),
                                                                                          ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)4ll),
                                                                                          ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)5ll),
                                                                                          ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)6ll),
                                                                                          ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956->x10::lang::Rail< x10_long >::__set(
                                                                                          ((x10_long)7ll),
                                                                                          ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                            ((x10_long)0ll)));
                                                                                        t__15956;
                                                                                    }))
                                                                                    );
        {
            
            //#line 259 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__14674 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long i__14636;
                        for (i__14636 = ((x10_long)0ll); ((i__14636) <= (((x10_long)7ll)));
                             i__14636 = ((i__14636) + (((x10_long)1ll))))
                        {
                            x10_long l__14637 = i__14636;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__8)))bwt_SuffixArray__closure__8(krail, l__14637, trail, prail, nrail, this))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc18) {
                {
                    ::x10::lang::CheckedThrowable* ct__14672 =
                      __exc18;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__14672);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__14674);
        }
        } else {
            
            //#line 300 "SuffixArray.x10"
            x10_long p = ((x10_long)0ll);
            
            //#line 301 "SuffixArray.x10"
            x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
            
            //#line 302 "SuffixArray.x10"
            x10_long k = ((x10_long)-1ll);
            
            //#line 303 "SuffixArray.x10"
            while (((k) < (this->FMGL(n)))) {
                
                //#line 304 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 305 "SuffixArray.x10"
                x10_long i = this->getI(t);
                
                //#line 306 "SuffixArray.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p);
                
                //#line 308 "SuffixArray.x10"
                if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__14567 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              i);
                        x10_long a__14568 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__14569 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              j);
                        x10_long b__14570 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__14567) < (b__14569)) || ((::x10aux::struct_equals(a__14567,
                                                                                b__14569)) &&
                        ((a__14568) <= (b__14570))));
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
                    
                    //#line 311 "SuffixArray.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, i);
                    
                    //#line 312 "SuffixArray.x10"
                    t = ((t) + (((x10_long)1ll)));
                    
                    //#line 313 "SuffixArray.x10"
                    if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                    {
                        
                        //#line 314 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 315 "SuffixArray.x10"
                        x10_long i__14258max__14638 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__14639;
                            for (i__14639 = ((x10_long)0ll);
                                 ((i__14639) <= (i__14258max__14638));
                                 i__14639 = ((i__14639) + (((x10_long)1ll))))
                            {
                                
                                //#line 316 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                       p));
                                
                                //#line 317 "SuffixArray.x10"
                                p = ((p) + (((x10_long)1ll)));
                                
                                //#line 318 "SuffixArray.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                } else {
                    
                    //#line 322 "SuffixArray.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, j);
                    
                    //#line 323 "SuffixArray.x10"
                    p = ((p) + (((x10_long)1ll)));
                    
                    //#line 324 "SuffixArray.x10"
                    if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                    {
                        
                        //#line 325 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 326 "SuffixArray.x10"
                        x10_long i__14274max__14641 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__14642;
                            for (i__14642 = ((x10_long)0ll);
                                 ((i__14642) <= (i__14274max__14641));
                                 i__14642 = ((i__14642) + (((x10_long)1ll))))
                            {
                                
                                //#line 327 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, this->getI(t));
                                
                                //#line 328 "SuffixArray.x10"
                                t = ((t) + (((x10_long)1ll)));
                                
                                //#line 329 "SuffixArray.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                }
                
            }
            
        }
        }
        
    
    //#line 336 "SuffixArray.x10"
    x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
        
        //#line 337 "SuffixArray.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 339 "SuffixArray.x10"
    x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
        
        //#line 340 "SuffixArray.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 343 "SuffixArray.x10"
    x10_long bwt::SuffixArray::getI(x10_long t) {
        
        //#line 344 "SuffixArray.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 345 "SuffixArray.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 347 "SuffixArray.x10"
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
    }
    
    ::x10aux::RuntimeType bwt::SuffixArray::rtt;
    void bwt::SuffixArray::_initRTT() {
        if (rtt.initStageOne(&rtt)) return;
        const ::x10aux::RuntimeType** parents = NULL; 
        rtt.initStageTwo("bwt.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
    }
    
    ::x10::lang::String bwt::SuffixArray_Strings::sl__15983("Start Merge");

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
