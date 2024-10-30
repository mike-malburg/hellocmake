if(WIN32)
   set(OSSPEC_COMPILE_DEFINITIONS "HELLOCMAKELIB_EXPORTS" "WIN32" "_WINDOWS")
endif()

# hellocmakelib
add_library(
   hellocmakelib SHARED
   "include/hellocmakelib/hellocmakemacros.h"
   "include/hellocmakelib/hellocmake.h"
   "src/hellocmake.cpp"
)
target_compile_definitions(hellocmakelib PRIVATE ${OSSPEC_COMPILE_DEFINITIONS})
target_include_directories(hellocmakelib PUBLIC include PRIVATE include/hellocmakelib ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(hellocmakelib PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
install(TARGETS hellocmakelib LIBRARY PUBLIC_HEADER)
