# hellocmaketest
add_executable(
   hellocmaketest
   "include/osmacros.h"
   "src/osmacros.cpp"
   "src/main.cpp"
)
target_include_directories(hellocmaketest PRIVATE include)
target_link_libraries(hellocmaketest PRIVATE hellocmakelib)
set_target_properties(hellocmaketest PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
install(TARGETS hellocmaketest DESTINATION ${CMAKE_INSTALL_BINDIR})
