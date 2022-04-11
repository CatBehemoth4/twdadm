// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Phys.PGWrapper.pas' rev: 35.00 (MacOS)

#ifndef Firedac_Phys_PgwrapperHPP
#define Firedac_Phys_PgwrapperHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Data.FmtBcd.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Phys.PGCli.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Phys
{
namespace Pgwrapper
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPgLib;
class DELPHICLASS TPgObject;
class DELPHICLASS TFDPgError;
class DELPHICLASS EPgNativeException;
class DELPHICLASS TPgEnv;
class DELPHICLASS TPgMember;
class DELPHICLASS TPgType;
class DELPHICLASS TPgTypesManager;
class DELPHICLASS TPgConnection;
class DELPHICLASS TPgVariable;
class DELPHICLASS TPgVariables;
class DELPHICLASS TPgParam;
class DELPHICLASS TPgParams;
class DELPHICLASS TPgField;
class DELPHICLASS TPgFields;
class DELPHICLASS TPgStatement;
class DELPHICLASS TPgLargeObject;
class DELPHICLASS TPgLargeObjectStream;
//-- type declarations -------------------------------------------------------
_DECLARE_METACLASS(System::TMetaClass, TPgVariableClass);

enum DECLSPEC_DENUM TPgBrand : unsigned int { pbRegular, pbEnterprise };

class PASCALIMPLEMENTATION TPgLib : public Firedac::Stan::Util::TFDLibrary
{
	typedef Firedac::Stan::Util::TFDLibrary inherited;
	
private:
	TPgBrand FBrand;
	
protected:
	virtual void __fastcall LoadEntries();
	
public:
	Firedac::Phys::Pgcli::TPQconnectdb FPQconnectdb;
	Firedac::Phys::Pgcli::TPQfinish FPQfinish;
	Firedac::Phys::Pgcli::TPQreset FPQreset;
	Firedac::Phys::Pgcli::TPQserverVersion FPQserverVersion;
	Firedac::Phys::Pgcli::TPQprotocolVersion FPQprotocolVersion;
	Firedac::Phys::Pgcli::TPQstatus FPQstatus;
	Firedac::Phys::Pgcli::TPQerrorMessage FPQerrorMessage;
	Firedac::Phys::Pgcli::TPQbackendPID FPQbackendPID;
	Firedac::Phys::Pgcli::TPQparameterStatus FPQparameterStatus;
	Firedac::Phys::Pgcli::TPQtransactionStatus FPQtransactionStatus;
	Firedac::Phys::Pgcli::TPQsetClientEncoding FPQsetClientEncoding;
	Firedac::Phys::Pgcli::TPQclientEncoding FPQclientEncoding;
	Firedac::Phys::Pgcli::Tpg_encoding_to_char Fpg_encoding_to_char;
	Firedac::Phys::Pgcli::TPQexec FPQexec;
	Firedac::Phys::Pgcli::TPQexecParams FPQexecParams;
	Firedac::Phys::Pgcli::TPQprepare FPQprepare;
	Firedac::Phys::Pgcli::TPQexecPrepared FPQexecPrepared;
	Firedac::Phys::Pgcli::TPQresultStatus FPQresultStatus;
	Firedac::Phys::Pgcli::TPQresultErrorMessage FPQresultErrorMessage;
	Firedac::Phys::Pgcli::TPQresultErrorField FPQresultErrorField;
	Firedac::Phys::Pgcli::TPQresultStatus FPQclear;
	Firedac::Phys::Pgcli::TPQntuples FPQntuples;
	Firedac::Phys::Pgcli::TPQnfields FPQnfields;
	Firedac::Phys::Pgcli::TPQbinaryTuples FPQbinaryTuples;
	Firedac::Phys::Pgcli::TPQfname FPQfname;
	Firedac::Phys::Pgcli::TPQftable FPQftable;
	Firedac::Phys::Pgcli::TPQftablecol FPQftablecol;
	Firedac::Phys::Pgcli::TPQfformat FPQfformat;
	Firedac::Phys::Pgcli::TPQftype FPQftype;
	Firedac::Phys::Pgcli::TPQfmod FPQfmod;
	Firedac::Phys::Pgcli::TPQfsize FPQfsize;
	Firedac::Phys::Pgcli::TPQgetvalue FPQgetvalue;
	Firedac::Phys::Pgcli::TPQgetisnull FPQgetisnull;
	Firedac::Phys::Pgcli::TPQgetlength FPQgetlength;
	Firedac::Phys::Pgcli::TPQnparams FPQnparams;
	Firedac::Phys::Pgcli::TPQparamtype FPQparamtype;
	Firedac::Phys::Pgcli::TPQcmdStatus FPQcmdStatus;
	Firedac::Phys::Pgcli::TPQoidValue FPQoidValue;
	Firedac::Phys::Pgcli::TPQoidStatus FPQoidStatus;
	Firedac::Phys::Pgcli::TPQcmdTuples FPQcmdTuples;
	Firedac::Phys::Pgcli::TPQsetNoticeReceiver FPQsetNoticeReceiver;
	Firedac::Phys::Pgcli::TPQgetCancel FPQgetCancel;
	Firedac::Phys::Pgcli::TPQfreeCancel FPQfreeCancel;
	Firedac::Phys::Pgcli::TPQcancel FPQcancel;
	Firedac::Phys::Pgcli::TPQputCopyData FPQputCopyData;
	Firedac::Phys::Pgcli::TPQputCopyEnd FPQputCopyEnd;
	Firedac::Phys::Pgcli::TPQgetCopyData FPQgetCopyData;
	Firedac::Phys::Pgcli::Tlo_creat Flo_creat;
	Firedac::Phys::Pgcli::Tlo_open Flo_open;
	Firedac::Phys::Pgcli::Tlo_write Flo_write;
	Firedac::Phys::Pgcli::Tlo_read Flo_read;
	Firedac::Phys::Pgcli::Tlo_lseek Flo_lseek;
	Firedac::Phys::Pgcli::Tlo_tell Flo_tell;
	Firedac::Phys::Pgcli::Tlo_close Flo_close;
	Firedac::Phys::Pgcli::Tlo_unlink Flo_unlink;
	Firedac::Phys::Pgcli::Tlo_truncate Flo_truncate;
	Firedac::Phys::Pgcli::TPQgetResult FPQgetResult;
	Firedac::Phys::Pgcli::TPQnotifies FPQnotifies;
	Firedac::Phys::Pgcli::TPQfreemem FPQfreemem;
	Firedac::Phys::Pgcli::TPQconsumeInput FPQconsumeInput;
	Firedac::Phys::Pgcli::TPQsocket FPQsocket;
	Firedac::Phys::Pgcli::TPQexecBulkPrepared FPQexecBulkPrepared;
	Firedac::Phys::Pgcli::TPQencryptPassword FPQencryptPassword;
	Firedac::Phys::Pgcli::TPQencryptPasswordConn FPQencryptPasswordConn;
	__fastcall TPgLib(System::TObject* AOwningObj);
	HIDESBASE void __fastcall Load(const System::UnicodeString AVendorHome, const System::UnicodeString AVendorLib);
	__property TPgBrand Brand = {read=FBrand, nodefault};
public:
	/* TFDLibrary.Destroy */ inline __fastcall virtual ~TPgLib() { }
	
};


class PASCALIMPLEMENTATION TPgObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPgEnv* FEnv;
	System::TObject* FOwningObj;
	TPgLib* __fastcall GetLib();
	
protected:
	void __fastcall DoError(const System::UnicodeString AMessage, int AStatus);
	
public:
	__fastcall TPgObject(TPgEnv* AEnv, System::TObject* AOwningObj);
	__property TPgEnv* Env = {read=FEnv};
	__property TPgLib* Lib = {read=GetLib};
	__property System::TObject* OwningObj = {read=FOwningObj};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPgObject() { }
	
};


class PASCALIMPLEMENTATION TFDPgError : public Firedac::Stan::Error::TFDDBError
{
	typedef Firedac::Stan::Error::TFDDBError inherited;
	
private:
	System::UnicodeString FSeverity;
	System::UnicodeString FErrorCode;
	System::UnicodeString FDetailedMessage;
	System::UnicodeString FHint;
	int FPosition;
	int FInternalPosition;
	System::UnicodeString FInternalQuery;
	System::UnicodeString FContext;
	System::UnicodeString FSchemaName;
	System::UnicodeString FTableName;
	System::UnicodeString FColumnName;
	System::UnicodeString FTypeName;
	System::UnicodeString FConstraintName;
	System::UnicodeString FSourceFile;
	int FSourceLine;
	System::UnicodeString FSourceFunction;
	
protected:
	virtual void __fastcall Assign(Firedac::Stan::Error::TFDDBError* ASrc);
	virtual void __fastcall LoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall SaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__property System::UnicodeString Severity = {read=FSeverity};
	__property System::UnicodeString ErrorCode = {read=FErrorCode};
	__property System::UnicodeString DetailedMessage = {read=FDetailedMessage};
	__property System::UnicodeString Hint = {read=FHint};
	__property int Position = {read=FPosition, nodefault};
	__property int InternalPosition = {read=FInternalPosition, nodefault};
	__property System::UnicodeString InternalQuery = {read=FInternalQuery};
	__property System::UnicodeString Context = {read=FContext};
	__property System::UnicodeString SchemaName = {read=FSchemaName};
	__property System::UnicodeString TableName = {read=FTableName};
	__property System::UnicodeString ColumnName = {read=FColumnName};
	__property System::UnicodeString TypeName = {read=FTypeName};
	__property System::UnicodeString ConstraintName = {read=FConstraintName};
	__property System::UnicodeString SourceFile = {read=FSourceFile};
	__property int SourceLine = {read=FSourceLine, nodefault};
	__property System::UnicodeString SourceFunction = {read=FSourceFunction};
public:
	/* TFDDBError.Create */ inline __fastcall virtual TFDPgError()/* overload */ : Firedac::Stan::Error::TFDDBError() { }
	/* TFDDBError.Create */ inline __fastcall virtual TFDPgError(int ALevel, int AErrorCode, const System::UnicodeString AMessage, const System::UnicodeString AObjName, Firedac::Stan::Error::TFDCommandExceptionKind AKind, int ACmdOffset, int ARowIndex)/* overload */ : Firedac::Stan::Error::TFDDBError(ALevel, AErrorCode, AMessage, AObjName, AKind, ACmdOffset, ARowIndex) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDPgError() { }
	
};


class PASCALIMPLEMENTATION EPgNativeException : public Firedac::Stan::Error::EFDDBEngineException
{
	typedef Firedac::Stan::Error::EFDDBEngineException inherited;
	
public:
	TFDPgError* operator[](int Index) { return this->Errors[Index]; }
	
private:
	HIDESBASE TFDPgError* __fastcall GetErrors(int AIndex);
	
protected:
	virtual Firedac::Stan::Error::TFDDBErrorClass __fastcall GetErrorClass();
	
public:
	HIDESBASE Firedac::Stan::Error::TFDDBError* __fastcall AppendError(const System::UnicodeString ADetailedMessage)/* overload */;
	HIDESBASE Firedac::Stan::Error::TFDDBError* __fastcall AppendError(const System::UnicodeString ASeverity, const System::UnicodeString AErrorCode, const System::UnicodeString AMessage, const System::UnicodeString ADetailedMessage, const System::UnicodeString AHint, int APosition, int AInternalPosition, const System::UnicodeString AInternalQuery, const System::UnicodeString AContext, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString AColumnName, const System::UnicodeString ATypeName, const System::UnicodeString AConstraintName, const System::UnicodeString ASourceFile, int ASourceLine, const System::UnicodeString ASourceFunction)/* overload */;
	__property TFDPgError* Errors[int Index] = {read=GetErrors/*, default*/};
public:
	/* EFDDBEngineException.Create */ inline __fastcall virtual EPgNativeException()/* overload */ : Firedac::Stan::Error::EFDDBEngineException() { }
	/* EFDDBEngineException.Create */ inline __fastcall EPgNativeException(int AADCode, const System::UnicodeString AMessage)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(AADCode, AMessage) { }
	/* EFDDBEngineException.Destroy */ inline __fastcall virtual ~EPgNativeException() { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EPgNativeException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Firedac::Stan::Error::EFDDBEngineException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPgNativeException(NativeUInt Ident)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPgNativeException(System::PResStringRec ResStringRec)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPgNativeException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPgNativeException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPgNativeException(const System::UnicodeString Msg, int AHelpContext) : Firedac::Stan::Error::EFDDBEngineException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPgNativeException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Firedac::Stan::Error::EFDDBEngineException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPgNativeException(NativeUInt Ident, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPgNativeException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPgNativeException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPgNativeException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDDBEngineException(Ident, Args, Args_High, AHelpContext) { }
	
	/* Hoisted overloads: */
	
protected:
	inline Firedac::Stan::Error::TFDDBError* __fastcall  AppendError(){ return Firedac::Stan::Error::EFDDBEngineException::AppendError(); }
	
public:
	inline Firedac::Stan::Error::TFDDBError* __fastcall  AppendError(int ALevel, int AErrorCode, const System::UnicodeString AMessage, const System::UnicodeString AObjName, Firedac::Stan::Error::TFDCommandExceptionKind AKind, int ACmdOffset, int ARowIndex){ return Firedac::Stan::Error::EFDDBEngineException::AppendError(ALevel, AErrorCode, AMessage, AObjName, AKind, ACmdOffset, ARowIndex); }
	
};


class PASCALIMPLEMENTATION TPgEnv : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPgLib* FLib;
	System::TObject* FOwningObj;
	Firedac::Stan::Intf::_di_IFDMoniClient FMonitor;
	bool FTracing;
	bool __fastcall GetTracing();
	
public:
	__fastcall TPgEnv(TPgLib* ALib, System::TObject* AOwningObj);
	void __fastcall Trace(const System::UnicodeString AMsg, const System::TVarRec *AArgs, const int AArgs_High)/* overload */;
	void __fastcall Trace(Firedac::Stan::Intf::TFDMoniEventKind AKind, Firedac::Stan::Intf::TFDMoniEventStep AStep, const System::UnicodeString AMsg, const System::TVarRec *AArgs, const int AArgs_High)/* overload */;
	__property bool Tracing = {read=FTracing, write=FTracing, nodefault};
	__property Firedac::Stan::Intf::_di_IFDMoniClient Monitor = {read=FMonitor, write=FMonitor};
	__property TPgLib* Lib = {read=FLib};
	__property System::TObject* OwningObj = {read=FOwningObj};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPgEnv() { }
	
};


class PASCALIMPLEMENTATION TPgMember : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FName;
	unsigned FOid;
	TPgType* FRef;
	int FLen;
	int FPrec;
	int FScale;
	Firedac::Stan::Intf::TFDDataAttributes FAttrs;
	
public:
	__fastcall TPgMember();
	__property System::UnicodeString Name = {read=FName};
	__property unsigned TypeOid = {read=FOid, nodefault};
	__property TPgType* TypeRef = {read=FRef};
	__property int Len = {read=FLen, nodefault};
	__property int Prec = {read=FPrec, nodefault};
	__property int Scale = {read=FScale, nodefault};
	__property Firedac::Stan::Intf::TFDDataAttributes Attrs = {read=FAttrs, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPgMember() { }
	
};


enum DECLSPEC_DENUM Firedac_Phys_Pgwrapper__7 : unsigned int { paString, paFixed, paBlob, paOID, paArray, paRecord, paEnum, paRange, paCast, paCustom };

typedef System::Set<Firedac_Phys_Pgwrapper__7, Firedac_Phys_Pgwrapper__7::paString, Firedac_Phys_Pgwrapper__7::paCustom> TPgTypeAttrs;

typedef System::DynamicArray<TPgMember*> TPgMembers;

typedef System::DynamicArray<System::UnicodeString> TPgEnums;

class PASCALIMPLEMENTATION TPgType : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FId;
	System::UnicodeString FName;
	int FFixedLen;
	int FFDSize;
	int FPgSize;
	TPgTypeAttrs FAttrs;
	TPgMembers FMembers;
	Firedac::Stan::Intf::TFDStringList* FEnums;
	bool __fastcall GetIsFlatFixedArray();
	Firedac::Stan::Intf::TFDStringList* __fastcall GetEnums();
	
public:
	__fastcall virtual ~TPgType();
	System::UnicodeString __fastcall DumpType();
	System::UnicodeString __fastcall GetEnumValue(unsigned AOid);
	__property unsigned Id = {read=FId, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property int FixedLen = {read=FFixedLen, nodefault};
	__property int PGSize = {read=FPgSize, nodefault};
	__property int FDSize = {read=FFDSize, nodefault};
	__property TPgTypeAttrs Attrs = {read=FAttrs, nodefault};
	__property TPgMembers Members = {read=FMembers};
	__property bool IsFlatFixedArray = {read=GetIsFlatFixedArray, nodefault};
	__property Firedac::Stan::Intf::TFDStringList* Enums = {read=GetEnums};
public:
	/* TObject.Create */ inline __fastcall TPgType() : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TPgTypesManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPgConnection* FConnection;
	System::Classes::TList* FTypes;
	TPgType* FLastType;
	void __fastcall DescribeError(const System::UnicodeString AId, const System::UnicodeString AReason);
	TPgType* __fastcall AddBase(unsigned AId, const System::UnicodeString AName, int AFixedLen, int APGSize, int AFDSize, TPgTypeAttrs AAttrs);
	TPgType* __fastcall AddArray(unsigned AId, const System::UnicodeString AName, unsigned ABaseOid, int AFixedLen = 0x0);
	int __fastcall FindType(unsigned AId, bool AExact);
	void __fastcall AddType(TPgType* AType);
	TPgType* __fastcall Describe(unsigned AOid);
	void __fastcall Connected();
	TPgType* __fastcall GetTypes(unsigned AOid);
	TPgType* __fastcall GetArrays(unsigned AMemberOid);
	
public:
	__fastcall TPgTypesManager(TPgConnection* AConnection);
	__fastcall virtual ~TPgTypesManager();
	static void __fastcall GetDefaults(int AFormat, unsigned ATypeOid, /* out */ int &ALen, /* out */ int &APrec, /* out */ int &AScale);
	static void __fastcall DecodeModifier(unsigned ATypeOid, int AModifier, /* out */ int &ALen, /* out */ int &APrec, /* out */ int &AScale);
	TPgType* __fastcall TypeByName(const System::UnicodeString AName);
	__property TPgType* Types[unsigned AOid] = {read=GetTypes};
	__property TPgType* Arrays[unsigned AMemberOid] = {read=GetArrays};
};


typedef void __fastcall (__closure *TPgConnectionNotifyEvent)(const System::UnicodeString AName, int AProcID, const System::UnicodeString AParameter);

class PASCALIMPLEMENTATION TPgConnection : public TPgObject
{
	typedef TPgObject inherited;
	
private:
	bool FOwnHandle;
	Firedac::Stan::Util::TFDBuffer* FBuffer;
	Firedac::Stan::Util::TFDEncoder* FEncoder;
	EPgNativeException* FNotices;
	int *FPStmtIDCounter;
	Firedac::Phys::Pgcli::TPQnoticeReceiver FDefaultNoticeReceiver;
	TPgTypesManager* FTypesManager;
	int FIntegerDateTimes;
	unsigned __int64 FServerVersion;
	unsigned FLastInsertOid;
	TPgConnectionNotifyEvent FOnNotify;
	int FTimeZoneOffset;
	unsigned FUnknownFormat;
	void __fastcall Check();
	void __fastcall ReadResultError(Firedac::Phys::Pgcli::PPGresult AHandle, EPgNativeException* AException);
	void __fastcall CheckResult(Firedac::Phys::Pgcli::PPGresult AHandle, System::TObject* AOwningObj);
	void __fastcall ClearNotices();
	void __fastcall DoNoticeReceive(Firedac::Phys::Pgcli::PPGresult AHandle);
	System::UnicodeString __fastcall GetParameterStatus(const System::UnicodeString AParam);
	int __fastcall GetTransactionStatus();
	unsigned __int64 __fastcall GetServerVersion();
	System::UnicodeString __fastcall GetSERVER_VERSION();
	System::UnicodeString __fastcall GetClientEncoding();
	void __fastcall SetClientEncoding(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GenerateName();
	System::UnicodeString __fastcall GetSERVER_ENCODING();
	System::UnicodeString __fastcall GetCLIENT_ENCODING();
	System::UnicodeString __fastcall GetIS_SUPERUSER();
	System::UnicodeString __fastcall GetSESSION_AUTHORIZATION();
	System::UnicodeString __fastcall GetDATESTYLE();
	System::UnicodeString __fastcall GetINTEGER_DATETIMES();
	System::UnicodeString __fastcall GetTIMEZONE();
	System::UnicodeString __fastcall GetSTANDARD_CONFORMING_STRINGS();
	bool __fastcall GetIntegerDateTimes();
	
public:
	void *FHandle;
	int FStmtIDCounter;
	__fastcall TPgConnection(TPgEnv* AEnv, System::TObject* AOwningObj);
	__fastcall TPgConnection(TPgEnv* AEnv, void * AHandle, System::PInteger APStmtIDCounter, System::TObject* AOwningObj);
	__fastcall virtual ~TPgConnection();
	void __fastcall Connect(const System::UnicodeString AConnStr);
	void __fastcall Disconnect();
	void __fastcall ExecuteQuery(System::UnicodeString ASQL);
	void __fastcall Abort();
	bool __fastcall CheckForInput();
	bool __fastcall ReadNotifies(/* out */ System::UnicodeString &AName, /* out */ int &AProcID, /* out */ System::UnicodeString &AParameter);
	System::UnicodeString __fastcall EncryptPassword(const System::UnicodeString APassword, const System::UnicodeString AUser, const System::UnicodeString AAlgorythm);
	__property TPgTypesManager* TypesManager = {read=FTypesManager};
	__property Firedac::Stan::Util::TFDEncoder* Encoder = {read=FEncoder};
	__property EPgNativeException* Notices = {read=FNotices};
	__property unsigned LastInsertOid = {read=FLastInsertOid, nodefault};
	__property unsigned __int64 ServerVersion = {read=GetServerVersion};
	__property int TransactionStatus = {read=GetTransactionStatus, nodefault};
	__property bool IntegerDateTimes = {read=GetIntegerDateTimes, nodefault};
	__property System::UnicodeString SERVER_VERSION = {read=GetSERVER_VERSION};
	__property System::UnicodeString SERVER_ENCODING = {read=GetSERVER_ENCODING};
	__property System::UnicodeString CLIENT_ENCODING = {read=GetCLIENT_ENCODING};
	__property System::UnicodeString IS_SUPERUSER = {read=GetIS_SUPERUSER};
	__property System::UnicodeString SESSION_AUTHORIZATION = {read=GetSESSION_AUTHORIZATION};
	__property System::UnicodeString DATESTYLE = {read=GetDATESTYLE};
	__property System::UnicodeString INTEGER_DATETIMES = {read=GetINTEGER_DATETIMES};
	__property System::UnicodeString TIMEZONE = {read=GetTIMEZONE};
	__property System::UnicodeString STANDARD_CONFORMING_STRINGS = {read=GetSTANDARD_CONFORMING_STRINGS};
	__property System::UnicodeString ClientEncoding = {read=GetClientEncoding, write=SetClientEncoding};
	__property int TimeZoneOffset = {read=FTimeZoneOffset, write=FTimeZoneOffset, default=0};
	__property unsigned UnknownFormat = {read=FUnknownFormat, write=FUnknownFormat, default=0};
	__property TPgConnectionNotifyEvent OnNotify = {read=FOnNotify, write=FOnNotify};
};


class PASCALIMPLEMENTATION TPgVariable : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPgVariables* FOwner;
	TPgStatement* FStatement;
	int FIndex;
	unsigned FTypeOid;
	TPgType* FTypeRef;
	int FFormat;
	Firedac::Stan::Intf::TFDEncoding FEncoding;
	System::UnicodeString FDumpLabel;
	bool __fastcall Pg2FDData(TPgType* AType, void * ASource, int ASourceLen, void * &ADest, unsigned long &ADestLen, bool AByRef);
	bool __fastcall FD2PgData(TPgType* AType, void * ASource, int ASourceLen, void * &ADest, unsigned long &ADestLen, int &ADestFormat, bool AByRef);
	void __fastcall CheckArrayBounds(int AValue, int ALBound, int AHBound);
	System::UnicodeString __fastcall DumpSQLDataType();
	System::UnicodeString __fastcall DumpFDValue(void * ABuffer, int ALen);
	
protected:
	virtual void __fastcall SetTypeOid(unsigned AValue);
	virtual void __fastcall AllocBuffer(unsigned long ASize);
	virtual System::UnicodeString __fastcall GetDumpLabel();
	
public:
	__fastcall virtual TPgVariable(TPgVariables* AOwner);
	__property TPgStatement* Statement = {read=FStatement};
	__property TPgVariables* Owner = {read=FOwner};
	__property TPgType* TypeRef = {read=FTypeRef};
	__property unsigned TypeOid = {read=FTypeOid, write=SetTypeOid, nodefault};
	__property System::UnicodeString DumpLabel = {read=GetDumpLabel, write=FDumpLabel};
	__property Firedac::Stan::Intf::TFDEncoding Encoding = {read=FEncoding, write=FEncoding, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPgVariable() { }
	
};


class PASCALIMPLEMENTATION TPgVariables : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FList;
	TPgStatement* FStatement;
	TPgVariable* __fastcall Add();
	int __fastcall GetCount();
	
protected:
	virtual TPgVariableClass __fastcall GetVariableClass() = 0 ;
	virtual void __fastcall SetCount(int AValue);
	
public:
	__fastcall TPgVariables(TPgStatement* AOwner)/* overload */;
	__fastcall virtual ~TPgVariables();
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property TPgStatement* Statement = {read=FStatement};
};


class PASCALIMPLEMENTATION TPgParam : public TPgVariable
{
	typedef TPgVariable inherited;
	
private:
	unsigned long FSize;
	unsigned long FBufferSize;
	unsigned long FDataSize;
	unsigned long FValueSize;
	void *FBuffer;
	void *FValueRef;
	bool FIsNull;
	int FHBound;
	int FLBound;
	int FArrayIndex;
	void __fastcall SetArrayIndex(int AValue);
	void __fastcall FreeBuffer();
	void __fastcall CheckBuffer();
	void __fastcall PackBuffer();
	System::UnicodeString __fastcall DumpValue();
	
protected:
	virtual void __fastcall SetTypeOid(unsigned AValue);
	virtual void __fastcall AllocBuffer(unsigned long ASize);
	
public:
	__fastcall virtual TPgParam(TPgVariables* AOwner);
	__fastcall virtual ~TPgParam();
	void __fastcall SetData(void * ApData, unsigned long ALen, bool AByRef = false);
	void __fastcall SetArrayBounds(int ALBound, int AHBound);
	__property unsigned long Size = {read=FSize, write=FSize};
	__property int ArrayIndex = {read=FArrayIndex, write=SetArrayIndex, nodefault};
};


class PASCALIMPLEMENTATION TPgParams : public TPgVariables
{
	typedef TPgVariables inherited;
	
public:
	TPgParam* operator[](int Index) { return this->Items[Index]; }
	
private:
	unsigned *FValueTypes;
	void * *FValueRefs;
	int *FValueLengths;
	int *FValueFormats;
	TPgParam* __fastcall GetItems(int AIndex);
	
protected:
	virtual TPgVariableClass __fastcall GetVariableClass();
	virtual void __fastcall SetCount(int AValue);
	void * __fastcall GetValueTypes();
	void * __fastcall GetValueRefs();
	void * __fastcall GetValueLengths();
	void * __fastcall GetValueFormats();
	
public:
	__property TPgParam* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TPgVariables.Create */ inline __fastcall TPgParams(TPgStatement* AOwner)/* overload */ : TPgVariables(AOwner) { }
	/* TPgVariables.Destroy */ inline __fastcall virtual ~TPgParams() { }
	
};


class PASCALIMPLEMENTATION TPgField : public TPgVariable
{
	typedef TPgVariable inherited;
	
private:
	System::UnicodeString FName;
	unsigned FTableOid;
	int FTableCol;
	int FLen;
	int FPrec;
	int FScale;
	int FArrayIndex;
	TPgFields* FFields;
	bool __fastcall GetPgData(/* out */ void * &APgData, /* out */ int &APgDataLen);
	void __fastcall GetArrayInfo(void * ApData, /* out */ int &ALBound, /* out */ int &AHBound, /* out */ bool &AClosed, /* out */ void * &ApFirstElem);
	void __fastcall SetArrayIndex(const int AValue);
	TPgField* __fastcall GetParentField();
	void __fastcall SetDefaults();
	
protected:
	virtual void __fastcall SetTypeOid(unsigned AValue);
	virtual System::UnicodeString __fastcall GetDumpLabel();
	System::UnicodeString __fastcall DumpValue();
	
public:
	__fastcall virtual TPgField(TPgVariables* AOwner);
	__fastcall virtual ~TPgField();
	bool __fastcall GetData(void * &ApData, unsigned long &ALen, bool AByRef)/* overload */;
	bool __fastcall GetData(void * ApData, unsigned long &ALen)/* overload */;
	bool __fastcall GetData(void * ApData)/* overload */;
	System::UnicodeString __fastcall GetAsString();
	bool __fastcall GetArrayBounds(/* out */ int &ALBound, /* out */ int &AHBound, /* out */ bool &AClosed);
	__property System::UnicodeString Name = {read=FName};
	__property int TableCol = {read=FTableCol, nodefault};
	__property unsigned TableOid = {read=FTableOid, nodefault};
	__property int Len = {read=FLen, nodefault};
	__property int Prec = {read=FPrec, nodefault};
	__property int Scale = {read=FScale, nodefault};
	__property TPgFields* Fields = {read=FFields};
	__property TPgField* ParentField = {read=GetParentField};
	__property int ArrayIndex = {read=FArrayIndex, write=SetArrayIndex, nodefault};
};


class PASCALIMPLEMENTATION TPgFields : public TPgVariables
{
	typedef TPgVariables inherited;
	
public:
	TPgField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TPgField* FParentField;
	void *FPgData;
	int FPgDataLen;
	TPgField* __fastcall GetItems(int AIndex);
	
protected:
	virtual TPgVariableClass __fastcall GetVariableClass();
	
public:
	__fastcall TPgFields(TPgField* AOwner)/* overload */;
	__property TPgField* Items[int Index] = {read=GetItems/*, default*/};
	__property void * PgData = {read=FPgData};
	__property int PgDataLen = {read=FPgDataLen, nodefault};
	__property TPgField* ParentField = {read=FParentField};
public:
	/* TPgVariables.Create */ inline __fastcall TPgFields(TPgStatement* AOwner)/* overload */ : TPgVariables(AOwner) { }
	/* TPgVariables.Destroy */ inline __fastcall virtual ~TPgFields() { }
	
};


class PASCALIMPLEMENTATION TPgStatement : public TPgObject
{
	typedef TPgObject inherited;
	
private:
	TPgConnection* FConnection;
	System::UnicodeString FCursorName;
	System::UnicodeString FStmtName;
	System::UnicodeString FRowsetStmtName;
	TPgParams* FParams;
	TPgFields* FFields;
	__int64 FRowsAffected;
	unsigned FLastInsertOid;
	System::UnicodeString FSQLStmtType;
	__int64 FRowsSelected;
	__int64 FRowsetOffset;
	__int64 FCurrentRow;
	bool FEOF;
	bool FClosed;
	bool FLastRowset;
	bool FStrsTrim;
	bool FStrsEmpty2Null;
	bool FStrsTrim2Len;
	System::Types::TEndian FGUIDEndian;
	int FRowsetSize;
	bool FWithHold;
	int FResultFormat;
	void __fastcall Check(Firedac::Phys::Pgcli::PPGresult AHandle);
	void __fastcall GetResultInfo();
	void __fastcall GetNextRowset();
	void __fastcall Reset();
	void __fastcall Clear();
	System::UnicodeString __fastcall InternalPrepare(const System::UnicodeString ASQL, bool AUseParams);
	void __fastcall InternalExecute(const System::UnicodeString AStmtName, int AnParams, void * AParamValues, System::PInteger AParamLengths, System::PInteger AParamFormats, int AResultFormat)/* overload */;
	void __fastcall InternalExecute(int AResultFormat)/* overload */;
	void __fastcall InternalUnprepare(System::UnicodeString &AStmtName);
	void __fastcall InternalExecuteDirect(const System::UnicodeString ASQL, int AResultFormat);
	void __fastcall DumpInVars();
	void __fastcall DumpOutVars();
	void __fastcall GetStmtName(/* out */ System::UnicodeString &AName, /* out */ System::UnicodeString &AValue);
	
public:
	Firedac::Phys::Pgcli::pg_result *FHandle;
	__fastcall TPgStatement(TPgConnection* AConnection, System::TObject* AOwningObj);
	__fastcall virtual ~TPgStatement();
	void __fastcall PrepareSQL(const System::UnicodeString ASQL);
	void __fastcall PrepareCursor(const System::UnicodeString ACursorName);
	void __fastcall DescribeFields();
	void __fastcall Execute();
	void __fastcall ExecuteDirect(const System::UnicodeString ASQL);
	bool __fastcall Fetch();
	void __fastcall Unprepare();
	void __fastcall Close();
	__property TPgConnection* Connection = {read=FConnection};
	__property TPgParams* Params = {read=FParams};
	__property TPgFields* Fields = {read=FFields};
	__property System::UnicodeString SQLStmtType = {read=FSQLStmtType};
	__property __int64 RowsAffected = {read=FRowsAffected};
	__property __int64 RowsSelected = {read=FRowsSelected};
	__property unsigned LastInsertOid = {read=FLastInsertOid, nodefault};
	__property bool Eof = {read=FEOF, nodefault};
	__property bool Closed = {read=FClosed, nodefault};
	__property int ResultFormat = {read=FResultFormat, nodefault};
	__property __int64 CurrentRow = {read=FCurrentRow, write=FCurrentRow};
	__property bool StrsTrim = {read=FStrsTrim, write=FStrsTrim, nodefault};
	__property bool StrsEmpty2Null = {read=FStrsEmpty2Null, write=FStrsEmpty2Null, nodefault};
	__property bool StrsTrim2Len = {read=FStrsTrim2Len, write=FStrsTrim2Len, nodefault};
	__property System::Types::TEndian GUIDEndian = {read=FGUIDEndian, write=FGUIDEndian, nodefault};
	__property int RowsetSize = {read=FRowsetSize, write=FRowsetSize, nodefault};
	__property bool WithHold = {read=FWithHold, write=FWithHold, nodefault};
};


class PASCALIMPLEMENTATION TPgLargeObject : public TPgObject
{
	typedef TPgObject inherited;
	
private:
	TPgConnection* FConnection;
	int FPosition;
	bool FIsOpen;
	Firedac::Stan::Intf::TFDStreamMode FMode;
	int __fastcall GetLen();
	void __fastcall SetLen(const int AValue);
	void __fastcall Error(const System::UnicodeString AOperation, int AStatus);
	void __fastcall CheckReadWrite();
	int __fastcall Mode2PGMode();
	
public:
	unsigned FObjOid;
	int FObjHandle;
	__fastcall TPgLargeObject(TPgConnection* AConnection, Firedac::Stan::Intf::TFDStreamMode AMode, System::TObject* AOwningObj)/* overload */;
	__fastcall TPgLargeObject(TPgConnection* AConnection, Firedac::Stan::Intf::TFDStreamMode AMode, System::TObject* AOwningObj, unsigned AObjOid)/* overload */;
	__fastcall virtual ~TPgLargeObject();
	void __fastcall CreateObj();
	void __fastcall Open();
	void __fastcall Close(bool AIgnoreErrors);
	void __fastcall UnLink();
	int __fastcall Seek(int AOffset, System::Word ASeekOrigin);
	int __fastcall Read(System::PByte ABuff, int ABuffLen);
	int __fastcall Write(System::PByte ABuff, int ABuffLen);
	__property bool IsOpen = {read=FIsOpen, nodefault};
	__property Firedac::Stan::Intf::TFDStreamMode Mode = {read=FMode, nodefault};
	__property TPgConnection* Connection = {read=FConnection};
	__property int Len = {read=GetLen, write=SetLen, nodefault};
};


class PASCALIMPLEMENTATION TPgLargeObjectStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	TPgLargeObject* FLargeObject;
	
protected:
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	
public:
	__fastcall TPgLargeObjectStream(TPgLargeObject* ALargeObject);
	__fastcall virtual ~TPgLargeObjectStream();
	virtual long __fastcall Read(void *Buffer, long Count)/* overload */;
	virtual long __fastcall Write(const void *Buffer, long Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property TPgLargeObject* LargeObject = {read=FLargeObject};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize _DEPRECATED_ATTRIBUTE0 (long NewSize){ System::Classes::TStream::SetSize(NewSize); }
	
public:
	inline long __fastcall  Read(System::DynamicArray<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline long __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, long Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline long __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline long __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, long Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline long __fastcall  Seek(long Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall j2date(const __int64 AValue, /* out */ System::Word &AYear, /* out */ System::Word &AMonth, /* out */ System::Word &ADay);
extern DELPHI_PACKAGE void __fastcall dtInt2time(__int64 AValue, /* out */ System::Word &AHour, /* out */ System::Word &AMin, /* out */ System::Word &ASec, /* out */ unsigned &AFsec);
extern DELPHI_PACKAGE void __fastcall dtDbl2time(double AValue, /* out */ System::Word &AHour, /* out */ System::Word &AMin, /* out */ System::Word &ASec, /* out */ unsigned &AFsec);
extern DELPHI_PACKAGE __int64 __fastcall date2j(System::Word AYear, System::Word AMonth, System::Word ADay);
extern DELPHI_PACKAGE __int64 __fastcall time2IntT(const System::Word AHour, const System::Word AMin, const System::Word ASec, const unsigned AFsec);
extern DELPHI_PACKAGE double __fastcall time2DblT(const System::Word AHour, const System::Word AMin, const System::Word ASec, const unsigned AFsec);
extern DELPHI_PACKAGE void __fastcall GetPgNumeric(void * ASource, /* out */ Data::Fmtbcd::TBcd &ADest);
extern DELPHI_PACKAGE void __fastcall GetPgMoney(void * ASource, int ASourceLen, /* out */ System::Currency &ADest);
extern DELPHI_PACKAGE void __fastcall SetPgNumeric(const Data::Fmtbcd::TBcd &ASource, void * ADest, /* out */ unsigned long &ADestLen);
extern DELPHI_PACKAGE void __fastcall SetPgMoney(const System::Currency ASource, void * ADest, unsigned long ADestLen);
}	/* namespace Pgwrapper */
}	/* namespace Phys */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS_PGWRAPPER)
using namespace Firedac::Phys::Pgwrapper;
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
#endif	// Firedac_Phys_PgwrapperHPP
