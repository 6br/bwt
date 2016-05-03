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
        x10_long i__16455max__16991 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__16992;
            for (i__16992 = ((x10_long)0ll); ((i__16992) <= (i__16455max__16991));
                 i__16992 = ((i__16992) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__16992), ((i__16992) + (((x10_long)1ll))));
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
        lbl__17044 = (__extension__ ({
            x10_long t_lb__17050 = t_lb__17022;
            x10_long t_ub__17051 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__17052 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__17053 = p_lb__17021;
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__17054 = ((((t_lb__17022) + (t_ub__17051))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__17055 = ((((p_lb__17021) + (p_ub__17052))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__17051) - (t_lb__17050))) > (((x10_long)1ll))) ||
                   ((((p_ub__17052) - (p_lb__17053))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__17058;
                        goto __ret__17059; __ret__17059: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__17060 = saved_this->getI(
                                                  t_mid__17054);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__17061 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17055);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17054)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17063 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__17060);
                                    x10_long a__17064 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17054)) + (saved_this->FMGL(n0))));
                                    x10_long b__17065 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__17061);
                                    x10_long b__17066 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17061) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17063) < (b__17065)) ||
                                    ((::x10aux::struct_equals(a__17063,
                                                              b__17065)) &&
                                    ((a__17064) <= (b__17066))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17054)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__17060),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__17060) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17054)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__17061),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__17061) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17061) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__17058 = true;
                                goto __ret__17059_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__17058 = false;
                                goto __ret__17059_end_;
                            }
                            
                        }goto __ret__17059_end_; __ret__17059_end_: ;
                        }
                        ret__17058;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__17050 = t_mid__17054;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__17052 = p_mid__17055;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__17051 = t_mid__17054;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__17053 = p_mid__17055;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__17054 = ((((t_lb__17050) + (t_ub__17051))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__17055 = ((((p_lb__17053) + (p_ub__17052))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__17067 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18527 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18527->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17050);
                                                                                                t__18527->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17053);
                                                                                                t__18527;
                                                                                            }))
                                                                                            );
            lb__17067;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl__17044;
        x10aux::captured_struct_lval<x10_long> t_lb__17022;
        ::x10::lang::Rail< x10_long >* lb__17025;
        x10aux::captured_struct_lval<x10_long> p_lb__17021;
        ::bwt::SuffixArray* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbl__17044);
            buf.write(this->t_lb__17022);
            buf.write(this->lb__17025);
            buf.write(this->p_lb__17021);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl__17044 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb__17022 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb__17025 = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb__17021 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_lbl__17044, that_t_lb__17022, that_lb__17025, that_p_lb__17021, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__4(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl__17044, x10aux::captured_struct_lval<x10_long> t_lb__17022, ::x10::lang::Rail< x10_long >* lb__17025, x10aux::captured_struct_lval<x10_long> p_lb__17021, ::bwt::SuffixArray* saved_this) : lbl__17044(lbl__17044), t_lb__17022(t_lb__17022), lb__17025(lb__17025), p_lb__17021(p_lb__17021), saved_this(saved_this) { }
        
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
        lbll__17046 = (__extension__ ({
            x10_long t_lb__17086 = t_lb__17022;
            x10_long t_ub__17087 = ::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__17088 = ::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__17089 = p_lb__17021;
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__17090 = ((((t_lb__17022) + (t_ub__17087))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__17091 = ((((p_lb__17021) + (p_ub__17088))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__17087) - (t_lb__17086))) > (((x10_long)1ll))) ||
                   ((((p_ub__17088) - (p_lb__17089))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__17094;
                        goto __ret__17095; __ret__17095: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__17096 = saved_this->getI(
                                                  t_mid__17090);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__17097 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17091);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17090)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17099 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__17096);
                                    x10_long a__17100 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17090)) + (saved_this->FMGL(n0))));
                                    x10_long b__17101 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__17097);
                                    x10_long b__17102 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17097) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17099) < (b__17101)) ||
                                    ((::x10aux::struct_equals(a__17099,
                                                              b__17101)) &&
                                    ((a__17100) <= (b__17102))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17090)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__17096),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__17096) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17090)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__17097),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__17097) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17097) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__17094 = true;
                                goto __ret__17095_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__17094 = false;
                                goto __ret__17095_end_;
                            }
                            
                        }goto __ret__17095_end_; __ret__17095_end_: ;
                        }
                        ret__17094;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__17086 = t_mid__17090;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__17088 = p_mid__17091;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__17087 = t_mid__17090;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__17089 = p_mid__17091;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__17090 = ((((t_lb__17086) + (t_ub__17087))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__17091 = ((((p_lb__17089) + (p_ub__17088))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__17103 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18539 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18539->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17086);
                                                                                                t__18539->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17089);
                                                                                                t__18539;
                                                                                            }))
                                                                                            );
            lb__17103;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll__17046;
        x10aux::captured_struct_lval<x10_long> t_lb__17022;
        ::x10::lang::Rail< x10_long >* lbl__17044;
        x10aux::captured_struct_lval<x10_long> p_lb__17021;
        ::bwt::SuffixArray* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbll__17046);
            buf.write(this->t_lb__17022);
            buf.write(this->lbl__17044);
            buf.write(this->p_lb__17021);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArray__closure__5* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__5>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll__17046 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb__17022 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lbl__17044 = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb__17021 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__5* this_ = new (storage) bwt_SuffixArray__closure__5(that_lbll__17046, that_t_lb__17022, that_lbl__17044, that_p_lb__17021, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__5(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll__17046, x10aux::captured_struct_lval<x10_long> t_lb__17022, ::x10::lang::Rail< x10_long >* lbl__17044, x10aux::captured_struct_lval<x10_long> p_lb__17021, ::bwt::SuffixArray* saved_this) : lbll__17046(lbll__17046), t_lb__17022(t_lb__17022), lbl__17044(lbl__17044), p_lb__17021(p_lb__17021), saved_this(saved_this) { }
        
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
        lbrr__17049 = (__extension__ ({
            x10_long t_lb__17104 = ::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__17105 = t_ub__17024;
            x10_long p_ub__17106 = p_ub__17023;
            x10_long p_lb__17107 = ::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__17108 = ((((t_lb__17104) + (t_ub__17024))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__17109 = ((((p_lb__17107) + (p_ub__17023))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__17105) - (t_lb__17104))) > (((x10_long)1ll))) ||
                   ((((p_ub__17106) - (p_lb__17107))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__17112;
                        goto __ret__17113; __ret__17113: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__17114 = saved_this->getI(
                                                  t_mid__17108);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__17115 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17109);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17108)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17117 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__17114);
                                    x10_long a__17118 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17108)) + (saved_this->FMGL(n0))));
                                    x10_long b__17119 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__17115);
                                    x10_long b__17120 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17115) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17117) < (b__17119)) ||
                                    ((::x10aux::struct_equals(a__17117,
                                                              b__17119)) &&
                                    ((a__17118) <= (b__17120))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17108)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__17114),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__17114) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17108)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__17115),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__17115) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17115) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__17112 = true;
                                goto __ret__17113_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__17112 = false;
                                goto __ret__17113_end_;
                            }
                            
                        }goto __ret__17113_end_; __ret__17113_end_: ;
                        }
                        ret__17112;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__17104 = t_mid__17108;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__17106 = p_mid__17109;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__17105 = t_mid__17108;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__17107 = p_mid__17109;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__17108 = ((((t_lb__17104) + (t_ub__17105))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__17109 = ((((p_lb__17107) + (p_ub__17106))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__17121 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18545 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18545->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17104);
                                                                                                t__18545->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17107);
                                                                                                t__18545;
                                                                                            }))
                                                                                            );
            lb__17121;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr__17049;
        ::x10::lang::Rail< x10_long >* lbr__17045;
        x10aux::captured_struct_lval<x10_long> t_ub__17024;
        x10aux::captured_struct_lval<x10_long> p_ub__17023;
        ::bwt::SuffixArray* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lbrr__17049);
            buf.write(this->lbr__17045);
            buf.write(this->t_ub__17024);
            buf.write(this->p_ub__17023);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArray__closure__6* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__6>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbrr__17049 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbr__17045 = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_t_ub__17024 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            x10aux::captured_struct_lval<x10_long> that_p_ub__17023 = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__6* this_ = new (storage) bwt_SuffixArray__closure__6(that_lbrr__17049, that_lbr__17045, that_t_ub__17024, that_p_ub__17023, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__6(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbrr__17049, ::x10::lang::Rail< x10_long >* lbr__17045, x10aux::captured_struct_lval<x10_long> t_ub__17024, x10aux::captured_struct_lval<x10_long> p_ub__17023, ::bwt::SuffixArray* saved_this) : lbrr__17049(lbrr__17049), lbr__17045(lbr__17045), t_ub__17024(t_ub__17024), p_ub__17023(p_ub__17023), saved_this(saved_this) { }
        
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
        lblr__17047 = (__extension__ ({
            x10_long t_lb__17122 = ::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__17123 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__17124 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__17125 = ::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 210 "SuffixArray.x10"
            x10_long t_mid__17126 = ((((t_lb__17122) + (t_ub__17123))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 211 "SuffixArray.x10"
            x10_long p_mid__17127 = ((((p_lb__17125) + (p_ub__17124))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 212 "SuffixArray.x10"
            while ((((((t_ub__17123) - (t_lb__17122))) > (((x10_long)1ll))) ||
                   ((((p_ub__17124) - (p_lb__17125))) > (((x10_long)1ll)))))
            {
                
                //#line 213 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 197 "SuffixArray.x10"
                        x10_boolean ret__17130;
                        goto __ret__17131; __ret__17131: {
                        {
                            
                            //#line 198 "SuffixArray.x10"
                            x10_long i__17132 = saved_this->getI(
                                                  t_mid__17126);
                            
                            //#line 199 "SuffixArray.x10"
                            x10_long j__17133 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__17127);
                            
                            //#line 200 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17126)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__17135 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__17132);
                                    x10_long a__17136 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__17126)) + (saved_this->FMGL(n0))));
                                    x10_long b__17137 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__17133);
                                    x10_long b__17138 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__17133) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__17135) < (b__17137)) ||
                                    ((::x10aux::struct_equals(a__17135,
                                                              b__17137)) &&
                                    ((a__17136) <= (b__17138))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__17126)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__17132),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__17132) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__17126)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__17133),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__17133) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__17133) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 203 "SuffixArray.x10"
                                ret__17130 = true;
                                goto __ret__17131_end_;
                            } else {
                                
                                //#line 205 "SuffixArray.x10"
                                ret__17130 = false;
                                goto __ret__17131_end_;
                            }
                            
                        }goto __ret__17131_end_; __ret__17131_end_: ;
                        }
                        ret__17130;
                        }))
                        ) {
                        
                        //#line 214 "SuffixArray.x10"
                        t_lb__17122 = t_mid__17126;
                        
                        //#line 215 "SuffixArray.x10"
                        p_ub__17124 = p_mid__17127;
                    } else {
                        
                        //#line 217 "SuffixArray.x10"
                        t_ub__17123 = t_mid__17126;
                        
                        //#line 218 "SuffixArray.x10"
                        p_lb__17125 = p_mid__17127;
                    }
                    
                
                //#line 220 "SuffixArray.x10"
                t_mid__17126 = ((((t_lb__17122) + (t_ub__17123))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 221 "SuffixArray.x10"
                p_mid__17127 = ((((p_lb__17125) + (p_ub__17124))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 223 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__17139 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__18551 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__18551->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__17122);
                                                                                                t__18551->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__17125);
                                                                                                t__18551;
                                                                                            }))
                                                                                            );
            lb__17139;
            }))
            ;
        }
        
        // captured environment
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr__17047;
        ::x10::lang::Rail< x10_long >* lbl__17044;
        ::x10::lang::Rail< x10_long >* lb__17025;
        ::bwt::SuffixArray* saved_this;
        
        ::x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        ::x10aux::serialization_id_t _get_network_id() {
            return _network_id;
        }
        
        void _serialize_body(::x10aux::serialization_buffer &buf) {
            buf.write(this->lblr__17047);
            buf.write(this->lbl__17044);
            buf.write(this->lb__17025);
            buf.write(this->saved_this);
        }
        
        static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
            bwt_SuffixArray__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__7>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr__17047 = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            ::x10::lang::Rail< x10_long >* that_lbl__17044 = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::x10::lang::Rail< x10_long >* that_lb__17025 = buf.read< ::x10::lang::Rail< x10_long >*>();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            bwt_SuffixArray__closure__7* this_ = new (storage) bwt_SuffixArray__closure__7(that_lblr__17047, that_lbl__17044, that_lb__17025, that_saved_this);
            return this_;
        }
        
        bwt_SuffixArray__closure__7(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr__17047, ::x10::lang::Rail< x10_long >* lbl__17044, ::x10::lang::Rail< x10_long >* lb__17025, ::bwt::SuffixArray* saved_this) : lblr__17047(lblr__17047), lbl__17044(lbl__17044), lb__17025(lb__17025), saved_this(saved_this) { }
        
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
        
        //#line 274 "SuffixArray.x10"
        x10_long k__17009 = krail__17165->x10::lang::Rail< x10_long >::__apply(
                              l__17020);
        
        //#line 275 "SuffixArray.x10"
        x10_long t__17010 = trail__17168->x10::lang::Rail< x10_long >::__apply(
                              l__17020);
        
        //#line 276 "SuffixArray.x10"
        x10_long p__17011 = prail__17167->x10::lang::Rail< x10_long >::__apply(
                              l__17020);
        
        //#line 277 "SuffixArray.x10"
        while (((k__17009) < (nrail__17166->x10::lang::Rail< x10_long >::__apply(
                                l__17020)))) {
            
            //#line 278 "SuffixArray.x10"
            k__17009 = ((k__17009) + (((x10_long)1ll)));
            
            //#line 279 "SuffixArray.x10"
            x10_long i__17012 = saved_this->getI(t__17010);
            
            //#line 280 "SuffixArray.x10"
            x10_long j__17013 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__17011);
            
            //#line 282 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__17010)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__17015 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i__17012);
                    x10_long a__17016 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__17010)) + (saved_this->FMGL(n0))));
                    x10_long b__17017 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j__17013);
                    x10_long b__17018 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__17013) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__17015) < (b__17017)) || ((::x10aux::struct_equals(a__17015,
                                                                            b__17017)) &&
                    ((a__17016) <= (b__17018))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__17010)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__17012), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((i__17012) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__17010)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__17013), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((j__17013) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__17013) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 285 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__17020,
                                                 ((x10_long)0ll))) &&
                    ((k__17009) <= (((krail__17165->x10::lang::Rail< x10_long >::__apply(
                                        l__17020)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 286 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__17009, i__17012);
                }
                
                //#line 288 "SuffixArray.x10"
                t__17010 = ((t__17010) + (((x10_long)1ll)));
                
                //#line 289 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__17010, saved_this->FMGL(n02))))
                {
                    
                    //#line 290 "SuffixArray.x10"
                    k__17009 = ((k__17009) + (((x10_long)1ll)));
                    
                    //#line 291 "SuffixArray.x10"
                    x10_long i__16519max__17003 = ((((saved_this->FMGL(n0)) - (p__17011))) - (((x10_long)1ll)));
                    {
                        x10_long i__17004;
                        for (i__17004 = ((x10_long)0ll); ((i__17004) <= (i__16519max__17003));
                             i__17004 = ((i__17004) + (((x10_long)1ll))))
                        {
                            
                            //#line 292 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__17009, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__17011));
                            
                            //#line 293 "SuffixArray.x10"
                            p__17011 = ((p__17011) + (((x10_long)1ll)));
                            
                            //#line 294 "SuffixArray.x10"
                            k__17009 = ((k__17009) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 298 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__17020,
                                                 ((x10_long)0ll))) &&
                    ((k__17009) <= (((krail__17165->x10::lang::Rail< x10_long >::__apply(
                                        l__17020)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 299 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__17009, j__17013);
                }
                
                //#line 301 "SuffixArray.x10"
                p__17011 = ((p__17011) + (((x10_long)1ll)));
                
                //#line 302 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__17011, saved_this->FMGL(n0))))
                {
                    
                    //#line 303 "SuffixArray.x10"
                    k__17009 = ((k__17009) + (((x10_long)1ll)));
                    
                    //#line 304 "SuffixArray.x10"
                    x10_long i__16535max__17006 = ((((saved_this->FMGL(n02)) - (t__17010))) - (((x10_long)1ll)));
                    {
                        x10_long i__17007;
                        for (i__17007 = ((x10_long)0ll); ((i__17007) <= (i__16535max__17006));
                             i__17007 = ((i__17007) + (((x10_long)1ll))))
                        {
                            
                            //#line 305 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__17009, saved_this->getI(
                                          t__17010));
                            
                            //#line 306 "SuffixArray.x10"
                            t__17010 = ((t__17010) + (((x10_long)1ll)));
                            
                            //#line 307 "SuffixArray.x10"
                            k__17009 = ((k__17009) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail__17165;
    x10_long l__17020;
    ::x10::lang::Rail< x10_long >* trail__17168;
    ::x10::lang::Rail< x10_long >* prail__17167;
    ::x10::lang::Rail< x10_long >* nrail__17166;
    ::bwt::SuffixArray* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->krail__17165);
        buf.write(this->l__17020);
        buf.write(this->trail__17168);
        buf.write(this->prail__17167);
        buf.write(this->nrail__17166);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__8* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__8>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail__17165 = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__17020 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail__17168 = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail__17167 = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail__17166 = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__8* this_ = new (storage) bwt_SuffixArray__closure__8(that_krail__17165, that_l__17020, that_trail__17168, that_prail__17167, that_nrail__17166, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__8(::x10::lang::Rail< x10_long >* krail__17165, x10_long l__17020, ::x10::lang::Rail< x10_long >* trail__17168, ::x10::lang::Rail< x10_long >* prail__17167, ::x10::lang::Rail< x10_long >* nrail__17166, ::bwt::SuffixArray* saved_this) : krail__17165(krail__17165), l__17020(l__17020), trail__17168(trail__17168), prail__17167(prail__17167), nrail__17166(nrail__17166), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:273-312";
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
    ::bwt::SuffixArray* this__16962 = this;
    ::x10aux::nullCheck(this__16962)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__16962)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__16962)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__16962)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__16962)->FMGL(name) = ((x10_long)0ll);
    
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
    x10_long i__16343max__16970 = this->FMGL(k);
    {
        x10_long i__16971;
        for (i__16971 = ((x10_long)0ll); ((i__16971) <= (i__16343max__16970));
             i__16971 = ((i__16971) + (((x10_long)1ll))))
        {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__16971, ((x10_long)0ll));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__16359max__16973 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__16974;
        for (i__16974 = ((x10_long)0ll); ((i__16974) <= (i__16359max__16973));
             i__16974 = ((i__16974) + (((x10_long)1ll))))
        {
            
            //#line 50 "SuffixArray.x10"
            x10_long i__16964 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__16974)) + (((x10_long)(rOffs)))));
            x10_long r__16965 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__16964)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__16964, r__16965);
        }
    }
    
    //#line 52 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 53 "SuffixArray.x10"
    x10_long i__16375max__16976 = this->FMGL(k);
    {
        x10_long i__16977;
        for (i__16977 = ((x10_long)0ll); ((i__16977) <= (i__16375max__16976));
             i__16977 = ((i__16977) + (((x10_long)1ll))))
        {
            
            //#line 54 "SuffixArray.x10"
            x10_long t__16966 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__16977);
            
            //#line 55 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__16977, sum);
            
            //#line 56 "SuffixArray.x10"
            sum = ((sum) + (t__16966));
        }
    }
    
    //#line 58 "SuffixArray.x10"
    x10_long i__16391max__16979 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__16980;
        for (i__16980 = ((x10_long)0ll); ((i__16980) <= (i__16391max__16979));
             i__16980 = ((i__16980) + (((x10_long)1ll))))
        {
            
            //#line 59 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__16980)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__16980));
            
            //#line 60 "SuffixArray.x10"
            x10_long i__16968 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__16980)) + (((x10_long)(rOffs)))));
            x10_long r__16969 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__16968)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__16968, r__16969);
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
    x10_long i__16407max__16982 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__16983;
        for (i__16983 = ((x10_long)0ll); ((i__16983) <= (i__16407max__16982));
             i__16983 = ((i__16983) + (((x10_long)1ll))))
        {
            
            //#line 77 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__16983), ((x10_long)0ll))))
            {
                
                //#line 78 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__16983)) - (((x10_long)1ll))))));
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
        ::x10::xrx::FinishState* fs__17173 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__16423max__16985 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__16986;
                    for (i__16986 = ((x10_long)0ll); ((i__16986) <= (i__16423max__16985));
                         i__16986 = ((i__16986) + (((x10_long)1ll))))
                    {
                        
                        //#line 96 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__16986) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 97 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__16986);
                            
                            //#line 98 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            {
                ::x10::lang::CheckedThrowable* ct__17171 =
                  __exc11;
                {
                    ::x10::xrx::Runtime::pushException(ct__17171);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__17173);
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
    x10_long i__16439max__16988 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__16989;
        for (i__16989 = ((x10_long)0ll); ((i__16989) <= (i__16439max__16988));
             i__16989 = ((i__16989) + (((x10_long)1ll))))
        {
            
            //#line 134 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__16989)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__16989)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__16989)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 135 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 136 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__16989));
                
                //#line 137 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__16989)) + (((x10_long)1ll))));
                
                //#line 138 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__16989)) + (((x10_long)2ll))));
            }
            
            //#line 141 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__16989)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 142 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__16989)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 144 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__16989)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
            ::x10::xrx::FinishState* fs__17178 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 157 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                    
                    //#line 158 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long i__16471max__16994 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__16995;
                        for (i__16995 = ((x10_long)0ll); ((i__16995) <= (i__16471max__16994));
                             i__16995 = ((i__16995) + (((x10_long)1ll))))
                        {
                            
                            //#line 160 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__16995)) < (this->FMGL(n0))))
                            {
                                
                                //#line 161 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__16995))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__17176 =
                      __exc14;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17176);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__17178);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__16487max__17000 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__17001;
            for (i__17001 = ((x10_long)0ll); ((i__17001) <= (i__16487max__17000));
                 i__17001 = ((i__17001) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__17001)) - (((x10_long)1ll))), i__17001);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__17182 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long i__16503max__16997 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__16998;
                        for (i__16998 = ((x10_long)0ll); ((i__16998) <= (i__16503max__16997));
                             i__16998 = ((i__16998) + (((x10_long)1ll))))
                        {
                            
                            //#line 176 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__16998)) < (this->FMGL(n0))))
                            {
                                
                                //#line 178 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__16998))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__17180 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17180);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__17182);
        }
    }
    
    //#line 189 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__18644)));
    
    //#line 193 "SuffixArray.x10"
    x10_long p_lb__17021 = ((x10_long)0ll);
    
    //#line 194 "SuffixArray.x10"
    x10_long t_lb__17022 = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 195 "SuffixArray.x10"
    x10_long p_ub__17023 = ((this->FMGL(n0)) - (((x10_long)1ll)));
    
    //#line 196 "SuffixArray.x10"
    x10_long t_ub__17024 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    
    //#line 227 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lb__17025 = (__extension__ ({
        x10_long t_lb__17026 = t_lb__17022;
        x10_long t_ub__17027 = t_ub__17024;
        x10_long p_ub__17028 = p_ub__17023;
        x10_long p_lb__17029 = p_lb__17021;
        
        //#line 210 "SuffixArray.x10"
        x10_long t_mid__17030 = ((((t_lb__17022) + (t_ub__17024))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 211 "SuffixArray.x10"
        x10_long p_mid__17031 = ((((p_lb__17021) + (p_ub__17023))) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 212 "SuffixArray.x10"
        while ((((((t_ub__17027) - (t_lb__17026))) > (((x10_long)1ll))) ||
               ((((p_ub__17028) - (p_lb__17029))) > (((x10_long)1ll)))))
        {
            
            //#line 213 "SuffixArray.x10"
            if ((__extension__ ({
                    
                    //#line 197 "SuffixArray.x10"
                    x10_boolean ret__17034;
                    goto __ret__17035; __ret__17035: {
                    {
                        
                        //#line 198 "SuffixArray.x10"
                        x10_long i__17036 = this->getI(t_mid__17030);
                        
                        //#line 199 "SuffixArray.x10"
                        x10_long j__17037 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                              p_mid__17031);
                        
                        //#line 200 "SuffixArray.x10"
                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                  t_mid__17030)) < (this->FMGL(n0))) &&
                            (__extension__ ({
                                x10_long a__17039 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                      i__17036);
                                x10_long a__17040 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                      ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                          t_mid__17030)) + (this->FMGL(n0))));
                                x10_long b__17041 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                      j__17037);
                                x10_long b__17042 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                      ((j__17037) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                (((a__17039) < (b__17041)) ||
                                ((::x10aux::struct_equals(a__17039,
                                                          b__17041)) &&
                                ((a__17040) <= (b__17042))));
                            }))
                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__17030)) >= (this->FMGL(n0))) &&
                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                        i__17036), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                     ((i__17036) + (((x10_long)1ll)))),
                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t_mid__17030)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                        j__17037), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                     ((j__17037) + (((x10_long)1ll)))),
                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                        ((((j__17037) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                        {
                            
                            //#line 203 "SuffixArray.x10"
                            ret__17034 = true;
                            goto __ret__17035_end_;
                        } else {
                            
                            //#line 205 "SuffixArray.x10"
                            ret__17034 = false;
                            goto __ret__17035_end_;
                        }
                        
                    }goto __ret__17035_end_; __ret__17035_end_: ;
                    }
                    ret__17034;
                    }))
                    ) {
                    
                    //#line 214 "SuffixArray.x10"
                    t_lb__17026 = t_mid__17030;
                    
                    //#line 215 "SuffixArray.x10"
                    p_ub__17028 = p_mid__17031;
                } else {
                    
                    //#line 217 "SuffixArray.x10"
                    t_ub__17027 = t_mid__17030;
                    
                    //#line 218 "SuffixArray.x10"
                    p_lb__17029 = p_mid__17031;
                }
                
            
            //#line 220 "SuffixArray.x10"
            t_mid__17030 = ((((t_lb__17026) + (t_ub__17027))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 221 "SuffixArray.x10"
            p_mid__17031 = ((((p_lb__17029) + (p_ub__17028))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            }
            
        
        //#line 223 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb__17043 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__18521 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                            t__18521->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              t_lb__17026);
                                                                                            t__18521->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              p_lb__17029);
                                                                                            t__18521;
                                                                                        }))
                                                                                        );
        lb__17043;
        }))
        ;
        
    
    //#line 228 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lbl__17044;
    
    //#line 229 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lbr__17045;
    
    //#line 230 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lbll__17046;
    
    //#line 231 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lblr__17047;
    
    //#line 232 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lbrl__17048;
    
    //#line 233 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* lbrr__17049;
    {
        
        //#line 234 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17187 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 235 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(&(lbl__17044), &(t_lb__17022), lb__17025, &(p_lb__17021), this))));
                
                //#line 236 "SuffixArray.x10"
                lbr__17045 = (__extension__ ({
                    x10_long t_lb__17068 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)0ll));
                    x10_long t_ub__17069 = t_ub__17024;
                    x10_long p_ub__17070 = p_ub__17023;
                    x10_long p_lb__17071 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)1ll));
                    
                    //#line 210 "SuffixArray.x10"
                    x10_long t_mid__17072 = ((((t_lb__17068) + (t_ub__17024))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 211 "SuffixArray.x10"
                    x10_long p_mid__17073 = ((((p_lb__17071) + (p_ub__17023))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 212 "SuffixArray.x10"
                    while ((((((t_ub__17069) - (t_lb__17068))) > (((x10_long)1ll))) ||
                           ((((p_ub__17070) - (p_lb__17071))) > (((x10_long)1ll)))))
                    {
                        
                        //#line 213 "SuffixArray.x10"
                        if ((__extension__ ({
                                
                                //#line 197 "SuffixArray.x10"
                                x10_boolean ret__17076;
                                goto __ret__17077; __ret__17077: {
                                {
                                    
                                    //#line 198 "SuffixArray.x10"
                                    x10_long i__17078 = this->getI(
                                                          t_mid__17072);
                                    
                                    //#line 199 "SuffixArray.x10"
                                    x10_long j__17079 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                          p_mid__17073);
                                    
                                    //#line 200 "SuffixArray.x10"
                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t_mid__17072)) < (this->FMGL(n0))) &&
                                        (__extension__ ({
                                            x10_long a__17081 =
                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                i__17078);
                                            x10_long a__17082 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                    t_mid__17072)) + (this->FMGL(n0))));
                                            x10_long b__17083 =
                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                j__17079);
                                            x10_long b__17084 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((j__17079) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                            (((a__17081) < (b__17083)) ||
                                            ((::x10aux::struct_equals(a__17081,
                                                                      b__17083)) &&
                                            ((a__17082) <= (b__17084))));
                                        }))
                                        ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__17072)) >= (this->FMGL(n0))) &&
                                        this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__17078),
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    ((i__17078) + (((x10_long)1ll)))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                          t_mid__17072)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__17079),
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__17079) + (((x10_long)1ll)))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((j__17079) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                    {
                                        
                                        //#line 203 "SuffixArray.x10"
                                        ret__17076 = true;
                                        goto __ret__17077_end_;
                                    } else {
                                        
                                        //#line 205 "SuffixArray.x10"
                                        ret__17076 = false;
                                        goto __ret__17077_end_;
                                    }
                                    
                                }goto __ret__17077_end_; __ret__17077_end_: ;
                                }
                                ret__17076;
                                }))
                                ) {
                                
                                //#line 214 "SuffixArray.x10"
                                t_lb__17068 = t_mid__17072;
                                
                                //#line 215 "SuffixArray.x10"
                                p_ub__17070 = p_mid__17073;
                            } else {
                                
                                //#line 217 "SuffixArray.x10"
                                t_ub__17069 = t_mid__17072;
                                
                                //#line 218 "SuffixArray.x10"
                                p_lb__17071 = p_mid__17073;
                            }
                            
                        
                        //#line 220 "SuffixArray.x10"
                        t_mid__17072 = ((((t_lb__17068) + (t_ub__17069))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 221 "SuffixArray.x10"
                        p_mid__17073 = ((((p_lb__17071) + (p_ub__17070))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        }
                        
                    
                    //#line 223 "SuffixArray.x10"
                    ::x10::lang::Rail< x10_long >* lb__17085 =
                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                               ::x10::lang::Rail< x10_long >* t__18533 =
                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                               t__18533->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)0ll),
                                                                 t_lb__17068);
                                                               t__18533->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)1ll),
                                                                 p_lb__17071);
                                                               t__18533;
                                                           }))
                                                           );
                    lb__17085;
                    }))
                    ;
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc16) {
                {
                    ::x10::lang::CheckedThrowable* ct__17185 =
                      __exc16;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17185);
                    }
                }
            }
        ::x10::xrx::Runtime::stopFinish(fs__17187);
        }
    {
        
        //#line 238 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17194 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 239 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(&(lbll__17046), &(t_lb__17022), lbl__17044, &(p_lb__17021), this))));
                
                //#line 240 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__6)))bwt_SuffixArray__closure__6(&(lbrr__17049), lbr__17045, &(t_ub__17024), &(p_ub__17023), this))));
                
                //#line 241 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__7)))bwt_SuffixArray__closure__7(&(lblr__17047), lbl__17044, lb__17025, this))));
                
                //#line 242 "SuffixArray.x10"
                lbrl__17048 = (__extension__ ({
                    x10_long t_lb__17140 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)0ll));
                    x10_long t_ub__17141 = ::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)0ll));
                    x10_long p_ub__17142 = ::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)1ll));
                    x10_long p_lb__17143 = ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                             ((x10_long)1ll));
                    
                    //#line 210 "SuffixArray.x10"
                    x10_long t_mid__17144 = ((((t_lb__17140) + (t_ub__17141))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 211 "SuffixArray.x10"
                    x10_long p_mid__17145 = ((((p_lb__17143) + (p_ub__17142))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                    
                    //#line 212 "SuffixArray.x10"
                    while ((((((t_ub__17141) - (t_lb__17140))) > (((x10_long)1ll))) ||
                           ((((p_ub__17142) - (p_lb__17143))) > (((x10_long)1ll)))))
                    {
                        
                        //#line 213 "SuffixArray.x10"
                        if ((__extension__ ({
                                
                                //#line 197 "SuffixArray.x10"
                                x10_boolean ret__17148;
                                goto __ret__17149; __ret__17149: {
                                {
                                    
                                    //#line 198 "SuffixArray.x10"
                                    x10_long i__17150 = this->getI(
                                                          t_mid__17144);
                                    
                                    //#line 199 "SuffixArray.x10"
                                    x10_long j__17151 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                          p_mid__17145);
                                    
                                    //#line 200 "SuffixArray.x10"
                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t_mid__17144)) < (this->FMGL(n0))) &&
                                        (__extension__ ({
                                            x10_long a__17153 =
                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                i__17150);
                                            x10_long a__17154 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                    t_mid__17144)) + (this->FMGL(n0))));
                                            x10_long b__17155 =
                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                j__17151);
                                            x10_long b__17156 =
                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((j__17151) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                            (((a__17153) < (b__17155)) ||
                                            ((::x10aux::struct_equals(a__17153,
                                                                      b__17155)) &&
                                            ((a__17154) <= (b__17156))));
                                        }))
                                        ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__17144)) >= (this->FMGL(n0))) &&
                                        this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__17150),
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    ((i__17150) + (((x10_long)1ll)))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                          t_mid__17144)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__17151),
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__17151) + (((x10_long)1ll)))),
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((((j__17151) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                    {
                                        
                                        //#line 203 "SuffixArray.x10"
                                        ret__17148 = true;
                                        goto __ret__17149_end_;
                                    } else {
                                        
                                        //#line 205 "SuffixArray.x10"
                                        ret__17148 = false;
                                        goto __ret__17149_end_;
                                    }
                                    
                                }goto __ret__17149_end_; __ret__17149_end_: ;
                                }
                                ret__17148;
                                }))
                                ) {
                                
                                //#line 214 "SuffixArray.x10"
                                t_lb__17140 = t_mid__17144;
                                
                                //#line 215 "SuffixArray.x10"
                                p_ub__17142 = p_mid__17145;
                            } else {
                                
                                //#line 217 "SuffixArray.x10"
                                t_ub__17141 = t_mid__17144;
                                
                                //#line 218 "SuffixArray.x10"
                                p_lb__17143 = p_mid__17145;
                            }
                            
                        
                        //#line 220 "SuffixArray.x10"
                        t_mid__17144 = ((((t_lb__17140) + (t_ub__17141))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 221 "SuffixArray.x10"
                        p_mid__17145 = ((((p_lb__17143) + (p_ub__17142))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        }
                        
                    
                    //#line 223 "SuffixArray.x10"
                    ::x10::lang::Rail< x10_long >* lb__17157 =
                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                               ::x10::lang::Rail< x10_long >* t__18557 =
                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                               t__18557->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)0ll),
                                                                 t_lb__17140);
                                                               t__18557->x10::lang::Rail< x10_long >::__set(
                                                                 ((x10_long)1ll),
                                                                 p_lb__17143);
                                                               t__18557;
                                                           }))
                                                           );
                    lb__17157;
                    }))
                    ;
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc17) {
                {
                    ::x10::lang::CheckedThrowable* ct__17192 =
                      __exc17;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__17192);
                    }
                }
            }
        ::x10::xrx::Runtime::stopFinish(fs__17194);
        }
    
    //#line 246 "SuffixArray.x10"
    x10_long midl__17158 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 247 "SuffixArray.x10"
    x10_long mid__17159 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                   ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 248 "SuffixArray.x10"
    x10_long midr__17160 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 249 "SuffixArray.x10"
    x10_long midll__17161 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbll__17046)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbll__17046)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbll__17046)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbll__17046)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 250 "SuffixArray.x10"
    x10_long midrl__17162 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbrl__17048)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl__17048)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbrl__17048)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl__17048)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 251 "SuffixArray.x10"
    x10_long midlr__17163 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lblr__17047)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lblr__17047)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lblr__17047)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lblr__17047)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 252 "SuffixArray.x10"
    x10_long midrr__17164 = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
      ? (((((::x10aux::nullCheck(lbrr__17049)->x10::lang::Rail< x10_long >::__apply(
               ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr__17049)->x10::lang::Rail< x10_long >::__apply(
                                      ((x10_long)1ll))))) - (((x10_long)1ll))))
      : (((::x10aux::nullCheck(lbrr__17049)->x10::lang::Rail< x10_long >::__apply(
             ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr__17049)->x10::lang::Rail< x10_long >::__apply(
                                    ((x10_long)1ll)))));
    
    //#line 254 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* krail__17165 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18563 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((x10_long)-1ll));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ((midll__17161) - (((x10_long)1ll))));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ((midl__17158) - (((x10_long)1ll))));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ((midlr__17163) - (((x10_long)1ll))));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ((mid__17159) - (((x10_long)1ll))));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ((midrl__17162) - (((x10_long)1ll))));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ((midr__17160) - (((x10_long)1ll))));
                                                                                           t__18563->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             ((midrr__17164) - (((x10_long)1ll))));
                                                                                           t__18563;
                                                                                       }))
                                                                                       );
    
    //#line 255 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* nrail__17166 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18581 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((midl__17158) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ((midl__17158) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ((midlr__17163) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ((mid__17159) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ((midrl__17162) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ((midr__17160) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ((midrr__17164) + (((x10_long)1ll))));
                                                                                           t__18581->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             this->FMGL(n));
                                                                                           t__18581;
                                                                                       }))
                                                                                       );
    
    //#line 256 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* prail__17167 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18599 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((x10_long)0ll));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ::x10aux::nullCheck(lbll__17046)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ::x10aux::nullCheck(lblr__17047)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ::x10aux::nullCheck(lbrl__17048)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             ::x10aux::nullCheck(lbrr__17049)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll)));
                                                                                           t__18599;
                                                                                       }))
                                                                                       );
    
    //#line 257 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* trail__17168 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                           ::x10::lang::Rail< x10_long >* t__18617 =
                                                                                             ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)0ll),
                                                                                             ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)1ll),
                                                                                             ::x10aux::nullCheck(lbll__17046)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)2ll),
                                                                                             ::x10aux::nullCheck(lbl__17044)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)3ll),
                                                                                             ::x10aux::nullCheck(lblr__17047)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)4ll),
                                                                                             ::x10aux::nullCheck(lb__17025)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)5ll),
                                                                                             ::x10aux::nullCheck(lbrl__17048)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)6ll),
                                                                                             ::x10aux::nullCheck(lbr__17045)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617->x10::lang::Rail< x10_long >::__set(
                                                                                             ((x10_long)7ll),
                                                                                             ::x10aux::nullCheck(lbrr__17049)->x10::lang::Rail< x10_long >::__apply(
                                                                                               ((x10_long)0ll)));
                                                                                           t__18617;
                                                                                       }))
                                                                                       );
    {
        
        //#line 273 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__17199 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                {
                    x10_long i__17019;
                    for (i__17019 = ((x10_long)0ll); ((i__17019) <= (((x10_long)7ll)));
                         i__17019 = ((i__17019) + (((x10_long)1ll))))
                    {
                        x10_long l__17020 = i__17019;
                        ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__8)))bwt_SuffixArray__closure__8(krail__17165, l__17020, trail__17168, prail__17167, nrail__17166, this))));
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc18) {
            {
                ::x10::lang::CheckedThrowable* ct__17197 =
                  __exc18;
                {
                    ::x10::xrx::Runtime::pushException(ct__17197);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__17199);
    }
    }
    
    //#line 419 "SuffixArray.x10"
    x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
        
        //#line 420 "SuffixArray.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 422 "SuffixArray.x10"
    x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
        
        //#line 423 "SuffixArray.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 426 "SuffixArray.x10"
    x10_long bwt::SuffixArray::getI(x10_long t) {
        
        //#line 427 "SuffixArray.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 428 "SuffixArray.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 430 "SuffixArray.x10"
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
    
    ::x10::lang::String bwt::SuffixArray_Strings::sl__18644("Start Merge");

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
