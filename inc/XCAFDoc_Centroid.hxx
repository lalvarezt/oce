// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_Centroid_HeaderFile
#define _XCAFDoc_Centroid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFDoc_Centroid_HeaderFile
#include <Handle_XCAFDoc_Centroid.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class gp_Pnt;
class TDF_Attribute;
class TDF_RelocationTable;



class XCAFDoc_Centroid : public TDF_Attribute {

public:

  //! class methods <br>
//!          ============= <br>
  Standard_EXPORT   XCAFDoc_Centroid();
  
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Find, or create, a Location attribute and set it's value <br>
//!          the Location attribute is returned. <br>//! Location methods <br>
//!          =============== <br>
  Standard_EXPORT   static  Handle_XCAFDoc_Centroid Set(const TDF_Label& label,const gp_Pnt& pnt) ;
  
  Standard_EXPORT     void Set(const gp_Pnt& pnt) ;
  
  Standard_EXPORT     gp_Pnt Get() const;
  //! Returns point as argument <br>
//!          returns false if no such attribute at the <label> <br>
  Standard_EXPORT   static  Standard_Boolean Get(const TDF_Label& label,gp_Pnt& pnt) ;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(XCAFDoc_Centroid)

protected:




private: 


gp_Pnt myCentroid;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif