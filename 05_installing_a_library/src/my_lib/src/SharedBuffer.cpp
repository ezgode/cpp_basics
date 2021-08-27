#include "my_lib/SharedBuffer.h"
#include<iostream>

SharedBuffer::SharedBuffer(int n){
  std::cout << "class::Creating a shared buffer of " << n << " elements." << std::endl;
}