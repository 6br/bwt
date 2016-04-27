/*************************************************/
/* START of Bwt */
#include <bwt/Bwt.h>

#include <bwt/SuffixArray.h>
#include <bwt/SuffixArrayChar.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/util/RailBuilder.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Timer.h>
#include <x10/util/StringBuilder.h>
#include <x10/io/File.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#include <x10/lang/String.h>

//#line 16 "Bwt.x10"

//#line 17 "Bwt.x10"

//#line 19 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::String* input, x10_int k, x10_boolean isDigit) {
    
    //#line 12 "Bwt.x10"
    ::bwt::Bwt* this__6000 = this;
    ::x10aux::nullCheck(this__6000)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6000)->FMGL(SAC) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArrayChar*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 20 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (strBuilder)->::x10::util::RailBuilder<x10_long>::_constructor(((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 21 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 22 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 24 "Bwt.x10"
    x10_long i__3805max__6003 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__6004;
        for (i__6004 = ((x10_long)0ll); ((i__6004) <= (i__3805max__6003));
             i__6004 = ((i__6004) + (((x10_long)1ll)))) {
            
            //#line 25 "Bwt.x10"
            x10_byte c__6001 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__6004);
            
            //#line 26 "Bwt.x10"
            x10_long base__6002;
            
            //#line 27 "Bwt.x10"
            if (isDigit) {
                
                //#line 28 "Bwt.x10"
                base__6002 = ((((x10_long)(c__6001))) - (((x10_long)47ll)));
            } else {
                
                //#line 31 "Bwt.x10"
                base__6002 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__6001) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__6001) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 33 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__6004) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 34 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__6155), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__6004) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 36 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__6002));
        }
    }
    
    //#line 38 "Bwt.x10"
    {
        x10_long i__6006;
        for (i__6006 = ((x10_long)0ll); ((i__6006) <= (((x10_long)2ll)));
             i__6006 = ((i__6006) + (((x10_long)1ll)))) {
            
            //#line 39 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 41 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 43 "Bwt.x10"
    this->FMGL(SA) = (__extension__ ({
        ::bwt::SuffixArray* alloc__3759 =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (alloc__3759)->::bwt::SuffixArray::_constructor(string,
                                                        ((x10_long)(k)));
        alloc__3759;
    }))
    ;
    
    //#line 44 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 45 "Bwt.x10"
    x10_long i__3837max__6008 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6009;
        for (i__6009 = ((x10_long)0ll); ((i__6009) <= (i__3837max__6008));
             i__6009 = ((i__6009) + (((x10_long)1ll)))) {
            
            //#line 46 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__6009)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* input, x10_int k,
                            x10_boolean isDigit) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(input, k, isDigit);
    return this_;
}



//#line 50 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::String* filename,
                            x10_int k) {
    
    //#line 12 "Bwt.x10"
    ::bwt::Bwt* this__6011 = this;
    ::x10aux::nullCheck(this__6011)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6011)->FMGL(SAC) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArrayChar*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 51 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = ::bwt::Bwt::fileio(
                                              filename);
    
    //#line 52 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 53 "Bwt.x10"
    this->FMGL(SA) = (__extension__ ({
        ::bwt::SuffixArray* alloc__3760 =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (alloc__3760)->::bwt::SuffixArray::_constructor(string,
                                                        ((x10_long)(k)));
        alloc__3760;
    }))
    ;
    
    //#line 54 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 55 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::nanoTime()) - (time));
    
    //#line 56 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__6156),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 57 "Bwt.x10"
    x10_long i__3853max__6012 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6013;
        for (i__6013 = ((x10_long)0ll); ((i__6013) <= (i__3853max__6012));
             i__6013 = ((i__6013) + (((x10_long)1ll)))) {
            
            //#line 58 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__6013)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::String* filename,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(filename, k);
    return this_;
}



//#line 62 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::Rail< x10_long >* string,
                            x10_int k) {
    
    //#line 12 "Bwt.x10"
    ::bwt::Bwt* this__6015 = this;
    ::x10aux::nullCheck(this__6015)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6015)->FMGL(SAC) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArrayChar*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 63 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 64 "Bwt.x10"
    this->FMGL(SA) = (__extension__ ({
        ::bwt::SuffixArray* alloc__3761 =  (new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray());
        (alloc__3761)->::bwt::SuffixArray::_constructor(string,
                                                        ((x10_long)(k)));
        alloc__3761;
    }))
    ;
    
    //#line 65 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SA))->run();
    
    //#line 66 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::nanoTime()) - (time));
    
    //#line 67 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__6156),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 68 "Bwt.x10"
    x10_long i__3869max__6016 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6017;
        for (i__6017 = ((x10_long)0ll); ((i__6017) <= (i__3869max__6016));
             i__6017 = ((i__6017) + (((x10_long)1ll)))) {
            
            //#line 69 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__6017)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_long >* string,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(string, k);
    return this_;
}



//#line 73 "Bwt.x10"
void bwt::Bwt::_constructor(::x10::lang::Rail< x10_byte >* string,
                            x10_int k) {
    
    //#line 12 "Bwt.x10"
    ::bwt::Bwt* this__6019 = this;
    ::x10aux::nullCheck(this__6019)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__6019)->FMGL(SAC) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArrayChar*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 74 "Bwt.x10"
    x10_long time = ::x10::lang::RuntimeNatives::nanoTime();
    
    //#line 75 "Bwt.x10"
    this->FMGL(SAC) = (__extension__ ({
        ::bwt::SuffixArrayChar* alloc__3762 =  (new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar());
        (alloc__3762)->::bwt::SuffixArrayChar::_constructor(
          string, ((x10_long)(k)));
        alloc__3762;
    }))
    ;
    
    //#line 76 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* sa = ::x10aux::nullCheck(this->FMGL(SAC))->run();
    
    //#line 77 "Bwt.x10"
    x10_long difftime = ((::x10::lang::RuntimeNatives::nanoTime()) - (time));
    
    //#line 78 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::Bwt_Strings::sl__6156),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(difftime));
    
    //#line 79 "Bwt.x10"
    x10_long i__3885max__6020 = (((x10_long)(::x10aux::nullCheck(sa)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6021;
        for (i__6021 = ((x10_long)0ll); ((i__6021) <= (i__3885max__6020));
             i__6021 = ((i__6021) + (((x10_long)1ll)))) {
            
            //#line 80 "Bwt.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(sa)->x10::lang::Rail< x10_long >::__apply(
                                                                   i__6021)));
        }
    }
    
}
::bwt::Bwt* bwt::Bwt::_make(::x10::lang::Rail< x10_byte >* string,
                            x10_int k) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    this_->_constructor(string, k);
    return this_;
}



//#line 84 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::strToRail(::x10::lang::String* input,
                                                   x10_boolean isDigit) {
    
    //#line 85 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (strBuilder)->::x10::util::RailBuilder<x10_long>::_constructor(
      ((x10_long)(::x10aux::nullCheck(input)->x10::lang::String::length())));
    
    //#line 86 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* inputBytes = ::x10aux::nullCheck(input)->x10::lang::String::bytes();
    
    //#line 87 "Bwt.x10"
    x10_int length = ::x10aux::nullCheck(input)->x10::lang::String::length();
    
    //#line 89 "Bwt.x10"
    x10_long i__3901max__6025 = ((((x10_long)(length))) - (((x10_long)1ll)));
    {
        x10_long i__6026;
        for (i__6026 = ((x10_long)0ll); ((i__6026) <= (i__3901max__6025));
             i__6026 = ((i__6026) + (((x10_long)1ll)))) {
            
            //#line 90 "Bwt.x10"
            x10_byte c__6023 = ::x10aux::nullCheck(inputBytes)->x10::lang::Rail< x10_byte >::__apply(
                                 i__6026);
            
            //#line 91 "Bwt.x10"
            x10_long base__6024;
            
            //#line 92 "Bwt.x10"
            if (isDigit) {
                
                //#line 93 "Bwt.x10"
                base__6024 = ((((x10_long)(c__6023))) - (((x10_long)47ll)));
            } else {
                
                //#line 96 "Bwt.x10"
                base__6024 = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c__6023) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c__6023) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            }
            
            //#line 98 "Bwt.x10"
            if ((::x10aux::struct_equals(((i__6026) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 99 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__6155), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((i__6026) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 101 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base__6024));
        }
    }
    
    //#line 103 "Bwt.x10"
    reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                             ((x10_long)0ll)));
    
    //#line 104 "Bwt.x10"
    return strBuilder->result();
    
}

//#line 107 "Bwt.x10"
::x10::lang::String* bwt::Bwt::fileioImproved(::x10::lang::String* filename) {
    
    //#line 108 "Bwt.x10"
    ::x10::util::StringBuilder* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (strBuilder)->::x10::util::StringBuilder::_constructor();
    
    //#line 109 "Bwt.x10"
    ::x10::io::File* input =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
    (input)->::x10::io::File::_constructor(filename);
    
    //#line 110 "Bwt.x10"
    x10_long j = ((x10_long)1ll);
    
    //#line 111 "Bwt.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* c__3917;
        for (c__3917 = ::x10aux::nullCheck(input->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(c__3917));
             ) {
            ::x10::lang::String* c = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(c__3917));
            
            //#line 112 "Bwt.x10"
            strBuilder->addString(c);
            
            //#line 113 "Bwt.x10"
            if ((::x10aux::struct_equals(((j) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 114 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__6157), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((j) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 116 "Bwt.x10"
            j = ((j) + (((x10_long)1ll)));
        }
    }
    
    //#line 118 "Bwt.x10"
    ::x10::lang::String* string = strBuilder->result();
    
    //#line 119 "Bwt.x10"
    return string;
    
}

//#line 122 "Bwt.x10"

//#line 125 "Bwt.x10"

//#line 128 "Bwt.x10"

//#line 131 "Bwt.x10"
::x10::lang::Rail< x10_long >* bwt::Bwt::fileio(::x10::lang::String* filename) {
    
    //#line 132 "Bwt.x10"
    ::x10::util::RailBuilder<x10_long>* strBuilder =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (strBuilder)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 133 "Bwt.x10"
    ::x10::io::File* input =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
    (input)->::x10::io::File::_constructor(filename);
    
    //#line 134 "Bwt.x10"
    x10_long j = ((x10_long)1ll);
    
    //#line 135 "Bwt.x10"
    {
        ::x10::lang::Iterator<x10_byte>* c__3919;
        for (c__3919 = ::x10aux::nullCheck(input->bytes())->iterator();
             ::x10::lang::Iterator<x10_byte>::hasNext(::x10aux::nullCheck(c__3919));
             ) {
            x10_byte c = ::x10::lang::Iterator<x10_byte>::next(::x10aux::nullCheck(c__3919));
            
            //#line 137 "Bwt.x10"
            x10_long base = ((((((x10_long)(((x10_byte) ((((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)2ll)))))) ^ (((x10_byte) ((c) >> (0x7 & (x10_int)(((x10_long)1ll))))))))))) & (((x10_long)19ll)))) % ::x10aux::zeroCheck(((x10_long)5ll)));
            
            //#line 138 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     base));
            
            //#line 139 "Bwt.x10"
            if ((::x10aux::struct_equals(((j) % ::x10aux::zeroCheck(((x10_long)1048576ll))),
                                         ((x10_long)0ll))))
            {
                
                //#line 140 "Bwt.x10"
                ::x10::io::Console::FMGL(ERR__get)()->printf(
                  (&::bwt::Bwt_Strings::sl__6155), ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((j) / ::x10aux::zeroCheck(((x10_long)1048576ll)))));
            }
            
            //#line 142 "Bwt.x10"
            j = ((j) + (((x10_long)1ll)));
        }
    }
    
    //#line 144 "Bwt.x10"
    {
        x10_long i__6028;
        for (i__6028 = ((x10_long)0ll); ((i__6028) <= (((x10_long)2ll)));
             i__6028 = ((i__6028) + (((x10_long)1ll)))) {
            
            //#line 145 "Bwt.x10"
            reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(strBuilder->add(
                                                                     ((x10_long)0ll)));
        }
    }
    
    //#line 147 "Bwt.x10"
    ::x10::lang::Rail< x10_long >* string = strBuilder->result();
    
    //#line 148 "Bwt.x10"
    return string;
    
}

//#line 151 "Bwt.x10"
void bwt::Bwt::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 153 "Bwt.x10"
    x10_int N = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                    ((x10_long)0ll)));
    
    //#line 154 "Bwt.x10"
    x10_long length = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)1ll)));
    
    //#line 155 "Bwt.x10"
    ::x10::lang::String* file = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                  ((x10_long)2ll));
    
    //#line 156 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__6158)));
    
    //#line 158 "Bwt.x10"
    ::x10::lang::Rail< x10_byte >* e = ::x10::lang::Rail< x10_byte >::_make(length);
    
    //#line 159 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__6159)));
    
    //#line 160 "Bwt.x10"
    input_fgets_char((file)->c_str(), (e)->raw);;
    
    //#line 161 "Bwt.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::Bwt_Strings::sl__6160)));
    
    //#line 162 "Bwt.x10"
    ::bwt::Bwt* bwa =  (new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt());
    (bwa)->::bwt::Bwt::_constructor(e, N);
    
}

//#line 12 "Bwt.x10"
::bwt::Bwt* bwt::Bwt::bwt__Bwt____this__bwt__Bwt() {
    return this;
    
}
void bwt::Bwt::__fieldInitializers_bwt_Bwt() {
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArray*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SAC) = (::x10aux::class_cast_unchecked< ::bwt::SuffixArrayChar*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwt::Bwt::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::Bwt::_deserializer);

void bwt::Bwt::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(SA));
    buf.write(this->FMGL(SAC));
    
}

::x10::lang::Reference* ::bwt::Bwt::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::Bwt* this_ = new (::x10aux::alloc_z< ::bwt::Bwt>()) ::bwt::Bwt();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::Bwt::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(SA) = buf.read< ::bwt::SuffixArray*>();
    FMGL(SAC) = buf.read< ::bwt::SuffixArrayChar*>();
}

::x10aux::RuntimeType bwt::Bwt::rtt;
void bwt::Bwt::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.Bwt",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::Bwt_Strings::sl__6159("End Malloc");
::x10::lang::String bwt::Bwt_Strings::sl__6157("%ld MLine loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__6155("%ld MB loaded.\n");
::x10::lang::String bwt::Bwt_Strings::sl__6160("Files has read");
::x10::lang::String bwt::Bwt_Strings::sl__6156("Elapsed time: %ld nanotime.\n");
::x10::lang::String bwt::Bwt_Strings::sl__6158("Start Malloc");

/* END of Bwt */
/*************************************************/
