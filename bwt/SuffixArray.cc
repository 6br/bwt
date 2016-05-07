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
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>
#ifndef BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class bwt_SuffixArray__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Rail< x10_long >* sa12){
        
        //#line 160 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(saved_this->FMGL(R), saved_this->FMGL(name),
                                                sa12, saved_this->FMGL(num_threads));
        
        //#line 161 "SuffixArray.x10"
        bwa->run();
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
        bwt_SuffixArray__closure__1* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__1>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__1* this_ = new (storage) bwt_SuffixArray__closure__1(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__1(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:159-162";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__1_CLOSURE
#ifndef BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#define BWT_SUFFIXARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class bwt_SuffixArray__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Rail< x10_long >* sa12){
     
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__2* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__2>();
        buf.record_reference(storage);
        bwt_SuffixArray__closure__2* this_ = new (storage) bwt_SuffixArray__closure__2();
        return this_;
    }
    
    bwt_SuffixArray__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:164";
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
        x10_long i__19477max__20059 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__20060;
            for (i__20060 = ((x10_long)0ll); ((i__20060) <= (i__19477max__20059));
                 i__20060 = ((i__20060) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__20060), ((i__20060) + (((x10_long)1ll))));
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
        return "SuffixArray.x10:167";
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
        lbll = (__extension__ ({
            x10_long t_lb__19840 = t_lb;
            x10_long t_ub__19841 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__19842 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__19843 = p_lb;
            
            //#line 219 "SuffixArray.x10"
            x10_long t_mid__19844 = ((((t_lb) + (t_ub__19841))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 220 "SuffixArray.x10"
            x10_long p_mid__19845 = ((((p_lb) + (p_ub__19842))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 221 "SuffixArray.x10"
            while ((((((t_ub__19841) - (t_lb__19840))) > (((x10_long)1ll))) ||
                   ((((p_ub__19842) - (p_lb__19843))) > (((x10_long)1ll)))))
            {
                
                //#line 222 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 206 "SuffixArray.x10"
                        x10_boolean ret__19848;
                        goto __ret__19849; __ret__19849: {
                        {
                            
                            //#line 207 "SuffixArray.x10"
                            x10_long i__19850 = saved_this->getI(
                                                  t_mid__19844);
                            
                            //#line 208 "SuffixArray.x10"
                            x10_long j__19851 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__19845);
                            
                            //#line 209 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__19844)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__19853 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__19850);
                                    x10_long a__19854 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__19844)) + (saved_this->FMGL(n0))));
                                    x10_long b__19855 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__19851);
                                    x10_long b__19856 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__19851) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__19853) < (b__19855)) ||
                                    ((::x10aux::struct_equals(a__19853,
                                                              b__19855)) &&
                                    ((a__19854) <= (b__19856))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__19844)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__19850),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__19850) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__19844)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__19851),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__19851) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__19851) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 212 "SuffixArray.x10"
                                ret__19848 = true;
                                goto __ret__19849_end_;
                            } else {
                                
                                //#line 214 "SuffixArray.x10"
                                ret__19848 = false;
                                goto __ret__19849_end_;
                            }
                            
                        }goto __ret__19849_end_; __ret__19849_end_: ;
                        }
                        ret__19848;
                        }))
                        ) {
                        
                        //#line 223 "SuffixArray.x10"
                        t_lb__19840 = t_mid__19844;
                        
                        //#line 224 "SuffixArray.x10"
                        p_ub__19842 = p_mid__19845;
                    } else {
                        
                        //#line 226 "SuffixArray.x10"
                        t_ub__19841 = t_mid__19844;
                        
                        //#line 227 "SuffixArray.x10"
                        p_lb__19843 = p_mid__19845;
                    }
                    
                
                //#line 229 "SuffixArray.x10"
                t_mid__19844 = ((((t_lb__19840) + (t_ub__19841))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 230 "SuffixArray.x10"
                p_mid__19845 = ((((p_lb__19843) + (p_ub__19842))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 232 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__19857 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21327 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21327->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__19840);
                                                                                                t__21327->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__19843);
                                                                                                t__21327;
                                                                                            }))
                                                                                            );
            lb__19857;
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
            return "SuffixArray.x10:246";
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
        lbl = (__extension__ ({
            x10_long t_lb__19804 = t_lb;
            x10_long t_ub__19805 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long p_ub__19806 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            x10_long p_lb__19807 = p_lb;
            
            //#line 219 "SuffixArray.x10"
            x10_long t_mid__19808 = ((((t_lb) + (t_ub__19805))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 220 "SuffixArray.x10"
            x10_long p_mid__19809 = ((((p_lb) + (p_ub__19806))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 221 "SuffixArray.x10"
            while ((((((t_ub__19805) - (t_lb__19804))) > (((x10_long)1ll))) ||
                   ((((p_ub__19806) - (p_lb__19807))) > (((x10_long)1ll)))))
            {
                
                //#line 222 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 206 "SuffixArray.x10"
                        x10_boolean ret__19812;
                        goto __ret__19813; __ret__19813: {
                        {
                            
                            //#line 207 "SuffixArray.x10"
                            x10_long i__19814 = saved_this->getI(
                                                  t_mid__19808);
                            
                            //#line 208 "SuffixArray.x10"
                            x10_long j__19815 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__19809);
                            
                            //#line 209 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__19808)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__19817 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__19814);
                                    x10_long a__19818 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__19808)) + (saved_this->FMGL(n0))));
                                    x10_long b__19819 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__19815);
                                    x10_long b__19820 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__19815) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__19817) < (b__19819)) ||
                                    ((::x10aux::struct_equals(a__19817,
                                                              b__19819)) &&
                                    ((a__19818) <= (b__19820))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__19808)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__19814),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__19814) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__19808)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__19815),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__19815) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__19815) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 212 "SuffixArray.x10"
                                ret__19812 = true;
                                goto __ret__19813_end_;
                            } else {
                                
                                //#line 214 "SuffixArray.x10"
                                ret__19812 = false;
                                goto __ret__19813_end_;
                            }
                            
                        }goto __ret__19813_end_; __ret__19813_end_: ;
                        }
                        ret__19812;
                        }))
                        ) {
                        
                        //#line 223 "SuffixArray.x10"
                        t_lb__19804 = t_mid__19808;
                        
                        //#line 224 "SuffixArray.x10"
                        p_ub__19806 = p_mid__19809;
                    } else {
                        
                        //#line 226 "SuffixArray.x10"
                        t_ub__19805 = t_mid__19808;
                        
                        //#line 227 "SuffixArray.x10"
                        p_lb__19807 = p_mid__19809;
                    }
                    
                
                //#line 229 "SuffixArray.x10"
                t_mid__19808 = ((((t_lb__19804) + (t_ub__19805))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 230 "SuffixArray.x10"
                p_mid__19809 = ((((p_lb__19807) + (p_ub__19806))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 232 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__19821 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21321 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21321->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__19804);
                                                                                                t__21321->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__19807);
                                                                                                t__21321;
                                                                                            }))
                                                                                            );
            lb__19821;
            }))
            ;
        {
            
            //#line 245 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20111 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 246 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__5)))bwt_SuffixArray__closure__5(&(lbll), &(t_lb), lbl, &(p_lb), saved_this))));
                    
                    //#line 247 "SuffixArray.x10"
                    lblr = (__extension__ ({
                        x10_long t_lb__19876 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__19877 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long p_ub__19878 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        x10_long p_lb__19879 = ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 219 "SuffixArray.x10"
                        x10_long t_mid__19880 = ((((t_lb__19876) + (t_ub__19877))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 220 "SuffixArray.x10"
                        x10_long p_mid__19881 = ((((p_lb__19879) + (p_ub__19878))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 221 "SuffixArray.x10"
                        while ((((((t_ub__19877) - (t_lb__19876))) > (((x10_long)1ll))) ||
                               ((((p_ub__19878) - (p_lb__19879))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 222 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 206 "SuffixArray.x10"
                                    x10_boolean ret__19884;
                                    goto __ret__19885; __ret__19885: {
                                    {
                                        
                                        //#line 207 "SuffixArray.x10"
                                        x10_long i__19886 =
                                          saved_this->getI(
                                            t_mid__19880);
                                        
                                        //#line 208 "SuffixArray.x10"
                                        x10_long j__19887 =
                                          ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__19881);
                                        
                                        //#line 209 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__19880)) < (saved_this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__19889 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__19886);
                                                x10_long a__19890 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__19880)) + (saved_this->FMGL(n0))));
                                                x10_long b__19891 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__19887);
                                                x10_long b__19892 =
                                                  ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__19887) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__19889) < (b__19891)) ||
                                                ((::x10aux::struct_equals(a__19889,
                                                                          b__19891)) &&
                                                ((a__19890) <= (b__19892))));
                                            }))
                                            ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__19880)) >= (saved_this->FMGL(n0))) &&
                                            saved_this->leq(
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                i__19886),
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                ((i__19886) + (((x10_long)1ll)))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__19880)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                j__19887),
                                              ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                ((j__19887) + (((x10_long)1ll)))),
                                              ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                ((((j__19887) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 212 "SuffixArray.x10"
                                            ret__19884 = true;
                                            goto __ret__19885_end_;
                                        } else {
                                            
                                            //#line 214 "SuffixArray.x10"
                                            ret__19884 = false;
                                            goto __ret__19885_end_;
                                        }
                                        
                                    }goto __ret__19885_end_; __ret__19885_end_: ;
                                    }
                                    ret__19884;
                                    }))
                                    ) {
                                    
                                    //#line 223 "SuffixArray.x10"
                                    t_lb__19876 = t_mid__19880;
                                    
                                    //#line 224 "SuffixArray.x10"
                                    p_ub__19878 = p_mid__19881;
                                } else {
                                    
                                    //#line 226 "SuffixArray.x10"
                                    t_ub__19877 = t_mid__19880;
                                    
                                    //#line 227 "SuffixArray.x10"
                                    p_lb__19879 = p_mid__19881;
                                }
                                
                            
                            //#line 229 "SuffixArray.x10"
                            t_mid__19880 = ((((t_lb__19876) + (t_ub__19877))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 230 "SuffixArray.x10"
                            p_mid__19881 = ((((p_lb__19879) + (p_ub__19878))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 232 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__19893 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__21333 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__21333->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__19876);
                                                                   t__21333->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__19879);
                                                                   t__21333;
                                                               }))
                                                               );
                        lb__19893;
                        }))
                        ;
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc17) {
                    {
                        ::x10::lang::CheckedThrowable* ct__20109 =
                          __exc17;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__20109);
                        }
                    }
                }
            ::x10::xrx::Runtime::stopFinish(fs__20111);
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
            bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
            buf.record_reference(storage);
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbl = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_struct_lval<x10_long> that_t_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::x10::lang::Rail< x10_long >* that_lb = buf.read< ::x10::lang::Rail< x10_long >*>();
            x10aux::captured_struct_lval<x10_long> that_p_lb = buf.read<x10aux::captured_struct_lval<x10_long> >();
            ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lbll = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_lblr = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
            bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_lbl, that_t_lb, that_lb, that_p_lb, that_saved_this, that_lbll, that_lblr);
            return this_;
        }
        
        bwt_SuffixArray__closure__4(x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbl, x10aux::captured_struct_lval<x10_long> t_lb, ::x10::lang::Rail< x10_long >* lb, x10aux::captured_struct_lval<x10_long> p_lb, ::bwt::SuffixArray* saved_this, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lbll, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > lblr) : lbl(lbl), t_lb(t_lb), lb(lb), p_lb(p_lb), saved_this(saved_this), lbll(lbll), lblr(lblr) { }
        
        static const ::x10aux::serialization_id_t _serialization_id;
        
        static const ::x10aux::serialization_id_t _network_id;
        
        static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
        
        const char* toNativeString() {
            return "SuffixArray.x10:244-248";
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
        lbrr = (__extension__ ({
            x10_long t_lb__19948 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)0ll));
            x10_long t_ub__19949 = t_ub;
            x10_long p_ub__19950 = p_ub;
            x10_long p_lb__19951 = ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                     ((x10_long)1ll));
            
            //#line 219 "SuffixArray.x10"
            x10_long t_mid__19952 = ((((t_lb__19948) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 220 "SuffixArray.x10"
            x10_long p_mid__19953 = ((((p_lb__19951) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 221 "SuffixArray.x10"
            while ((((((t_ub__19949) - (t_lb__19948))) > (((x10_long)1ll))) ||
                   ((((p_ub__19950) - (p_lb__19951))) > (((x10_long)1ll)))))
            {
                
                //#line 222 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 206 "SuffixArray.x10"
                        x10_boolean ret__19956;
                        goto __ret__19957; __ret__19957: {
                        {
                            
                            //#line 207 "SuffixArray.x10"
                            x10_long i__19958 = saved_this->getI(
                                                  t_mid__19952);
                            
                            //#line 208 "SuffixArray.x10"
                            x10_long j__19959 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__19953);
                            
                            //#line 209 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__19952)) < (saved_this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__19961 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__19958);
                                    x10_long a__19962 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__19952)) + (saved_this->FMGL(n0))));
                                    x10_long b__19963 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__19959);
                                    x10_long b__19964 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__19959) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__19961) < (b__19963)) ||
                                    ((::x10aux::struct_equals(a__19961,
                                                              b__19963)) &&
                                    ((a__19962) <= (b__19964))));
                                }))
                                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__19952)) >= (saved_this->FMGL(n0))) &&
                                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  i__19958),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((i__19958) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__19952)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  j__19959),
                                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                  ((j__19959) + (((x10_long)1ll)))),
                                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                  ((((j__19959) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
                            {
                                
                                //#line 212 "SuffixArray.x10"
                                ret__19956 = true;
                                goto __ret__19957_end_;
                            } else {
                                
                                //#line 214 "SuffixArray.x10"
                                ret__19956 = false;
                                goto __ret__19957_end_;
                            }
                            
                        }goto __ret__19957_end_; __ret__19957_end_: ;
                        }
                        ret__19956;
                        }))
                        ) {
                        
                        //#line 223 "SuffixArray.x10"
                        t_lb__19948 = t_mid__19952;
                        
                        //#line 224 "SuffixArray.x10"
                        p_ub__19950 = p_mid__19953;
                    } else {
                        
                        //#line 226 "SuffixArray.x10"
                        t_ub__19949 = t_mid__19952;
                        
                        //#line 227 "SuffixArray.x10"
                        p_lb__19951 = p_mid__19953;
                    }
                    
                
                //#line 229 "SuffixArray.x10"
                t_mid__19952 = ((((t_lb__19948) + (t_ub__19949))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 230 "SuffixArray.x10"
                p_mid__19953 = ((((p_lb__19951) + (p_ub__19950))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 232 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__19965 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21345 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21345->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__19948);
                                                                                                t__21345->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__19951);
                                                                                                t__21345;
                                                                                            }))
                                                                                            );
            lb__19965;
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
            return "SuffixArray.x10:251";
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
        
        //#line 271 "SuffixArray.x10"
        x10_long k__20077 = krail->x10::lang::Rail< x10_long >::__apply(l__20088);
        
        //#line 272 "SuffixArray.x10"
        x10_long t__20078 = trail->x10::lang::Rail< x10_long >::__apply(l__20088);
        
        //#line 273 "SuffixArray.x10"
        x10_long p__20079 = prail->x10::lang::Rail< x10_long >::__apply(l__20088);
        
        //#line 274 "SuffixArray.x10"
        while (((k__20077) < (nrail->x10::lang::Rail< x10_long >::__apply(
                                l__20088)))) {
            
            //#line 275 "SuffixArray.x10"
            k__20077 = ((k__20077) + (((x10_long)1ll)));
            
            //#line 276 "SuffixArray.x10"
            x10_long i__20080 = saved_this->getI(t__20078);
            
            //#line 277 "SuffixArray.x10"
            x10_long j__20081 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__20079);
            
            //#line 279 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__20078)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__20083 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i__20080);
                    x10_long a__20084 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__20078)) + (saved_this->FMGL(n0))));
                    x10_long b__20085 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j__20081);
                    x10_long b__20086 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__20081) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__20083) < (b__20085)) || ((::x10aux::struct_equals(a__20083,
                                                                            b__20085)) &&
                    ((a__20084) <= (b__20086))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__20078)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__20080), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((i__20080) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__20078)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__20081), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((j__20081) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__20081) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 282 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__20088,
                                                 ((x10_long)0ll))) &&
                    ((k__20077) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__20088)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 283 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__20077, i__20080);
                }
                
                //#line 285 "SuffixArray.x10"
                t__20078 = ((t__20078) + (((x10_long)1ll)));
                
                //#line 286 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__20078, saved_this->FMGL(n02))))
                {
                    
                    //#line 287 "SuffixArray.x10"
                    k__20077 = ((k__20077) + (((x10_long)1ll)));
                    
                    //#line 288 "SuffixArray.x10"
                    x10_long i__19541max__20071 = ((((saved_this->FMGL(n0)) - (p__20079))) - (((x10_long)1ll)));
                    {
                        x10_long i__20072;
                        for (i__20072 = ((x10_long)0ll); ((i__20072) <= (i__19541max__20071));
                             i__20072 = ((i__20072) + (((x10_long)1ll))))
                        {
                            
                            //#line 289 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__20077, ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                          p__20079));
                            
                            //#line 290 "SuffixArray.x10"
                            p__20079 = ((p__20079) + (((x10_long)1ll)));
                            
                            //#line 291 "SuffixArray.x10"
                            k__20077 = ((k__20077) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 295 "SuffixArray.x10"
                if (!(((!::x10aux::struct_equals(l__20088,
                                                 ((x10_long)0ll))) &&
                    ((k__20077) <= (((krail->x10::lang::Rail< x10_long >::__apply(
                                        l__20088)) + (((x10_long)1ll))))))))
                {
                    
                    //#line 296 "SuffixArray.x10"
                    ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k__20077, j__20081);
                }
                
                //#line 298 "SuffixArray.x10"
                p__20079 = ((p__20079) + (((x10_long)1ll)));
                
                //#line 299 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__20079, saved_this->FMGL(n0))))
                {
                    
                    //#line 300 "SuffixArray.x10"
                    k__20077 = ((k__20077) + (((x10_long)1ll)));
                    
                    //#line 301 "SuffixArray.x10"
                    x10_long i__19557max__20074 = ((((saved_this->FMGL(n02)) - (t__20078))) - (((x10_long)1ll)));
                    {
                        x10_long i__20075;
                        for (i__20075 = ((x10_long)0ll); ((i__20075) <= (i__19557max__20074));
                             i__20075 = ((i__20075) + (((x10_long)1ll))))
                        {
                            
                            //#line 302 "SuffixArray.x10"
                            ::x10aux::nullCheck(saved_this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k__20077, saved_this->getI(
                                          t__20078));
                            
                            //#line 303 "SuffixArray.x10"
                            t__20078 = ((t__20078) + (((x10_long)1ll)));
                            
                            //#line 304 "SuffixArray.x10"
                            k__20077 = ((k__20077) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
    // captured environment
    ::x10::lang::Rail< x10_long >* krail;
    x10_long l__20088;
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
        buf.write(this->l__20088);
        buf.write(this->trail);
        buf.write(this->prail);
        buf.write(this->nrail);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__7* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__7>();
        buf.record_reference(storage);
        ::x10::lang::Rail< x10_long >* that_krail = buf.read< ::x10::lang::Rail< x10_long >*>();
        x10_long that_l__20088 = buf.read<x10_long>();
        ::x10::lang::Rail< x10_long >* that_trail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_prail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::x10::lang::Rail< x10_long >* that_nrail = buf.read< ::x10::lang::Rail< x10_long >*>();
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__7* this_ = new (storage) bwt_SuffixArray__closure__7(that_krail, that_l__20088, that_trail, that_prail, that_nrail, that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__7(::x10::lang::Rail< x10_long >* krail, x10_long l__20088, ::x10::lang::Rail< x10_long >* trail, ::x10::lang::Rail< x10_long >* prail, ::x10::lang::Rail< x10_long >* nrail, ::bwt::SuffixArray* saved_this) : krail(krail), l__20088(l__20088), trail(trail), prail(prail), nrail(nrail), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:270-309";
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
    ::bwt::SuffixArray* this__20030 = this;
    ::x10aux::nullCheck(this__20030)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20030)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20030)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20030)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__20030)->FMGL(name) = ((x10_long)0ll);
    
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

//#line 51 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 52 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 53 "SuffixArray.x10"
    x10_long i__19365max__20038 = this->FMGL(k);
    {
        x10_long i__20039;
        for (i__20039 = ((x10_long)0ll); ((i__20039) <= (i__19365max__20038));
             i__20039 = ((i__20039) + (((x10_long)1ll))))
        {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__20039, ((x10_long)0ll));
        }
    }
    
    //#line 54 "SuffixArray.x10"
    x10_long i__19381max__20041 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__20042;
        for (i__20042 = ((x10_long)0ll); ((i__20042) <= (i__19381max__20041));
             i__20042 = ((i__20042) + (((x10_long)1ll))))
        {
            
            //#line 55 "SuffixArray.x10"
            x10_long i__20032 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__20042)) + (((x10_long)(rOffs)))));
            x10_long r__20033 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__20032)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__20032, r__20033);
        }
    }
    
    //#line 57 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 58 "SuffixArray.x10"
    x10_long i__19397max__20044 = this->FMGL(k);
    {
        x10_long i__20045;
        for (i__20045 = ((x10_long)0ll); ((i__20045) <= (i__19397max__20044));
             i__20045 = ((i__20045) + (((x10_long)1ll))))
        {
            
            //#line 59 "SuffixArray.x10"
            x10_long t__20034 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__20045);
            
            //#line 60 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__20045, sum);
            
            //#line 61 "SuffixArray.x10"
            sum = ((sum) + (t__20034));
        }
    }
    
    //#line 63 "SuffixArray.x10"
    x10_long i__19413max__20047 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__20048;
        for (i__20048 = ((x10_long)0ll); ((i__20048) <= (i__19413max__20047));
             i__20048 = ((i__20048) + (((x10_long)1ll))))
        {
            
            //#line 64 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__20048)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__20048));
            
            //#line 65 "SuffixArray.x10"
            x10_long i__20036 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__20048)) + (((x10_long)(rOffs)))));
            x10_long r__20037 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__20036)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__20036, r__20037);
        }
    }
    
}

//#line 69 "SuffixArray.x10"
void bwt::SuffixArray::run() {
    
    //#line 71 "SuffixArray.x10"
    this->constructSample();
    
    //#line 73 "SuffixArray.x10"
    this->sortSample();
    
    //#line 75 "SuffixArray.x10"
    this->sortNonSample();
}

//#line 79 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 80 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 81 "SuffixArray.x10"
    x10_long i__19429max__20050 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__20051;
        for (i__20051 = ((x10_long)0ll); ((i__20051) <= (i__19429max__20050));
             i__20051 = ((i__20051) + (((x10_long)1ll))))
        {
            
            //#line 82 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__20051), ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__20051)) - (((x10_long)1ll))))));
            } else {
                
                //#line 85 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((this->FMGL(n)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 88 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 91 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    {
        
        //#line 92 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__20097 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 93 "SuffixArray.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 94 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 95 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 96 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 97 "SuffixArray.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 98 "SuffixArray.x10"
                x10_long i__19445max__20053 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__20054;
                    for (i__20054 = ((x10_long)0ll); ((i__20054) <= (i__19445max__20053));
                         i__20054 = ((i__20054) + (((x10_long)1ll))))
                    {
                        
                        //#line 99 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__20054) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 100 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__20054);
                            
                            //#line 101 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            {
                ::x10::lang::CheckedThrowable* ct__20095 =
                  __exc12;
                {
                    ::x10::xrx::Runtime::pushException(ct__20095);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__20097);
    }
}

//#line 107 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 108 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 109 "SuffixArray.x10"
    if (((this->FMGL(k)) < (((x10_long)2097152ll)))) {
        
        //#line 110 "SuffixArray.x10"
        this->sortPairsThreeFast(this->FMGL(string), this->FMGL(SA12),
                                 size, ((x10_int) (this->FMGL(num_threads))));
    } else 
    //#line 111 "SuffixArray.x10"
    if (((this->FMGL(k)) < (((x10_long)2147483647ll)))) {
        
        //#line 112 "SuffixArray.x10"
        this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                             size, ((x10_int) (this->FMGL(num_threads))));
    } else {
        
        //#line 114 "SuffixArray.x10"
        this->sortPairsThreeNormal(this->FMGL(string), this->FMGL(SA12),
                                   size, ((x10_int) (this->FMGL(num_threads))));
    }
    
    //#line 116 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__21438),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(k)));
    
    //#line 133 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 134 "SuffixArray.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 135 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 136 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 137 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 138 "SuffixArray.x10"
    x10_long i__19461max__20056 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__20057;
        for (i__20057 = ((x10_long)0ll); ((i__20057) <= (i__19461max__20056));
             i__20057 = ((i__20057) + (((x10_long)1ll))))
        {
            
            //#line 139 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__20057)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__20057)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__20057)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 140 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 141 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__20057));
                
                //#line 142 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__20057)) + (((x10_long)1ll))));
                
                //#line 143 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__20057)) + (((x10_long)2ll))));
            }
            
            //#line 146 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__20057)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 147 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__20057)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 149 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__20057)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
}

//#line 155 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 156 "SuffixArray.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 157 "SuffixArray.x10"
        this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make((((x10_long)(::x10aux::nullCheck(this->FMGL(R))->FMGL(size))) + (((x10_long)3ll))));
        
        //#line 158 "SuffixArray.x10"
        ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__21439),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(name)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
        
        //#line 159 "SuffixArray.x10"
        ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>* sa_iter =
          reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(sizeof(bwt_SuffixArray__closure__1)))bwt_SuffixArray__closure__1(this)));
        
        //#line 163 "SuffixArray.x10"
        ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::__apply(::x10aux::nullCheck(sa_iter), 
          this->FMGL(SA12));
        
        //#line 164 "SuffixArray.x10"
        sa_iter = reinterpret_cast< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >(sizeof(bwt_SuffixArray__closure__2)))bwt_SuffixArray__closure__2()));
        {
            
            //#line 166 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20102 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 167 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                    
                    //#line 168 "SuffixArray.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 169 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 170 "SuffixArray.x10"
                    x10_long i__19493max__20062 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__20063;
                        for (i__20063 = ((x10_long)0ll); ((i__20063) <= (i__19493max__20062));
                             i__20063 = ((i__20063) + (((x10_long)1ll))))
                        {
                            
                            //#line 171 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__20063)) < (this->FMGL(n0))))
                            {
                                
                                //#line 172 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__20063))));
                                
                                //#line 173 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 176 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 178 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc15) {
                {
                    ::x10::lang::CheckedThrowable* ct__20100 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__20100);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__20102);
        }
    } else {
        
        //#line 181 "SuffixArray.x10"
        x10_long i__19509max__20068 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__20069;
            for (i__20069 = ((x10_long)0ll); ((i__20069) <= (i__19509max__20068));
                 i__20069 = ((i__20069) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__20069)) - (((x10_long)1ll))), i__20069);
            }
        }
        {
            
            //#line 183 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20106 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 184 "SuffixArray.x10"
                    this->FMGL(SA0) = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
                    
                    //#line 185 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 186 "SuffixArray.x10"
                    x10_long i__19525max__20065 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__20066;
                        for (i__20066 = ((x10_long)0ll); ((i__20066) <= (i__19525max__20065));
                             i__20066 = ((i__20066) + (((x10_long)1ll))))
                        {
                            
                            //#line 187 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__20066)) < (this->FMGL(n0))))
                            {
                                
                                //#line 189 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__20066))));
                                
                                //#line 190 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 193 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 195 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, ((x10_int) (this->FMGL(num_threads))),
                                    ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc16) {
                {
                    ::x10::lang::CheckedThrowable* ct__20104 =
                      __exc16;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__20104);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__20106);
        }
    }
    
    //#line 199 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__21440)));
    
    //#line 201 "SuffixArray.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) > (((x10_long)(this->FMGL(num_threads))))))
    {
        
        //#line 202 "SuffixArray.x10"
        x10_long p_lb = ((x10_long)0ll);
        
        //#line 203 "SuffixArray.x10"
        x10_long t_lb = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 204 "SuffixArray.x10"
        x10_long p_ub = ((this->FMGL(n0)) - (((x10_long)1ll)));
        
        //#line 205 "SuffixArray.x10"
        x10_long t_ub = ((this->FMGL(n02)) - (((x10_long)1ll)));
        
        //#line 236 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lb = (__extension__ ({
            x10_long t_lb__19768 = t_lb;
            x10_long t_ub__19769 = t_ub;
            x10_long p_ub__19770 = p_ub;
            x10_long p_lb__19771 = p_lb;
            
            //#line 219 "SuffixArray.x10"
            x10_long t_mid__19772 = ((((t_lb) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 220 "SuffixArray.x10"
            x10_long p_mid__19773 = ((((p_lb) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
            
            //#line 221 "SuffixArray.x10"
            while ((((((t_ub__19769) - (t_lb__19768))) > (((x10_long)1ll))) ||
                   ((((p_ub__19770) - (p_lb__19771))) > (((x10_long)1ll)))))
            {
                
                //#line 222 "SuffixArray.x10"
                if ((__extension__ ({
                        
                        //#line 206 "SuffixArray.x10"
                        x10_boolean ret__19776;
                        goto __ret__19777; __ret__19777: {
                        {
                            
                            //#line 207 "SuffixArray.x10"
                            x10_long i__19778 = this->getI(
                                                  t_mid__19772);
                            
                            //#line 208 "SuffixArray.x10"
                            x10_long j__19779 = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                  p_mid__19773);
                            
                            //#line 209 "SuffixArray.x10"
                            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                      t_mid__19772)) < (this->FMGL(n0))) &&
                                (__extension__ ({
                                    x10_long a__19781 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i__19778);
                                    x10_long a__19782 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__19772)) + (this->FMGL(n0))));
                                    x10_long b__19783 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j__19779);
                                    x10_long b__19784 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j__19779) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                    (((a__19781) < (b__19783)) ||
                                    ((::x10aux::struct_equals(a__19781,
                                                              b__19783)) &&
                                    ((a__19782) <= (b__19784))));
                                }))
                                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t_mid__19772)) >= (this->FMGL(n0))) &&
                                this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            i__19778), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((i__19778) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__19772)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            j__19779), ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j__19779) + (((x10_long)1ll)))),
                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                            ((((j__19779) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                            {
                                
                                //#line 212 "SuffixArray.x10"
                                ret__19776 = true;
                                goto __ret__19777_end_;
                            } else {
                                
                                //#line 214 "SuffixArray.x10"
                                ret__19776 = false;
                                goto __ret__19777_end_;
                            }
                            
                        }goto __ret__19777_end_; __ret__19777_end_: ;
                        }
                        ret__19776;
                        }))
                        ) {
                        
                        //#line 223 "SuffixArray.x10"
                        t_lb__19768 = t_mid__19772;
                        
                        //#line 224 "SuffixArray.x10"
                        p_ub__19770 = p_mid__19773;
                    } else {
                        
                        //#line 226 "SuffixArray.x10"
                        t_ub__19769 = t_mid__19772;
                        
                        //#line 227 "SuffixArray.x10"
                        p_lb__19771 = p_mid__19773;
                    }
                    
                
                //#line 229 "SuffixArray.x10"
                t_mid__19772 = ((((t_lb__19768) + (t_ub__19769))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                
                //#line 230 "SuffixArray.x10"
                p_mid__19773 = ((((p_lb__19771) + (p_ub__19770))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                }
                
            
            //#line 232 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* lb__19785 = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                                ::x10::lang::Rail< x10_long >* t__21315 =
                                                                                                  ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                                                t__21315->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)0ll),
                                                                                                  t_lb__19768);
                                                                                                t__21315->x10::lang::Rail< x10_long >::__set(
                                                                                                  ((x10_long)1ll),
                                                                                                  p_lb__19771);
                                                                                                t__21315;
                                                                                            }))
                                                                                            );
            lb__19785;
            }))
            ;
            
        
        //#line 237 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbl;
        
        //#line 238 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbr;
        
        //#line 239 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbll;
        
        //#line 240 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lblr;
        
        //#line 241 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrl;
        
        //#line 242 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* lbrr;
        {
            
            //#line 243 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__20121 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 244 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(&(lbl), &(t_lb), lb, &(p_lb), this, &(lbll), &(lblr)))));
                    
                    //#line 249 "SuffixArray.x10"
                    lbr = (__extension__ ({
                        x10_long t_lb__19912 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)0ll));
                        x10_long t_ub__19913 = t_ub;
                        x10_long p_ub__19914 = p_ub;
                        x10_long p_lb__19915 = ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                 ((x10_long)1ll));
                        
                        //#line 219 "SuffixArray.x10"
                        x10_long t_mid__19916 = ((((t_lb__19912) + (t_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 220 "SuffixArray.x10"
                        x10_long p_mid__19917 = ((((p_lb__19915) + (p_ub))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                        
                        //#line 221 "SuffixArray.x10"
                        while ((((((t_ub__19913) - (t_lb__19912))) > (((x10_long)1ll))) ||
                               ((((p_ub__19914) - (p_lb__19915))) > (((x10_long)1ll)))))
                        {
                            
                            //#line 222 "SuffixArray.x10"
                            if ((__extension__ ({
                                    
                                    //#line 206 "SuffixArray.x10"
                                    x10_boolean ret__19920;
                                    goto __ret__19921; __ret__19921: {
                                    {
                                        
                                        //#line 207 "SuffixArray.x10"
                                        x10_long i__19922 =
                                          this->getI(t_mid__19916);
                                        
                                        //#line 208 "SuffixArray.x10"
                                        x10_long j__19923 =
                                          ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                            p_mid__19917);
                                        
                                        //#line 209 "SuffixArray.x10"
                                        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t_mid__19916)) < (this->FMGL(n0))) &&
                                            (__extension__ ({
                                                x10_long a__19925 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    i__19922);
                                                x10_long a__19926 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                        t_mid__19916)) + (this->FMGL(n0))));
                                                x10_long b__19927 =
                                                  ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                    j__19923);
                                                x10_long b__19928 =
                                                  ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                    ((j__19923) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                (((a__19925) < (b__19927)) ||
                                                ((::x10aux::struct_equals(a__19925,
                                                                          b__19927)) &&
                                                ((a__19926) <= (b__19928))));
                                            }))
                                            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                      t_mid__19916)) >= (this->FMGL(n0))) &&
                                            this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        i__19922),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((i__19922) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__19916)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        j__19923),
                                                      ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                        ((j__19923) + (((x10_long)1ll)))),
                                                      ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                        ((((j__19923) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                        {
                                            
                                            //#line 212 "SuffixArray.x10"
                                            ret__19920 = true;
                                            goto __ret__19921_end_;
                                        } else {
                                            
                                            //#line 214 "SuffixArray.x10"
                                            ret__19920 = false;
                                            goto __ret__19921_end_;
                                        }
                                        
                                    }goto __ret__19921_end_; __ret__19921_end_: ;
                                    }
                                    ret__19920;
                                    }))
                                    ) {
                                    
                                    //#line 223 "SuffixArray.x10"
                                    t_lb__19912 = t_mid__19916;
                                    
                                    //#line 224 "SuffixArray.x10"
                                    p_ub__19914 = p_mid__19917;
                                } else {
                                    
                                    //#line 226 "SuffixArray.x10"
                                    t_ub__19913 = t_mid__19916;
                                    
                                    //#line 227 "SuffixArray.x10"
                                    p_lb__19915 = p_mid__19917;
                                }
                                
                            
                            //#line 229 "SuffixArray.x10"
                            t_mid__19916 = ((((t_lb__19912) + (t_ub__19913))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            
                            //#line 230 "SuffixArray.x10"
                            p_mid__19917 = ((((p_lb__19915) + (p_ub__19914))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                            }
                            
                        
                        //#line 232 "SuffixArray.x10"
                        ::x10::lang::Rail< x10_long >* lb__19929 =
                          ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                   ::x10::lang::Rail< x10_long >* t__21339 =
                                                                     ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                   t__21339->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)0ll),
                                                                     t_lb__19912);
                                                                   t__21339->x10::lang::Rail< x10_long >::__set(
                                                                     ((x10_long)1ll),
                                                                     p_lb__19915);
                                                                   t__21339;
                                                               }))
                                                               );
                        lb__19929;
                        }))
                        ;
                    {
                        
                        //#line 250 "SuffixArray.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__20117 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 251 "SuffixArray.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__6)))bwt_SuffixArray__closure__6(&(lbrr), lbr, &(t_ub), &(p_ub), this))));
                                
                                //#line 252 "SuffixArray.x10"
                                lbrl = (__extension__ ({
                                    x10_long t_lb__19984 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long t_ub__19985 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)0ll));
                                    x10_long p_ub__19986 =
                                      ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    x10_long p_lb__19987 =
                                      ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                        ((x10_long)1ll));
                                    
                                    //#line 219 "SuffixArray.x10"
                                    x10_long t_mid__19988 =
                                      ((((t_lb__19984) + (t_ub__19985))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 220 "SuffixArray.x10"
                                    x10_long p_mid__19989 =
                                      ((((p_lb__19987) + (p_ub__19986))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                    
                                    //#line 221 "SuffixArray.x10"
                                    while ((((((t_ub__19985) - (t_lb__19984))) > (((x10_long)1ll))) ||
                                           ((((p_ub__19986) - (p_lb__19987))) > (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 222 "SuffixArray.x10"
                                        if ((__extension__ ({
                                                
                                                //#line 206 "SuffixArray.x10"
                                                x10_boolean ret__19992;
                                                goto __ret__19993; __ret__19993: {
                                                {
                                                    
                                                    //#line 207 "SuffixArray.x10"
                                                    x10_long i__19994 =
                                                      this->getI(
                                                        t_mid__19988);
                                                    
                                                    //#line 208 "SuffixArray.x10"
                                                    x10_long j__19995 =
                                                      ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                        p_mid__19989);
                                                    
                                                    //#line 209 "SuffixArray.x10"
                                                    if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                              t_mid__19988)) < (this->FMGL(n0))) &&
                                                        (__extension__ ({
                                                            x10_long a__19997 =
                                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                i__19994);
                                                            x10_long a__19998 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                    t_mid__19988)) + (this->FMGL(n0))));
                                                            x10_long b__19999 =
                                                              ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                j__19995);
                                                            x10_long b__20000 =
                                                              ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                                ((j__19995) / ::x10aux::zeroCheck(((x10_long)3ll))));
                                                            (((a__19997) < (b__19999)) ||
                                                            ((::x10aux::struct_equals(a__19997,
                                                                                      b__19999)) &&
                                                            ((a__19998) <= (b__20000))));
                                                        }))
                                                        ) ||
                                                        (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t_mid__19988)) >= (this->FMGL(n0))) &&
                                                        this->leq(
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            i__19994),
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            ((i__19994) + (((x10_long)1ll)))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                  t_mid__19988)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            j__19995),
                                                          ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                            ((j__19995) + (((x10_long)1ll)))),
                                                          ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                            ((((j__19995) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
                                                    {
                                                        
                                                        //#line 212 "SuffixArray.x10"
                                                        ret__19992 =
                                                          true;
                                                        goto __ret__19993_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 214 "SuffixArray.x10"
                                                        ret__19992 =
                                                          false;
                                                        goto __ret__19993_end_;
                                                    }
                                                    
                                                }goto __ret__19993_end_; __ret__19993_end_: ;
                                                }
                                                ret__19992;
                                                }))
                                                ) {
                                                
                                                //#line 223 "SuffixArray.x10"
                                                t_lb__19984 =
                                                  t_mid__19988;
                                                
                                                //#line 224 "SuffixArray.x10"
                                                p_ub__19986 =
                                                  p_mid__19989;
                                            } else {
                                                
                                                //#line 226 "SuffixArray.x10"
                                                t_ub__19985 =
                                                  t_mid__19988;
                                                
                                                //#line 227 "SuffixArray.x10"
                                                p_lb__19987 =
                                                  p_mid__19989;
                                            }
                                            
                                        
                                        //#line 229 "SuffixArray.x10"
                                        t_mid__19988 = ((((t_lb__19984) + (t_ub__19985))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        
                                        //#line 230 "SuffixArray.x10"
                                        p_mid__19989 = ((((p_lb__19987) + (p_ub__19986))) / ::x10aux::zeroCheck(((x10_long)2ll)));
                                        }
                                        
                                    
                                    //#line 232 "SuffixArray.x10"
                                    ::x10::lang::Rail< x10_long >* lb__20001 =
                                      ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                               ::x10::lang::Rail< x10_long >* t__21351 =
                                                                                 ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)2ll), false);
                                                                               t__21351->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)0ll),
                                                                                 t_lb__19984);
                                                                               t__21351->x10::lang::Rail< x10_long >::__set(
                                                                                 ((x10_long)1ll),
                                                                                 p_lb__19987);
                                                                               t__21351;
                                                                           }))
                                                                           );
                                    lb__20001;
                                    }))
                                    ;
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc18) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__20115 =
                                      __exc18;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__20115);
                                    }
                                }
                            }
                        ::x10::xrx::Runtime::stopFinish(fs__20117);
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc19) {
                    {
                        ::x10::lang::CheckedThrowable* ct__20119 =
                          __exc19;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__20119);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__20121);
            }
            
            //#line 257 "SuffixArray.x10"
            x10_long midl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 258 "SuffixArray.x10"
            x10_long mid = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                    ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 259 "SuffixArray.x10"
            x10_long midr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                     ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 260 "SuffixArray.x10"
            x10_long midll = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 261 "SuffixArray.x10"
            x10_long midrl = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 262 "SuffixArray.x10"
            x10_long midlr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 263 "SuffixArray.x10"
            x10_long midrr = (::x10aux::struct_equals(((this->FMGL(n)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)1ll)))
              ? (((((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                       ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                              ((x10_long)1ll))))) - (((x10_long)1ll))))
              : (((::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                     ((x10_long)0ll))) + (::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                            ((x10_long)1ll)))));
            
            //#line 265 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* krail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21357 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)-1ll));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midll) - (((x10_long)1ll))));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midl) - (((x10_long)1ll))));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((midlr) - (((x10_long)1ll))));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((mid) - (((x10_long)1ll))));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midrl) - (((x10_long)1ll))));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midr) - (((x10_long)1ll))));
                                                                                            t__21357->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ((midrr) - (((x10_long)1ll))));
                                                                                            t__21357;
                                                                                        }))
                                                                                        );
            
            //#line 266 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* nrail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21375 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ((midl) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ((midlr) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ((mid) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ((midrl) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ((midr) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ((midrr) + (((x10_long)1ll))));
                                                                                            t__21375->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              this->FMGL(n));
                                                                                            t__21375;
                                                                                        }))
                                                                                        );
            
            //#line 267 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* prail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21393 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((x10_long)0ll));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)1ll)));
                                                                                            t__21393;
                                                                                        }))
                                                                                        );
            
            //#line 268 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* trail = ::x10::lang::Rail< x10_long >::_make((__extension__ ({
                                                                                            ::x10::lang::Rail< x10_long >* t__21411 =
                                                                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)8ll), false);
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)0ll),
                                                                                              ((this->FMGL(n0)) - (this->FMGL(n1))));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)1ll),
                                                                                              ::x10aux::nullCheck(lbll)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)2ll),
                                                                                              ::x10aux::nullCheck(lbl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)3ll),
                                                                                              ::x10aux::nullCheck(lblr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)4ll),
                                                                                              ::x10aux::nullCheck(lb)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)5ll),
                                                                                              ::x10aux::nullCheck(lbrl)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)6ll),
                                                                                              ::x10aux::nullCheck(lbr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411->x10::lang::Rail< x10_long >::__set(
                                                                                              ((x10_long)7ll),
                                                                                              ::x10aux::nullCheck(lbrr)->x10::lang::Rail< x10_long >::__apply(
                                                                                                ((x10_long)0ll)));
                                                                                            t__21411;
                                                                                        }))
                                                                                        );
            {
                
                //#line 270 "SuffixArray.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__20126 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long i__20087;
                            for (i__20087 = ((x10_long)0ll);
                                 ((i__20087) <= (((x10_long)7ll)));
                                 i__20087 = ((i__20087) + (((x10_long)1ll))))
                            {
                                x10_long l__20088 = i__20087;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__7)))bwt_SuffixArray__closure__7(krail, l__20088, trail, prail, nrail, this))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc20) {
                    {
                        ::x10::lang::CheckedThrowable* ct__20124 =
                          __exc20;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__20124);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__20126);
            }
        } else {
            
            //#line 311 "SuffixArray.x10"
            x10_long p = ((x10_long)0ll);
            
            //#line 312 "SuffixArray.x10"
            x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
            
            //#line 313 "SuffixArray.x10"
            x10_long k = ((x10_long)-1ll);
            
            //#line 314 "SuffixArray.x10"
            while (((k) < (this->FMGL(n)))) {
                
                //#line 315 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 316 "SuffixArray.x10"
                x10_long i = this->getI(t);
                
                //#line 317 "SuffixArray.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p);
                
                //#line 319 "SuffixArray.x10"
                if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) < (this->FMGL(n0))) && (__extension__ ({
                        x10_long a__20018 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              i);
                        x10_long a__20019 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                  t)) + (this->FMGL(n0))));
                        x10_long b__20020 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              j);
                        x10_long b__20021 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                              ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                        (((a__20018) < (b__20020)) || ((::x10aux::struct_equals(a__20018,
                                                                                b__20020)) &&
                        ((a__20019) <= (b__20021))));
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
                    
                    //#line 322 "SuffixArray.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, i);
                    
                    //#line 323 "SuffixArray.x10"
                    t = ((t) + (((x10_long)1ll)));
                    
                    //#line 324 "SuffixArray.x10"
                    if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                    {
                        
                        //#line 325 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 326 "SuffixArray.x10"
                        x10_long i__19589max__20089 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                        {
                            x10_long i__20090;
                            for (i__20090 = ((x10_long)0ll);
                                 ((i__20090) <= (i__19589max__20089));
                                 i__20090 = ((i__20090) + (((x10_long)1ll))))
                            {
                                
                                //#line 327 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                       p));
                                
                                //#line 328 "SuffixArray.x10"
                                p = ((p) + (((x10_long)1ll)));
                                
                                //#line 329 "SuffixArray.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                } else {
                    
                    //#line 333 "SuffixArray.x10"
                    ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                      k, j);
                    
                    //#line 334 "SuffixArray.x10"
                    p = ((p) + (((x10_long)1ll)));
                    
                    //#line 335 "SuffixArray.x10"
                    if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                    {
                        
                        //#line 336 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                        
                        //#line 337 "SuffixArray.x10"
                        x10_long i__19605max__20092 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                        {
                            x10_long i__20093;
                            for (i__20093 = ((x10_long)0ll);
                                 ((i__20093) <= (i__19605max__20092));
                                 i__20093 = ((i__20093) + (((x10_long)1ll))))
                            {
                                
                                //#line 338 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                                  k, this->getI(t));
                                
                                //#line 339 "SuffixArray.x10"
                                t = ((t) + (((x10_long)1ll)));
                                
                                //#line 340 "SuffixArray.x10"
                                k = ((k) + (((x10_long)1ll)));
                            }
                        }
                        
                    }
                    
                }
                
            }
            
        }
        }
        
    
    //#line 347 "SuffixArray.x10"
    x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
        
        //#line 348 "SuffixArray.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((a2) <= (b2))));
        
    }
    
    //#line 350 "SuffixArray.x10"
    x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
        
        //#line 351 "SuffixArray.x10"
        return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                           b1)) &&
        ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
         ((a3) <= (b3)))))));
        
    }
    
    //#line 354 "SuffixArray.x10"
    x10_long bwt::SuffixArray::getI(x10_long t) {
        
        //#line 355 "SuffixArray.x10"
        if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                t)) < (this->FMGL(n0)))) {
            
            //#line 356 "SuffixArray.x10"
            return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
            
        } else {
            
            //#line 358 "SuffixArray.x10"
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
    
    ::x10::lang::String bwt::SuffixArray_Strings::sl__21440("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__21439("name: %ld, n02: %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__21438("Ended 3rd Radix Sort %ld, max: %ld\n");

::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__1>bwt_SuffixArray__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__1::__apply, &bwt_SuffixArray__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >, &bwt_SuffixArray__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__1::_deserialize);

::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*>::itable<bwt_SuffixArray__closure__2>bwt_SuffixArray__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__2::__apply, &bwt_SuffixArray__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< x10_long >*> >, &bwt_SuffixArray__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__2::_deserialize);

::x10::lang::VoidFun_0_0::itable<bwt_SuffixArray__closure__3>bwt_SuffixArray__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &bwt_SuffixArray__closure__3::__apply, &bwt_SuffixArray__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry bwt_SuffixArray__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &bwt_SuffixArray__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(bwt_SuffixArray__closure__3::_deserialize);
const ::x10aux::serialization_id_t bwt_SuffixArray__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(bwt_SuffixArray__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

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
