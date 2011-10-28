// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TransferBRep_BinderOfShape.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Transfer_TransferFailure_HeaderFile
#include <Transfer_TransferFailure.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TransferBRep_ShapeInfo_HeaderFile
#include <TransferBRep_ShapeInfo.hxx>
#endif
#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(TransferBRep_BinderOfShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_Binder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TransferBRep_BinderOfShape)


IMPLEMENT_DOWNCAST(TransferBRep_BinderOfShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TransferBRep_BinderOfShape)


#define TheResult TopoDS_Shape
#define TheResult_hxx <TopoDS_Shape.hxx>
#define TheInfo TransferBRep_ShapeInfo
#define TheInfo_hxx <TransferBRep_ShapeInfo.hxx>
#define Transfer_SimpleBinder TransferBRep_BinderOfShape
#define Transfer_SimpleBinder_hxx <TransferBRep_BinderOfShape.hxx>
#define Handle_Transfer_SimpleBinder Handle_TransferBRep_BinderOfShape
#define Transfer_SimpleBinder_Type_() TransferBRep_BinderOfShape_Type_()
#include <Transfer_SimpleBinder.gxx>
