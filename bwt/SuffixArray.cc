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
        x10_long i__11517max__11750 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__11751;
            for (i__11751 = ((x10_long)0ll); ((i__11751) <= (i__11517max__11750));
                 i__11751 = ((i__11751) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__11751), ((i__11751) + (((x10_long)1ll))));
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
        
        //#line 231 "SuffixArray.x10"
        ::x10::util::RailBuilder<x10_long>* rb__11780 =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
        (rb__11780)->::x10::util::RailBuilder<x10_long>::_constructor();
        
        //#line 232 "SuffixArray.x10"
        x10_long p__11781 = ((((x10_long)0ll)) + (((((saved_this->FMGL(n0)) / ::x10aux::zeroCheck(((x10_long)11ll)))) * (l__11795))));
        
        //#line 233 "SuffixArray.x10"
        x10_long t__11782 = ((((saved_this->FMGL(n0)) - (saved_this->FMGL(n1)))) + (((((saved_this->FMGL(n02)) / ::x10aux::zeroCheck(((x10_long)11ll)))) * (l__11795))));
        
        //#line 234 "SuffixArray.x10"
        x10_long initp__11783 = p__11781;
        
        //#line 235 "SuffixArray.x10"
        x10_long initt__11784 = t__11782;
        
        //#line 236 "SuffixArray.x10"
        x10_long lastp__11785 = ((((p__11781) + (((saved_this->FMGL(n0)) / ::x10aux::zeroCheck(((x10_long)11ll)))))) + (((x10_long)1ll)));
        
        //#line 237 "SuffixArray.x10"
        x10_long lastt__11786 = ((((t__11782) + (((saved_this->FMGL(n02)) / ::x10aux::zeroCheck(((x10_long)11ll)))))) + (((x10_long)1ll)));
        
        //#line 238 "SuffixArray.x10"
        while (((((t__11782) < ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(SA12))->FMGL(size)))) &&
               ((p__11781) < ((x10_long)(::x10aux::nullCheck(saved_this->FMGL(SA0))->FMGL(size))))) &&
               ((((p__11781) < (lastp__11785)) || ((t__11782) < (lastt__11786))))))
        {
            
            //#line 239 "SuffixArray.x10"
            x10_long i__11787 = saved_this->getI(t__11782);
            
            //#line 240 "SuffixArray.x10"
            x10_long j__11788 = ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                  p__11781);
            
            //#line 242 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t__11782)) < (saved_this->FMGL(n0))) &&
                (__extension__ ({
                    x10_long a__11790 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i__11787);
                    x10_long a__11791 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t__11782)) + (saved_this->FMGL(n0))));
                    x10_long b__11792 = ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j__11788);
                    x10_long b__11793 = ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j__11788) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__11790) < (b__11792)) || ((::x10aux::struct_equals(a__11790,
                                                                            b__11792)) &&
                    ((a__11791) <= (b__11793))));
                }))
                ) || (((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t__11782)) >= (saved_this->FMGL(n0))) &&
                saved_this->leq(::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  i__11787), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((i__11787) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                        t__11782)) - (saved_this->FMGL(n0)))) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  j__11788), ::x10aux::nullCheck(saved_this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                               ((j__11788) + (((x10_long)1ll)))),
                                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                  ((((j__11788) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (saved_this->FMGL(n0))))))))
            {
                
                //#line 245 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11780->add(
                                                                         i__11787));
                
                //#line 246 "SuffixArray.x10"
                t__11782 = ((t__11782) + (((x10_long)1ll)));
                
                //#line 247 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__11781, initp__11783)))
                {
                    
                    //#line 248 "SuffixArray.x10"
                    x10_long r__11770 = ((::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                            l__11795)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__set(
                      l__11795, r__11770);
                }
                
                //#line 250 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__11782, saved_this->FMGL(n02))))
                {
                    
                    //#line 251 "SuffixArray.x10"
                    x10_long i__11613max__11771 = ((((saved_this->FMGL(n0)) - (p__11781))) - (((x10_long)1ll)));
                    {
                        x10_long i__11772;
                        for (i__11772 = ((x10_long)0ll); ((i__11772) <= (i__11613max__11771));
                             i__11772 = ((i__11772) + (((x10_long)1ll))))
                        {
                            
                            //#line 252 "SuffixArray.x10"
                            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11780->add(
                                                                                     ::x10aux::nullCheck(saved_this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                                                                       p__11781)));
                            
                            //#line 253 "SuffixArray.x10"
                            p__11781 = ((p__11781) + (((x10_long)1ll)));
                        }
                    }
                    
                    //#line 255 "SuffixArray.x10"
                    break;
                }
                
            } else {
                
                //#line 258 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11780->add(
                                                                         j__11788));
                
                //#line 259 "SuffixArray.x10"
                p__11781 = ((p__11781) + (((x10_long)1ll)));
                
                //#line 260 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t__11782, initt__11784)))
                {
                    
                    //#line 261 "SuffixArray.x10"
                    x10_long r__11776 = ((::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                            l__11795)) + (((x10_long)1ll)));
                    ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__set(
                      l__11795, r__11776);
                }
                
                //#line 263 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p__11781, saved_this->FMGL(n0))))
                {
                    
                    //#line 264 "SuffixArray.x10"
                    x10_long i__11629max__11777 = ((((saved_this->FMGL(n02)) - (t__11782))) - (((x10_long)1ll)));
                    {
                        x10_long i__11778;
                        for (i__11778 = ((x10_long)0ll); ((i__11778) <= (i__11629max__11777));
                             i__11778 = ((i__11778) + (((x10_long)1ll))))
                        {
                            
                            //#line 265 "SuffixArray.x10"
                            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(rb__11780->add(
                                                                                     saved_this->getI(
                                                                                       t__11782)));
                            
                            //#line 266 "SuffixArray.x10"
                            t__11782 = ((t__11782) + (((x10_long)1ll)));
                        }
                    }
                    
                    //#line 268 "SuffixArray.x10"
                    break;
                }
                
            }
            
        }
        
        //#line 272 "SuffixArray.x10"
        ::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
          l__11795, rb__11780->result());
    }
    
    // captured environment
    ::bwt::SuffixArray* saved_this;
    x10_long l__11795;
    x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > bothstart;
    x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > sa;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->l__11795);
        buf.write(this->bothstart);
        buf.write(this->sa);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        x10_long that_l__11795 = buf.read<x10_long>();
        x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > that_bothstart = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > >();
        x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > that_sa = buf.read<x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > >();
        bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_saved_this, that_l__11795, that_bothstart, that_sa);
        return this_;
    }
    
    bwt_SuffixArray__closure__4(::bwt::SuffixArray* saved_this, x10_long l__11795, x10aux::captured_ref_lval< ::x10::lang::Rail< x10_long > > bothstart, x10aux::captured_ref_lval< ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* > > sa) : saved_this(saved_this), l__11795(l__11795), bothstart(bothstart), sa(sa) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:230-273";
    }

};

#endif // BWT_SUFFIXARRAY__CLOSURE__4_CLOSURE

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
    ::bwt::SuffixArray* this__11721 = this;
    ::x10aux::nullCheck(this__11721)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11721)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11721)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11721)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11721)->FMGL(name) = ((x10_long)0ll);
    
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
    x10_long i__11405max__11729 = this->FMGL(k);
    {
        x10_long i__11730;
        for (i__11730 = ((x10_long)0ll); ((i__11730) <= (i__11405max__11729));
             i__11730 = ((i__11730) + (((x10_long)1ll))))
        {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__11730, ((x10_long)0ll));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__11421max__11732 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__11733;
        for (i__11733 = ((x10_long)0ll); ((i__11733) <= (i__11421max__11732));
             i__11733 = ((i__11733) + (((x10_long)1ll))))
        {
            
            //#line 50 "SuffixArray.x10"
            x10_long i__11723 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__11733)) + (((x10_long)(rOffs)))));
            x10_long r__11724 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__11723)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__11723, r__11724);
        }
    }
    
    //#line 52 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 53 "SuffixArray.x10"
    x10_long i__11437max__11735 = this->FMGL(k);
    {
        x10_long i__11736;
        for (i__11736 = ((x10_long)0ll); ((i__11736) <= (i__11437max__11735));
             i__11736 = ((i__11736) + (((x10_long)1ll))))
        {
            
            //#line 54 "SuffixArray.x10"
            x10_long t__11725 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__11736);
            
            //#line 55 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__11736, sum);
            
            //#line 56 "SuffixArray.x10"
            sum = ((sum) + (t__11725));
        }
    }
    
    //#line 58 "SuffixArray.x10"
    x10_long i__11453max__11738 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__11739;
        for (i__11739 = ((x10_long)0ll); ((i__11739) <= (i__11453max__11738));
             i__11739 = ((i__11739) + (((x10_long)1ll))))
        {
            
            //#line 59 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__11739)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__11739));
            
            //#line 60 "SuffixArray.x10"
            x10_long i__11727 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__11739)) + (((x10_long)(rOffs)))));
            x10_long r__11728 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__11727)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__11727, r__11728);
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
    x10_long i__11469max__11741 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__11742;
        for (i__11742 = ((x10_long)0ll); ((i__11742) <= (i__11469max__11741));
             i__11742 = ((i__11742) + (((x10_long)1ll))))
        {
            
            //#line 77 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__11742), ((x10_long)0ll))))
            {
                
                //#line 78 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__11742)) - (((x10_long)1ll))))));
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
        ::x10::xrx::FinishState* fs__11809 = ::x10::xrx::Runtime::startFinish();
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
                x10_long i__11485max__11744 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__11745;
                    for (i__11745 = ((x10_long)0ll); ((i__11745) <= (i__11485max__11744));
                         i__11745 = ((i__11745) + (((x10_long)1ll))))
                    {
                        
                        //#line 96 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__11745) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 97 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__11745);
                            
                            //#line 98 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            {
                ::x10::lang::CheckedThrowable* ct__11807 =
                  __exc11;
                {
                    ::x10::xrx::Runtime::pushException(ct__11807);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__11809);
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
    x10_long i__11501max__11747 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__11748;
        for (i__11748 = ((x10_long)0ll); ((i__11748) <= (i__11501max__11747));
             i__11748 = ((i__11748) + (((x10_long)1ll))))
        {
            
            //#line 134 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__11748)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__11748)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__11748)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 135 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 136 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__11748));
                
                //#line 137 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__11748)) + (((x10_long)1ll))));
                
                //#line 138 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__11748)) + (((x10_long)2ll))));
            }
            
            //#line 141 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__11748)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 142 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__11748)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 144 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__11748)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
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
            ::x10::xrx::FinishState* fs__11814 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 157 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                    
                    //#line 158 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 159 "SuffixArray.x10"
                    x10_long i__11533max__11753 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__11754;
                        for (i__11754 = ((x10_long)0ll); ((i__11754) <= (i__11533max__11753));
                             i__11754 = ((i__11754) + (((x10_long)1ll))))
                        {
                            
                            //#line 160 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__11754)) < (this->FMGL(n0))))
                            {
                                
                                //#line 161 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__11754))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__11812 =
                      __exc14;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11812);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11814);
        }
    } else {
        
        //#line 171 "SuffixArray.x10"
        x10_long i__11549max__11759 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__11760;
            for (i__11760 = ((x10_long)0ll); ((i__11760) <= (i__11549max__11759));
                 i__11760 = ((i__11760) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__11760)) - (((x10_long)1ll))), i__11760);
            }
        }
        {
            
            //#line 173 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__11818 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 174 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 175 "SuffixArray.x10"
                    x10_long i__11565max__11756 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__11757;
                        for (i__11757 = ((x10_long)0ll); ((i__11757) <= (i__11565max__11756));
                             i__11757 = ((i__11757) + (((x10_long)1ll))))
                        {
                            
                            //#line 176 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__11757)) < (this->FMGL(n0))))
                            {
                                
                                //#line 178 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__11757))));
                                
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
                    ::x10::lang::CheckedThrowable* ct__11816 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11816);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11818);
        }
    }
    
    //#line 189 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__12774)));
    
    //#line 191 "SuffixArray.x10"
    if ((((x10_long)(::x10aux::nullCheck(this->FMGL(SA0))->FMGL(size))) < (((x10_long)11ll))))
    {
        
        //#line 192 "SuffixArray.x10"
        x10_long p = ((x10_long)0ll);
        
        //#line 193 "SuffixArray.x10"
        x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
        
        //#line 194 "SuffixArray.x10"
        x10_long k = ((x10_long)-1ll);
        
        //#line 195 "SuffixArray.x10"
        while (((k) < (this->FMGL(n)))) {
            
            //#line 196 "SuffixArray.x10"
            k = ((k) + (((x10_long)1ll)));
            
            //#line 197 "SuffixArray.x10"
            x10_long i = this->getI(t);
            
            //#line 198 "SuffixArray.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                           p);
            
            //#line 200 "SuffixArray.x10"
            if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) < (this->FMGL(n0))) && (__extension__ ({
                    x10_long a__11703 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          i);
                    x10_long a__11704 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                              t)) + (this->FMGL(n0))));
                    x10_long b__11705 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                          j);
                    x10_long b__11706 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                          ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                    (((a__11703) < (b__11705)) || ((::x10aux::struct_equals(a__11703,
                                                                            b__11705)) &&
                    ((a__11704) <= (b__11706))));
                }))
                ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                          t)) >= (this->FMGL(n0))) && this->leq(
                                                        ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          i),
                                                        ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          ((i) + (((x10_long)1ll)))),
                                                        ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                        ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          j),
                                                        ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                          ((j) + (((x10_long)1ll)))),
                                                        ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                          ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
            {
                
                //#line 203 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, i);
                
                //#line 204 "SuffixArray.x10"
                t = ((t) + (((x10_long)1ll)));
                
                //#line 205 "SuffixArray.x10"
                if ((::x10aux::struct_equals(t, this->FMGL(n02))))
                {
                    
                    //#line 206 "SuffixArray.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 207 "SuffixArray.x10"
                    x10_long i__11581max__11762 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                    {
                        x10_long i__11763;
                        for (i__11763 = ((x10_long)0ll); ((i__11763) <= (i__11581max__11762));
                             i__11763 = ((i__11763) + (((x10_long)1ll))))
                        {
                            
                            //#line 208 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                                   p));
                            
                            //#line 209 "SuffixArray.x10"
                            p = ((p) + (((x10_long)1ll)));
                            
                            //#line 210 "SuffixArray.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            } else {
                
                //#line 214 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                  k, j);
                
                //#line 215 "SuffixArray.x10"
                p = ((p) + (((x10_long)1ll)));
                
                //#line 216 "SuffixArray.x10"
                if ((::x10aux::struct_equals(p, this->FMGL(n0))))
                {
                    
                    //#line 217 "SuffixArray.x10"
                    k = ((k) + (((x10_long)1ll)));
                    
                    //#line 218 "SuffixArray.x10"
                    x10_long i__11597max__11765 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                    {
                        x10_long i__11766;
                        for (i__11766 = ((x10_long)0ll); ((i__11766) <= (i__11597max__11765));
                             i__11766 = ((i__11766) + (((x10_long)1ll))))
                        {
                            
                            //#line 219 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                              k, this->getI(t));
                            
                            //#line 220 "SuffixArray.x10"
                            t = ((t) + (((x10_long)1ll)));
                            
                            //#line 221 "SuffixArray.x10"
                            k = ((k) + (((x10_long)1ll)));
                        }
                    }
                    
                }
                
            }
            
        }
        
    } else {
        
        //#line 227 "SuffixArray.x10"
        ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* sa =
          ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(((x10_long)11ll));
        
        //#line 228 "SuffixArray.x10"
        ::x10::lang::Rail< x10_long >* bothstart = ::x10::lang::Rail< x10_long >::_make(((x10_long)11ll));
        {
            
            //#line 230 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__11823 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long i__11794;
                        for (i__11794 = ((x10_long)0ll); ((i__11794) <= (((x10_long)10ll)));
                             i__11794 = ((i__11794) + (((x10_long)1ll))))
                        {
                            x10_long l__11795 = i__11794;
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(this, l__11795, &(bothstart), &(sa)))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc16) {
                {
                    ::x10::lang::CheckedThrowable* ct__11821 =
                      __exc16;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__11821);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__11823);
        }
        
        //#line 275 "SuffixArray.x10"
        ::x10::lang::Rail< void >::copy< x10_long >(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                      ((x10_long)0ll)),
                                                    ((x10_long)0ll),
                                                    this->FMGL(SA),
                                                    ((x10_long)0ll),
                                                    (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                                     ((x10_long)0ll)))->FMGL(size)));
        
        //#line 276 "SuffixArray.x10"
        {
            x10_long i__11801;
            for (i__11801 = ((x10_long)1ll); ((i__11801) <= (((x10_long)10ll)));
                 i__11801 = ((i__11801) + (((x10_long)1ll))))
            {
                
                //#line 278 "SuffixArray.x10"
                x10_long r__11798 = ((::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                        i__11801)) + (((x10_long)1ll)));
                ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__set(
                  i__11801, r__11798);
            }
        }
        
        //#line 280 "SuffixArray.x10"
        x10_long nowsize = (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                            ((x10_long)0ll)))->FMGL(size));
        
        //#line 281 "SuffixArray.x10"
        {
            x10_long i__11803;
            for (i__11803 = ((x10_long)1ll); ((i__11803) <= (((x10_long)10ll)));
                 i__11803 = ((i__11803) + (((x10_long)1ll))))
            {
                
                //#line 283 "SuffixArray.x10"
                x10_long nextsize__11799 = (((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                                              i__11803))->FMGL(size))) - (::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                                                                                            i__11803)));
                
                //#line 284 "SuffixArray.x10"
                x10_long width__11800 = ((((nowsize) + (nextsize__11799))) < (((this->FMGL(n)) + (((x10_long)2ll)))))
                  ? (nextsize__11799) : (((((this->FMGL(n)) + (((x10_long)2ll)))) - (nowsize)));
                
                //#line 285 "SuffixArray.x10"
                if (((nowsize) < (this->FMGL(n)))) {
                    
                    //#line 286 "SuffixArray.x10"
                    ::x10::lang::Rail< void >::copy< x10_long >(
                      ::x10aux::nullCheck(sa)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                        i__11803), ::x10aux::nullCheck(bothstart)->x10::lang::Rail< x10_long >::__apply(
                                     i__11803), this->FMGL(SA),
                      nowsize, width__11800);
                    
                    //#line 287 "SuffixArray.x10"
                    nowsize = ((nowsize) + (nextsize__11799));
                }
                
            }
        }
        
        //#line 290 "SuffixArray.x10"
        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
          this->FMGL(n), ((x10_long)0ll));
        
        //#line 291 "SuffixArray.x10"
        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
          ((this->FMGL(n)) + (((x10_long)1ll))), ((x10_long)0ll));
        
        //#line 292 "SuffixArray.x10"
        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
          ((this->FMGL(n)) + (((x10_long)2ll))), ((x10_long)0ll));
    }
    
}

//#line 296 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 297 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 299 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 300 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 303 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 304 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 305 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 307 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__12774("Start Merge");

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

/* END of SuffixArray */
/*************************************************/
