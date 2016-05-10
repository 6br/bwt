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
        x10_long i__10858max__13244 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__13245;
            for (i__13245 = ((x10_long)0ll); ((i__13245) <= (i__10858max__13244));
                 i__13245 = ((i__13245) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__13245), ((i__13245) + (((x10_long)1ll))));
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
              i__13252)) - (((x10_long)1ll))), i__13252);
    }
    
    // captured environment
    ::bwt::SuffixArrayChar* saved_this;
    x10_long i__13252;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i__13252);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__4>();
        buf.record_reference(storage);
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        x10_long that_i__13252 = buf.read<x10_long>();
        bwt_SuffixArrayChar__closure__4* this_ = new (storage) bwt_SuffixArrayChar__closure__4(that_saved_this, that_i__13252);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__4(::bwt::SuffixArrayChar* saved_this, x10_long i__13252) : saved_this(saved_this), i__13252(i__13252) { }
    
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
            x10_long t_lb__13056 = t_lb;
            x10_long t_ub__13057 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__13058 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__13059 = p_lb;
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13060 = ((((t_lb) + (t_ub__13057))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13061 = ((((p_lb) + (p_ub__13058))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13057) - (t_lb__13056))) > (((x10_long)1ll))) ||
                   ((((p_ub__13058) - (p_lb__13059))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13064;
                        goto __ret__13065; __ret__13065: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13066 = saved_this->getI(
                                                  t_mid__13060);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13067 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13061);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13060)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13069 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13066)));
                                    x10_long a__13070 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13060)) + (saved_this->FMGL(n0))));
                                    x10_long b__13071 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13067)));
                                    x10_long b__13072 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13067) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13069) < (b__13071)) ||
                                    ((::x10aux::struct_equals(a__13069,
                                                              b__13071)) &&
                                    ((a__13070) <= (b__13072))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13060)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__13066))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__13066) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13060)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__13067))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__13067) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__13067) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13064 = true;
                                goto __ret__13065_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13064 = false;
                                goto __ret__13065_end_;
                            }
                            
                        }goto __ret__13065_end_; __ret__13065_end_: ;
                        }
                        ret__13064;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13056 = t_mid__13060;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13058 = p_mid__13061;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13057 = t_mid__13060;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13059 = p_mid__13061;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13060 = ((((t_lb__13056) + (t_ub__13057))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13061 = ((((p_lb__13059) + (p_ub__13058))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13073 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15163 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15163->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13056);
                                                                                                t__15163->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13059);
                                                                                                t__15163;
                                                                                            }))
                                                                                            );
            lb__13073;
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
            x10_long t_lb__13020 = t_lb;
            x10_long t_ub__13021 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__13022 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__13023 = p_lb;
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13024 = ((((t_lb) + (t_ub__13021))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13025 = ((((p_lb) + (p_ub__13022))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13021) - (t_lb__13020))) > (((x10_long)1ll))) ||
                   ((((p_ub__13022) - (p_lb__13023))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13028;
                        goto __ret__13029; __ret__13029: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13030 = saved_this->getI(
                                                  t_mid__13024);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13031 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13025);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13024)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13033 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13030)));
                                    x10_long a__13034 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13024)) + (saved_this->FMGL(n0))));
                                    x10_long b__13035 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13031)));
                                    x10_long b__13036 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13031) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13033) < (b__13035)) ||
                                    ((::x10aux::struct_equals(a__13033,
                                                              b__13035)) &&
                                    ((a__13034) <= (b__13036))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13024)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__13030))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__13030) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13024)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__13031))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__13031) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__13031) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13028 = true;
                                goto __ret__13029_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13028 = false;
                                goto __ret__13029_end_;
                            }
                            
                        }goto __ret__13029_end_; __ret__13029_end_: ;
                        }
                        ret__13028;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13020 = t_mid__13024;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13022 = p_mid__13025;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13021 = t_mid__13024;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13023 = p_mid__13025;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13024 = ((((t_lb__13020) + (t_ub__13021))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13025 = ((((p_lb__13023) + (p_ub__13022))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13037 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15157 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15157->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13020);
                                                                                                t__15157->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13023);
                                                                                                t__15157;
                                                                                            }))
                                                                                            );
            lb__13037;
            }))
            ;
        {
            
            //#line 260 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13304 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 261 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__7)))bwt_SuffixArrayChar__closure__7(&(lbll), &(t_lb), lbl, &(p_lb), saved_this))));
                    
                    //#line 262 "SuffixArrayChar.x10"
                    lblr = (__extension__ ({
                        x10_long t_lb__13092 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__13093 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__13094 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__13095 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 234 "SuffixArrayChar.x10"
                        x10_long t_mid__13096 = ((((t_lb__13092) + (t_ub__13093))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 235 "SuffixArrayChar.x10"
                        x10_long p_mid__13097 = ((((p_lb__13095) + (p_ub__13094))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 236 "SuffixArrayChar.x10"
                        while ((((((t_ub__13093) - (t_lb__13092))) > (((x10_long)1ll))) ||
                               ((((p_ub__13094) - (p_lb__13095))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 237 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 221 "SuffixArrayChar.x10"
                                    x10_boolean ret__13100;
                                    goto __ret__13101; __ret__13101: {
                                    {
                                        
                                        //#line 222 "SuffixArrayChar.x10"
                                        x10_long i__13102 =
                                          saved_this->getI(
                                            t_mid__13096);
                                        
                                        //#line 223 "SuffixArrayChar.x10"
                                        x10_long j__13103 =
                                          ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__13097);
                                        
                                        //#line 224 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__13096)) < (saved_this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__13105 =
                                                  ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__13102)));
                                                x10_long a__13106 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13096)) + (saved_this->FMGL(n0))));
                                                x10_long b__13107 =
                                                  ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__13103)));
                                                x10_long b__13108 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__13103) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__13105) < (b__13107)) ||
                                                ((::x10aux::struct_equals(a__13105,
                                                                          b__13107)) &&
                                                ((a__13106) <= (b__13108))));
                                            }))
                                            ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__13096)) >= (saved_this->FMGL(n0))) &&
                                            saved_this->leq(
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            i__13102))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            ((i__13102) + (((x10_long)1ll)))))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__13096)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            j__13103))),
                                              ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                            ((j__13103) + (((x10_long)1ll)))))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((j__13103) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 227 "SuffixArrayChar.x10"
                                            ret__13100 = true;
                                            goto __ret__13101_end_;
                                        } else {
                                            
                                            //#line 229 "SuffixArrayChar.x10"
                                            ret__13100 = false;
                                            goto __ret__13101_end_;
                                        }
                                        
                                    }goto __ret__13101_end_; __ret__13101_end_: ;
                                    }
                                    ret__13100;
                                    }))
                                    ) {
                                    
                                    //#line 238 "SuffixArrayChar.x10"
                                    t_lb__13092 = t_mid__13096;
                                    
                                    //#line 239 "SuffixArrayChar.x10"
                                    p_ub__13094 = p_mid__13097;
                                } else {
                                    
                                    //#line 241 "SuffixArrayChar.x10"
                                    t_ub__13093 = t_mid__13096;
                                    
                                    //#line 242 "SuffixArrayChar.x10"
                                    p_lb__13095 = p_mid__13097;
                                }
                                
                            
                            //#line 244 "SuffixArrayChar.x10"
                            t_mid__13096 = ((((t_lb__13092) + (t_ub__13093))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 245 "SuffixArrayChar.x10"
                            p_mid__13097 = ((((p_lb__13095) + (p_ub__13094))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 247 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__13109 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15169 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15169->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__13092);
                                                                   t__15169->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__13095);
                                                                   t__15169;
                                                               }))
                                                               );
                        lb__13109;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc36) {
                    {
                        ::x10::lang::CheckedThrowable* ct__13302 =
                          __exc36;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__13302);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__13304);
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
            x10_long t_lb__13164 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__13165 = t_ub;
            x10_long p_ub__13166 = p_ub;
            x10_long p_lb__13167 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__13168 = ((((t_lb__13164) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__13169 = ((((p_lb__13167) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__13165) - (t_lb__13164))) > (((x10_long)1ll))) ||
                   ((((p_ub__13166) - (p_lb__13167))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__13172;
                        goto __ret__13173; __ret__13173: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__13174 = saved_this->getI(
                                                  t_mid__13168);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__13175 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__13169);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__13168)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__13177 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__13174)));
                                    x10_long a__13178 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13168)) + (saved_this->FMGL(n0))));
                                    x10_long b__13179 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__13175)));
                                    x10_long b__13180 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__13175) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__13177) < (b__13179)) ||
                                    ((::x10aux::struct_equals(a__13177,
                                                              b__13179)) &&
                                    ((a__13178) <= (b__13180))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__13168)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              i__13174))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((i__13174) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13168)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              j__13175))),
                                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                              ((j__13175) + (((x10_long)1ll)))))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__13175) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__13172 = true;
                                goto __ret__13173_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__13172 = false;
                                goto __ret__13173_end_;
                            }
                            
                        }goto __ret__13173_end_; __ret__13173_end_: ;
                        }
                        ret__13172;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__13164 = t_mid__13168;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__13166 = p_mid__13169;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__13165 = t_mid__13168;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__13167 = p_mid__13169;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__13168 = ((((t_lb__13164) + (t_ub__13165))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__13169 = ((((p_lb__13167) + (p_ub__13166))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13181 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15181 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15181->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__13164);
                                                                                                t__15181->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__13167);
                                                                                                t__15181;
                                                                                            }))
                                                                                            );
            lb__13181;
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
        
        //#line 286 "SuffixArrayChar.x10"
        x10_long k__13262 = krail->x10::lang::Rail< x10_long >::__apply(l__13273);
        
        //#line 287 "SuffixArrayChar.x10"
        x10_long t__13263 = trail->x10::lang::Rail< x10_long >::__apply(l__13273);
        
        //#line 288 "SuffixArrayChar.x10"
        x10_long p__13264 = prail->x10::lang::Rail< x10_long >::__apply(l__13273);
        
        //#line 289 "SuffixArrayChar.x10"
        while (((k__13262) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__13273)))) {
            
            //#line 290 "SuffixArrayChar.x10"
            k__13262 = ((k__13262) + (((x10_long)1ll)));
            
            //#line 291 "SuffixArrayChar.x10"
            x10_long i__13265 = saved_this->getI(t__13263);
            
            //#line 292 "SuffixArrayChar.x10"
            x10_long j__13266 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__13264);
            
            //#line 294 "SuffixArrayChar.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__13263)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__13268 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      i__13265)));
                    x10_long a__13269 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__13263)) + (saved_this->FMGL(n0))));
                    x10_long b__13270 = ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                      j__13266)));
                    x10_long b__13271 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__13266) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__13268) < (b__13270)) || ((::x10aux::struct_equals(a__13268,
                                                                            b__13270)) &&
                    ((a__13269) <= (b__13271))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__13263)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              i__13265))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((i__13265) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__13263)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              j__13266))),
                                ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((j__13266) + (((x10_long)1ll)))))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__13266) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 297 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__13273,
                                                 ((x10_long)0ll))) &&
                    ((k__13262) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__13273)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 298 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k__13262, saved_this->bwt(i__13265));
                }
                
                //#line 300 "SuffixArrayChar.x10"
                t__13263 = ((t__13263) + (((x10_long)1ll)));
                
                //#line 301 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(t__13263, saved_this->FMGL(n02))))
                {
                    
                    //#line 302 "SuffixArrayChar.x10"
                    k__13262 = ((k__13262) + (((x10_long)1ll)));
                    
                    //#line 303 "SuffixArrayChar.x10"
                    x10_long i__10922max__13256 = ((((saved_this->FMGL(n0)) - (p__13264))) - (((x10_long)1ll)));
                    {
                        x10_long i__13257;
                        for (i__13257 = ((x10_long)0ll); ((i__13257) <= (i__10922max__13256));
                             i__13257 = ((i__13257) + (((x10_long)1ll))))
                        {
                            
                            //#line 304 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                              k__13262, saved_this->bwt(::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                          p__13264)));
                            
                            //#line 305 "SuffixArrayChar.x10"
                            p__13264 = ((p__13264) + (((x10_long)1ll)));
                            
                            //#line 306 "SuffixArrayChar.x10"
                            k__13262 = ((k__13262) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 310 "SuffixArrayChar.x10"
                if (!(((!::x10aux::struct_equals(l__13273,
                                                 ((x10_long)0ll))) &&
                    ((k__13262) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__13273)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 311 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k__13262, saved_this->bwt(j__13266));
                }
                
                //#line 313 "SuffixArrayChar.x10"
                p__13264 = ((p__13264) + (((x10_long)1ll)));
                
                //#line 314 "SuffixArrayChar.x10"
                if ((::x10aux::struct_equals(p__13264, saved_this->FMGL(n0))))
                {
                    
                    //#line 315 "SuffixArrayChar.x10"
                    k__13262 = ((k__13262) + (((x10_long)1ll)));
                    
                    //#line 316 "SuffixArrayChar.x10"
                    x10_long i__10938max__13259 = ((((saved_this->FMGL(n02)) - (t__13263))) - (((x10_long)1ll)));
                    {
                        x10_long i__13260;
                        for (i__13260 = ((x10_long)0ll); ((i__13260) <= (i__10938max__13259));
                             i__13260 = ((i__13260) + (((x10_long)1ll))))
                        {
                            
                            //#line 317 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                              k__13262, saved_this->bwt(saved_this->getI(
                                                          t__13263)));
                            
                            //#line 318 "SuffixArrayChar.x10"
                            t__13263 = ((t__13263) + (((x10_long)1ll)));
                            
                            //#line 319 "SuffixArrayChar.x10"
                            k__13262 = ((k__13262) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__13273;
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
        buf.write(this->l__13273);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArrayChar__closure__9* storage = ::x10aux::alloc_z<bwt_SuffixArrayChar__closure__9>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__13273 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArrayChar* that_saved_this = buf.read< ::bwt::SuffixArrayChar*>();
        bwt_SuffixArrayChar__closure__9* this_ = new (storage) bwt_SuffixArrayChar__closure__9(that_krail, that_l__13273, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArrayChar__closure__9(::x10::lang::Rail< x10_long >* krail, x10_long l__13273, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArrayChar* saved_this) : krail(krail), l__13273(l__13273), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArrayChar.x10:285-324";
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
    ::bwt::SuffixArrayChar* this__13237 = this;
    ::x10aux::nullCheck(this__13237)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13237)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13237)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13237)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13237)->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__13237)->FMGL(name) = ((x10_long)0ll);
    
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
        ::x10::xrx::FinishState* fs__13283 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__10826max__13238 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__13239;
                    for (i__13239 = ((x10_long)0ll); ((i__13239) <= (i__10826max__13238));
                         i__13239 = ((i__13239) + (((x10_long)1ll))))
                    {
                        
                        //#line 100 "SuffixArrayChar.x10"
                        if ((!::x10aux::struct_equals(((i__13239) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 101 "SuffixArrayChar.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__13239);
                            
                            //#line 102 "SuffixArrayChar.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc30) {
            {
                ::x10::lang::CheckedThrowable* ct__13281 =
                  __exc30;
                {
                    ::x10::xrx::Runtime::pushException(ct__13281);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__13283);
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
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArrayChar_Strings::sl__15264),
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
    x10_long i__10842max__13241 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__13242;
        for (i__13242 = ((x10_long)0ll); ((i__13242) <= (i__10842max__13241));
             i__13242 = ((i__13242) + (((x10_long)1ll))))
        {
            
            //#line 155 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__13242)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__13242)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__13242)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 156 "SuffixArrayChar.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 157 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__13242));
                
                //#line 158 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__13242)) + (((x10_long)1ll))));
                
                //#line 159 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__13242)) + (((x10_long)2ll))));
            }
            
            //#line 162 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__13242)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 163 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__13242)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 165 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__13242)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
            ::x10::xrx::FinishState* fs__13289 = ::x10::xrx::Runtime::startFinish();
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
                    x10_long i__10874max__13247 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__13248;
                        for (i__13248 = ((x10_long)0ll); ((i__13248) <= (i__10874max__13247));
                             i__13248 = ((i__13248) + (((x10_long)1ll))))
                        {
                            
                            //#line 185 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__13248)) < (this->FMGL(n0))))
                            {
                                
                                //#line 187 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__13248))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc33) {
                {
                    ::x10::lang::CheckedThrowable* ct__13287 =
                      __exc33;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__13287);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__13289);
        }
    } else {
        {
            
            //#line 196 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13294 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10_long i__10890max__13250 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__13251;
                        for (i__13251 = ((x10_long)0ll); ((i__13251) <= (i__10890max__13250));
                             i__13251 = ((i__13251) + (((x10_long)1ll))))
                        {
                            x10_long i__13252 = i__13251;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__4)))bwt_SuffixArrayChar__closure__4(this, i__13252))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc34) {
                {
                    ::x10::lang::CheckedThrowable* ct__13292 =
                      __exc34;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__13292);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__13294);
        }
        {
            
            //#line 197 "SuffixArrayChar.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__13299 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 198 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__5)))bwt_SuffixArrayChar__closure__5(this))));
                    
                    //#line 199 "SuffixArrayChar.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 200 "SuffixArrayChar.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 201 "SuffixArrayChar.x10"
                    x10_long i__10906max__13253 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__13254;
                        for (i__13254 = ((x10_long)0ll); ((i__13254) <= (i__10906max__13253));
                             i__13254 = ((i__13254) + (((x10_long)1ll))))
                        {
                            
                            //#line 202 "SuffixArrayChar.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__13254)) < (this->FMGL(n0))))
                            {
                                
                                //#line 204 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__13254))));
                                
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
            catch (::x10::lang::CheckedThrowable* __exc35) {
                {
                    ::x10::lang::CheckedThrowable* ct__13297 =
                      __exc35;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__13297);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__13299);
        }
    }
    
    //#line 214 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__15265)));
    
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
            x10_long t_lb__12984 = t_lb;
            x10_long t_ub__12985 = t_ub;
            x10_long p_ub__12986 = p_ub;
            x10_long p_lb__12987 = p_lb;
            
            //#line 234 "SuffixArrayChar.x10"
            x10_long t_mid__12988 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 235 "SuffixArrayChar.x10"
            x10_long p_mid__12989 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 236 "SuffixArrayChar.x10"
            while ((((((t_ub__12985) - (t_lb__12984))) > (((x10_long)1ll))) ||
                   ((((p_ub__12986) - (p_lb__12987))) > (((x10_long)1ll)))))
            {
                
                //#line 237 "SuffixArrayChar.x10"
                if ((__extension__ ({
                        
                        //#line 221 "SuffixArrayChar.x10"
                        x10_boolean ret__12992;
                        goto __ret__12993; __ret__12993: {
                        {
                            
                            //#line 222 "SuffixArrayChar.x10"
                            x10_long i__12994 = this->getI(
                                                  t_mid__12988);
                            
                            //#line 223 "SuffixArrayChar.x10"
                            x10_long j__12995 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__12989);
                            
                            //#line 224 "SuffixArrayChar.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__12988)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__12997 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      i__12994)));
                                    x10_long a__12998 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__12988)) + (this->FMGL(n0))));
                                    x10_long b__12999 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                      j__12995)));
                                    x10_long b__13000 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__12995) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__12997) < (b__12999)) ||
                                    ((::x10aux::struct_equals(a__12997,
                                                              b__12999)) &&
                                    ((a__12998) <= (b__13000))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__12988)) >= (this->FMGL(n0))) &&
                                this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        i__12994))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((i__12994) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__12988)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        j__12995))),
                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                        ((j__12995) + (((x10_long)1ll)))))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__12995) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 227 "SuffixArrayChar.x10"
                                ret__12992 = true;
                                goto __ret__12993_end_;
                            } else {
                                
                                //#line 229 "SuffixArrayChar.x10"
                                ret__12992 = false;
                                goto __ret__12993_end_;
                            }
                            
                        }goto __ret__12993_end_; __ret__12993_end_: ;
                        }
                        ret__12992;
                        }))
                        ) {
                        
                        //#line 238 "SuffixArrayChar.x10"
                        t_lb__12984 = t_mid__12988;
                        
                        //#line 239 "SuffixArrayChar.x10"
                        p_ub__12986 = p_mid__12989;
                    } else {
                        
                        //#line 241 "SuffixArrayChar.x10"
                        t_ub__12985 = t_mid__12988;
                        
                        //#line 242 "SuffixArrayChar.x10"
                        p_lb__12987 = p_mid__12989;
                    }
                    
                
                //#line 244 "SuffixArrayChar.x10"
                t_mid__12988 = ((((t_lb__12984) + (t_ub__12985))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 245 "SuffixArrayChar.x10"
                p_mid__12989 = ((((p_lb__12987) + (p_ub__12986))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 247 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* lb__13001 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__15151 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__15151->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__12984);
                                                                                                t__15151->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__12987);
                                                                                                t__15151;
                                                                                            }))
                                                                                            );
            lb__13001;
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
            ::x10::xrx::FinishState* fs__13314 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 259 "SuffixArrayChar.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__6)))bwt_SuffixArrayChar__closure__6(&(lbl), &(t_lb), lb, &(p_lb), this, &(lbll), &(lblr)))));
                    
                    //#line 264 "SuffixArrayChar.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__13128 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__13129 = t_ub;
                        x10_long p_ub__13130 = p_ub;
                        x10_long p_lb__13131 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 234 "SuffixArrayChar.x10"
                        x10_long t_mid__13132 = ((((t_lb__13128) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 235 "SuffixArrayChar.x10"
                        x10_long p_mid__13133 = ((((p_lb__13131) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 236 "SuffixArrayChar.x10"
                        while ((((((t_ub__13129) - (t_lb__13128))) > (((x10_long)1ll))) ||
                               ((((p_ub__13130) - (p_lb__13131))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 237 "SuffixArrayChar.x10"
                            if ((__extension__ ({
                                    
                                    //#line 221 "SuffixArrayChar.x10"
                                    x10_boolean ret__13136;
                                    goto __ret__13137; __ret__13137: {
                                    {
                                        
                                        //#line 222 "SuffixArrayChar.x10"
                                        x10_long i__13138 =
                                          this->getI(t_mid__13132);
                                        
                                        //#line 223 "SuffixArrayChar.x10"
                                        x10_long j__13139 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__13133);
                                        
                                        //#line 224 "SuffixArrayChar.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__13132)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__13141 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                i__13138)));
                                                x10_long a__13142 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__13132)) + (this->FMGL(n0))));
                                                x10_long b__13143 =
                                                  ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                j__13139)));
                                                x10_long b__13144 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__13139) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__13141) < (b__13143)) ||
                                                ((::x10aux::struct_equals(a__13141,
                                                                          b__13143)) &&
                                                ((a__13142) <= (b__13144))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__13132)) >= (this->FMGL(n0))) &&
                                            this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    i__13138))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((i__13138) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13132)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    j__13139))),
                                                      ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                    ((j__13139) + (((x10_long)1ll)))))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__13139) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 227 "SuffixArrayChar.x10"
                                            ret__13136 = true;
                                            goto __ret__13137_end_;
                                        } else {
                                            
                                            //#line 229 "SuffixArrayChar.x10"
                                            ret__13136 = false;
                                            goto __ret__13137_end_;
                                        }
                                        
                                    }goto __ret__13137_end_; __ret__13137_end_: ;
                                    }
                                    ret__13136;
                                    }))
                                    ) {
                                    
                                    //#line 238 "SuffixArrayChar.x10"
                                    t_lb__13128 = t_mid__13132;
                                    
                                    //#line 239 "SuffixArrayChar.x10"
                                    p_ub__13130 = p_mid__13133;
                                } else {
                                    
                                    //#line 241 "SuffixArrayChar.x10"
                                    t_ub__13129 = t_mid__13132;
                                    
                                    //#line 242 "SuffixArrayChar.x10"
                                    p_lb__13131 = p_mid__13133;
                                }
                                
                            
                            //#line 244 "SuffixArrayChar.x10"
                            t_mid__13132 = ((((t_lb__13128) + (t_ub__13129))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 245 "SuffixArrayChar.x10"
                            p_mid__13133 = ((((p_lb__13131) + (p_ub__13130))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 247 "SuffixArrayChar.x10"
                        ::x10::lang::Rail< x10_long >* lb__13145 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__15175 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__15175->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__13128);
                                                                   t__15175->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__13131);
                                                                   t__15175;
                                                               }))
                                                               );
                        lb__13145;
                        }))
                        ;
                    {
                        
                        //#line 265 "SuffixArrayChar.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__13310 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 266 "SuffixArrayChar.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__8)))bwt_SuffixArrayChar__closure__8(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                                
                                //#line 267 "SuffixArrayChar.x10"
                                lbrl = (__extension__ ({
                                    x10_long t_lb__13200 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long t_ub__13201 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long p_ub__13202 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    x10_long p_lb__13203 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 234 "SuffixArrayChar.x10"
                                    x10_long t_mid__13204 =
                                      ((((t_lb__13200) + (t_ub__13201))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 235 "SuffixArrayChar.x10"
                                    x10_long p_mid__13205 =
                                      ((((p_lb__13203) + (p_ub__13202))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 236 "SuffixArrayChar.x10"
                                    while ((((((t_ub__13201) - (t_lb__13200))) > (((x10_long)1ll))) ||
                                           ((((p_ub__13202) - (p_lb__13203))) > (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 237 "SuffixArrayChar.x10"
                                        if ((__extension__ ({
                                                
                                                //#line 221 "SuffixArrayChar.x10"
                                                x10_boolean ret__13208;
                                                goto __ret__13209; __ret__13209: {
                                                {
                                                    
                                                    //#line 222 "SuffixArrayChar.x10"
                                                    x10_long i__13210 =
                                                      this->getI(
                                                        t_mid__13204);
                                                    
                                                    //#line 223 "SuffixArrayChar.x10"
                                                    x10_long j__13211 =
                                                      ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                        p_mid__13205);
                                                    
                                                    //#line 224 "SuffixArrayChar.x10"
                                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__13204)) < (this->FMGL(n0))) &&
                                                        (__extension__ ({
                                                            x10_long a__13213 =
                                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                            i__13210)));
                                                            x10_long a__13214 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                    t_mid__13204)) + (this->FMGL(n0))));
                                                            x10_long b__13215 =
                                                              ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                            j__13211)));
                                                            x10_long b__13216 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((j__13211) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                            (((a__13213) < (b__13215)) ||
                                                            ((::x10aux::struct_equals(a__13213,
                                                                                      b__13215)) &&
                                                            ((a__13214) <= (b__13216))));
                                                        }))
                                                        ) ||
                                                        (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t_mid__13204)) >= (this->FMGL(n0))) &&
                                                        this->leq(
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        i__13210))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        ((i__13210) + (((x10_long)1ll)))))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                  t_mid__13204)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        j__13211))),
                                                          ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                        ((j__13211) + (((x10_long)1ll)))))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((j__13211) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                                    {
                                                        
                                                        //#line 227 "SuffixArrayChar.x10"
                                                        ret__13208 =
                                                          true;
                                                        goto __ret__13209_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 229 "SuffixArrayChar.x10"
                                                        ret__13208 =
                                                          false;
                                                        goto __ret__13209_end_;
                                                    }
                                                    
                                                }goto __ret__13209_end_; __ret__13209_end_: ;
                                                }
                                                ret__13208;
                                                }))
                                                ) {
                                                
                                                //#line 238 "SuffixArrayChar.x10"
                                                t_lb__13200 =
                                                  t_mid__13204;
                                                
                                                //#line 239 "SuffixArrayChar.x10"
                                                p_ub__13202 =
                                                  p_mid__13205;
                                            } else {
                                                
                                                //#line 241 "SuffixArrayChar.x10"
                                                t_ub__13201 =
                                                  t_mid__13204;
                                                
                                                //#line 242 "SuffixArrayChar.x10"
                                                p_lb__13203 =
                                                  p_mid__13205;
                                            }
                                            
                                        
                                        //#line 244 "SuffixArrayChar.x10"
                                        t_mid__13204 = ((((t_lb__13200) + (t_ub__13201))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        
                                        //#line 245 "SuffixArrayChar.x10"
                                        p_mid__13205 = ((((p_lb__13203) + (p_ub__13202))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        }
                                        
                                    
                                    //#line 247 "SuffixArrayChar.x10"
                                    ::x10::lang::Rail< x10_long >* lb__13217 =
                                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                               ::x10::lang::Rail< x10_long >* t__15187 =
                                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                               t__15187->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)0ll),
                                                                                 t_lb__13200);
                                                                               t__15187->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)1ll),
                                                                                 p_lb__13203);
                                                                               t__15187;
                                                                           }))
                                                                           );
                                    lb__13217;
                                    }))
                                    ;
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc37) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__13308 =
                                      __exc37;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__13308);
                                    }
                                }
                            }
                        ::x10::xrx::Runtime::stopFinish(fs__13310);
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc38) {
                    {
                        ::x10::lang::CheckedThrowable* ct__13312 =
                          __exc38;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__13312);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__13314);
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
                                                                                            ::x10::lang::Rail< x10_long >* t__15193 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)-1ll));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midll) - (((x10_long)1ll))));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midl) - (((x10_long)1ll))));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((midlr) - (((x10_long)1ll))));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((mid) - (((x10_long)1ll))));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midrl) - (((x10_long)1ll))));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midr) - (((x10_long)1ll))));
                                                                                            t__15193->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ((midrr) - (((x10_long)1ll))));
                                                                                            t__15193;
                                                                                        }))
                                                                                        );
            
            //#line 281 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15211 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midlr) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((mid) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((midrl) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midr) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midrr) + (((x10_long)1ll))));
                                                                                            t__15211->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              this->FMGL(n));
                                                                                            t__15211;
                                                                                        }))
                                                                                        );
            
            //#line 282 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15229 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)0ll));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__15229;
                                                                                        }))
                                                                                        );
            
            //#line 283 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__15247 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__15247;
                                                                                        }))
                                                                                        );
            {
                
                //#line 285 "SuffixArrayChar.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__13319 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long i__13272;
                            for (i__13272 = ((x10_long)0ll);
                                 ((i__13272) <= (((x10_long)7ll)));
                                 i__13272 = ((i__13272) + (((x10_long)1ll))))
                            {
                                x10_long l__13273 = i__13272;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArrayChar__closure__9)))bwt_SuffixArrayChar__closure__9(krail, l__13273, trail, prail, nrail, this))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc39) {
                    {
                        ::x10::lang::CheckedThrowable* ct__13317 =
                          __exc39;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__13317);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__13319);
            }
        } else {
            
            //#line 326 "SuffixArrayChar.x10"
            x10_long p = ((x10_long)0ll);
            
            //#line 327 "SuffixArrayChar.x10"
            x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
            
            //#line 328 "SuffixArrayChar.x10"
            x10_long k = ((x10_long)-1ll);
            
            //#line 329 "SuffixArrayChar.x10"
            while (((k) < (this->FMGL(n)))) {
                
                //#line 330 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 331 "SuffixArrayChar.x10"
                x10_long i = this->getI(t);
                
                //#line 332 "SuffixArrayChar.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p);
                
                //#line 334 "SuffixArrayChar.x10"
                if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__13225 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          i)));
                        x10_long a__13226 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__13227 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                          j)));
                        x10_long b__13228 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__13225) < (b__13227)) || ((::x10aux::struct_equals(a__13225,
                                                                                b__13227)) &&
                        ((a__13226) <= (b__13228))));
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
                    
                    //#line 337 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k, this->bwt(i));
                    
                    //#line 338 "SuffixArrayChar.x10"
                    t = ((t) + (((x10_long)1ll)));
                    
                    //#line 339 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                    {
                        
                        //#line 340 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 341 "SuffixArrayChar.x10"
                        x10_long i__10970max__13274 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__13275;
                            for (i__13275 = ((x10_long)0ll);
                                 ((i__13275) <= (i__10970max__13274));
                                 i__13275 = ((i__13275) + (((x10_long)1ll))))
                            {
                                
                                //#line 342 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                                  k, this->bwt(::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                 p)));
                                
                                //#line 343 "SuffixArrayChar.x10"
                                p = ((p) + (((x10_long)1ll)));
                                
                                //#line 344 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                } else {
                    
                    //#line 348 "SuffixArrayChar.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                      k, this->bwt(j));
                    
                    //#line 349 "SuffixArrayChar.x10"
                    p = ((p) + (((x10_long)1ll)));
                    
                    //#line 350 "SuffixArrayChar.x10"
                    if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                    {
                        
                        //#line 351 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 352 "SuffixArrayChar.x10"
                        x10_long i__10986max__13277 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__13278;
                            for (i__13278 = ((x10_long)0ll);
                                 ((i__13278) <= (i__10986max__13277));
                                 i__13278 = ((i__13278) + (((x10_long)1ll))))
                            {
                                
                                //#line 353 "SuffixArrayChar.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_byte >::__set(
                                  k, this->bwt(this->getI(
                                                 t)));
                                
                                //#line 354 "SuffixArrayChar.x10"
                                t = ((t) + (((x10_long)1ll)));
                                
                                //#line 355 "SuffixArrayChar.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                }
                
            }
            
        }
        }
        
    
    //#line 363 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long b1, x10_long b2) {
        
        //#line 364 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 367 "SuffixArrayChar.x10"
    x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                          x10_long a3, x10_long b1,
                                          x10_long b2, x10_long b3) {
        
        //#line 368 "SuffixArrayChar.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 371 "SuffixArrayChar.x10"
    x10_long bwt::SuffixArrayChar::getI(x10_long t) {
        
        //#line 372 "SuffixArrayChar.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 373 "SuffixArrayChar.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 375 "SuffixArrayChar.x10"
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
    
    ::x10::lang::String bwt::SuffixArrayChar_Strings::sl__15264("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__15265("Start Merge Final");

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
