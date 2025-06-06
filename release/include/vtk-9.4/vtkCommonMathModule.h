
#ifndef VTKCOMMONMATH_EXPORT_H
#define VTKCOMMONMATH_EXPORT_H

#ifdef VTKCOMMONMATH_STATIC_DEFINE
#  define VTKCOMMONMATH_EXPORT
#  define VTKCOMMONMATH_NO_EXPORT
#else
#  ifndef VTKCOMMONMATH_EXPORT
#    ifdef CommonMath_EXPORTS
        /* We are building this library */
#      define VTKCOMMONMATH_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKCOMMONMATH_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKCOMMONMATH_NO_EXPORT
#    define VTKCOMMONMATH_NO_EXPORT 
#  endif
#endif

#ifndef VTKCOMMONMATH_DEPRECATED
#  define VTKCOMMONMATH_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKCOMMONMATH_DEPRECATED_EXPORT
#  define VTKCOMMONMATH_DEPRECATED_EXPORT VTKCOMMONMATH_EXPORT VTKCOMMONMATH_DEPRECATED
#endif

#ifndef VTKCOMMONMATH_DEPRECATED_NO_EXPORT
#  define VTKCOMMONMATH_DEPRECATED_NO_EXPORT VTKCOMMONMATH_NO_EXPORT VTKCOMMONMATH_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKCOMMONMATH_NO_DEPRECATED
#    define VTKCOMMONMATH_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkCommonMathModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKCOMMONMATH_EXPORT_H */
