// This code conforms with the UFC specification version 2.0.5
// and was automatically generated by FFC version 1.0.0.
//
// This code was generated with the option '-l dolfin' and
// contains DOLFIN-specific wrappers that depend on DOLFIN.
// 
// This code was generated with the following parameters:
// 
//   cache_dir:                      ''
//   convert_exceptions_to_warnings: False
//   cpp_optimize:                   False
//   cpp_optimize_flags:             '-O2'
//   epsilon:                        1e-14
//   error_control:                  False
//   form_postfix:                   True
//   format:                         'dolfin'
//   log_level:                      20
//   log_prefix:                     ''
//   optimize:                       False
//   output_dir:                     '.'
//   precision:                      15
//   quadrature_degree:              'auto'
//   quadrature_rule:                'auto'
//   representation:                 'quadrature'
//   split:                          True
//   swig_binary:                    'swig'
//   swig_path:                      ''

#ifndef __COMPRESSIBLE2D_VELO_H
#define __COMPRESSIBLE2D_VELO_H

#include <cmath>
#include <stdexcept>
#include <fstream>
#include <ufc.h>

/// This class defines the interface for a finite element.

class compressible2d_velo_finite_element_0: public ufc::finite_element
{
public:

  /// Constructor
  compressible2d_velo_finite_element_0();

  /// Destructor
  virtual ~compressible2d_velo_finite_element_0();

  /// Return a string identifying the finite element
  virtual const char* signature() const;

  /// Return the cell shape
  virtual ufc::shape cell_shape() const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the topological dimension of the cell shape
  virtual unsigned int topological_dimension() const;

  /// Return the geometric dimension of the cell shape
  virtual unsigned int geometric_dimension() const;
#endif
  /// Return the dimension of the finite element function space
  virtual unsigned int space_dimension() const;

  /// Return the rank of the value space
  virtual unsigned int value_rank() const;

  /// Return the dimension of the value space for axis i
  virtual unsigned int value_dimension(unsigned int i) const;

  /// Evaluate basis function i at given point in cell
  virtual void evaluate_basis(unsigned int i,
                              double* values,
                              const double* coordinates,
                              const ufc::cell& c) const;

  /// Evaluate all basis functions at given point in cell
  virtual void evaluate_basis_all(double* values,
                                  const double* coordinates,
                                  const ufc::cell& c) const;

  /// Evaluate order n derivatives of basis function i at given point in cell
  virtual void evaluate_basis_derivatives(unsigned int i,
                                          unsigned int n,
                                          double* values,
                                          const double* coordinates,
                                          const ufc::cell& c) const;

  /// Evaluate order n derivatives of all basis functions at given point in cell
  virtual void evaluate_basis_derivatives_all(unsigned int n,
                                              double* values,
                                              const double* coordinates,
                                              const ufc::cell& c) const;

  /// Evaluate linear functional for dof i on the function f
  virtual double evaluate_dof(unsigned int i,
                              const ufc::function& f,
                              const ufc::cell& c) const;

  /// Evaluate linear functionals for all dofs on the function f
  virtual void evaluate_dofs(double* values,
                             const ufc::function& f,
                             const ufc::cell& c) const;

  /// Interpolate vertex values from dof values
  virtual void interpolate_vertex_values(double* vertex_values,
                                         const double* dof_values,
                                         const ufc::cell& c) const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Map coordinate xhat from reference cell to coordinate x in cell
  virtual void map_from_reference_cell(double* x,
                                       const double* xhat,
                                       const ufc::cell& c) const;

  /// Map from coordinate x in cell to coordinate xhat in reference cell
  virtual void map_to_reference_cell(double* xhat,
                                     const double* x,
                                     const ufc::cell& c) const;
#endif

  /// Return the number of sub elements (for a mixed element)
  virtual unsigned int num_sub_elements() const;

  /// Create a new finite element for sub element i (for a mixed element)
  virtual ufc::finite_element* create_sub_element(unsigned int i) const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Create a new class instance
  virtual ufc::finite_element* create() const;

#endif
};

/// This class defines the interface for a finite element.

class compressible2d_velo_finite_element_1: public ufc::finite_element
{
public:

  /// Constructor
  compressible2d_velo_finite_element_1();

  /// Destructor
  virtual ~compressible2d_velo_finite_element_1();

  /// Return a string identifying the finite element
  virtual const char* signature() const;

  /// Return the cell shape
  virtual ufc::shape cell_shape() const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the topological dimension of the cell shape
  virtual unsigned int topological_dimension() const;

  /// Return the geometric dimension of the cell shape
  virtual unsigned int geometric_dimension() const;
#endif
  /// Return the dimension of the finite element function space
  virtual unsigned int space_dimension() const;

  /// Return the rank of the value space
  virtual unsigned int value_rank() const;

  /// Return the dimension of the value space for axis i
  virtual unsigned int value_dimension(unsigned int i) const;

  /// Evaluate basis function i at given point in cell
  virtual void evaluate_basis(unsigned int i,
                              double* values,
                              const double* coordinates,
                              const ufc::cell& c) const;

  /// Evaluate all basis functions at given point in cell
  virtual void evaluate_basis_all(double* values,
                                  const double* coordinates,
                                  const ufc::cell& c) const;

  /// Evaluate order n derivatives of basis function i at given point in cell
  virtual void evaluate_basis_derivatives(unsigned int i,
                                          unsigned int n,
                                          double* values,
                                          const double* coordinates,
                                          const ufc::cell& c) const;

  /// Evaluate order n derivatives of all basis functions at given point in cell
  virtual void evaluate_basis_derivatives_all(unsigned int n,
                                              double* values,
                                              const double* coordinates,
                                              const ufc::cell& c) const;

  /// Evaluate linear functional for dof i on the function f
  virtual double evaluate_dof(unsigned int i,
                              const ufc::function& f,
                              const ufc::cell& c) const;

  /// Evaluate linear functionals for all dofs on the function f
  virtual void evaluate_dofs(double* values,
                             const ufc::function& f,
                             const ufc::cell& c) const;

  /// Interpolate vertex values from dof values
  virtual void interpolate_vertex_values(double* vertex_values,
                                         const double* dof_values,
                                         const ufc::cell& c) const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Map coordinate xhat from reference cell to coordinate x in cell
  virtual void map_from_reference_cell(double* x,
                                       const double* xhat,
                                       const ufc::cell& c) const;

  /// Map from coordinate x in cell to coordinate xhat in reference cell
  virtual void map_to_reference_cell(double* xhat,
                                     const double* x,
                                     const ufc::cell& c) const;
#endif

  /// Return the number of sub elements (for a mixed element)
  virtual unsigned int num_sub_elements() const;

  /// Create a new finite element for sub element i (for a mixed element)
  virtual ufc::finite_element* create_sub_element(unsigned int i) const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Create a new class instance
  virtual ufc::finite_element* create() const;

#endif
};

/// This class defines the interface for a local-to-global mapping of
/// degrees of freedom (dofs).

#ifndef UFC_BACKWARD_COMPATIBILITY
class compressible2d_velo_dofmap_0: public ufc::dofmap
#else
class compressible2d_velo_dofmap_0: public ufc::dof_map
#endif
{
private:

  unsigned int _global_dimension;
public:

  /// Constructor
  compressible2d_velo_dofmap_0();

  /// Destructor
  virtual ~compressible2d_velo_dofmap_0();

  /// Return a string identifying the dofmap
  virtual const char* signature() const;

  /// Return true iff mesh entities of topological dimension d are needed
  virtual bool needs_mesh_entities(unsigned int d) const;

  /// Initialize dofmap for mesh (return true iff init_cell() is needed)
  virtual bool init_mesh(const ufc::mesh& m);

  /// Initialize dofmap for given cell
  virtual void init_cell(const ufc::mesh& m,
                         const ufc::cell& c);

  /// Finish initialization of dofmap for cells
  virtual void init_cell_finalize();

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the topological dimension of the associated cell shape
  virtual unsigned int topological_dimension() const;

  /// Return the geometric dimension of the associated cell shape
  virtual unsigned int geometric_dimension() const;
#endif

  /// Return the dimension of the global finite element function space
  virtual unsigned int global_dimension() const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the dimension of the local finite element function space for a cell
  virtual unsigned int local_dimension(const ufc::cell& c) const;

  /// Return the maximum dimension of the local finite element function space
  virtual unsigned int max_local_dimension() const;
#else

  /// Return the dimension of the local finite element function space for a cell
  virtual unsigned int local_dimension() const;

  /// Return the maximum dimension of the local finite element function space
  virtual unsigned int geometric_dimension() const;
#endif
  /// Return the number of dofs on each cell facet
  virtual unsigned int num_facet_dofs() const;

  /// Return the number of dofs associated with each cell entity of dimension d
  virtual unsigned int num_entity_dofs(unsigned int d) const;

  /// Tabulate the local-to-global mapping of dofs on a cell
  virtual void tabulate_dofs(unsigned int* dofs,
                             const ufc::mesh& m,
                             const ufc::cell& c) const;

  /// Tabulate the local-to-local mapping from facet dofs to cell dofs
  virtual void tabulate_facet_dofs(unsigned int* dofs,
                                   unsigned int facet) const;

  /// Tabulate the local-to-local mapping of dofs on entity (d, i)
  virtual void tabulate_entity_dofs(unsigned int* dofs,
                                    unsigned int d, unsigned int i) const;

  /// Tabulate the coordinates of all dofs on a cell
  virtual void tabulate_coordinates(double** coordinates,
                                    const ufc::cell& c) const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the number of sub dofmaps (for a mixed element)
  virtual unsigned int num_sub_dofmaps() const;

  /// Create a new dofmap for sub dofmap i (for a mixed element)
  virtual ufc::dofmap* create_sub_dofmap(unsigned int i) const;

  /// Create a new class instance
  virtual ufc::dofmap* create() const;
#else
  /// Return the number of sub dofmaps (for a mixed element)
  virtual unsigned int num_sub_dof_maps() const;

  /// Create a new dofmap for sub dofmap i (for a mixed element)
  virtual ufc::dof_map* create_sub_dof_map(unsigned int i) const;
#endif
};

/// This class defines the interface for a local-to-global mapping of
/// degrees of freedom (dofs).

#ifndef UFC_BACKWARD_COMPATIBILITY
class compressible2d_velo_dofmap_1: public ufc::dofmap
#else
class compressible2d_velo_dofmap_1: public ufc::dof_map
#endif
{
private:

  unsigned int _global_dimension;
public:

  /// Constructor
  compressible2d_velo_dofmap_1();

  /// Destructor
  virtual ~compressible2d_velo_dofmap_1();

  /// Return a string identifying the dofmap
  virtual const char* signature() const;

  /// Return true iff mesh entities of topological dimension d are needed
  virtual bool needs_mesh_entities(unsigned int d) const;

  /// Initialize dofmap for mesh (return true iff init_cell() is needed)
  virtual bool init_mesh(const ufc::mesh& m);

  /// Initialize dofmap for given cell
  virtual void init_cell(const ufc::mesh& m,
                         const ufc::cell& c);

  /// Finish initialization of dofmap for cells
  virtual void init_cell_finalize();

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the topological dimension of the associated cell shape
  virtual unsigned int topological_dimension() const;

  /// Return the geometric dimension of the associated cell shape
  virtual unsigned int geometric_dimension() const;
#endif

  /// Return the dimension of the global finite element function space
  virtual unsigned int global_dimension() const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the dimension of the local finite element function space for a cell
  virtual unsigned int local_dimension(const ufc::cell& c) const;

  /// Return the maximum dimension of the local finite element function space
  virtual unsigned int max_local_dimension() const;
#else

  /// Return the dimension of the local finite element function space for a cell
  virtual unsigned int local_dimension() const;

  /// Return the maximum dimension of the local finite element function space
  virtual unsigned int geometric_dimension() const;
#endif
  /// Return the number of dofs on each cell facet
  virtual unsigned int num_facet_dofs() const;

  /// Return the number of dofs associated with each cell entity of dimension d
  virtual unsigned int num_entity_dofs(unsigned int d) const;

  /// Tabulate the local-to-global mapping of dofs on a cell
  virtual void tabulate_dofs(unsigned int* dofs,
                             const ufc::mesh& m,
                             const ufc::cell& c) const;

  /// Tabulate the local-to-local mapping from facet dofs to cell dofs
  virtual void tabulate_facet_dofs(unsigned int* dofs,
                                   unsigned int facet) const;

  /// Tabulate the local-to-local mapping of dofs on entity (d, i)
  virtual void tabulate_entity_dofs(unsigned int* dofs,
                                    unsigned int d, unsigned int i) const;

  /// Tabulate the coordinates of all dofs on a cell
  virtual void tabulate_coordinates(double** coordinates,
                                    const ufc::cell& c) const;

#ifndef UFC_BACKWARD_COMPATIBILITY
  /// Return the number of sub dofmaps (for a mixed element)
  virtual unsigned int num_sub_dofmaps() const;

  /// Create a new dofmap for sub dofmap i (for a mixed element)
  virtual ufc::dofmap* create_sub_dofmap(unsigned int i) const;

  /// Create a new class instance
  virtual ufc::dofmap* create() const;
#else
  /// Return the number of sub dofmaps (for a mixed element)
  virtual unsigned int num_sub_dof_maps() const;

  /// Create a new dofmap for sub dofmap i (for a mixed element)
  virtual ufc::dof_map* create_sub_dof_map(unsigned int i) const;
#endif
};

/// This class defines the interface for the tabulation of the cell
/// tensor corresponding to the local contribution to a form from
/// the integral over a cell.

class compressible2d_velo_cell_integral_0_0: public ufc::cell_integral
{
public:

  /// Constructor
  compressible2d_velo_cell_integral_0_0();

  /// Destructor
  virtual ~compressible2d_velo_cell_integral_0_0();

  /// Tabulate the tensor for the contribution from a local cell
  virtual void tabulate_tensor(double* A,
                               const double * const * w,
                               const ufc::cell& c) const;

 #ifndef UFC_BACKWARD_COMPATIBILITY 
  /// Tabulate the tensor for the contribution from a local cell
  /// using the specified reference cell quadrature points/weights
  virtual void tabulate_tensor(double* A,
                               const double * const * w,
                               const ufc::cell& c,
                               unsigned int num_quadrature_points,
                               const double * const * quadrature_points,
                               const double* quadrature_weights) const;
#endif
};

/// This class defines the interface for the tabulation of the cell
/// tensor corresponding to the local contribution to a form from
/// the integral over a cell.

class compressible2d_velo_cell_integral_1_0: public ufc::cell_integral
{
public:

  /// Constructor
  compressible2d_velo_cell_integral_1_0();

  /// Destructor
  virtual ~compressible2d_velo_cell_integral_1_0();

  /// Tabulate the tensor for the contribution from a local cell
  virtual void tabulate_tensor(double* A,
                               const double * const * w,
                               const ufc::cell& c) const;

 #ifndef UFC_BACKWARD_COMPATIBILITY 
  /// Tabulate the tensor for the contribution from a local cell
  /// using the specified reference cell quadrature points/weights
  virtual void tabulate_tensor(double* A,
                               const double * const * w,
                               const ufc::cell& c,
                               unsigned int num_quadrature_points,
                               const double * const * quadrature_points,
                               const double* quadrature_weights) const;
#endif
};

/// This class defines the interface for the assembly of the global
/// tensor corresponding to a form with r + n arguments, that is, a
/// mapping
///
///     a : V1 x V2 x ... Vr x W1 x W2 x ... x Wn -> R
///
/// with arguments v1, v2, ..., vr, w1, w2, ..., wn. The rank r
/// global tensor A is defined by
///
///     A = a(V1, V2, ..., Vr, w1, w2, ..., wn),
///
/// where each argument Vj represents the application to the
/// sequence of basis functions of Vj and w1, w2, ..., wn are given
/// fixed functions (coefficients).

class compressible2d_velo_form_0: public ufc::form
{
public:

  /// Constructor
  compressible2d_velo_form_0();

  /// Destructor
  virtual ~compressible2d_velo_form_0();

  /// Return a string identifying the form
  virtual const char* signature() const;

  /// Return the rank of the global tensor (r)
  virtual unsigned int rank() const;

  /// Return the number of coefficients (n)
  virtual unsigned int num_coefficients() const;

 #ifndef UFC_BACKWARD_COMPATIBILITY 
  /// Return the number of cell domains
  virtual unsigned int num_cell_domains() const;

  /// Return the number of exterior facet domains
  virtual unsigned int num_exterior_facet_domains() const;

  /// Return the number of interior facet domains
  virtual unsigned int num_interior_facet_domains() const;
#else
  /// Return the number of cell domains
  virtual unsigned int num_cell_integrals() const;

  /// Return the number of exterior facet domains
  virtual unsigned int num_exterior_facet_integrals() const;

  /// Return the number of interior facet domains
  virtual unsigned int num_interior_facet_integrals() const;

#endif
  /// Create a new finite element for argument function i
  virtual ufc::finite_element* create_finite_element(unsigned int i) const;

 #ifndef UFC_BACKWARD_COMPATIBILITY 
  /// Create a new dofmap for argument function i
  virtual ufc::dofmap* create_dofmap(unsigned int i) const;
#else
  /// Create a new dofmap for argument function i
  virtual ufc::dof_map* create_dof_map(unsigned int i) const;

#endif
  /// Create a new cell integral on sub domain i
  virtual ufc::cell_integral* create_cell_integral(unsigned int i) const;

  /// Create a new exterior facet integral on sub domain i
  virtual ufc::exterior_facet_integral* create_exterior_facet_integral(unsigned int i) const;

  /// Create a new interior facet integral on sub domain i
  virtual ufc::interior_facet_integral* create_interior_facet_integral(unsigned int i) const;

};

/// This class defines the interface for the assembly of the global
/// tensor corresponding to a form with r + n arguments, that is, a
/// mapping
///
///     a : V1 x V2 x ... Vr x W1 x W2 x ... x Wn -> R
///
/// with arguments v1, v2, ..., vr, w1, w2, ..., wn. The rank r
/// global tensor A is defined by
///
///     A = a(V1, V2, ..., Vr, w1, w2, ..., wn),
///
/// where each argument Vj represents the application to the
/// sequence of basis functions of Vj and w1, w2, ..., wn are given
/// fixed functions (coefficients).

class compressible2d_velo_form_1: public ufc::form
{
public:

  /// Constructor
  compressible2d_velo_form_1();

  /// Destructor
  virtual ~compressible2d_velo_form_1();

  /// Return a string identifying the form
  virtual const char* signature() const;

  /// Return the rank of the global tensor (r)
  virtual unsigned int rank() const;

  /// Return the number of coefficients (n)
  virtual unsigned int num_coefficients() const;

 #ifndef UFC_BACKWARD_COMPATIBILITY 
  /// Return the number of cell domains
  virtual unsigned int num_cell_domains() const;

  /// Return the number of exterior facet domains
  virtual unsigned int num_exterior_facet_domains() const;

  /// Return the number of interior facet domains
  virtual unsigned int num_interior_facet_domains() const;
#else
  /// Return the number of cell domains
  virtual unsigned int num_cell_integrals() const;

  /// Return the number of exterior facet domains
  virtual unsigned int num_exterior_facet_integrals() const;

  /// Return the number of interior facet domains
  virtual unsigned int num_interior_facet_integrals() const;

#endif
  /// Create a new finite element for argument function i
  virtual ufc::finite_element* create_finite_element(unsigned int i) const;

 #ifndef UFC_BACKWARD_COMPATIBILITY 
  /// Create a new dofmap for argument function i
  virtual ufc::dofmap* create_dofmap(unsigned int i) const;
#else
  /// Create a new dofmap for argument function i
  virtual ufc::dof_map* create_dof_map(unsigned int i) const;

#endif
  /// Create a new cell integral on sub domain i
  virtual ufc::cell_integral* create_cell_integral(unsigned int i) const;

  /// Create a new exterior facet integral on sub domain i
  virtual ufc::exterior_facet_integral* create_exterior_facet_integral(unsigned int i) const;

  /// Create a new interior facet integral on sub domain i
  virtual ufc::interior_facet_integral* create_interior_facet_integral(unsigned int i) const;

};

#ifndef UFC_BACKWARD_COMPATIBILITY 

// DOLFIN wrappers

// Standard library includes
#include <string>

// DOLFIN includes
#include <dolfin/common/NoDeleter.h>
#include <dolfin/fem/FiniteElement.h>
#include <dolfin/fem/DofMap.h>
#include <dolfin/fem/Form.h>
#include <dolfin/function/FunctionSpace.h>
#include <dolfin/function/GenericFunction.h>
#include <dolfin/function/CoefficientAssigner.h>
#include <dolfin/adaptivity/ErrorControl.h>
#include <dolfin/adaptivity/GoalFunctional.h>

namespace compressible2d_velo
{

class CoefficientSpace_Phi_0: public dolfin::FunctionSpace
{
public:

  CoefficientSpace_Phi_0(const dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap *(new dolfin::DofMap(ufc::dofmap* (new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  CoefficientSpace_Phi_0(dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap *(new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  CoefficientSpace_Phi_0(dolfin::Mesh*  mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  CoefficientSpace_Phi_0(const dolfin::Mesh* mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element*(new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap*(new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  ~CoefficientSpace_Phi_0()
  {
  }

};

class Form_0_FunctionSpace_0: public dolfin::FunctionSpace
{
public:

  Form_0_FunctionSpace_0(const dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap *(new dolfin::DofMap(ufc::dofmap* (new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  Form_0_FunctionSpace_0(dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap *(new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  Form_0_FunctionSpace_0(dolfin::Mesh*  mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  Form_0_FunctionSpace_0(const dolfin::Mesh* mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element*(new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap*(new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  ~Form_0_FunctionSpace_0()
  {
  }

};

class Form_0_FunctionSpace_1: public dolfin::FunctionSpace
{
public:

  Form_0_FunctionSpace_1(const dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap *(new dolfin::DofMap(ufc::dofmap* (new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  Form_0_FunctionSpace_1(dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap *(new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  Form_0_FunctionSpace_1(dolfin::Mesh*  mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  Form_0_FunctionSpace_1(const dolfin::Mesh* mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element*(new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap*(new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  ~Form_0_FunctionSpace_1()
  {
  }

};

class Form_0: public dolfin::Form
{
public:

  // Constructor
  Form_0(const dolfin::FunctionSpace& V1, const dolfin::FunctionSpace& V0):
    dolfin::Form(2, 0)
  {
    _function_spaces[0] = reference_to_no_delete_pointer(V0);
    _function_spaces[1] = reference_to_no_delete_pointer(V1);

    _ufc_form = const ufc::form* (new compressible2d_velo_form_0());
  }

  // Constructor
  Form_0(boost::shared_ptr<const dolfin::FunctionSpace> V1, boost::shared_ptr<const dolfin::FunctionSpace> V0):
    dolfin::Form(2, 0)
  {
    _function_spaces[0] = V0;
    _function_spaces[1] = V1;

    _ufc_form = const ufc::form* (new compressible2d_velo_form_0());
  }

  // Destructor
  ~Form_0()
  {}

  /// Return the number of the coefficient with this name
  virtual dolfin::uint coefficient_number(const std::string& name) const
  {

    dolfin::dolfin_error("generated code for class Form",
                         "access coeficient data",
                         "There are no coefficients");
    return 0;
  }

  /// Return the name of the coefficient with this number
  virtual std::string coefficient_name(dolfin::uint i) const
  {

    dolfin::dolfin_error("generated code for class Form",
                         "access coeficient data",
                         "There are no coefficients");
    return "unnamed";
  }

  // Typedefs
  typedef Form_0_FunctionSpace_0 TestSpace;
  typedef Form_0_FunctionSpace_1 TrialSpace;

  // Coefficients
};

class Form_1_FunctionSpace_0: public dolfin::FunctionSpace
{
public:

  Form_1_FunctionSpace_0(const dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap *(new dolfin::DofMap(ufc::dofmap* (new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  Form_1_FunctionSpace_0(dolfin::Mesh& mesh):
    dolfin::FunctionSpace(dolfin::reference_to_no_delete_pointer(mesh),
                          const dolfin::FiniteElement* (new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap *(new compressible2d_velo_dofmap_1()), mesh)))
  {
    // Do nothing
  }

  Form_1_FunctionSpace_0(dolfin::Mesh*  mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element* (new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap* (new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  Form_1_FunctionSpace_0(const dolfin::Mesh* mesh):
    dolfin::FunctionSpace(mesh,
                          const dolfin::FiniteElement *(new dolfin::FiniteElement(ufc::finite_element*(new compressible2d_velo_finite_element_1()))),
                          const dolfin::DofMap*(new dolfin::DofMap(ufc::dofmap*(new compressible2d_velo_dofmap_1()), *mesh)))
  {
      // Do nothing
  }

  ~Form_1_FunctionSpace_0()
  {
  }

};

typedef CoefficientSpace_Phi_0 Form_1_FunctionSpace_1;

class Form_1: public dolfin::Form
{
public:

  // Constructor
  Form_1(const dolfin::FunctionSpace& V0):
    dolfin::Form(1, 1), Phi_0(*this, 0)
  {
    _function_spaces[0] = reference_to_no_delete_pointer(V0);

    _ufc_form = const ufc::form* (new compressible2d_velo_form_1());
  }

  // Constructor
  Form_1(const dolfin::FunctionSpace& V0, const dolfin::GenericFunction& Phi_0):
    dolfin::Form(1, 1), Phi_0(*this, 0)
  {
    _function_spaces[0] = reference_to_no_delete_pointer(V0);

    this->Phi_0 = Phi_0;

    _ufc_form = const ufc::form* (new compressible2d_velo_form_1());
  }

  // Constructor
  Form_1(const dolfin::FunctionSpace& V0, boost::shared_ptr<const dolfin::GenericFunction> Phi_0):
    dolfin::Form(1, 1), Phi_0(*this, 0)
  {
    _function_spaces[0] = reference_to_no_delete_pointer(V0);

    this->Phi_0 = *Phi_0;

    _ufc_form = const ufc::form* (new compressible2d_velo_form_1());
  }

  // Constructor
  Form_1(boost::shared_ptr<const dolfin::FunctionSpace> V0):
    dolfin::Form(1, 1), Phi_0(*this, 0)
  {
    _function_spaces[0] = V0;

    _ufc_form = const ufc::form* (new compressible2d_velo_form_1());
  }

  // Constructor
  Form_1(boost::shared_ptr<const dolfin::FunctionSpace> V0, const dolfin::GenericFunction& Phi_0):
    dolfin::Form(1, 1), Phi_0(*this, 0)
  {
    _function_spaces[0] = V0;

    this->Phi_0 = Phi_0;

    _ufc_form = const ufc::form* (new compressible2d_velo_form_1());
  }

  // Constructor
  Form_1(boost::shared_ptr<const dolfin::FunctionSpace> V0, boost::shared_ptr<const dolfin::GenericFunction> Phi_0):
    dolfin::Form(1, 1), Phi_0(*this, 0)
  {
    _function_spaces[0] = V0;

    this->Phi_0 = *Phi_0;

    _ufc_form = const ufc::form* (new compressible2d_velo_form_1());
  }

  // Destructor
  ~Form_1()
  {}

  /// Return the number of the coefficient with this name
  virtual dolfin::uint coefficient_number(const std::string& name) const
  {
    if (name == "Phi_0")
      return 0;

    dolfin::dolfin_error("generated code for class Form",
                         "access coeficient data",
                         "Invalid coeficient");
    return 0;
  }

  /// Return the name of the coefficient with this number
  virtual std::string coefficient_name(dolfin::uint i) const
  {
    switch (i)
    {
    case 0:
      return "Phi_0";
    }

    dolfin::dolfin_error("generated code for class Form",
                         "access coeficient data",
                         "Invalid coeficient");
    return "unnamed";
  }

  // Typedefs
  typedef Form_1_FunctionSpace_0 TestSpace;
  typedef Form_1_FunctionSpace_1 CoefficientSpace_Phi_0;

  // Coefficients
  dolfin::CoefficientAssigner Phi_0;
};

// Class typedefs
typedef Form_0 BilinearForm;
typedef Form_0 JacobianForm;
typedef Form_1 LinearForm;
typedef Form_1 ResidualForm;
typedef Form_0::TestSpace FunctionSpace;

}
#else 

// DOLFIN wrappers
#include <dolfin/fem/Form.h>

class compressible2d_veloBilinearForm : public dolfin::Form
{
public:

  compressible2d_veloBilinearForm() : dolfin::Form()
  {

  }

  /// Return UFC form
  virtual const ufc::form& form() const
  {
    return __form;
  }
  
  /// Return array of coefficients
  virtual const dolfin::Array<dolfin::Function*>& coefficients() const
  {
    return __coefficients;
  }

private:

  // UFC form
  compressible2d_velo_form_0 __form;

  /// Array of coefficients
  dolfin::Array<dolfin::Function*> __coefficients;

};

class compressible2d_veloLinearForm : public dolfin::Form
{
public:

  compressible2d_veloLinearForm(dolfin::Function& w0) : dolfin::Form()
  {
    __coefficients.push_back(&w0);
  }

  /// Return UFC form
  virtual const ufc::form& form() const
  {
    return __form;
  }
  
  /// Return array of coefficients
  virtual const dolfin::Array<dolfin::Function*>& coefficients() const
  {
    return __coefficients;
  }

private:

  // UFC form
  compressible2d_velo_form_1 __form;

  /// Array of coefficients
  dolfin::Array<dolfin::Function*> __coefficients;

};


#endif 


#endif
