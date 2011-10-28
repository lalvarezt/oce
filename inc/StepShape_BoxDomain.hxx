// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_BoxDomain_HeaderFile
#define _StepShape_BoxDomain_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_BoxDomain_HeaderFile
#include <Handle_StepShape_BoxDomain.hxx>
#endif

#ifndef _Handle_StepGeom_CartesianPoint_HeaderFile
#include <Handle_StepGeom_CartesianPoint.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepGeom_CartesianPoint;



class StepShape_BoxDomain : public MMgt_TShared {

public:

  //! Returns a BoxDomain <br>
  Standard_EXPORT   StepShape_BoxDomain();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepGeom_CartesianPoint)& aCorner,const Standard_Real aXlength,const Standard_Real aYlength,const Standard_Real aZlength) ;
  
  Standard_EXPORT     void SetCorner(const Handle(StepGeom_CartesianPoint)& aCorner) ;
  
  Standard_EXPORT     Handle_StepGeom_CartesianPoint Corner() const;
  
  Standard_EXPORT     void SetXlength(const Standard_Real aXlength) ;
  
  Standard_EXPORT     Standard_Real Xlength() const;
  
  Standard_EXPORT     void SetYlength(const Standard_Real aYlength) ;
  
  Standard_EXPORT     Standard_Real Ylength() const;
  
  Standard_EXPORT     void SetZlength(const Standard_Real aZlength) ;
  
  Standard_EXPORT     Standard_Real Zlength() const;




  DEFINE_STANDARD_RTTI(StepShape_BoxDomain)

protected:




private: 


Handle_StepGeom_CartesianPoint corner;
Standard_Real xlength;
Standard_Real ylength;
Standard_Real zlength;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif