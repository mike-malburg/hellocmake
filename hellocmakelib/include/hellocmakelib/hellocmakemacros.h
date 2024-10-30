#pragma once
// Namespace start/end
#define NAMESPACE_HELLOCMAKELIB_START \
   namespace hellocmakelib            \
   {
#define NAMESPACE_HELLOCMAKELIB_END }

// DLL Import/Export macro for windows
#ifndef HELLOCMAKELIB_API
   #ifdef WIN32
      #ifdef HELLOCMAKELIB_EXPORTS
         #define HELLOCMAKELIB_API __declspec( dllexport )
      #else
         #define HELLOCMAKELIB_API __declspec( dllimport )
      #endif
   #else
      #define HELLOCMAKELIB_API
   #endif
#endif
