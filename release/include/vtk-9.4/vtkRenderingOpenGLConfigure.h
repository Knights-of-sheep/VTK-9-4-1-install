// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkRenderingOpenGLConfigure_h
#define vtkRenderingOpenGLConfigure_h

/* This header contains build settings for the vtkRenderingOpenGL2 module. */
/* It provides some compatibility with the vtkRenderingOpenGL module. */

#ifndef VTK_OPENGL2
#define VTK_OPENGL2
#endif

/* Whether VTK was built to support Cocoa on the Mac.  */
/* #undef VTK_USE_COCOA */

/*--------------------------------------------------------------------------*/
/* Rendering Configuration                                                  */
/* #undef VTK_USE_X */
#define VTK_USE_OPENGL_LIBRARY
/* #undef VTK_OPENGL_HAS_EGL */
/* #undef VTK_DEFAULT_RENDER_WINDOW_OFFSCREEN */
/* #undef VTK_OPENGL_ENABLE_STREAM_ANNOTATIONS */

// for legacy codes (don't use these in new codes)
#ifdef VTK_DEFAULT_RENDER_WINDOW_OFFSCREEN
# define VTK_USE_OFFSCREEN
#endif

/* Options for GPUInfo */
/* #undef VTK_USE_DIRECTX */
/* #undef VTK_USE_CORE_GRAPHICS */
/* #undef VTK_USE_NVCONTROL */

/*--------------------------------------------------------------------------*/
/* Setup VTK based on platform features and configuration.                  */

/* OGLR */
/* OGLR is for GLX. It can be on Unix, Mac or Windows */
#if ((defined(VTK_USE_OPENGL_LIBRARY) && defined(VTK_USE_X) && \
      !defined(_WIN32)) ||                                     \
     (defined(VTK_USE_X) && defined(_WIN32))) && \
     !defined(VTK_USE_COCOA)
# define VTK_USE_OGLR
#endif

#endif
