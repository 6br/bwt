#ifndef __BWT_BWT_H
#define __BWT_BWT_H

#include <x10rt.h>

#include "input.h"

namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace bwt { 
class SuffixArrayChar;
} 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class RailBuilder;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 

namespace bwt { 

class Bwt_Strings {
  public:
    static ::x10::lang::String sl__6212;
    static ::x10::lang::String sl__6216;
    static ::x10::lang::String sl__6214;
    static ::x10::lang::String sl__6213;
    static ::x10::lang::String sl__6217;
    static ::x10::lang::String sl__6215;
};

class Bwt : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(::x10::lang::Rail< x10_byte >* string, x10_int k);
    
    static ::bwt::Bwt* _make(::x10::lang::Rail< x10_byte >* string, x10_int k);
    
    static ::x10::lang::Rail< x10_long >* strToRail(::x10::lang::String* input,
                                                    x10_boolean isDigit);
    static ::x10::lang::String* fileioImproved(::x10::lang::String* filename);
    static ::x10::lang::Rail< x10_long >* fileio(::x10::lang::String* filename);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::bwt::Bwt* bwt__Bwt____this__bwt__Bwt();
    virtual void __fieldInitializers_bwt_Bwt();
    
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
#endif // BWT_BWT_H

namespace bwt { 
class Bwt;
} 

#ifndef BWT_BWT_H_NODEPS
#define BWT_BWT_H_NODEPS
#ifndef BWT_BWT_H_GENERICS
#define BWT_BWT_H_GENERICS
#endif // BWT_BWT_H_GENERICS
#endif // __BWT_BWT_H_NODEPS
