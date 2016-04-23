#ifndef __BWA_BWA_H
#define __BWA_BWA_H

#include <x10rt.h>


#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class RailBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace bwa { 

class Bwa_Strings {
  public:
    static ::x10::lang::String sl__302;
};

class Bwa : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_byte >* FMGL(string);
    
    x10_long FMGL(n);
    
    x10_long FMGL(n0);
    
    x10_long FMGL(n1);
    
    x10_long FMGL(n2);
    
    x10_long FMGL(n02);
    
    ::x10::lang::Rail< x10_long >* FMGL(R);
    
    void _constructor(::x10::lang::String* input);
    
    static ::bwa::Bwa* _make(::x10::lang::String* input);
    
    virtual void constructSample();
    virtual void sortSample();
    virtual void sortNonSample();
    virtual void merge();
    virtual void show();
    static void radixPass(::x10::lang::Rail< x10_long >* a, ::x10::lang::Rail< x10_long >* b,
                          ::x10::lang::Rail< x10_byte >* r, x10_int n);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::bwa::Bwa* bwa__Bwa____this__bwa__Bwa();
    virtual void __fieldInitializers_bwa_Bwa();
    
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
#endif // BWA_BWA_H

namespace bwa { 
class Bwa;
} 

#ifndef BWA_BWA_H_NODEPS
#define BWA_BWA_H_NODEPS
#ifndef BWA_BWA_H_GENERICS
#define BWA_BWA_H_GENERICS
#endif // BWA_BWA_H_GENERICS
#endif // __BWA_BWA_H_NODEPS
