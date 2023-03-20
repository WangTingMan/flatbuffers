#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#  if defined(LIBFLATBUFFERSCPP_EXPORTS)
#    define LIBFLATBUFFERSCPP_EXPORT __declspec(dllexport)
#  else
#    define LIBFLATBUFFERSCPP_EXPORT __declspec(dllimport)
#  endif  // defined(LIBFLATBUFFERSCPP_EXPORTS)

#else  // defined(WIN32)
#  if defined(LIBFLATBUFFERSCPP_EXPORTS)
#    define LIBFLATBUFFERSCPP_EXPORT __attribute__((visibility("default")))
#  else
#    define LIBFLATBUFFERSCPP_EXPORT
#  endif  // defined(LIBFLATBUFFERSCPP_EXPORTS)
#endif

