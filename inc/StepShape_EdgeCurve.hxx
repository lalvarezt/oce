// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_EdgeCurve_HeaderFile
#define _StepShape_EdgeCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_EdgeCurve_HeaderFile
#include <Handle_StepShape_EdgeCurve.hxx>
#endif

#ifndef _Handle_StepGeom_Curve_HeaderFile
#include <Handle_StepGeom_Curve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepShape_Edge_HeaderFile
#include <StepShape_Edge.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepShape_Vertex_HeaderFile
#include <Handle_StepShape_Vertex.hxx>
#endif
class StepGeom_Curve;
class TCollection_HAsciiString;
class StepShape_Vertex;



class StepShape_EdgeCurve : public StepShape_Edge {

public:

  //! Returns a EdgeCurve <br>
  Standard_EXPORT   StepShape_EdgeCurve();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepShape_Vertex)& aEdgeStart,const Handle(StepShape_Vertex)& aEdgeEnd) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepShape_Vertex)& aEdgeStart,const Handle(StepShape_Vertex)& aEdgeEnd,const Handle(StepGeom_Curve)& aEdgeGeometry,const Standard_Boolean aSameSense) ;
  
  Standard_EXPORT     void SetEdgeGeometry(const Handle(StepGeom_Curve)& aEdgeGeometry) ;
  
  Standard_EXPORT     Handle_StepGeom_Curve EdgeGeometry() const;
  
  Standard_EXPORT     void SetSameSense(const Standard_Boolean aSameSense) ;
  
  Standard_EXPORT     Standard_Boolean SameSense() const;




  DEFINE_STANDARD_RTTI(StepShape_EdgeCurve)

protected:




private: 


Handle_StepGeom_Curve edgeGeometry;
Standard_Boolean sameSense;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif