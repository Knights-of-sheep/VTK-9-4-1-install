// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
/**
 * @class   vtkAffineUnsignedLongLongArray
 * @brief   affine implicit array of unsigned long long.
 *
 * vtkAffineUnsignedLongLongArray is an affine implicit array of values of type unsigned long long.
 * see vtkAffineArray, vtkAffineImplicitBackend
 *
 * This file is generated by vtkImplicitArrays.cmake
 */

#ifndef vtkAffineUnsignedLongLongArray_h
#define vtkAffineUnsignedLongLongArray_h

#include "vtkAffineArray.h" // Real Superclass
#include "vtkCommonCoreModule.h"     // For export macro
#include "vtkDataArray.h"

// Fake the superclass for the wrappers.
#ifndef __VTK_WRAP__
#define vtkDataArray vtkAffineArray<unsigned long long>
#endif
VTK_ABI_NAMESPACE_BEGIN
class VTKCOMMONCORE_EXPORT vtkAffineUnsignedLongLongArray : public vtkDataArray
{
public:
  vtkImplicitArrayTypeMacro(vtkAffineUnsignedLongLongArray, vtkDataArray);
#ifndef __VTK_WRAP__
#undef vtkDataArray
#endif

  static vtkAffineUnsignedLongLongArray* New();
  static vtkAffineUnsignedLongLongArray* ExtendedNew();
  void PrintSelf(ostream& os, vtkIndent indent) override;

  // This macro expands to the set of method declarations that
  // make up the interface of vtkImplicitArray, which is ignored
  // by the wrappers.
#if defined(__VTK_WRAP__) || defined(__WRAP_GCCXML__)
  vtkCreateReadOnlyWrappedArrayInterface(unsigned long long);
#endif

  /**
   * A faster alternative to SafeDownCast for downcasting vtkAbstractArrays.
   */
  static vtkAffineUnsignedLongLongArray* FastDownCast(vtkAbstractArray* source)
  {
    return static_cast<vtkAffineUnsignedLongLongArray*>(Superclass::FastDownCast(source));
  }

  /**
   * Set the parameters for the affine backend.
   * slope is the unit variation and intercept is the value at 0.
   * Value at index is:
   *   value = slope * index + intercept
   */
  void ConstructBackend(unsigned long long slope, unsigned long long intercept);

protected:
  vtkAffineUnsignedLongLongArray();
  ~vtkAffineUnsignedLongLongArray() override;

private:
  typedef vtkAffineArray<unsigned long long> RealSuperclass;

  vtkAffineUnsignedLongLongArray(const vtkAffineUnsignedLongLongArray&) = delete;
  void operator=(const vtkAffineUnsignedLongLongArray&) = delete;
};

// Define vtkArrayDownCast implementation:
vtkArrayDownCast_FastCastMacro(vtkAffineUnsignedLongLongArray);

VTK_ABI_NAMESPACE_END
#endif
// VTK-HeaderTest-Exclude: TYPEMACRO
