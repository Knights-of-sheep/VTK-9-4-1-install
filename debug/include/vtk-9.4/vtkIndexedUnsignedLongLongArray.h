// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
/**
 * @class   vtkIndexedUnsignedLongLongArray
 * @brief   indexed implicit array of unsigned long long.
 *
 * vtkIndexedUnsignedLongLongArray is an indexed implicit array of values of type unsigned long long.
 * see vtkIndexedArray, vtkIndexedImplicitBackend
 *
 * This file is generated by vtkImplicitArrays.cmake
 */

#ifndef vtkIndexedUnsignedLongLongArray_h
#define vtkIndexedUnsignedLongLongArray_h

#include "vtkIndexedArray.h" // Real Superclass
#include "vtkCommonCoreModule.h"     // For export macro
#include "vtkDataArray.h"

// Fake the superclass for the wrappers.
#ifndef __VTK_WRAP__
#define vtkDataArray vtkIndexedArray<unsigned long long>
#endif
VTK_ABI_NAMESPACE_BEGIN
class VTKCOMMONCORE_EXPORT vtkIndexedUnsignedLongLongArray : public vtkDataArray
{
public:
  vtkImplicitArrayTypeMacro(vtkIndexedUnsignedLongLongArray, vtkDataArray);
#ifndef __VTK_WRAP__
#undef vtkDataArray
#endif

  static vtkIndexedUnsignedLongLongArray* New();
  static vtkIndexedUnsignedLongLongArray* ExtendedNew();
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
  static vtkIndexedUnsignedLongLongArray* FastDownCast(vtkAbstractArray* source)
  {
    return static_cast<vtkIndexedUnsignedLongLongArray*>(Superclass::FastDownCast(source));
  }

  ///@{
  /**
   * Set which indexes from array should be exposed.
   */
  void ConstructBackend(vtkIdList* indexes, vtkDataArray* array);
  void ConstructBackend(vtkDataArray* indexes, vtkDataArray* array);
  ///@}

protected:
  vtkIndexedUnsignedLongLongArray();
  ~vtkIndexedUnsignedLongLongArray() override;

private:
  typedef vtkIndexedArray<unsigned long long> RealSuperclass;

  vtkIndexedUnsignedLongLongArray(const vtkIndexedUnsignedLongLongArray&) = delete;
  void operator=(const vtkIndexedUnsignedLongLongArray&) = delete;
};

// Define vtkArrayDownCast implementation:
vtkArrayDownCast_FastCastMacro(vtkIndexedUnsignedLongLongArray);

VTK_ABI_NAMESPACE_END
#endif
// VTK-HeaderTest-Exclude: TYPEMACRO
