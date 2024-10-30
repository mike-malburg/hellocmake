# hellocmaketest
add_executable(
   hellocmaketest
   "include/osmacros.h"
   "src/osmacros.cpp"
   "src/main.cpp"
)
target_include_directories(hellocmaketest PRIVATE include)
target_link_libraries(hellocmaketest PRIVATE hellocmakelib)
install(TARGETS hellocmaketest DESTINATION ${CMAKE_INSTALL_BINDIR})
set_target_properties(hellocmaketest PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

#install(DIRECTORY include/ DESTINATION include)
#set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")
