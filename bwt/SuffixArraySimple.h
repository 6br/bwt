#ifndef __BWT_SUFFIXARRAYSIMPLE_H
#define __BWT_SUFFIXARRAYSIMPLE_H

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
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class RailBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace bwt { 

class SuffixArraySimple_Strings {
  public:
    static ::x10::lang::String sl__16581;
};

class SuffixArraySimple : public ::x10::lang::X10Class   {
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
    
    static ::bwt::SuffixArraySimple* _make(::x10::lang::Rail< x10_long >* input,
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
    virtual ::bwt::SuffixArraySimple* bwt__SuffixArraySimple____this__bwt__SuffixArraySimple(
      );
    virtual void __fieldInitializers_bwt_SuffixArraySimple(
      );
    
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
#endif // BWT_SUFFIXARRAYSIMPLE_H

namespace bwt { 
class SuffixArraySimple;
} 

#ifndef BWT_SUFFIXARRAYSIMPLE_H_NODEPS
#define BWT_SUFFIXARRAYSIMPLE_H_NODEPS
#ifndef BWT_SUFFIXARRAYSIMPLE_H_GENERICS
#define BWT_SUFFIXARRAYSIMPLE_H_GENERICS
#endif // BWT_SUFFIXARRAYSIMPLE_H_GENERICS
#endif // __BWT_SUFFIXARRAYSIMPLE_H_NODEPS
