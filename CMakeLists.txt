cmake_minimum_required(VERSION 3.10)

project(testmacbuildvars)

set(CMAKE_INSTALL_BINDIR ${CMAKE_INSTALL_BINDIR} CACHE STRING "Installation directory for executables")
set(CMAKE_INSTALL_LIBDIR ${CMAKE_INSTALL_LIBDIR} CACHE STRING "Installation directory for libraries")

set(SOURCES src/main.cpp)
add_executable(testmacbuildvars ${SOURCES})
#include_directories(${CMAKE_SOURCE_DIR}/include)

install(TARGETS testmacbuildvars DESTINATION ${CMAKE_INSTALL_BINDIR})
#install(DIRECTORY include/ DESTINATION include)

#set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")
