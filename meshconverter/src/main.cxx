///
/// @file    main.cxx
/// @author  Barthelemy von Haller
///

#include "meshconverter/World.h"
#include "meshconverter/Version.h"
#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;

int main(int argc, char* argv[])
{
  // Arguments parsing
  po::variables_map vm;
  po::options_description desc("Allowed options");
  desc.add_options()("help,h", "Produce help message.")("version,v", "Show program name/version banner and exit.")(
    "rev", "Print the SVN revision number");
  po::store(parse_command_line(argc, argv, desc), vm);
  po::notify(vm);
  // help
  if (vm.count("help")) {
    std::cout << desc << std::endl;
    return EXIT_SUCCESS;
  }
  // version
  if (vm.count("version")) {
    std::cout << "HelloRunner version " << ProjectTemplate::meshconverter::Version::getString() << std::endl;
    return EXIT_SUCCESS;
  }
  // rev
  if (vm.count("rev")) {
    std::cout << "SVN revision : " << ProjectTemplate::meshconverter::Version::getRevision() << std::endl;
    return EXIT_SUCCESS;
  }

  // Actual "work"
  ProjectTemplate::meshconverter::World hello;
  hello.greet();


  // 0. read triangle surface mesh

  // 1. convert surface mesh to volumetric/tri-variate/solid T-spline

  // 1.1. mesh construction
  // 1.1.1. Paratemric Mapping
  // 1.1.2. Octree Subdivision & Projection
  // 1.1.3. Pillowing & Quality improvement
  // 1.1.4. Handling (partial) Extraordinary Nodes

  // 1.2. Solid T-spline construction
  // 1.2.1. Solid T-spline calculation
  // 1.2.2. Bezier extraction

  // 2. Output result

  return EXIT_SUCCESS;
}
