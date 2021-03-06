// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_ActorOfTransientProcess_HeaderFile
#define _Transfer_ActorOfTransientProcess_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Transfer_ActorOfTransientProcess.hxx>

#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Handle_Transfer_Binder.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Transfer_ProcessForTransient.hxx>
#include <Handle_Transfer_TransientProcess.hxx>
class Transfer_Binder;
class Standard_Transient;
class Transfer_ProcessForTransient;
class Transfer_TransientProcess;


//! The original class was renamed. Compatibility only
class Transfer_ActorOfTransientProcess : public Transfer_ActorOfProcessForTransient
{

public:

  
  Standard_EXPORT Transfer_ActorOfTransientProcess();
  
  Standard_EXPORT virtual   Handle(Transfer_Binder) Transferring (const Handle(Standard_Transient)& start, const Handle(Transfer_ProcessForTransient)& TP) ;
  
  Standard_EXPORT virtual   Handle(Transfer_Binder) Transfer (const Handle(Standard_Transient)& start, const Handle(Transfer_TransientProcess)& TP) ;
  
  Standard_EXPORT virtual   Handle(Standard_Transient) TransferTransient (const Handle(Standard_Transient)& start, const Handle(Transfer_TransientProcess)& TP) ;




  DEFINE_STANDARD_RTTI(Transfer_ActorOfTransientProcess)

protected:




private: 




};







#endif // _Transfer_ActorOfTransientProcess_HeaderFile
