#ifndef __BWA_SUFFIXARRAY_H
#define __BWA_SUFFIXARRAY_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class RailBuilder;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace bwa { 

class SuffixArray : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_long >* FMGL(string);
    
    x10_long FMGL(n);
    
    x10_long FMGL(n0);
    
    x10_long FMGL(n1);
    
    x10_long FMGL(n2);
    
    x10_long FMGL(k);
    
    x10_long FMGL(n02);
    
    ::x10::lang::Rail< x10_long >* FMGL(R);
    
    ::x10::lang::Rail< x10_long >* FMGL(SA12);
    
    ::x10::lang::Rail< x10_long >* FMGL(SA);
    
    void _constructor(::x10::lang::Rail< x10_long >* input, x10_long charsize);
    
    static ::bwa::SuffixArray* _make(::x10::lang::Rail< x10_long >* input,
                                     x10_long charsize);
    
    virtual void radixPass(::x10::lang::Rail< x10_long >* a, ::x10::lang::Rail< x10_long >* b,
                           x10_byte rOffs, x10_long nt);
    virtual ::x10::lang::Rail< x10_long >* run();
    virtual void constructSample();
    virtual void sortSample();
    virtual void sortNonSample();
    x10_boolean leq(x10_long a1, x10_long a2, x10_long b1, x10_long b2);
    x10_boolean leq(x10_long a1, x10_long a2, x10_long a3, x10_long b1,
                    x10_long b2, x10_long b3);
    x10_long getI(x10_long t);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::bwa::SuffixArray* bwa__SuffixArray____this__bwa__SuffixArray(
      );
    virtual void __fieldInitializers_bwa_SuffixArray();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // BWA_SUFFIXARRAY_H

namespace bwa { 
class SuffixArray;
} 

#ifndef BWA_SUFFIXARRAY_H_NODEPS
#define BWA_SUFFIXARRAY_H_NODEPS
#ifndef BWA_SUFFIXARRAY_H_GENERICS
#define BWA_SUFFIXARRAY_H_GENERICS
#endif // BWA_SUFFIXARRAY_H_GENERICS
#endif // __BWA_SUFFIXARRAY_H_NODEPS
