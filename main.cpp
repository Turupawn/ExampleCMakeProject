#include <iostream>
#include "MyExampleClass.h"
#include "MyOtherClass.h"
#include "ExampleLibrary.h"

int main()
{
  std::cout << "Hello world" << std::endl;
  
  MyExampleClass example_class;
  example_class.functionExample();

  MyOtherClass other_class;
  other_class.otherFunction();

  libraryExampleFunction();

  return 0;
}