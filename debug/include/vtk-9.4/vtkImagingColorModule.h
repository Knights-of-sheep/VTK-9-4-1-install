
#ifndef VTKIMAGINGCOLOR_EXPORT_H
#define VTKIMAGINGCOLOR_EXPORT_H

#ifdef VTKIMAGINGCOLOR_STATIC_DEFINE
#  define VTKIMAGINGCOLOR_EXPORT
#  define VTKIMAGINGCOLOR_NO_EXPORT
#else
#  ifndef VTKIMAGINGCOLOR_EXPORT
#    ifdef ImagingColor_EXPORTS
        /* We are building this library */
#      define VTKIMAGINGCOLOR_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKIMAGINGCOLOR_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKIMAGINGCOLOR_NO_EXPORT
#    define VTKIMAGINGCOLOR_NO_EXPORT 
#  endif
#endif

#ifndef VTKIMAGINGCOLOR_DEPRECATED
#  define VTKIMAGINGCOLOR_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKIMAGINGCOLOR_DEPRECATED_EXPORT
#  define VTKIMAGINGCOLOR_DEPRECATED_EXPORT VTKIMAGINGCOLOR_EXPORT VTKIMAGINGCOLOR_DEPRECATED
#endif

#ifndef VTKIMAGINGCOLOR_DEPRECATED_NO_EXPORT
#  define VTKIMAGINGCOLOR_DEPRECATED_NO_EXPORT VTKIMAGINGCOLOR_NO_EXPORT VTKIMAGINGCOLOR_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKIMAGINGCOLOR_NO_DEPRECATED
#    define VTKIMAGINGCOLOR_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkImagingColorModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKIMAGINGCOLOR_EXPORT_H */
