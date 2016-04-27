/*************************************************/
/* START of SuffixArrayChar */
#include <bwt/SuffixArrayChar.h>

#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <bwt/SuffixArray.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>

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

//#line 24 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize) {
    
    //#line 9 "SuffixArrayChar.x10"
    this->bwt::SuffixArrayChar::__fieldInitializers_bwt_SuffixArrayChar();
    
    //#line 25 "SuffixArrayChar.x10"
    this->FMGL(string) = input;
    
    //#line 26 "SuffixArrayChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 27 "SuffixArrayChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 28 "SuffixArrayChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArrayChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArrayChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArrayChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                    x10_long charsize)
{
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 34 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairs(::x10::lang::Rail< x10_byte >* keys,
                                     ::x10::lang::Rail< x10_long >* values,
                                     x10_ulong num_elems, x10_int num_threads,
                                     x10_byte offset){
    parallel_radix_sort::SortPairsByte((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 38 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                     ::x10::lang::Rail< x10_long >* b,
                                     x10_byte rOffs, x10_long nt) {
    
    //#line 39 "SuffixArrayChar.x10"
    x10_long i__5066min__5264 = ((x10_long)0ll);
    x10_long i__5066max__5265 = this->FMGL(k);
    {
        x10_long i__5266;
        for (i__5266 = i__5066min__5264; ((i__5266) <= (i__5066max__5265));
             i__5266 = ((i__5266) + (((x10_long)1ll)))) {
            x10_long i__5267 = i__5266;
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__5267, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArrayChar.x10"
    x10_long i__5082min__5268 = ((x10_long)0ll);
    x10_long i__5082max__5269 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5270;
        for (i__5270 = i__5082min__5268; ((i__5270) <= (i__5082max__5269));
             i__5270 = ((i__5270) + (((x10_long)1ll)))) {
            x10_long i__5271 = i__5270;
            
            //#line 41 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__5257 = this->FMGL(c);
            x10_long i__5258 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5271)) + (((x10_long)(rOffs)))))));
            x10_long r__5259 = ((::x10aux::nullCheck(a__5257)->x10::lang::Rail< x10_long >::__apply(
                                   i__5258)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5257)->x10::lang::Rail< x10_long >::__set(
              i__5258, r__5259);
        }
    }
    
    //#line 43 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArrayChar.x10"
    x10_long i__5098min__5272 = ((x10_long)0ll);
    x10_long i__5098max__5273 = this->FMGL(k);
    {
        x10_long i__5274;
        for (i__5274 = i__5098min__5272; ((i__5274) <= (i__5098max__5273));
             i__5274 = ((i__5274) + (((x10_long)1ll)))) {
            x10_long i__5275 = i__5274;
            
            //#line 45 "SuffixArrayChar.x10"
            x10_long t__5260 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                 i__5275);
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__5275, sum);
            
            //#line 47 "SuffixArrayChar.x10"
            sum = ((sum) + (t__5260));
        }
    }
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__5114min__5276 = ((x10_long)0ll);
    x10_long i__5114max__5277 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5278;
        for (i__5278 = i__5114min__5276; ((i__5278) <= (i__5114max__5277));
             i__5278 = ((i__5278) + (((x10_long)1ll)))) {
            x10_long i__5279 = i__5278;
            
            //#line 50 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__5279)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5279));
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__5261 = this->FMGL(c);
            x10_long i__5262 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5279)) + (((x10_long)(rOffs)))))));
            x10_long r__5263 = ((::x10aux::nullCheck(a__5261)->x10::lang::Rail< x10_long >::__apply(
                                   i__5262)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5261)->x10::lang::Rail< x10_long >::__set(
              i__5262, r__5263);
        }
    }
    
}

//#line 55 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 56 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5402)));
    
    //#line 57 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 58 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5403)));
    
    //#line 59 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 60 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5404)));
    
    //#line 61 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 62 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 65 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 66 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 67 "SuffixArrayChar.x10"
    x10_long i__5130min__5280 = ((x10_long)0ll);
    x10_long i__5130max__5281 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5282;
        for (i__5282 = i__5130min__5280; ((i__5282) <= (i__5130max__5281));
             i__5282 = ((i__5282) + (((x10_long)1ll)))) {
            x10_long i__5283 = i__5282;
            
            //#line 68 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5283), ((x10_long)0ll))))
            {
                
                //#line 69 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__5283)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 72 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 75 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    
    //#line 76 "SuffixArrayChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 77 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 78 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 79 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 80 "SuffixArrayChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 81 "SuffixArrayChar.x10"
    x10_long i__5146min__5284 = ((x10_long)0ll);
    x10_long i__5146max__5285 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5286;
        for (i__5286 = i__5146min__5284; ((i__5286) <= (i__5146max__5285));
             i__5286 = ((i__5286) + (((x10_long)1ll)))) {
            x10_long i__5287 = i__5286;
            
            //#line 82 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(((i__5287) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__5287);
                
                //#line 84 "SuffixArrayChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 87 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
}

//#line 93 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 94 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 95 "SuffixArrayChar.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 96 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 97 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5405)));
    
    //#line 98 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 99 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5406)));
    
    //#line 100 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 107 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5407)));
    
    //#line 109 "SuffixArrayChar.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 110 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 111 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 112 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 113 "SuffixArrayChar.x10"
    x10_long i__5162min__5296 = ((x10_long)0ll);
    x10_long i__5162max__5297 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5298;
        for (i__5298 = i__5162min__5296; ((i__5298) <= (i__5162max__5297));
             i__5298 = ((i__5298) + (((x10_long)1ll)))) {
            x10_long i__5299 = i__5298;
            
            //#line 114 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5299)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5299)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5299)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 115 "SuffixArrayChar.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 116 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5299));
                
                //#line 117 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5299)) + (((x10_long)1ll))));
                
                //#line 118 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5299)) + (((x10_long)2ll))));
            }
            
            //#line 121 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5299)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 122 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5299)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 124 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5299)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 127 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5408)));
    
    //#line 129 "SuffixArrayChar.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 130 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 131 "SuffixArrayChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 132 "SuffixArrayChar.x10"
        x10_long i__5178min__5288 = ((x10_long)0ll);
        x10_long i__5178max__5289 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5290;
            for (i__5290 = i__5178min__5288; ((i__5290) <= (i__5178max__5289));
                 i__5290 = ((i__5290) + (((x10_long)1ll))))
            {
                x10_long i__5291 = i__5290;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5291), ((i__5291) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 134 "SuffixArrayChar.x10"
        x10_long i__5194min__5292 = ((x10_long)0ll);
        x10_long i__5194max__5293 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5294;
            for (i__5294 = i__5194min__5292; ((i__5294) <= (i__5194max__5293));
                 i__5294 = ((i__5294) + (((x10_long)1ll))))
            {
                x10_long i__5295 = i__5294;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5295)) - (((x10_long)1ll))), i__5295);
            }
        }
        
    }
    
}

//#line 138 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 139 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 140 "SuffixArrayChar.x10"
    x10_long i__5210min__5308 = ((x10_long)0ll);
    x10_long i__5210max__5309 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5310;
        for (i__5310 = i__5210min__5308; ((i__5310) <= (i__5210max__5309));
             i__5310 = ((i__5310) + (((x10_long)1ll)))) {
            x10_long i__5311 = i__5310;
            
            //#line 141 "SuffixArrayChar.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5311)) < (this->FMGL(n0)))) {
                
                //#line 142 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__5311)))));
            }
            
        }
    }
    
    //#line 145 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* SA0 = R0B->result();
    
    //#line 148 "SuffixArrayChar.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
    
    //#line 149 "SuffixArrayChar.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 150 "SuffixArrayChar.x10"
    this->sortPairs(this->FMGL(string), SA0, size, num_threads,
                    ((x10_byte)0));
    
    //#line 152 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5409)));
    
    //#line 153 "SuffixArrayChar.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 155 "SuffixArrayChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 156 "SuffixArrayChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 157 "SuffixArrayChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 158 "SuffixArrayChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 159 "SuffixArrayChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 160 "SuffixArrayChar.x10"
        x10_long i = this->getI(t);
        
        //#line 161 "SuffixArrayChar.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 163 "SuffixArrayChar.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     i))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t)) + (this->FMGL(n0)))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     j))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
            (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                 t)) >= (this->FMGL(n0))) && this->leq(((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     i))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     ((i) + (((x10_long)1ll)))))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                               t)) - (this->FMGL(n0)))) + (((x10_long)1ll)))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     j))),
                                                       ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                     ((j) + (((x10_long)1ll)))))),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((((j) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))))))))
        {
            
            //#line 166 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 167 "SuffixArrayChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 168 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 169 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 170 "SuffixArrayChar.x10"
                x10_long i__5226min__5300 = ((x10_long)0ll);
                x10_long i__5226max__5301 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5302;
                    for (i__5302 = i__5226min__5300; ((i__5302) <= (i__5226max__5301));
                         i__5302 = ((i__5302) + (((x10_long)1ll))))
                    {
                        x10_long q__5303 = i__5302;
                        
                        //#line 171 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 172 "SuffixArrayChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 173 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 177 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 178 "SuffixArrayChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 179 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 180 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 181 "SuffixArrayChar.x10"
                x10_long i__5242min__5304 = ((x10_long)0ll);
                x10_long i__5242max__5305 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5306;
                    for (i__5306 = i__5242min__5304; ((i__5306) <= (i__5242max__5305));
                         i__5306 = ((i__5306) + (((x10_long)1ll))))
                    {
                        x10_long q__5307 = i__5306;
                        
                        //#line 182 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 183 "SuffixArrayChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 184 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 191 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 192 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 195 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 196 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 199 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 200 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 201 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 203 "SuffixArrayChar.x10"
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
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    buf.write(this->FMGL(c));
    
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
    FMGL(SA) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(c) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType bwt::SuffixArrayChar::rtt;
void bwt::SuffixArrayChar::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5406("Ended 2st Radix Sort");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5404("Start Sort Char NonSample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5405("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5403("Start Sort Char Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5408("Ended Sort Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5407("Ended 3rd Char Radix Sort");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5409("Start Last Merge");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5402("Start Constructuring Char Sample");

/* END of SuffixArrayChar */
/*************************************************/
