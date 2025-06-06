// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
/**
 * @class   vtkAffineShortArray
 * @brief   affine implicit array of short.
 *
 * vtkAffineShortArray is an affine implicit array of values of type short.
 * see vtkAffineArray, vtkAffineImplicitBackend
 *
 * This file is generated by vtkImplicitArrays.cmake
 */

#ifndef vtkAffineShortArray_h
#define vtkAffineShortArray_h

#include "vtkAffineArray.h" // Real Superclass
#include "vtkCommonCoreModule.h"     // For export macro
#include "vtkDataArray.h"

// Fake the superclass for the wrappers.
#ifndef __VTK_WRAP__
#define vtkDataArray vtkAffineArray<short>
#endif
VTK_ABI_NAMESPACE_BEGIN
class VTKCOMMONCORE_EXPORT vtkAffineShortArray : public vtkDataArray
{
public:
  vtkImplicitArrayTypeMacro(vtkAffineShortArray, vtkDataArray);
#ifndef __VTK_WRAP__
#undef vtkDataArray
#endif

  static vtkAffineShortArray* New();
  static vtkAffineShortArray* ExtendedNew();
  void PrintSelf(ostream& os, vtkIndent indent) override;

  // This macro expands to the set of method declarations that
  // make up the interface of vtkImplicitArray, which is ignored
  // by the wrappers.
#if defined(__VTK_WRAP__) || defined(__WRAP_GCCXML__)
  vtkCreateReadOnlyWrappedArrayInterface(short);
#endif

  /**
   * A faster alternative to SafeDownCast for downcasting vtkAbstractArrays.
   */
  static vtkAffineShortArray* FastDownCast(vtkAbstractArray* source)
  {
    return static_cast<vtkAffineShortArray*>(Superclass::FastDownCast(source));
  }

  /**
   * Set the parameters for the affine backend.
   * slope is the unit variation and intercept is the value at 0.
   * Value at index is:
   *   value = slope * index + intercept
   */
  void ConstructBackend(short slope, short intercept);

protected:
  vtkAffineShortArray();
  ~vtkAffineShortArray() override;

private:
  typedef vtkAffineArray<short> RealSuperclass;

  vtkAffineShortArray(const vtkAffineShortArray&) = delete;
  void operator=(const vtkAffineShortArray&) = delete;
};

// Define vtkArrayDownCast implementation:
vtkArrayDownCast_FastCastMacro(vtkAffineShortArray);

VTK_ABI_NAMESPACE_END
#endif
// VTK-HeaderTest-Exclude: TYPEMACRO
