#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <memory>
#include "osmacros.h"
#include <hellocmakelib/hellocmake.h>

int main() {
   std::cout << "Testing hellocmake..." << std::endl;
   const auto hello = std::make_unique<hellocmakelib::hellocmake>();
   std::cout << "hellocmake::getHello() = " << hello->getHello() << std::endl;
   std::cout << "hellocmake::getWorld() = " << hello->getWorld() << std::endl;

   std::cout << std::endl;
   std::cout << "Printing OSVersion definitions..." << std::endl;
   osmacros::print();
   return 0;
}
