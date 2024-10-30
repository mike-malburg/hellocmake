cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)

project(hellocmake)

set(CMAKE_INSTALL_BINDIR ${CMAKE_INSTALL_BINDIR} CACHE STRING "Installation directory for executables")
set(CMAKE_INSTALL_LIBDIR ${CMAKE_INSTALL_LIBDIR} CACHE STRING "Installation directory for libraries")

add_subdirectory(hellocmakelib)
add_subdirectory(hellocmakelibtest)
