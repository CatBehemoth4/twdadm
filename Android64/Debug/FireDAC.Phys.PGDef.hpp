// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Phys.PGDef.pas' rev: 35.00 (MacOS)

#ifndef Firedac_Phys_PgdefHPP
#define Firedac_Phys_PgdefHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Stan.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Phys
{
namespace Pgdef
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDPhysPGConnectionDefParams;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFDPGCharacterSet : unsigned int { csNone, csBIG5, csEUC_CN, csEUC_JP, csEUC_KR, csEUC_TW, csGB18030, csGBK, csISO_8859_5, csISO_8859_6, csISO_8859_7, csISO_8859_8, csJOHAB, csKOI8, csLATIN1, csLATIN2, csLATIN3, csLATIN4, csLATIN5, csLATIN6, csLATIN7, csLATIN8, csLATIN9, csLATIN10, csMULE_INTERNAL, csSJIS, csSQL_ASCII, csUHC, csUTF8, csWIN866, csWIN874, csWIN1250, csWIN1251, csWIN1252, csWIN1256, csWIN1258 };

enum DECLSPEC_DENUM TFDPGOidAsBlob : unsigned int { oabNo, oabYes, oabChoose };

enum DECLSPEC_DENUM TFDPGUnknownFormat : unsigned int { ufError, ufBYTEA };

class PASCALIMPLEMENTATION TFDPhysPGConnectionDefParams : public Firedac::Stan::Intf::TFDConnectionDefParams
{
	typedef Firedac::Stan::Intf::TFDConnectionDefParams inherited;
	
private:
	HIDESBASE System::UnicodeString __fastcall GetDriverID();
	HIDESBASE void __fastcall SetDriverID(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetServer();
	void __fastcall SetServer(const System::UnicodeString AValue);
	int __fastcall GetPort();
	void __fastcall SetPort(const int AValue);
	int __fastcall GetLoginTimeout();
	void __fastcall SetLoginTimeout(const int AValue);
	TFDPGCharacterSet __fastcall GetCharacterSet();
	void __fastcall SetCharacterSet(const TFDPGCharacterSet AValue);
	bool __fastcall GetExtendedMetadata();
	void __fastcall SetExtendedMetadata(const bool AValue);
	TFDPGOidAsBlob __fastcall GetOidAsBlob();
	void __fastcall SetOidAsBlob(const TFDPGOidAsBlob AValue);
	TFDPGUnknownFormat __fastcall GetUnknownFormat();
	void __fastcall SetUnknownFormat(const TFDPGUnknownFormat AValue);
	System::UnicodeString __fastcall GetArrayScanSample();
	void __fastcall SetArrayScanSample(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetApplicationName();
	void __fastcall SetApplicationName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetPGAdvanced();
	void __fastcall SetPGAdvanced(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetMetaDefSchema();
	void __fastcall SetMetaDefSchema(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetMetaCurSchema();
	void __fastcall SetMetaCurSchema(const System::UnicodeString AValue);
	System::Types::TEndian __fastcall GetGUIDEndian();
	void __fastcall SetGUIDEndian(const System::Types::TEndian AValue);
	
__published:
	__property System::UnicodeString DriverID = {read=GetDriverID, write=SetDriverID, stored=false};
	__property System::UnicodeString Server = {read=GetServer, write=SetServer, stored=false};
	__property int Port = {read=GetPort, write=SetPort, stored=false, default=5432};
	__property int LoginTimeout = {read=GetLoginTimeout, write=SetLoginTimeout, stored=false, default=0};
	__property TFDPGCharacterSet CharacterSet = {read=GetCharacterSet, write=SetCharacterSet, stored=false, nodefault};
	__property bool ExtendedMetadata = {read=GetExtendedMetadata, write=SetExtendedMetadata, stored=false, nodefault};
	__property TFDPGOidAsBlob OidAsBlob = {read=GetOidAsBlob, write=SetOidAsBlob, stored=false, default=2};
	__property TFDPGUnknownFormat UnknownFormat = {read=GetUnknownFormat, write=SetUnknownFormat, stored=false, default=0};
	__property System::UnicodeString ArrayScanSample = {read=GetArrayScanSample, write=SetArrayScanSample, stored=false};
	__property System::UnicodeString ApplicationName = {read=GetApplicationName, write=SetApplicationName, stored=false};
	__property System::UnicodeString PGAdvanced = {read=GetPGAdvanced, write=SetPGAdvanced, stored=false};
	__property System::UnicodeString MetaDefSchema = {read=GetMetaDefSchema, write=SetMetaDefSchema, stored=false};
	__property System::UnicodeString MetaCurSchema = {read=GetMetaCurSchema, write=SetMetaCurSchema, stored=false};
	__property System::Types::TEndian GUIDEndian = {read=GetGUIDEndian, write=SetGUIDEndian, stored=false, nodefault};
public:
	/* TFDConnectionDefParams.Create */ inline __fastcall TFDPhysPGConnectionDefParams(const Firedac::Stan::Intf::_di_IFDStanDefinition ADef) : Firedac::Stan::Intf::TFDConnectionDefParams(ADef) { }
	/* TFDConnectionDefParams.Destroy */ inline __fastcall virtual ~TFDPhysPGConnectionDefParams() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pgdef */
}	/* namespace Phys */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS_PGDEF)
using namespace Firedac::Phys::Pgdef;
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
#endif	// Firedac_Phys_PgdefHPP
