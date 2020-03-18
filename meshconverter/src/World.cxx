///
/// @file    World.cxx
/// @author  Barthelemy von Haller
///

#include "meshconverter/World.h"

#include <iostream>

namespace ProjectTemplate {
namespace meshconverter {

void World::greet()
{
  std::cout << "meshconverter world!!" << std::endl;
}

int World::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace meshconverter
} // namespace ProjectTemplate
