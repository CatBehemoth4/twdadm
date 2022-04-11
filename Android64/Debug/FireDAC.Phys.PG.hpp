// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Phys.PG.pas' rev: 35.00 (MacOS)

#ifndef Firedac_Phys_PgHPP
#define Firedac_Phys_PgHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Phys.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "FireDAC.Phys.PG.o"

namespace Firedac
{
namespace Phys
{
namespace Pg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDPhysPgDriverLink;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFDPhysPgDriverLink : public Firedac::Phys::TFDPhysDriverLink
{
	typedef Firedac::Phys::TFDPhysDriverLink inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetBaseDriverID();
public:
	/* TFDPhysDriverLink.Create */ inline __fastcall virtual TFDPhysPgDriverLink(System::Classes::TComponent* AOwner) : Firedac::Phys::TFDPhysDriverLink(AOwner) { }
	/* TFDPhysDriverLink.Destroy */ inline __fastcall virtual ~TFDPhysPgDriverLink() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pg */
}	/* namespace Phys */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS_PG)
using namespace Firedac::Phys::Pg;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS)
using namespace Firedac::Phys;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Phys_PgHPP
