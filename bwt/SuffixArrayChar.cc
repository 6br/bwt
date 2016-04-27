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

//#line 23 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                        x10_long charsize) {
    
    //#line 9 "SuffixArrayChar.x10"
    this->bwt::SuffixArrayChar::__fieldInitializers_bwt_SuffixArrayChar();
    
    //#line 24 "SuffixArrayChar.x10"
    this->FMGL(string) = input;
    
    //#line 25 "SuffixArrayChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 26 "SuffixArrayChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 27 "SuffixArrayChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 28 "SuffixArrayChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArrayChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArrayChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArrayChar* bwt::SuffixArrayChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                    x10_long charsize)
{
    ::bwt::SuffixArrayChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArrayChar>()) ::bwt::SuffixArrayChar();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 33 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                     ::x10::lang::Rail< x10_long >* values,
                                     x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 37 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                     ::x10::lang::Rail< x10_long >* b,
                                     x10_byte rOffs, x10_long nt) {
    
    //#line 38 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 39 "SuffixArrayChar.x10"
    x10_long i__5271min__5469 = ((x10_long)0ll);
    x10_long i__5271max__5470 = this->FMGL(k);
    {
        x10_long i__5471;
        for (i__5471 = i__5271min__5469; ((i__5471) <= (i__5271max__5470));
             i__5471 = ((i__5471) + (((x10_long)1ll)))) {
            x10_long i__5472 = i__5471;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5472, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArrayChar.x10"
    x10_long i__5287min__5473 = ((x10_long)0ll);
    x10_long i__5287max__5474 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5475;
        for (i__5475 = i__5287min__5473; ((i__5475) <= (i__5287max__5474));
             i__5475 = ((i__5475) + (((x10_long)1ll)))) {
            x10_long i__5476 = i__5475;
            
            //#line 41 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__5462 = c;
            x10_long i__5463 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5476)) + (((x10_long)(rOffs)))))));
            x10_long r__5464 = ((::x10aux::nullCheck(a__5462)->x10::lang::Rail< x10_long >::__apply(
                                   i__5463)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5462)->x10::lang::Rail< x10_long >::__set(
              i__5463, r__5464);
        }
    }
    
    //#line 43 "SuffixArrayChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArrayChar.x10"
    x10_long i__5303min__5477 = ((x10_long)0ll);
    x10_long i__5303max__5478 = this->FMGL(k);
    {
        x10_long i__5479;
        for (i__5479 = i__5303min__5477; ((i__5479) <= (i__5303max__5478));
             i__5479 = ((i__5479) + (((x10_long)1ll)))) {
            x10_long i__5480 = i__5479;
            
            //#line 45 "SuffixArrayChar.x10"
            x10_long t__5465 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__5480);
            
            //#line 46 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__5480, sum);
            
            //#line 47 "SuffixArrayChar.x10"
            sum = ((sum) + (t__5465));
        }
    }
    
    //#line 49 "SuffixArrayChar.x10"
    x10_long i__5319min__5481 = ((x10_long)0ll);
    x10_long i__5319max__5482 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__5483;
        for (i__5483 = i__5319min__5481; ((i__5483) <= (i__5319max__5482));
             i__5483 = ((i__5483) + (((x10_long)1ll)))) {
            x10_long i__5484 = i__5483;
            
            //#line 50 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__5484)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__5484));
            
            //#line 51 "SuffixArrayChar.x10"
            ::x10::lang::Rail< x10_long >* a__5466 = c;
            x10_long i__5467 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                             ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                 i__5484)) + (((x10_long)(rOffs)))))));
            x10_long r__5468 = ((::x10aux::nullCheck(a__5466)->x10::lang::Rail< x10_long >::__apply(
                                   i__5467)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__5466)->x10::lang::Rail< x10_long >::__set(
              i__5467, r__5468);
        }
    }
    
}

//#line 55 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::run(
  ) {
    
    //#line 69 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5600)));
    
    //#line 70 "SuffixArrayChar.x10"
    this->constructSample();
    
    //#line 71 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5601)));
    
    //#line 72 "SuffixArrayChar.x10"
    this->sortSample();
    
    //#line 73 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5602)));
    
    //#line 74 "SuffixArrayChar.x10"
    this->sortNonSample();
    
    //#line 75 "SuffixArrayChar.x10"
    return this->FMGL(SA);
    
}

//#line 78 "SuffixArrayChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArrayChar::bwtable(
  ) {
    
    //#line 79 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 80 "SuffixArrayChar.x10"
    x10_long i__5335min__5485 = ((x10_long)0ll);
    x10_long i__5335max__5486 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__5487;
        for (i__5487 = i__5335min__5485; ((i__5487) <= (i__5335max__5486));
             i__5487 = ((i__5487) + (((x10_long)1ll)))) {
            x10_long i__5488 = i__5487;
            
            //#line 81 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__5488), ((x10_long)0ll))))
            {
                
                //#line 82 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                       ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                                           i__5488)) - (((x10_long)1ll))))))));
            }
            
        }
    }
    
    //#line 85 "SuffixArrayChar.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 88 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::constructSample() {
    
    //#line 89 "SuffixArrayChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 90 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 91 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 92 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 93 "SuffixArrayChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 94 "SuffixArrayChar.x10"
    x10_long i__5351min__5489 = ((x10_long)0ll);
    x10_long i__5351max__5490 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__5491;
        for (i__5491 = i__5351min__5489; ((i__5491) <= (i__5351max__5490));
             i__5491 = ((i__5491) + (((x10_long)1ll)))) {
            x10_long i__5492 = i__5491;
            
            //#line 95 "SuffixArrayChar.x10"
            if ((!::x10aux::struct_equals(((i__5492) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 96 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__5492);
                
                //#line 97 "SuffixArrayChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 100 "SuffixArrayChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 101 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 102 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 103 "SuffixArrayChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 106 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortSample() {
    
    //#line 107 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 108 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 109 "SuffixArrayChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 111 "SuffixArrayChar.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 112 "SuffixArrayChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 113 "SuffixArrayChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 114 "SuffixArrayChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 115 "SuffixArrayChar.x10"
    x10_long i__5367min__5501 = ((x10_long)0ll);
    x10_long i__5367max__5502 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5503;
        for (i__5503 = i__5367min__5501; ((i__5503) <= (i__5367max__5502));
             i__5503 = ((i__5503) + (((x10_long)1ll)))) {
            x10_long i__5504 = i__5503;
            
            //#line 116 "SuffixArrayChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5504)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__5504)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__5504)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 117 "SuffixArrayChar.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 118 "SuffixArrayChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__5504));
                
                //#line 119 "SuffixArrayChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5504)) + (((x10_long)1ll))));
                
                //#line 120 "SuffixArrayChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__5504)) + (((x10_long)2ll))));
            }
            
            //#line 123 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__5504)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 124 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__5504)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 126 "SuffixArrayChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__5504)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 130 "SuffixArrayChar.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 131 "SuffixArrayChar.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 132 "SuffixArrayChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 133 "SuffixArrayChar.x10"
        x10_long i__5383min__5493 = ((x10_long)0ll);
        x10_long i__5383max__5494 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5495;
            for (i__5495 = i__5383min__5493; ((i__5495) <= (i__5383max__5494));
                 i__5495 = ((i__5495) + (((x10_long)1ll))))
            {
                x10_long i__5496 = i__5495;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5496), ((i__5496) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 135 "SuffixArrayChar.x10"
        x10_long i__5399min__5497 = ((x10_long)0ll);
        x10_long i__5399max__5498 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__5499;
            for (i__5499 = i__5399min__5497; ((i__5499) <= (i__5399max__5498));
                 i__5499 = ((i__5499) + (((x10_long)1ll))))
            {
                x10_long i__5500 = i__5499;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__5500)) - (((x10_long)1ll))), i__5500);
            }
        }
        
    }
    
}

//#line 139 "SuffixArrayChar.x10"
void bwt::SuffixArrayChar::sortNonSample() {
    
    //#line 140 "SuffixArrayChar.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 141 "SuffixArrayChar.x10"
    x10_long i__5415min__5513 = ((x10_long)0ll);
    x10_long i__5415max__5514 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__5515;
        for (i__5515 = i__5415min__5513; ((i__5515) <= (i__5415max__5514));
             i__5515 = ((i__5515) + (((x10_long)1ll)))) {
            x10_long i__5516 = i__5515;
            
            //#line 142 "SuffixArrayChar.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__5516)) < (this->FMGL(n0)))) {
                
                //#line 143 "SuffixArrayChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__5516)))));
            }
            
        }
    }
    
    //#line 146 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 147 "SuffixArrayChar.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 148 "SuffixArrayChar.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 149 "SuffixArrayChar.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 151 "SuffixArrayChar.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArrayChar_Strings::sl__5603)));
    
    //#line 153 "SuffixArrayChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 154 "SuffixArrayChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 155 "SuffixArrayChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 156 "SuffixArrayChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 157 "SuffixArrayChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 158 "SuffixArrayChar.x10"
        x10_long i = this->getI(t);
        
        //#line 159 "SuffixArrayChar.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 161 "SuffixArrayChar.x10"
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
            
            //#line 164 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 165 "SuffixArrayChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 166 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 167 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 168 "SuffixArrayChar.x10"
                x10_long i__5431min__5505 = ((x10_long)0ll);
                x10_long i__5431max__5506 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__5507;
                    for (i__5507 = i__5431min__5505; ((i__5507) <= (i__5431max__5506));
                         i__5507 = ((i__5507) + (((x10_long)1ll))))
                    {
                        x10_long q__5508 = i__5507;
                        
                        //#line 169 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 170 "SuffixArrayChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 171 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 175 "SuffixArrayChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 176 "SuffixArrayChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 177 "SuffixArrayChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 178 "SuffixArrayChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 179 "SuffixArrayChar.x10"
                x10_long i__5447min__5509 = ((x10_long)0ll);
                x10_long i__5447max__5510 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__5511;
                    for (i__5511 = i__5447min__5509; ((i__5511) <= (i__5447max__5510));
                         i__5511 = ((i__5511) + (((x10_long)1ll))))
                    {
                        x10_long q__5512 = i__5511;
                        
                        //#line 180 "SuffixArrayChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 181 "SuffixArrayChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 182 "SuffixArrayChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 189 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long b1, x10_long b2) {
    
    //#line 190 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 193 "SuffixArrayChar.x10"
x10_boolean bwt::SuffixArrayChar::leq(x10_long a1, x10_long a2,
                                      x10_long a3, x10_long b1,
                                      x10_long b2, x10_long b3) {
    
    //#line 194 "SuffixArrayChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 197 "SuffixArrayChar.x10"
x10_long bwt::SuffixArrayChar::getI(x10_long t) {
    
    //#line 198 "SuffixArrayChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 199 "SuffixArrayChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 201 "SuffixArrayChar.x10"
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
}

::x10aux::RuntimeType bwt::SuffixArrayChar::rtt;
void bwt::SuffixArrayChar::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArrayChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5601("Start Sort Sample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5603("Start Merge");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5602("Start Sort NonSample");
::x10::lang::String bwt::SuffixArrayChar_Strings::sl__5600("Start Constructuring Sample");

/* END of SuffixArrayChar */
/*************************************************/
