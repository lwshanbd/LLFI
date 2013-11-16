#include "FaultInjector.h"
#include "FaultInjectorManager.h"
#include <fstream>
#include <iostream>
class DecValue: public FaultInjector {
 public:
  virtual void injectFault(long llfi_index, unsigned size, unsigned fi_bit,
                      char *buf) {
   
     int diff=2500;
         int* newbuf= (int*)buf;
          *newbuf=*newbuf - diff;
            buf= (char*)newbuf;
         std::cout<<"DecValue injected"<<"\n" ;

              
  }
};


static RegisterFaultInjector X("DecValue", new DecValue());

