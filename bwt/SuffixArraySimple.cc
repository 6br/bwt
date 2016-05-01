/*************************************************/
/* START of SuffixArraySimple */
#include <bwt/SuffixArraySimple.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 6 "SuffixArraySimple.x10"

//#line 7 "SuffixArraySimple.x10"

//#line 8 "SuffixArraySimple.x10"

//#line 9 "SuffixArraySimple.x10"

//#line 10 "SuffixArraySimple.x10"

//#line 11 "SuffixArraySimple.x10"

//#line 12 "SuffixArraySimple.x10"

//#line 13 "SuffixArraySimple.x10"

//#line 14 "SuffixArraySimple.x10"

//#line 15 "SuffixArraySimple.x10"

//#line 17 "SuffixArraySimple.x10"
void bwt::SuffixArraySimple::_constructor(::x10::lang::Rail< x10_long >* input,
                                          x10_long charsize) {
    
    //#line 5 "SuffixArraySimple.x10"
    ::bwt::SuffixArraySimple* this__12605 = this;
    ::x10aux::nullCheck(this__12605)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12605)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12605)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 18 "SuffixArraySimple.x10"
    this->FMGL(string) = input;
    
    //#line 19 "SuffixArraySimple.x10"
    this->FMGL(k) = charsize;
    
    //#line 20 "SuffixArraySimple.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 21 "SuffixArraySimple.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 22 "SuffixArraySimple.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 23 "SuffixArraySimple.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 24 "SuffixArraySimple.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArraySimple* bwt::SuffixArraySimple::_make(::x10::lang::Rail< x10_long >* input,
                                                        x10_long charsize)
{
    ::bwt::SuffixArraySimple* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArraySimple>()) ::bwt::SuffixArraySimple();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 28 "SuffixArraySimple.x10"
void bwt::SuffixArraySimple::radixPass(::x10::lang::Rail< x10_long >* a,
                                       ::x10::lang::Rail< x10_long >* b,
                                       x10_byte rOffs, x10_long nt) {
    
    //#line 29 "SuffixArraySimple.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 30 "SuffixArraySimple.x10"
    x10_long i__12416max__12613 = this->FMGL(k);
    {
        x10_long i__12614;
        for (i__12614 = ((x10_long)0ll); ((i__12614) <= (i__12416max__12613));
             i__12614 = ((i__12614) + (((x10_long)1ll)))) {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12614, ((x10_long)0ll));
        }
    }
    
    //#line 31 "SuffixArraySimple.x10"
    x10_long i__12432max__12616 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__12617;
        for (i__12617 = ((x10_long)0ll); ((i__12617) <= (i__12432max__12616));
             i__12617 = ((i__12617) + (((x10_long)1ll)))) {
            
            //#line 32 "SuffixArraySimple.x10"
            x10_long i__12607 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__12617)) + (((x10_long)(rOffs)))));
            x10_long r__12608 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__12607)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12607, r__12608);
        }
    }
    
    //#line 34 "SuffixArraySimple.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 35 "SuffixArraySimple.x10"
    x10_long i__12448max__12619 = this->FMGL(k);
    {
        x10_long i__12620;
        for (i__12620 = ((x10_long)0ll); ((i__12620) <= (i__12448max__12619));
             i__12620 = ((i__12620) + (((x10_long)1ll))))
        {
            
            //#line 36 "SuffixArraySimple.x10"
            x10_long t__12609 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__12620);
            
            //#line 37 "SuffixArraySimple.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12620, sum);
            
            //#line 38 "SuffixArraySimple.x10"
            sum = ((sum) + (t__12609));
        }
    }
    
    //#line 40 "SuffixArraySimple.x10"
    x10_long i__12464max__12622 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__12623;
        for (i__12623 = ((x10_long)0ll); ((i__12623) <= (i__12464max__12622));
             i__12623 = ((i__12623) + (((x10_long)1ll))))
        {
            
            //#line 41 "SuffixArraySimple.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__12623)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__12623));
            
            //#line 42 "SuffixArraySimple.x10"
            x10_long i__12611 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                      i__12623)) + (((x10_long)(rOffs)))));
            x10_long r__12612 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__12611)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12611, r__12612);
        }
    }
    
}

//#line 46 "SuffixArraySimple.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArraySimple::run(
  ) {
    
    //#line 47 "SuffixArraySimple.x10"
    this->constructSample();
    
    //#line 48 "SuffixArraySimple.x10"
    this->sortSample();
    
    //#line 49 "SuffixArraySimple.x10"
    this->sortNonSample();
    
    //#line 50 "SuffixArraySimple.x10"
    return this->FMGL(SA);
    
}

//#line 53 "SuffixArraySimple.x10"
void bwt::SuffixArraySimple::constructSample() {
    
    //#line 54 "SuffixArraySimple.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 55 "SuffixArraySimple.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 56 "SuffixArraySimple.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 57 "SuffixArraySimple.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 58 "SuffixArraySimple.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 59 "SuffixArraySimple.x10"
    x10_long i__12480max__12625 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__12626;
        for (i__12626 = ((x10_long)0ll); ((i__12626) <= (i__12480max__12625));
             i__12626 = ((i__12626) + (((x10_long)1ll))))
        {
            
            //#line 60 "SuffixArraySimple.x10"
            if ((!::x10aux::struct_equals(((i__12626) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 61 "SuffixArraySimple.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__12626);
                
                //#line 62 "SuffixArraySimple.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 65 "SuffixArraySimple.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 66 "SuffixArraySimple.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 67 "SuffixArraySimple.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 68 "SuffixArraySimple.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 71 "SuffixArraySimple.x10"
void bwt::SuffixArraySimple::sortSample() {
    
    //#line 72 "SuffixArraySimple.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 73 "SuffixArraySimple.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 74 "SuffixArraySimple.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 76 "SuffixArraySimple.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 77 "SuffixArraySimple.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 78 "SuffixArraySimple.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 79 "SuffixArraySimple.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 80 "SuffixArraySimple.x10"
    x10_long i__12496max__12634 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__12635;
        for (i__12635 = ((x10_long)0ll); ((i__12635) <= (i__12496max__12634));
             i__12635 = ((i__12635) + (((x10_long)1ll))))
        {
            
            //#line 81 "SuffixArraySimple.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__12635)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__12635)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__12635)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 82 "SuffixArraySimple.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 83 "SuffixArraySimple.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__12635));
                
                //#line 84 "SuffixArraySimple.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__12635)) + (((x10_long)1ll))));
                
                //#line 85 "SuffixArraySimple.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__12635)) + (((x10_long)2ll))));
            }
            
            //#line 88 "SuffixArraySimple.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__12635)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 89 "SuffixArraySimple.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__12635)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 91 "SuffixArraySimple.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__12635)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 95 "SuffixArraySimple.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 96 "SuffixArraySimple.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArraySimple_Strings::sl__12869)));
        
        //#line 97 "SuffixArraySimple.x10"
        ::bwt::SuffixArraySimple* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArraySimple>()) ::bwt::SuffixArraySimple());
        (bwa)->::bwt::SuffixArraySimple::_constructor(this->FMGL(R),
                                                      name);
        
        //#line 98 "SuffixArraySimple.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 100 "SuffixArraySimple.x10"
        x10_long i__12512max__12628 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__12629;
            for (i__12629 = ((x10_long)0ll); ((i__12629) <= (i__12512max__12628));
                 i__12629 = ((i__12629) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__12629), ((i__12629) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 102 "SuffixArraySimple.x10"
        x10_long i__12528max__12631 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__12632;
            for (i__12632 = ((x10_long)0ll); ((i__12632) <= (i__12528max__12631));
                 i__12632 = ((i__12632) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__12632)) - (((x10_long)1ll))), i__12632);
            }
        }
        
    }
    
}

//#line 106 "SuffixArraySimple.x10"
void bwt::SuffixArraySimple::sortNonSample() {
    
    //#line 107 "SuffixArraySimple.x10"
    ::x10::util::RailBuilder<x10_long>* R0B =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (R0B)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 108 "SuffixArraySimple.x10"
    x10_long i__12544max__12643 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__12644;
        for (i__12644 = ((x10_long)0ll); ((i__12644) <= (i__12544max__12643));
             i__12644 = ((i__12644) + (((x10_long)1ll))))
        {
            
            //#line 109 "SuffixArraySimple.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__12644)) < (this->FMGL(n0)))) {
                
                //#line 110 "SuffixArraySimple.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__12644)))));
            }
            
        }
    }
    
    //#line 113 "SuffixArraySimple.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 114 "SuffixArraySimple.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 115 "SuffixArraySimple.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 116 "SuffixArraySimple.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 119 "SuffixArraySimple.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 120 "SuffixArraySimple.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 121 "SuffixArraySimple.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 122 "SuffixArraySimple.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 123 "SuffixArraySimple.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 124 "SuffixArraySimple.x10"
        x10_long i = this->getI(t);
        
        //#line 125 "SuffixArraySimple.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 127 "SuffixArraySimple.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__12593 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                      i);
                x10_long a__12594 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                      ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t)) + (this->FMGL(n0))));
                x10_long b__12595 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                      j);
                x10_long b__12596 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                      ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__12593) < (b__12595)) || ((::x10aux::struct_equals(a__12593,
                                                                        b__12595)) &&
                ((a__12594) <= (b__12596))));
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
            
            //#line 130 "SuffixArraySimple.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 131 "SuffixArraySimple.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 132 "SuffixArraySimple.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 133 "SuffixArraySimple.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 134 "SuffixArraySimple.x10"
                x10_long i__12560max__12637 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__12638;
                    for (i__12638 = ((x10_long)0ll); ((i__12638) <= (i__12560max__12637));
                         i__12638 = ((i__12638) + (((x10_long)1ll))))
                    {
                        
                        //#line 135 "SuffixArraySimple.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 136 "SuffixArraySimple.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 137 "SuffixArraySimple.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 141 "SuffixArraySimple.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 142 "SuffixArraySimple.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 143 "SuffixArraySimple.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 144 "SuffixArraySimple.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 145 "SuffixArraySimple.x10"
                x10_long i__12576max__12640 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__12641;
                    for (i__12641 = ((x10_long)0ll); ((i__12641) <= (i__12576max__12640));
                         i__12641 = ((i__12641) + (((x10_long)1ll))))
                    {
                        
                        //#line 146 "SuffixArraySimple.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 147 "SuffixArraySimple.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 148 "SuffixArraySimple.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 155 "SuffixArraySimple.x10"
x10_boolean bwt::SuffixArraySimple::leq(x10_long a1, x10_long a2,
                                        x10_long b1, x10_long b2) {
    
    //#line 156 "SuffixArraySimple.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 159 "SuffixArraySimple.x10"
x10_boolean bwt::SuffixArraySimple::leq(x10_long a1, x10_long a2,
                                        x10_long a3, x10_long b1,
                                        x10_long b2, x10_long b3) {
    
    //#line 160 "SuffixArraySimple.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 163 "SuffixArraySimple.x10"
x10_long bwt::SuffixArraySimple::getI(x10_long t) {
    
    //#line 164 "SuffixArraySimple.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 165 "SuffixArraySimple.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 167 "SuffixArraySimple.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 5 "SuffixArraySimple.x10"
::bwt::SuffixArraySimple* bwt::SuffixArraySimple::bwt__SuffixArraySimple____this__bwt__SuffixArraySimple(
  ) {
    return this;
    
}
void bwt::SuffixArraySimple::__fieldInitializers_bwt_SuffixArraySimple(
  ) {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwt::SuffixArraySimple::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArraySimple::_deserializer);

void bwt::SuffixArraySimple::_serialize_body(::x10aux::serialization_buffer& buf) {
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

::x10::lang::Reference* ::bwt::SuffixArraySimple::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArraySimple* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArraySimple>()) ::bwt::SuffixArraySimple();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArraySimple::_deserialize_body(::x10aux::deserialization_buffer& buf) {
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
}

::x10aux::RuntimeType bwt::SuffixArraySimple::rtt;
void bwt::SuffixArraySimple::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArraySimple",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArraySimple_Strings::sl__12869("Start Sort Recursively");

/* END of SuffixArraySimple */
/*************************************************/
