
#ifndef VTKRENDERINGHYPERTREEGRID_EXPORT_H
#define VTKRENDERINGHYPERTREEGRID_EXPORT_H

#ifdef VTKRENDERINGHYPERTREEGRID_STATIC_DEFINE
#  define VTKRENDERINGHYPERTREEGRID_EXPORT
#  define VTKRENDERINGHYPERTREEGRID_NO_EXPORT
#else
#  ifndef VTKRENDERINGHYPERTREEGRID_EXPORT
#    ifdef RenderingHyperTreeGrid_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGHYPERTREEGRID_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKRENDERINGHYPERTREEGRID_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKRENDERINGHYPERTREEGRID_NO_EXPORT
#    define VTKRENDERINGHYPERTREEGRID_NO_EXPORT 
#  endif
#endif

#ifndef VTKRENDERINGHYPERTREEGRID_DEPRECATED
#  define VTKRENDERINGHYPERTREEGRID_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKRENDERINGHYPERTREEGRID_DEPRECATED_EXPORT
#  define VTKRENDERINGHYPERTREEGRID_DEPRECATED_EXPORT VTKRENDERINGHYPERTREEGRID_EXPORT VTKRENDERINGHYPERTREEGRID_DEPRECATED
#endif

#ifndef VTKRENDERINGHYPERTREEGRID_DEPRECATED_NO_EXPORT
#  define VTKRENDERINGHYPERTREEGRID_DEPRECATED_NO_EXPORT VTKRENDERINGHYPERTREEGRID_NO_EXPORT VTKRENDERINGHYPERTREEGRID_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKRENDERINGHYPERTREEGRID_NO_DEPRECATED
#    define VTKRENDERINGHYPERTREEGRID_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkRenderingHyperTreeGridModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"
/* AutoInit dependencies. */
#include "vtkRenderingCoreModule.h"


/* AutoInit implementations. */
#ifdef vtkRenderingHyperTreeGrid_AUTOINIT_INCLUDE
#include vtkRenderingHyperTreeGrid_AUTOINIT_INCLUDE
#endif
#ifdef vtkRenderingHyperTreeGrid_AUTOINIT
#include "vtkAutoInit.h"
VTK_MODULE_AUTOINIT(vtkRenderingHyperTreeGrid)
#endif

#endif /* VTKRENDERINGHYPERTREEGRID_EXPORT_H */
