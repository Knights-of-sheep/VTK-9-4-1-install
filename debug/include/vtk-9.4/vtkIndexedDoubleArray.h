// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
/**
 * @class   vtkIndexedDoubleArray
 * @brief   indexed implicit array of double.
 *
 * vtkIndexedDoubleArray is an indexed implicit array of values of type double.
 * see vtkIndexedArray, vtkIndexedImplicitBackend
 *
 * This file is generated by vtkImplicitArrays.cmake
 */

#ifndef vtkIndexedDoubleArray_h
#define vtkIndexedDoubleArray_h

#include "vtkIndexedArray.h" // Real Superclass
#include "vtkCommonCoreModule.h"     // For export macro
#include "vtkDataArray.h"

// Fake the superclass for the wrappers.
#ifndef __VTK_WRAP__
#define vtkDataArray vtkIndexedArray<double>
#endif
VTK_ABI_NAMESPACE_BEGIN
class VTKCOMMONCORE_EXPORT vtkIndexedDoubleArray : public vtkDataArray
{
public:
  vtkImplicitArrayTypeMacro(vtkIndexedDoubleArray, vtkDataArray);
#ifndef __VTK_WRAP__
#undef vtkDataArray
#endif

  static vtkIndexedDoubleArray* New();
  static vtkIndexedDoubleArray* ExtendedNew();
  void PrintSelf(ostream& os, vtkIndent indent) override;

  // This macro expands to the set of method declarations that
  // make up the interface of vtkImplicitArray, which is ignored
  // by the wrappers.
#if defined(__VTK_WRAP__) || defined(__WRAP_GCCXML__)
  vtkCreateReadOnlyWrappedArrayInterface(double);
#endif

  /**
   * A faster alternative to SafeDownCast for downcasting vtkAbstractArrays.
   */
  static vtkIndexedDoubleArray* FastDownCast(vtkAbstractArray* source)
  {
    return static_cast<vtkIndexedDoubleArray*>(Superclass::FastDownCast(source));
  }

  ///@{
  /**
   * Set which indexes from array should be exposed.
   */
  void ConstructBackend(vtkIdList* indexes, vtkDataArray* array);
  void ConstructBackend(vtkDataArray* indexes, vtkDataArray* array);
  ///@}

protected:
  vtkIndexedDoubleArray();
  ~vtkIndexedDoubleArray() override;

private:
  typedef vtkIndexedArray<double> RealSuperclass;

  vtkIndexedDoubleArray(const vtkIndexedDoubleArray&) = delete;
  void operator=(const vtkIndexedDoubleArray&) = delete;
};

// Define vtkArrayDownCast implementation:
vtkArrayDownCast_FastCastMacro(vtkIndexedDoubleArray);

VTK_ABI_NAMESPACE_END
#endif
// VTK-HeaderTest-Exclude: TYPEMACRO
