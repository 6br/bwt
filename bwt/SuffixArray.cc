/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/lang/String.h>

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

//#line 23 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize) {
    
    //#line 9 "SuffixArray.x10"
    this->bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray();
    
    //#line 24 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 25 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 26 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 27 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 28 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 33 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads);
}

//#line 37 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 38 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* c = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(k)) + (((x10_long)1ll))));
    
    //#line 39 "SuffixArray.x10"
    x10_long i__4413min__4611 = ((x10_long)0ll);
    x10_long i__4413max__4612 = this->FMGL(k);
    {
        x10_long i__4613;
        for (i__4613 = i__4413min__4611; ((i__4613) <= (i__4413max__4612));
             i__4613 = ((i__4613) + (((x10_long)1ll)))) {
            x10_long i__4614 = i__4613;
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__4614, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__4429min__4615 = ((x10_long)0ll);
    x10_long i__4429max__4616 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__4617;
        for (i__4617 = i__4429min__4615; ((i__4617) <= (i__4429max__4616));
             i__4617 = ((i__4617) + (((x10_long)1ll)))) {
            x10_long i__4618 = i__4617;
            
            //#line 41 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__4604 = c;
            x10_long i__4605 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__4618)) + (((x10_long)(rOffs)))));
            x10_long r__4606 = ((::x10aux::nullCheck(a__4604)->x10::lang::Rail< x10_long >::__apply(
                                   i__4605)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__4604)->x10::lang::Rail< x10_long >::__set(
              i__4605, r__4606);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__4445min__4619 = ((x10_long)0ll);
    x10_long i__4445max__4620 = this->FMGL(k);
    {
        x10_long i__4621;
        for (i__4621 = i__4445min__4619; ((i__4621) <= (i__4445max__4620));
             i__4621 = ((i__4621) + (((x10_long)1ll)))) {
            x10_long i__4622 = i__4621;
            
            //#line 45 "SuffixArray.x10"
            x10_long t__4607 = ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                                 i__4622);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__set(
              i__4622, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__4607));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__4461min__4623 = ((x10_long)0ll);
    x10_long i__4461max__4624 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__4625;
        for (i__4625 = i__4461min__4623; ((i__4625) <= (i__4461max__4624));
             i__4625 = ((i__4625) + (((x10_long)1ll)))) {
            x10_long i__4626 = i__4625;
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(c)->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__4626)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__4626));
            
            //#line 51 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__4608 = c;
            x10_long i__4609 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__4626)) + (((x10_long)(rOffs)))));
            x10_long r__4610 = ((::x10aux::nullCheck(a__4608)->x10::lang::Rail< x10_long >::__apply(
                                   i__4609)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__4608)->x10::lang::Rail< x10_long >::__set(
              i__4609, r__4610);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 69 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5446)));
    
    //#line 70 "SuffixArray.x10"
    this->constructSample();
    
    //#line 71 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5447)));
    
    //#line 72 "SuffixArray.x10"
    this->sortSample();
    
    //#line 73 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5448)));
    
    //#line 74 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 75 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 78 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 79 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 80 "SuffixArray.x10"
    x10_long i__4477min__4627 = ((x10_long)0ll);
    x10_long i__4477max__4628 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__4629;
        for (i__4629 = i__4477min__4627; ((i__4629) <= (i__4477max__4628));
             i__4629 = ((i__4629) + (((x10_long)1ll)))) {
            x10_long i__4630 = i__4629;
            
            //#line 81 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__4630), ((x10_long)0ll))))
            {
                
                //#line 82 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__4630)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 85 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 88 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 89 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 90 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 91 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 92 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 93 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 94 "SuffixArray.x10"
    x10_long i__4493min__4631 = ((x10_long)0ll);
    x10_long i__4493max__4632 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__4633;
        for (i__4633 = i__4493min__4631; ((i__4633) <= (i__4493max__4632));
             i__4633 = ((i__4633) + (((x10_long)1ll)))) {
            x10_long i__4634 = i__4633;
            
            //#line 95 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__4634) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 96 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  j, i__4634);
                
                //#line 97 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 100 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 101 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 102 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 103 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
}

//#line 106 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 107 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)2),
                    this->FMGL(n02));
    
    //#line 108 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5449)));
    
    //#line 109 "SuffixArray.x10"
    this->radixPass(this->FMGL(SA12), this->FMGL(R), ((x10_byte)1),
                    this->FMGL(n02));
    
    //#line 110 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5450)));
    
    //#line 111 "SuffixArray.x10"
    this->radixPass(this->FMGL(R), this->FMGL(SA12), ((x10_byte)0),
                    this->FMGL(n02));
    
    //#line 112 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5451)));
    
    //#line 114 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 115 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 116 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 117 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 118 "SuffixArray.x10"
    x10_long i__4509min__4643 = ((x10_long)0ll);
    x10_long i__4509max__4644 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__4645;
        for (i__4645 = i__4509min__4643; ((i__4645) <= (i__4509max__4644));
             i__4645 = ((i__4645) + (((x10_long)1ll)))) {
            x10_long i__4646 = i__4645;
            
            //#line 119 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__4646)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__4646)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__4646)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 120 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 121 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__4646));
                
                //#line 122 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__4646)) + (((x10_long)1ll))));
                
                //#line 123 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__4646)) + (((x10_long)2ll))));
            }
            
            //#line 126 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__4646)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 127 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__4646)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 129 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__4646)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 132 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5452)));
    
    //#line 134 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 135 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 136 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 137 "SuffixArray.x10"
        x10_long i__4525min__4635 = ((x10_long)0ll);
        x10_long i__4525max__4636 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__4637;
            for (i__4637 = i__4525min__4635; ((i__4637) <= (i__4525max__4636));
                 i__4637 = ((i__4637) + (((x10_long)1ll))))
            {
                x10_long i__4638 = i__4637;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__4638), ((i__4638) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 139 "SuffixArray.x10"
        x10_long i__4541min__4639 = ((x10_long)0ll);
        x10_long i__4541max__4640 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__4641;
            for (i__4641 = i__4541min__4639; ((i__4641) <= (i__4541max__4640));
                 i__4641 = ((i__4641) + (((x10_long)1ll))))
            {
                x10_long i__4642 = i__4641;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__4642)) - (((x10_long)1ll))), i__4642);
            }
        }
        
    }
    
}

//#line 143 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 144 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 145 "SuffixArray.x10"
    x10_long i__4557min__4655 = ((x10_long)0ll);
    x10_long i__4557max__4656 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__4657;
        for (i__4657 = i__4557min__4655; ((i__4657) <= (i__4557max__4656));
             i__4657 = ((i__4657) + (((x10_long)1ll)))) {
            x10_long i__4658 = i__4657;
            
            //#line 146 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__4658)) < (this->FMGL(n0)))) {
                
                //#line 147 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__4658)))));
            }
            
        }
    }
    
    //#line 150 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* R0 = R0B->result();
    
    //#line 151 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = ::x10::lang::Rail< x10_long >::_make(this->FMGL(n0));
    
    //#line 152 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 153 "SuffixArray.x10"
    this->radixPass(R0, SA0, ((x10_byte)0), this->FMGL(n0));
    
    //#line 155 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5453)));
    
    //#line 157 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 158 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 159 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 160 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 161 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 162 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 163 "SuffixArray.x10"
        x10_long j = SA0->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 165 "SuffixArray.x10"
        if (((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                  t)) < (this->FMGL(n0))) && this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         i),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                             t)) + (this->FMGL(n0)))),
                                                       ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                         j),
                                                       ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                                                         ((j) / ::x10aux::zeroCheck(((x10_long)3ll)))))) ||
            (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                 t)) >= (this->FMGL(n0))) && this->leq(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
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
            
            //#line 168 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 169 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 170 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 171 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 172 "SuffixArray.x10"
                x10_long i__4573min__4647 = ((x10_long)0ll);
                x10_long i__4573max__4648 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__4649;
                    for (i__4649 = i__4573min__4647; ((i__4649) <= (i__4573max__4648));
                         i__4649 = ((i__4649) + (((x10_long)1ll))))
                    {
                        x10_long q__4650 = i__4649;
                        
                        //#line 173 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, SA0->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 174 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 175 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 179 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 180 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 181 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 182 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 183 "SuffixArray.x10"
                x10_long i__4589min__4651 = ((x10_long)0ll);
                x10_long i__4589max__4652 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__4653;
                    for (i__4653 = i__4589min__4651; ((i__4653) <= (i__4589max__4652));
                         i__4653 = ((i__4653) + (((x10_long)1ll))))
                    {
                        x10_long q__4654 = i__4653;
                        
                        //#line 184 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 185 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 186 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 193 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 194 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 197 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 198 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 201 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 202 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 203 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 205 "SuffixArray.x10"
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
}

::x10aux::RuntimeType bwt::SuffixArray::rtt;
void bwt::SuffixArray::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArray_Strings::sl__5450("Ended 2nd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5449("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5447("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5452("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5451("Ended 3rd Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5453("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5448("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5446("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
