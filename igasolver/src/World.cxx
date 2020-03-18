///
/// @file    World.cxx
/// @author  Barthelemy von Haller
///

#include "igasolver/World.h"
#include "meshconverter/World.h"

#include <iostream>

namespace ProjectTemplate {
namespace igasolver {

void World::greet()
{
  std::cout << "igasolver world!!" << std::endl;

  ProjectTemplate::meshconverter::World projAWorld;
  projAWorld.greet();
}

int World::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace igasolver
} // namespace ProjectTemplate
