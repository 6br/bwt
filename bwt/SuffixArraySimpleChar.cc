/*************************************************/
/* START of SuffixArraySimpleChar */
#include <bwt/SuffixArraySimpleChar.h>

#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <bwt/SuffixArraySimple.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 6 "SuffixArraySimpleChar.x10"

//#line 7 "SuffixArraySimpleChar.x10"

//#line 8 "SuffixArraySimpleChar.x10"

//#line 9 "SuffixArraySimpleChar.x10"

//#line 10 "SuffixArraySimpleChar.x10"

//#line 11 "SuffixArraySimpleChar.x10"

//#line 12 "SuffixArraySimpleChar.x10"

//#line 13 "SuffixArraySimpleChar.x10"

//#line 14 "SuffixArraySimpleChar.x10"

//#line 15 "SuffixArraySimpleChar.x10"

//#line 17 "SuffixArraySimpleChar.x10"
void bwt::SuffixArraySimpleChar::_constructor(::x10::lang::Rail< x10_byte >* input,
                                              x10_long charsize) {
    
    //#line 5 "SuffixArraySimpleChar.x10"
    ::bwt::SuffixArraySimpleChar* this__12710 = this;
    ::x10aux::nullCheck(this__12710)->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12710)->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__12710)->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 18 "SuffixArraySimpleChar.x10"
    this->FMGL(string) = input;
    
    //#line 19 "SuffixArraySimpleChar.x10"
    this->FMGL(k) = charsize;
    
    //#line 20 "SuffixArraySimpleChar.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 21 "SuffixArraySimpleChar.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 22 "SuffixArraySimpleChar.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 23 "SuffixArraySimpleChar.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 24 "SuffixArraySimpleChar.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArraySimpleChar* bwt::SuffixArraySimpleChar::_make(::x10::lang::Rail< x10_byte >* input,
                                                                x10_long charsize)
{
    ::bwt::SuffixArraySimpleChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArraySimpleChar>()) ::bwt::SuffixArraySimpleChar();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 28 "SuffixArraySimpleChar.x10"
void bwt::SuffixArraySimpleChar::radixPass(::x10::lang::Rail< x10_long >* a,
                                           ::x10::lang::Rail< x10_long >* b,
                                           x10_byte rOffs,
                                           x10_long nt) {
    
    //#line 29 "SuffixArraySimpleChar.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 30 "SuffixArraySimpleChar.x10"
    x10_long i__9991max__12718 = this->FMGL(k);
    {
        x10_long i__12719;
        for (i__12719 = ((x10_long)0ll); ((i__12719) <= (i__9991max__12718));
             i__12719 = ((i__12719) + (((x10_long)1ll))))
        {
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12719, ((x10_long)0ll));
        }
    }
    
    //#line 31 "SuffixArraySimpleChar.x10"
    x10_long i__10007max__12721 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__12722;
        for (i__12722 = ((x10_long)0ll); ((i__12722) <= (i__10007max__12721));
             i__12722 = ((i__12722) + (((x10_long)1ll))))
        {
            
            //#line 32 "SuffixArraySimpleChar.x10"
            x10_long i__12712 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__12722)) + (((x10_long)(rOffs)))))));
            x10_long r__12713 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__12712)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12712, r__12713);
        }
    }
    
    //#line 34 "SuffixArraySimpleChar.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 35 "SuffixArraySimpleChar.x10"
    x10_long i__10023max__12724 = this->FMGL(k);
    {
        x10_long i__12725;
        for (i__12725 = ((x10_long)0ll); ((i__12725) <= (i__10023max__12724));
             i__12725 = ((i__12725) + (((x10_long)1ll))))
        {
            
            //#line 36 "SuffixArraySimpleChar.x10"
            x10_long t__12714 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                  i__12725);
            
            //#line 37 "SuffixArraySimpleChar.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12725, sum);
            
            //#line 38 "SuffixArraySimpleChar.x10"
            sum = ((sum) + (t__12714));
        }
    }
    
    //#line 40 "SuffixArraySimpleChar.x10"
    x10_long i__10039max__12727 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__12728;
        for (i__12728 = ((x10_long)0ll); ((i__12728) <= (i__10039max__12727));
             i__12728 = ((i__12728) + (((x10_long)1ll))))
        {
            
            //#line 41 "SuffixArraySimpleChar.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                  i__12728)) + (((x10_long)(rOffs)))))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__12728));
            
            //#line 42 "SuffixArraySimpleChar.x10"
            x10_long i__12716 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                                  i__12728)) + (((x10_long)(rOffs)))))));
            x10_long r__12717 = ((::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                    i__12716)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__12716, r__12717);
        }
    }
    
}

//#line 46 "SuffixArraySimpleChar.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArraySimpleChar::run(
  ) {
    
    //#line 47 "SuffixArraySimpleChar.x10"
    this->constructSample();
    
    //#line 48 "SuffixArraySimpleChar.x10"
    this->sortSample();
    
    //#line 49 "SuffixArraySimpleChar.x10"
    this->sortNonSample();
    
    //#line 50 "SuffixArraySimpleChar.x10"
    return this->FMGL(SA);
    
}

//#line 53 "SuffixArraySimpleChar.x10"
void bwt::SuffixArraySimpleChar::constructSample() {
    
    //#line 54 "SuffixArraySimpleChar.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 55 "SuffixArraySimpleChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 56 "SuffixArraySimpleChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 57 "SuffixArraySimpleChar.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 58 "SuffixArraySimpleChar.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 59 "SuffixArraySimpleChar.x10"
    x10_long i__10055max__12730 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__12731;
        for (i__12731 = ((x10_long)0ll); ((i__12731) <= (i__10055max__12730));
             i__12731 = ((i__12731) + (((x10_long)1ll))))
        {
            
            //#line 60 "SuffixArraySimpleChar.x10"
            if ((!::x10aux::struct_equals(((i__12731) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 61 "SuffixArraySimpleChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__12731);
                
                //#line 62 "SuffixArraySimpleChar.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 65 "SuffixArraySimpleChar.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 66 "SuffixArraySimpleChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 67 "SuffixArraySimpleChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 68 "SuffixArraySimpleChar.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 71 "SuffixArraySimpleChar.x10"
void bwt::SuffixArraySimpleChar::sortSample() {
    
    //#line 72 "SuffixArraySimpleChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 73 "SuffixArraySimpleChar.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 74 "SuffixArraySimpleChar.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 76 "SuffixArraySimpleChar.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 77 "SuffixArraySimpleChar.x10"
    x10_byte c0 = ((x10_byte)-1);
    
    //#line 78 "SuffixArraySimpleChar.x10"
    x10_byte c1 = ((x10_byte)-1);
    
    //#line 79 "SuffixArraySimpleChar.x10"
    x10_byte c2 = ((x10_byte)-1);
    
    //#line 80 "SuffixArraySimpleChar.x10"
    x10_long i__10071max__12739 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__12740;
        for (i__12740 = ((x10_long)0ll); ((i__12740) <= (i__10071max__12739));
             i__12740 = ((i__12740) + (((x10_long)1ll))))
        {
            
            //#line 81 "SuffixArraySimpleChar.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__12740)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__12740)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__12740)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 82 "SuffixArraySimpleChar.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 83 "SuffixArraySimpleChar.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__12740));
                
                //#line 84 "SuffixArraySimpleChar.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__12740)) + (((x10_long)1ll))));
                
                //#line 85 "SuffixArraySimpleChar.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__12740)) + (((x10_long)2ll))));
            }
            
            //#line 88 "SuffixArraySimpleChar.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__12740)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 89 "SuffixArraySimpleChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__12740)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 91 "SuffixArraySimpleChar.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__12740)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 95 "SuffixArraySimpleChar.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 96 "SuffixArraySimpleChar.x10"
        ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArraySimpleChar_Strings::sl__13000)));
        
        //#line 97 "SuffixArraySimpleChar.x10"
        ::bwt::SuffixArraySimple* bwa =  (new (::x10aux::alloc_z< ::bwt::SuffixArraySimple>()) ::bwt::SuffixArraySimple());
        (bwa)->::bwt::SuffixArraySimple::_constructor(this->FMGL(R),
                                                      name);
        
        //#line 98 "SuffixArraySimpleChar.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 100 "SuffixArraySimpleChar.x10"
        x10_long i__10087max__12733 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__12734;
            for (i__12734 = ((x10_long)0ll); ((i__12734) <= (i__10087max__12733));
                 i__12734 = ((i__12734) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__12734), ((i__12734) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 102 "SuffixArraySimpleChar.x10"
        x10_long i__10103max__12736 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__12737;
            for (i__12737 = ((x10_long)0ll); ((i__12737) <= (i__10103max__12736));
                 i__12737 = ((i__12737) + (((x10_long)1ll))))
            {
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__12737)) - (((x10_long)1ll))), i__12737);
            }
        }
        
    }
    
}

//#line 106 "SuffixArraySimpleChar.x10"
void bwt::SuffixArraySimpleChar::sortNonSample() {
    
    //#line 107 "SuffixArraySimpleChar.x10"
    ::x10::util::RailBuilder<x10_long>* R0B =  (new (::x10aux::alloc_z< ::x10::util::RailBuilder<x10_long> >()) ::x10::util::RailBuilder<x10_long>());
    (R0B)->::x10::util::RailBuilder<x10_long>::_constructor();
    
    //#line 108 "SuffixArraySimpleChar.x10"
    x10_long i__10119max__12748 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__12749;
        for (i__12749 = ((x10_long)0ll); ((i__12749) <= (i__10119max__12748));
             i__12749 = ((i__12749) + (((x10_long)1ll))))
        {
            
            //#line 109 "SuffixArraySimpleChar.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__12749)) < (this->FMGL(n0)))) {
                
                //#line 110 "SuffixArraySimpleChar.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__12749)))));
            }
            
        }
    }
    
    //#line 113 "SuffixArraySimpleChar.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 114 "SuffixArraySimpleChar.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 115 "SuffixArraySimpleChar.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 116 "SuffixArraySimpleChar.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 119 "SuffixArraySimpleChar.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 120 "SuffixArraySimpleChar.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 121 "SuffixArraySimpleChar.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 122 "SuffixArraySimpleChar.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 123 "SuffixArraySimpleChar.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 124 "SuffixArraySimpleChar.x10"
        x10_long i = this->getI(t);
        
        //#line 125 "SuffixArraySimpleChar.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 127 "SuffixArraySimpleChar.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && (__extension__ ({
                x10_long a__12698 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                  i)));
                x10_long a__12699 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                      ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                          t)) + (this->FMGL(n0))));
                x10_long b__12700 = ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
                                                  j)));
                x10_long b__12701 = ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                      ((j) / ::x10aux::zeroCheck(((x10_long)3ll))));
                (((a__12698) < (b__12700)) || ((::x10aux::struct_equals(a__12698,
                                                                        b__12700)) &&
                ((a__12699) <= (b__12701))));
            }))
            ) || (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      t)) >= (this->FMGL(n0))) && this->leq(
                                                    ((x10_long)(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_byte >::__apply(
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
            
            //#line 130 "SuffixArraySimpleChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 131 "SuffixArraySimpleChar.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 132 "SuffixArraySimpleChar.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 133 "SuffixArraySimpleChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 134 "SuffixArraySimpleChar.x10"
                x10_long i__10135max__12742 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__12743;
                    for (i__12743 = ((x10_long)0ll); ((i__12743) <= (i__10135max__12742));
                         i__12743 = ((i__12743) + (((x10_long)1ll))))
                    {
                        
                        //#line 135 "SuffixArraySimpleChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 136 "SuffixArraySimpleChar.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 137 "SuffixArraySimpleChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 141 "SuffixArraySimpleChar.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 142 "SuffixArraySimpleChar.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 143 "SuffixArraySimpleChar.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 144 "SuffixArraySimpleChar.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 145 "SuffixArraySimpleChar.x10"
                x10_long i__10151max__12745 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__12746;
                    for (i__12746 = ((x10_long)0ll); ((i__12746) <= (i__10151max__12745));
                         i__12746 = ((i__12746) + (((x10_long)1ll))))
                    {
                        
                        //#line 146 "SuffixArraySimpleChar.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 147 "SuffixArraySimpleChar.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 148 "SuffixArraySimpleChar.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 155 "SuffixArraySimpleChar.x10"
x10_boolean bwt::SuffixArraySimpleChar::leq(x10_long a1, x10_long a2,
                                            x10_long b1, x10_long b2) {
    
    //#line 156 "SuffixArraySimpleChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 159 "SuffixArraySimpleChar.x10"
x10_boolean bwt::SuffixArraySimpleChar::leq(x10_long a1, x10_long a2,
                                            x10_long a3, x10_long b1,
                                            x10_long b2, x10_long b3) {
    
    //#line 160 "SuffixArraySimpleChar.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((((a2) < (b2)) || ((::x10aux::struct_equals(a2, b2)) &&
     ((a3) <= (b3)))))));
    
}

//#line 163 "SuffixArraySimpleChar.x10"
x10_long bwt::SuffixArraySimpleChar::getI(x10_long t) {
    
    //#line 164 "SuffixArraySimpleChar.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 165 "SuffixArraySimpleChar.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 167 "SuffixArraySimpleChar.x10"
        return ((((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                       t)) - (this->FMGL(n0)))) * (((x10_long)3ll)))) + (((x10_long)2ll)));
        
    }
    
}

//#line 5 "SuffixArraySimpleChar.x10"
::bwt::SuffixArraySimpleChar* bwt::SuffixArraySimpleChar::bwt__SuffixArraySimpleChar____this__bwt__SuffixArraySimpleChar(
  ) {
    return this;
    
}
void bwt::SuffixArraySimpleChar::__fieldInitializers_bwt_SuffixArraySimpleChar(
  ) {
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA12) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(SA) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t bwt::SuffixArraySimpleChar::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::bwt::SuffixArraySimpleChar::_deserializer);

void bwt::SuffixArraySimpleChar::_serialize_body(::x10aux::serialization_buffer& buf) {
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

::x10::lang::Reference* ::bwt::SuffixArraySimpleChar::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::bwt::SuffixArraySimpleChar* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArraySimpleChar>()) ::bwt::SuffixArraySimpleChar();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void bwt::SuffixArraySimpleChar::_deserialize_body(::x10aux::deserialization_buffer& buf) {
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

::x10aux::RuntimeType bwt::SuffixArraySimpleChar::rtt;
void bwt::SuffixArraySimpleChar::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArraySimpleChar",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArraySimpleChar_Strings::sl__13000("Start Sort Recursively");

/* END of SuffixArraySimpleChar */
/*************************************************/
