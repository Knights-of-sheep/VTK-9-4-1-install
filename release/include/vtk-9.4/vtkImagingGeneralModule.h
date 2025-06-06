
#ifndef VTKIMAGINGGENERAL_EXPORT_H
#define VTKIMAGINGGENERAL_EXPORT_H

#ifdef VTKIMAGINGGENERAL_STATIC_DEFINE
#  define VTKIMAGINGGENERAL_EXPORT
#  define VTKIMAGINGGENERAL_NO_EXPORT
#else
#  ifndef VTKIMAGINGGENERAL_EXPORT
#    ifdef ImagingGeneral_EXPORTS
        /* We are building this library */
#      define VTKIMAGINGGENERAL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKIMAGINGGENERAL_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKIMAGINGGENERAL_NO_EXPORT
#    define VTKIMAGINGGENERAL_NO_EXPORT 
#  endif
#endif

#ifndef VTKIMAGINGGENERAL_DEPRECATED
#  define VTKIMAGINGGENERAL_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKIMAGINGGENERAL_DEPRECATED_EXPORT
#  define VTKIMAGINGGENERAL_DEPRECATED_EXPORT VTKIMAGINGGENERAL_EXPORT VTKIMAGINGGENERAL_DEPRECATED
#endif

#ifndef VTKIMAGINGGENERAL_DEPRECATED_NO_EXPORT
#  define VTKIMAGINGGENERAL_DEPRECATED_NO_EXPORT VTKIMAGINGGENERAL_NO_EXPORT VTKIMAGINGGENERAL_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKIMAGINGGENERAL_NO_DEPRECATED
#    define VTKIMAGINGGENERAL_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkImagingGeneralModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKIMAGINGGENERAL_EXPORT_H */
