// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeTranslation_HeaderFile
#define _gce_MakeTranslation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <gp_Trsf.hxx>
class gp_Vec;
class gp_Pnt;
class gp_Trsf;


//! This class implements elementary construction algorithms for a
//! translation in 3D space. The result is a gp_Trsf transformation.
//! A MakeTranslation object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class gce_MakeTranslation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a translation along the vector " Vect"
  Standard_EXPORT gce_MakeTranslation(const gp_Vec& Vect);
  
  //! Constructs a translation along the vector
  //! (Point1,Point2) defined from the point Point1 to the point Point2.
  Standard_EXPORT gce_MakeTranslation(const gp_Pnt& Point1, const gp_Pnt& Point2);
  

  //! Returns the constructed transformation.
  Standard_EXPORT  const  gp_Trsf& Value()  const;
  
  Standard_EXPORT  const  gp_Trsf& Operator()  const;
Standard_EXPORT operator gp_Trsf() const;




protected:





private:



  gp_Trsf TheTranslation;


};







#endif // _gce_MakeTranslation_HeaderFile
