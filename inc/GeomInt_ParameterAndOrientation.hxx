// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_ParameterAndOrientation_HeaderFile
#define _GeomInt_ParameterAndOrientation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif



class GeomInt_ParameterAndOrientation  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   GeomInt_ParameterAndOrientation();
  
  Standard_EXPORT   GeomInt_ParameterAndOrientation(const Standard_Real P,const TopAbs_Orientation Or1,const TopAbs_Orientation Or2);
  
  Standard_EXPORT     void SetOrientation1(const TopAbs_Orientation Or) ;
  
  Standard_EXPORT     void SetOrientation2(const TopAbs_Orientation Or) ;
  
  Standard_EXPORT     Standard_Real Parameter() const;
  
  Standard_EXPORT     TopAbs_Orientation Orientation1() const;
  
  Standard_EXPORT     TopAbs_Orientation Orientation2() const;





protected:





private:



Standard_Real prm;
TopAbs_Orientation or1;
TopAbs_Orientation or2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif