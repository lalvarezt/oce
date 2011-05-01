// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Texture1Dmanual_HeaderFile
#define _Graphic3d_Texture1Dmanual_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_Texture1Dmanual_HeaderFile
#include <Handle_Graphic3d_Texture1Dmanual.hxx>
#endif

#ifndef _Graphic3d_Texture1D_HeaderFile
#include <Graphic3d_Texture1D.hxx>
#endif
#ifndef _Handle_Graphic3d_StructureManager_HeaderFile
#include <Handle_Graphic3d_StructureManager.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Graphic3d_NameOfTexture1D_HeaderFile
#include <Graphic3d_NameOfTexture1D.hxx>
#endif
class Graphic3d_StructureManager;


//! This class provides the implementation of <br>
//! a manual 1D texture. <br>
//! you MUST provides texture coordinates on <br>
//! your facets if you want to see your <br>
//! texture. <br>
class Graphic3d_Texture1Dmanual : public Graphic3d_Texture1D {

public:

  //! Creates a texture from the file FileName. <br>
  Standard_EXPORT   Graphic3d_Texture1Dmanual(const Handle(Graphic3d_StructureManager)& SM,const Standard_CString FileName);
  //! Create a texture from a predefined texture name set. <br>
  Standard_EXPORT   Graphic3d_Texture1Dmanual(const Handle(Graphic3d_StructureManager)& SM,const Graphic3d_NameOfTexture1D NOT);




  DEFINE_STANDARD_RTTI(Graphic3d_Texture1Dmanual)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif