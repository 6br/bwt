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
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
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
        return "SuffixArray.x10:84";
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
        saved_this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((saved_this->FMGL(n)) + (((x10_long)3ll))));
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
        return "SuffixArray.x10:85";
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
        return "SuffixArray.x10:86";
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
        x10_long i__5989max__6136 = ((saved_this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6137;
            for (i__6137 = ((x10_long)0ll); ((i__6137) <= (i__5989max__6136));
                 i__6137 = ((i__6137) + (((x10_long)1ll)))) {
                ::x10aux::nullCheck(saved_this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(saved_this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__6137), ((i__6137) + (((x10_long)1ll))));
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
        bwt_SuffixArray__closure__4* storage = ::x10aux::alloc_z<bwt_SuffixArray__closure__4>();
        buf.record_reference(storage);
        ::bwt::SuffixArray* that_saved_this = buf.read< ::bwt::SuffixArray*>();
        bwt_SuffixArray__closure__4* this_ = new (storage) bwt_SuffixArray__closure__4(that_saved_this);
        return this_;
    }
    
    bwt_SuffixArray__closure__4(::bwt::SuffixArray* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SuffixArray.x10:148";
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
                                    x10_long charsize) {
    
    //#line 9 "SuffixArray.x10"
    ::bwt::SuffixArray* this__6107 = this;
    ::x10aux::nullCheck(this__6107)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6107)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6107)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6107)->FMGL(SA0) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6107)->FMGL(name) = ((x10_long)0ll);
    
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
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 35 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads,
                                 x10_byte offset){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 38 "SuffixArray.x10"
void bwt::SuffixArray::sortPairsThree(::x10::lang::Rail< x10_long >* keys,
                                      ::x10::lang::Rail< x10_long >* values,
                                      x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsLongThree((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 42 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 43 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 44 "SuffixArray.x10"
    x10_long i__5877max__6115 = this->FMGL(k);
    {
        x10_long i__6116;
        for (i__6116 = ((x10_long)0ll); ((i__6116) <= (i__5877max__6115));
             i__6116 = ((i__6116) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__6116, ((x10_long)0ll));
        }
    }
    
    //#line 45 "SuffixArray.x10"
    x10_long i__5893max__6118 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__6119;
        for (i__6119 = ((x10_long)0ll); ((i__6119) <= (i__5893max__6118));
             i__6119 = ((i__6119) + (((x10_long)1ll)))) {
            
            //#line 46 "SuffixArray.x10"
            x10_long i__6109 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__6119)) + (((x10_long)(rOffs)))));
            x10_long r__6110 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__6109)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__6109, r__6110);
        }
    }
    
    //#line 48 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 49 "SuffixArray.x10"
    x10_long i__5909max__6121 = this->FMGL(k);
    {
        x10_long i__6122;
        for (i__6122 = ((x10_long)0ll); ((i__6122) <= (i__5909max__6121));
             i__6122 = ((i__6122) + (((x10_long)1ll)))) {
            
            //#line 50 "SuffixArray.x10"
            x10_long t__6111 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__6122);
            
            //#line 51 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__6122, sum);
            
            //#line 52 "SuffixArray.x10"
            sum = ((sum) + (t__6111));
        }
    }
    
    //#line 54 "SuffixArray.x10"
    x10_long i__5925max__6124 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__6125;
        for (i__6125 = ((x10_long)0ll); ((i__6125) <= (i__5925max__6124));
             i__6125 = ((i__6125) + (((x10_long)1ll)))) {
            
            //#line 55 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__6125)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__6125));
            
            //#line 56 "SuffixArray.x10"
            x10_long i__6113 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__6125)) + (((x10_long)(rOffs)))));
            x10_long r__6114 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                   i__6113)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__6113, r__6114);
        }
    }
    
}

//#line 60 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 61 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6280)));
    
    //#line 62 "SuffixArray.x10"
    this->constructSample();
    
    //#line 63 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6281)));
    
    //#line 64 "SuffixArray.x10"
    this->sortSample();
    
    //#line 65 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6282)));
    
    //#line 66 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 67 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 70 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 71 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (bwt)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 72 "SuffixArray.x10"
    x10_long i__5941max__6127 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__6128;
        for (i__6128 = ((x10_long)0ll); ((i__6128) <= (i__5941max__6127));
             i__6128 = ((i__6128) + (((x10_long)1ll)))) {
            
            //#line 73 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__6128), ((x10_long)0ll))))
            {
                
                //#line 74 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__6128)) - (((x10_long)1ll))))));
            } else {
                
                //#line 76 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((this->FMGL(n)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 79 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 82 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    {
        
        //#line 83 "SuffixArray.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__6159 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                
                //#line 84 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__1)))bwt_SuffixArray__closure__1(this))));
                
                //#line 85 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__2)))bwt_SuffixArray__closure__2(this))));
                
                //#line 86 "SuffixArray.x10"
                ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__3)))bwt_SuffixArray__closure__3(this))));
                
                //#line 87 "SuffixArray.x10"
                this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
                
                //#line 88 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  this->FMGL(n02), ((x10_long)0ll));
                
                //#line 89 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)1ll))),
                  ((x10_long)0ll));
                
                //#line 90 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((this->FMGL(n02)) + (((x10_long)2ll))),
                  ((x10_long)0ll));
                
                //#line 91 "SuffixArray.x10"
                x10_long j = ((x10_long)0ll);
                
                //#line 92 "SuffixArray.x10"
                x10_long i__5957max__6130 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
                {
                    x10_long i__6131;
                    for (i__6131 = ((x10_long)0ll); ((i__6131) <= (i__5957max__6130));
                         i__6131 = ((i__6131) + (((x10_long)1ll))))
                    {
                        
                        //#line 93 "SuffixArray.x10"
                        if ((!::x10aux::struct_equals(((i__6131) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                                      ((x10_long)0ll))))
                        {
                            
                            //#line 94 "SuffixArray.x10"
                            ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                              j, i__6131);
                            
                            //#line 95 "SuffixArray.x10"
                            j = ((j) + (((x10_long)1ll)));
                        }
                        
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            {
                ::x10::lang::CheckedThrowable* ct__6157 =
                  __exc12;
                {
                    ::x10::xrx::Runtime::pushException(ct__6157);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__6159);
    }
}

//#line 101 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 102 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 103 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
    
    //#line 104 "SuffixArray.x10"
    this->sortPairsThree(this->FMGL(string), this->FMGL(SA12),
                         size, num_threads);
    
    //#line 121 "SuffixArray.x10"
    this->FMGL(name) = ((x10_long)0ll);
    
    //#line 122 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 123 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 124 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 125 "SuffixArray.x10"
    x10_long i__5973max__6133 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__6134;
        for (i__6134 = ((x10_long)0ll); ((i__6134) <= (i__5973max__6133));
             i__6134 = ((i__6134) + (((x10_long)1ll)))) {
            
            //#line 126 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__6134)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__6134)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__6134)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 127 "SuffixArray.x10"
                this->FMGL(name) = ((this->FMGL(name)) + (((x10_long)1ll)));
                
                //#line 128 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__6134));
                
                //#line 129 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__6134)) + (((x10_long)1ll))));
                
                //#line 130 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__6134)) + (((x10_long)2ll))));
            }
            
            //#line 133 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__6134)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 134 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__6134)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  this->FMGL(name));
            } else {
                
                //#line 136 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__6134)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  this->FMGL(name));
            }
            
        }
    }
    
    //#line 139 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6283)));
}

//#line 142 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 143 "SuffixArray.x10"
    if (((this->FMGL(name)) < (this->FMGL(n02)))) {
        
        //#line 144 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (bwa)->::bwt::SuffixArray::_constructor(this->FMGL(R),
                                                this->FMGL(name));
        
        //#line 145 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 146 "SuffixArray.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6284)));
        {
            
            //#line 147 "SuffixArray.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__6164 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    
                    //#line 148 "SuffixArray.x10"
                    ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(bwt_SuffixArray__closure__4)))bwt_SuffixArray__closure__4(this))));
                    
                    //#line 149 "SuffixArray.x10"
                    x10_long m = ((x10_long)0ll);
                    
                    //#line 150 "SuffixArray.x10"
                    x10_long i__6005max__6139 = ((this->FMGL(n02)) - (((x10_long)1ll)));
                    {
                        x10_long i__6140;
                        for (i__6140 = ((x10_long)0ll); ((i__6140) <= (i__6005max__6139));
                             i__6140 = ((i__6140) + (((x10_long)1ll))))
                        {
                            
                            //#line 151 "SuffixArray.x10"
                            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                    i__6140)) < (this->FMGL(n0))))
                            {
                                
                                //#line 152 "SuffixArray.x10"
                                ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                                  m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             i__6140))));
                                
                                //#line 153 "SuffixArray.x10"
                                m = ((m) + (((x10_long)1ll)));
                            }
                            
                        }
                    }
                    
                    //#line 156 "SuffixArray.x10"
                    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
                    
                    //#line 157 "SuffixArray.x10"
                    x10_int num_threads = ((x10_int) (((x10_long)11ll)));
                    
                    //#line 158 "SuffixArray.x10"
                    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6285)));
                    
                    //#line 159 "SuffixArray.x10"
                    this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                                    size, num_threads, ((x10_byte)0));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc15) {
                {
                    ::x10::lang::CheckedThrowable* ct__6162 =
                      __exc15;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__6162);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__6164);
        }
    } else {
        
        //#line 162 "SuffixArray.x10"
        x10_long i__6021max__6142 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6143;
            for (i__6143 = ((x10_long)0ll); ((i__6143) <= (i__6021max__6142));
                 i__6143 = ((i__6143) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__6143)) - (((x10_long)1ll))), i__6143);
            }
        }
        
        //#line 163 "SuffixArray.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6286)));
        
        //#line 165 "SuffixArray.x10"
        x10_long m = ((x10_long)0ll);
        
        //#line 166 "SuffixArray.x10"
        x10_long i__6037max__6145 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__6146;
            for (i__6146 = ((x10_long)0ll); ((i__6146) <= (i__6037max__6145));
                 i__6146 = ((i__6146) + (((x10_long)1ll))))
            {
                
                //#line 167 "SuffixArray.x10"
                if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__6146)) < (this->FMGL(n0)))) {
                    
                    //#line 169 "SuffixArray.x10"
                    ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__set(
                      m, ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                 i__6146))));
                    
                    //#line 170 "SuffixArray.x10"
                    m = ((m) + (((x10_long)1ll)));
                }
                
            }
        }
        
        //#line 173 "SuffixArray.x10"
        x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
        
        //#line 174 "SuffixArray.x10"
        x10_int num_threads = ((x10_int) (((x10_long)11ll)));
        
        //#line 175 "SuffixArray.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6285)));
        
        //#line 176 "SuffixArray.x10"
        this->sortPairs(this->FMGL(string), this->FMGL(SA0),
                        size, num_threads, ((x10_byte)0));
    }
    
    //#line 179 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__6287)));
    
    //#line 181 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 182 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 183 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 184 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 185 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 186 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 187 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 189 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__6095 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     i);
                x10_long a__6096 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                         t)) + (this->FMGL(n0))));
                x10_long b__6097 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                     j);
                x10_long b__6098 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                     ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__6095) < (b__6097)) || ((::x10aux::struct_equals(a__6095,
                                                                      b__6097)) &&
                ((a__6096) <= (b__6098))));
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
            
            //#line 192 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 193 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 194 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 195 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 196 "SuffixArray.x10"
                x10_long i__6053max__6148 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__6149;
                    for (i__6149 = ((x10_long)0ll); ((i__6149) <= (i__6053max__6148));
                         i__6149 = ((i__6149) + (((x10_long)1ll))))
                    {
                        
                        //#line 197 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(this->FMGL(SA0))->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 198 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 199 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 203 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 204 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 205 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 206 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 207 "SuffixArray.x10"
                x10_long i__6069max__6151 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__6152;
                    for (i__6152 = ((x10_long)0ll); ((i__6152) <= (i__6069max__6151));
                         i__6152 = ((i__6152) + (((x10_long)1ll))))
                    {
                        
                        //#line 208 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 209 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 210 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 217 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 218 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 221 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 222 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 225 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 226 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 227 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 229 "SuffixArray.x10"
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

::x10::lang::String bwt::SuffixArray_Strings::sl__6284("End BWA run");
::x10::lang::String bwt::SuffixArray_Strings::sl__6281("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__6286("BWA run End");
::x10::lang::String bwt::SuffixArray_Strings::sl__6283("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__6285("Start SortPairs");
::x10::lang::String bwt::SuffixArray_Strings::sl__6287("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__6282("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__6280("Start Constructuring Sample");

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
