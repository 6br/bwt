/*************************************************/
/* START of SuffixArray */
#include <bwt/SuffixArray.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Int.h>
#include <x10/lang/Byte.h>
#include <x10/compiler/Native.h>
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

//#line 22 "SuffixArray.x10"

//#line 24 "SuffixArray.x10"
void bwt::SuffixArray::_constructor(::x10::lang::Rail< x10_long >* input,
                                    x10_long charsize) {
    
    //#line 9 "SuffixArray.x10"
    this->bwt::SuffixArray::__fieldInitializers_bwt_SuffixArray();
    
    //#line 25 "SuffixArray.x10"
    this->FMGL(string) = input;
    
    //#line 26 "SuffixArray.x10"
    this->FMGL(k) = charsize;
    
    //#line 27 "SuffixArray.x10"
    this->FMGL(n) = (((x10_long)(::x10aux::nullCheck(input)->FMGL(size))) - (((x10_long)3ll)));
    
    //#line 28 "SuffixArray.x10"
    this->FMGL(n0) = ((((this->FMGL(n)) + (((x10_long)2ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 29 "SuffixArray.x10"
    this->FMGL(n1) = ((((this->FMGL(n)) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 30 "SuffixArray.x10"
    this->FMGL(n2) = ((this->FMGL(n)) / ::x10aux::zeroCheck(((x10_long)3ll)));
    
    //#line 31 "SuffixArray.x10"
    this->FMGL(n02) = ((this->FMGL(n0)) + (this->FMGL(n2)));
}
::bwt::SuffixArray* bwt::SuffixArray::_make(::x10::lang::Rail< x10_long >* input,
                                            x10_long charsize) {
    ::bwt::SuffixArray* this_ = new (::x10aux::alloc_z< ::bwt::SuffixArray>()) ::bwt::SuffixArray();
    this_->_constructor(input, charsize);
    return this_;
}



//#line 34 "SuffixArray.x10"
void bwt::SuffixArray::sortPairs(::x10::lang::Rail< x10_long >* keys,
                                 ::x10::lang::Rail< x10_long >* values,
                                 x10_ulong num_elems, x10_int num_threads,
                                 x10_byte offset){
    parallel_radix_sort::SortPairsLong((keys)->raw, (values)->raw, num_elems, num_threads, offset);
}

//#line 38 "SuffixArray.x10"
void bwt::SuffixArray::radixPass(::x10::lang::Rail< x10_long >* a,
                                 ::x10::lang::Rail< x10_long >* b,
                                 x10_byte rOffs, x10_long nt) {
    
    //#line 39 "SuffixArray.x10"
    x10_long i__4325min__4523 = ((x10_long)0ll);
    x10_long i__4325max__4524 = this->FMGL(k);
    {
        x10_long i__4525;
        for (i__4525 = i__4325min__4523; ((i__4525) <= (i__4325max__4524));
             i__4525 = ((i__4525) + (((x10_long)1ll)))) {
            x10_long i__4526 = i__4525;
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__4526, ((x10_long)0ll));
        }
    }
    
    //#line 40 "SuffixArray.x10"
    x10_long i__4341min__4527 = ((x10_long)0ll);
    x10_long i__4341max__4528 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__4529;
        for (i__4529 = i__4341min__4527; ((i__4529) <= (i__4341max__4528));
             i__4529 = ((i__4529) + (((x10_long)1ll)))) {
            x10_long i__4530 = i__4529;
            
            //#line 41 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__4516 = this->FMGL(c);
            x10_long i__4517 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__4530)) + (((x10_long)(rOffs)))));
            x10_long r__4518 = ((::x10aux::nullCheck(a__4516)->x10::lang::Rail< x10_long >::__apply(
                                   i__4517)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__4516)->x10::lang::Rail< x10_long >::__set(
              i__4517, r__4518);
        }
    }
    
    //#line 43 "SuffixArray.x10"
    x10_long sum = ((x10_long)0ll);
    
    //#line 44 "SuffixArray.x10"
    x10_long i__4357min__4531 = ((x10_long)0ll);
    x10_long i__4357max__4532 = this->FMGL(k);
    {
        x10_long i__4533;
        for (i__4533 = i__4357min__4531; ((i__4533) <= (i__4357max__4532));
             i__4533 = ((i__4533) + (((x10_long)1ll)))) {
            x10_long i__4534 = i__4533;
            
            //#line 45 "SuffixArray.x10"
            x10_long t__4519 = ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                                 i__4534);
            
            //#line 46 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__set(
              i__4534, sum);
            
            //#line 47 "SuffixArray.x10"
            sum = ((sum) + (t__4519));
        }
    }
    
    //#line 49 "SuffixArray.x10"
    x10_long i__4373min__4535 = ((x10_long)0ll);
    x10_long i__4373max__4536 = ((nt) - (((x10_long)1ll)));
    {
        x10_long i__4537;
        for (i__4537 = i__4373min__4535; ((i__4537) <= (i__4373max__4536));
             i__4537 = ((i__4537) + (((x10_long)1ll)))) {
            x10_long i__4538 = i__4537;
            
            //#line 50 "SuffixArray.x10"
            ::x10aux::nullCheck(b)->x10::lang::Rail< x10_long >::__set(
              ::x10aux::nullCheck(this->FMGL(c))->x10::lang::Rail< x10_long >::__apply(
                ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                  ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                      i__4538)) + (((x10_long)(rOffs)))))),
              ::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                i__4538));
            
            //#line 51 "SuffixArray.x10"
            ::x10::lang::Rail< x10_long >* a__4520 = this->FMGL(c);
            x10_long i__4521 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                 ((::x10aux::nullCheck(a)->x10::lang::Rail< x10_long >::__apply(
                                     i__4538)) + (((x10_long)(rOffs)))));
            x10_long r__4522 = ((::x10aux::nullCheck(a__4520)->x10::lang::Rail< x10_long >::__apply(
                                   i__4521)) + (((x10_long)1ll)));
            ::x10aux::nullCheck(a__4520)->x10::lang::Rail< x10_long >::__set(
              i__4521, r__4522);
        }
    }
    
}

//#line 55 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::run() {
    
    //#line 56 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5340)));
    
    //#line 57 "SuffixArray.x10"
    this->constructSample();
    
    //#line 58 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5341)));
    
    //#line 59 "SuffixArray.x10"
    this->sortSample();
    
    //#line 60 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5342)));
    
    //#line 61 "SuffixArray.x10"
    this->sortNonSample();
    
    //#line 62 "SuffixArray.x10"
    return this->FMGL(SA);
    
}

//#line 65 "SuffixArray.x10"
::x10::lang::Rail< x10_long >* bwt::SuffixArray::bwtable(
  ) {
    
    //#line 66 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* bwt = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 67 "SuffixArray.x10"
    x10_long i__4389min__4539 = ((x10_long)0ll);
    x10_long i__4389max__4540 = ((this->FMGL(n)) - (((x10_long)1ll)));
    {
        x10_long i__4541;
        for (i__4541 = i__4389min__4539; ((i__4541) <= (i__4389max__4540));
             i__4541 = ((i__4541) + (((x10_long)1ll)))) {
            x10_long i__4542 = i__4541;
            
            //#line 68 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                            i__4542), ((x10_long)0ll))))
            {
                
                //#line 69 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(::x10aux::nullCheck(bwt)->add(
                                                                         ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                           ((::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__apply(
                                                                               i__4542)) - (((x10_long)1ll))))));
            }
            
        }
    }
    
    //#line 72 "SuffixArray.x10"
    return ::x10aux::nullCheck(bwt)->result();
    
}

//#line 75 "SuffixArray.x10"
void bwt::SuffixArray::constructSample() {
    
    //#line 76 "SuffixArray.x10"
    this->FMGL(SA12) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
    
    //#line 77 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      this->FMGL(n02), ((x10_long)0ll));
    
    //#line 78 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)1ll))), ((x10_long)0ll));
    
    //#line 79 "SuffixArray.x10"
    ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
      ((this->FMGL(n02)) + (((x10_long)2ll))), ((x10_long)0ll));
    
    //#line 80 "SuffixArray.x10"
    x10_long j = ((x10_long)0ll);
    
    //#line 81 "SuffixArray.x10"
    x10_long i__4405min__4543 = ((x10_long)0ll);
    x10_long i__4405max__4544 = ((((((this->FMGL(n)) + (this->FMGL(n0)))) - (this->FMGL(n1)))) - (((x10_long)1ll)));
    {
        x10_long i__4545;
        for (i__4545 = i__4405min__4543; ((i__4545) <= (i__4405max__4544));
             i__4545 = ((i__4545) + (((x10_long)1ll)))) {
            x10_long i__4546 = i__4545;
            
            //#line 82 "SuffixArray.x10"
            if ((!::x10aux::struct_equals(((i__4546) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                          ((x10_long)0ll))))
            {
                
                //#line 83 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  j, i__4546);
                
                //#line 84 "SuffixArray.x10"
                j = ((j) + (((x10_long)1ll)));
            }
            
        }
    }
    
    //#line 87 "SuffixArray.x10"
    this->FMGL(R) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n02)) + (((x10_long)3ll))));
}

//#line 93 "SuffixArray.x10"
void bwt::SuffixArray::sortSample() {
    
    //#line 107 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n02)));
    
    //#line 108 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 109 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)2));
    
    //#line 110 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5343)));
    
    //#line 111 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)1));
    
    //#line 112 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5344)));
    
    //#line 113 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), this->FMGL(SA12),
                    size, num_threads, ((x10_byte)0));
    
    //#line 120 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->printf((&::bwt::SuffixArray_Strings::sl__5345),
                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(n02)));
    
    //#line 122 "SuffixArray.x10"
    x10_long name = ((x10_long)0ll);
    
    //#line 123 "SuffixArray.x10"
    x10_long c0 = ((x10_long)-1ll);
    
    //#line 124 "SuffixArray.x10"
    x10_long c1 = ((x10_long)-1ll);
    
    //#line 125 "SuffixArray.x10"
    x10_long c2 = ((x10_long)-1ll);
    
    //#line 126 "SuffixArray.x10"
    x10_long i__4421min__4555 = ((x10_long)0ll);
    x10_long i__4421max__4556 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__4557;
        for (i__4557 = i__4421min__4555; ((i__4557) <= (i__4421max__4556));
             i__4557 = ((i__4557) + (((x10_long)1ll)))) {
            x10_long i__4558 = i__4557;
            
            //#line 127 "SuffixArray.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                              ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__4558)),
                                            c0)) || (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                                                                ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                    i__4558)) + (((x10_long)1ll)))),
                                                                              c1))) ||
                (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                                            ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                i__4558)) + (((x10_long)2ll)))),
                                          c2)))) {
                
                //#line 128 "SuffixArray.x10"
                name = ((name) + (((x10_long)1ll)));
                
                //#line 129 "SuffixArray.x10"
                c0 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                         i__4558));
                
                //#line 130 "SuffixArray.x10"
                c1 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__4558)) + (((x10_long)1ll))));
                
                //#line 131 "SuffixArray.x10"
                c2 = ::x10aux::nullCheck(this->FMGL(string))->x10::lang::Rail< x10_long >::__apply(
                       ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                           i__4558)) + (((x10_long)2ll))));
            }
            
            //#line 134 "SuffixArray.x10"
            if ((::x10aux::struct_equals(((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                             i__4558)) % ::x10aux::zeroCheck(((x10_long)3ll))),
                                         ((x10_long)1ll))))
            {
                
                //#line 135 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                      i__4558)) / ::x10aux::zeroCheck(((x10_long)3ll))),
                  name);
            } else {
                
                //#line 137 "SuffixArray.x10"
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                        i__4558)) / ::x10aux::zeroCheck(((x10_long)3ll)))) + (this->FMGL(n0))),
                  name);
            }
            
        }
    }
    
    //#line 140 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5346)));
    
    //#line 142 "SuffixArray.x10"
    if (((name) < (this->FMGL(n02)))) {
        
        //#line 143 "SuffixArray.x10"
        ::bwt::SuffixArray* bwa = ::bwt::SuffixArray::_make(this->FMGL(R),
                                                            name);
        
        //#line 144 "SuffixArray.x10"
        this->FMGL(SA12) = bwa->run();
        
        //#line 145 "SuffixArray.x10"
        x10_long i__4437min__4547 = ((x10_long)0ll);
        x10_long i__4437max__4548 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__4549;
            for (i__4549 = i__4437min__4547; ((i__4549) <= (i__4437max__4548));
                 i__4549 = ((i__4549) + (((x10_long)1ll))))
            {
                x10_long i__4550 = i__4549;
                ::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__set(
                  ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__4550), ((i__4550) + (((x10_long)1ll))));
            }
        }
        
    } else {
        
        //#line 147 "SuffixArray.x10"
        x10_long i__4453min__4551 = ((x10_long)0ll);
        x10_long i__4453max__4552 = ((this->FMGL(n02)) - (((x10_long)1ll)));
        {
            x10_long i__4553;
            for (i__4553 = i__4453min__4551; ((i__4553) <= (i__4453max__4552));
                 i__4553 = ((i__4553) + (((x10_long)1ll))))
            {
                x10_long i__4554 = i__4553;
                ::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__set(
                  ((::x10aux::nullCheck(this->FMGL(R))->x10::lang::Rail< x10_long >::__apply(
                      i__4554)) - (((x10_long)1ll))), i__4554);
            }
        }
        
    }
    
}

//#line 151 "SuffixArray.x10"
void bwt::SuffixArray::sortNonSample() {
    
    //#line 152 "SuffixArray.x10"
    ::x10::util::RailBuilder<x10_long>* R0B = ::x10::util::RailBuilder<x10_long>::_make();
    
    //#line 153 "SuffixArray.x10"
    x10_long i__4469min__4567 = ((x10_long)0ll);
    x10_long i__4469max__4568 = ((this->FMGL(n02)) - (((x10_long)1ll)));
    {
        x10_long i__4569;
        for (i__4569 = i__4469min__4567; ((i__4569) <= (i__4469max__4568));
             i__4569 = ((i__4569) + (((x10_long)1ll)))) {
            x10_long i__4570 = i__4569;
            
            //#line 154 "SuffixArray.x10"
            if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                    i__4570)) < (this->FMGL(n0)))) {
                
                //#line 155 "SuffixArray.x10"
                reinterpret_cast< ::x10::util::RailBuilder<x10_long>*>(R0B->add(
                                                                         ((((x10_long)3ll)) * (::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                                                                                                 i__4570)))));
            }
            
        }
    }
    
    //#line 158 "SuffixArray.x10"
    ::x10::lang::Rail< x10_long >* SA0 = R0B->result();
    
    //#line 161 "SuffixArray.x10"
    x10_ulong size = ((x10_ulong) (this->FMGL(n0)));
    
    //#line 162 "SuffixArray.x10"
    x10_int num_threads = ((x10_int) (((x10_long)6ll)));
    
    //#line 163 "SuffixArray.x10"
    this->sortPairs(this->FMGL(string), SA0, size, num_threads,
                    ((x10_byte)0));
    
    //#line 165 "SuffixArray.x10"
    ::x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::bwt::SuffixArray_Strings::sl__5347)));
    
    //#line 166 "SuffixArray.x10"
    this->FMGL(SA) = ::x10::lang::Rail< x10_long >::_make(((this->FMGL(n)) + (((x10_long)3ll))));
    
    //#line 168 "SuffixArray.x10"
    x10_long p = ((x10_long)0ll);
    
    //#line 169 "SuffixArray.x10"
    x10_long t = ((this->FMGL(n0)) - (this->FMGL(n1)));
    
    //#line 170 "SuffixArray.x10"
    x10_long k = ((x10_long)-1ll);
    
    //#line 171 "SuffixArray.x10"
    while (((k) < (this->FMGL(n)))) {
        
        //#line 172 "SuffixArray.x10"
        k = ((k) + (((x10_long)1ll)));
        
        //#line 173 "SuffixArray.x10"
        x10_long i = this->getI(t);
        
        //#line 174 "SuffixArray.x10"
        x10_long j = ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                       p);
        
        //#line 176 "SuffixArray.x10"
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
            
            //#line 179 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, i);
            
            //#line 180 "SuffixArray.x10"
            t = ((t) + (((x10_long)1ll)));
            
            //#line 181 "SuffixArray.x10"
            if ((::x10aux::struct_equals(t, this->FMGL(n02))))
            {
                
                //#line 182 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 183 "SuffixArray.x10"
                x10_long i__4485min__4559 = ((x10_long)0ll);
                x10_long i__4485max__4560 = ((((this->FMGL(n0)) - (p))) - (((x10_long)1ll)));
                {
                    x10_long i__4561;
                    for (i__4561 = i__4485min__4559; ((i__4561) <= (i__4485max__4560));
                         i__4561 = ((i__4561) + (((x10_long)1ll))))
                    {
                        x10_long q__4562 = i__4561;
                        
                        //#line 184 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, ::x10aux::nullCheck(SA0)->x10::lang::Rail< x10_long >::__apply(
                               p));
                        
                        //#line 185 "SuffixArray.x10"
                        p = ((p) + (((x10_long)1ll)));
                        
                        //#line 186 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        } else {
            
            //#line 190 "SuffixArray.x10"
            ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
              k, j);
            
            //#line 191 "SuffixArray.x10"
            p = ((p) + (((x10_long)1ll)));
            
            //#line 192 "SuffixArray.x10"
            if ((::x10aux::struct_equals(p, this->FMGL(n0))))
            {
                
                //#line 193 "SuffixArray.x10"
                k = ((k) + (((x10_long)1ll)));
                
                //#line 194 "SuffixArray.x10"
                x10_long i__4501min__4563 = ((x10_long)0ll);
                x10_long i__4501max__4564 = ((((this->FMGL(n02)) - (t))) - (((x10_long)1ll)));
                {
                    x10_long i__4565;
                    for (i__4565 = i__4501min__4563; ((i__4565) <= (i__4501max__4564));
                         i__4565 = ((i__4565) + (((x10_long)1ll))))
                    {
                        x10_long q__4566 = i__4565;
                        
                        //#line 195 "SuffixArray.x10"
                        ::x10aux::nullCheck(this->FMGL(SA))->x10::lang::Rail< x10_long >::__set(
                          k, this->getI(t));
                        
                        //#line 196 "SuffixArray.x10"
                        t = ((t) + (((x10_long)1ll)));
                        
                        //#line 197 "SuffixArray.x10"
                        k = ((k) + (((x10_long)1ll)));
                    }
                }
                
            }
            
        }
        
    }
    
}

//#line 204 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long b1, x10_long b2) {
    
    //#line 205 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    ((a2) <= (b2))));
    
}

//#line 208 "SuffixArray.x10"
x10_boolean bwt::SuffixArray::leq(x10_long a1, x10_long a2,
                                  x10_long a3, x10_long b1,
                                  x10_long b2, x10_long b3) {
    
    //#line 209 "SuffixArray.x10"
    return (((a1) < (b1)) || ((::x10aux::struct_equals(a1,
                                                       b1)) &&
    this->leq(a2, a3, b2, b3)));
    
}

//#line 212 "SuffixArray.x10"
x10_long bwt::SuffixArray::getI(x10_long t) {
    
    //#line 213 "SuffixArray.x10"
    if (((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
            t)) < (this->FMGL(n0)))) {
        
        //#line 214 "SuffixArray.x10"
        return ((((::x10aux::nullCheck(this->FMGL(SA12))->x10::lang::Rail< x10_long >::__apply(
                     t)) * (((x10_long)3ll)))) + (((x10_long)1ll)));
        
    } else {
        
        //#line 216 "SuffixArray.x10"
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
    this->FMGL(c) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    buf.write(this->FMGL(c));
    
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
    FMGL(c) = buf.read< ::x10::lang::Rail< x10_long >*>();
}

::x10aux::RuntimeType bwt::SuffixArray::rtt;
void bwt::SuffixArray::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("bwt.SuffixArray",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String bwt::SuffixArray_Strings::sl__5344("Ended 2st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5343("Ended 1st Radix Sort");
::x10::lang::String bwt::SuffixArray_Strings::sl__5341("Start Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5346("Ended Sort Sample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5347("Start Merge");
::x10::lang::String bwt::SuffixArray_Strings::sl__5342("Start Sort NonSample");
::x10::lang::String bwt::SuffixArray_Strings::sl__5345("Ended 3rd Radix Sort %ld\n");
::x10::lang::String bwt::SuffixArray_Strings::sl__5340("Start Constructuring Sample");

/* END of SuffixArray */
/*************************************************/
