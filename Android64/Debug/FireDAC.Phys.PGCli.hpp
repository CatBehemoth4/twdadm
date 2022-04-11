// CodeGear C++Builder
// Copyright (c) 1995, 2021 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Phys.PGCli.pas' rev: 35.00 (MacOS)

#ifndef Firedac_Phys_PgcliHPP
#define Firedac_Phys_PgcliHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <FireDAC.Stan.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Phys
{
namespace Pgcli
{
//-- forward type declarations -----------------------------------------------
struct pgresAttValue;
struct pgresAttValueEDB;
struct pg_result;
struct PGnotify;
struct PQprintOpt;
struct PQConninfoOptions;
struct PQArgBlock;
struct PGresAttDesc;
//-- type declarations -------------------------------------------------------
typedef unsigned Oid;

typedef unsigned *POid;

typedef void * PGConn;

typedef void * PPGConn;

struct DECLSPEC_DRECORD pgresAttValue
{
public:
	int len;
	char *value;
};


struct DECLSPEC_DRECORD pgresAttValueEDB
{
public:
	int len;
	char *value;
	void *refcurRes;
};


typedef pgresAttValue *PPGresAttValue;

typedef PPGresAttValue *PPPGresAttValue;

struct DECLSPEC_DRECORD pg_result
{
public:
	int ntups;
	int numAttributes;
	void *attDescs;
	PPGresAttValue *tuples;
};


typedef pg_result PGresult;

typedef pg_result *PPGresult;

typedef void * PGcancel;

typedef void * PPGcancel;

typedef PGnotify *PPGnotify;

struct DECLSPEC_DRECORD PGnotify
{
public:
	char *relname;
	int be_pid;
	char *extra;
	PGnotify *next;
};


typedef void __cdecl (*TPQnoticeReceiver)(void * arg, PPGresult res);

typedef void __cdecl (*TPQnoticeProcessor)(void * arg, char * msg);

typedef System::Byte pqbool;

struct DECLSPEC_DRECORD PQprintOpt
{
public:
	System::Byte header;
	System::Byte align;
	System::Byte standard;
	System::Byte html3;
	System::Byte expanded;
	System::Byte pager;
	char *fieldSep;
	char *tableOpt;
	char *caption;
	System::PByte *fieldName;
};


typedef PQprintOpt *PPQprintOpt;

struct DECLSPEC_DRECORD PQConninfoOptions
{
public:
	char *keyword;
	char *envvar;
	char *compiled;
	char *val;
	char *lbl;
	char *dispchar;
	int dispsize;
};


typedef PQConninfoOptions *PPQconninfoOption;

struct DECLSPEC_DRECORD PQArgBlock
{
public:
	int len;
	int isint;
	
public:
	union
	{
		struct 
		{
			int _integer;
		};
		struct 
		{
			int *ptr;
		};
		
	};
};


struct DECLSPEC_DRECORD PGresAttDesc
{
public:
	char *name;
	unsigned tableid;
	int columnid;
	int format;
	unsigned typid;
	int typlen;
	int atttypmod;
};


typedef System::StaticArray<System::Byte, 6> Tid;

typedef Tid *PTid;

typedef void * __cdecl (*TPQconnectdb)(char * ConnInfo);

typedef PPQconninfoOption __cdecl (*TPQconndefaults)(void);

typedef void __cdecl (*TPQfinish)(void * conn);

typedef void __cdecl (*TPQreset)(void * conn);

typedef char * __cdecl (*TPQdb)(void * conn);

typedef char * __cdecl (*TPQuser)(void * conn);

typedef char * __cdecl (*TPQpass)(void * conn);

typedef char * __cdecl (*TPQhost)(void * conn);

typedef char * __cdecl (*TPQport)(void * conn);

typedef char * __cdecl (*TPQtty)(void * conn);

typedef char * __cdecl (*TPQoptions)(void * conn);

typedef int __cdecl (*TPQstatus)(void * conn);

typedef char * __cdecl (*TPQparameterStatus)(void * conn, char * ParamName);

typedef int __cdecl (*TPQtransactionStatus)(void * conn);

typedef int __cdecl (*TPQserverVersion)(void * conn);

typedef int __cdecl (*TPQprotocolVersion)(void * conn);

typedef int __cdecl (*TPQsetClientEncoding)(void * conn, char * encoding);

typedef int __cdecl (*TPQclientEncoding)(void * conn);

typedef char * __cdecl (*Tpg_encoding_to_char)(int encoding_id);

typedef System::PByte __cdecl (*TPQerrorMessage)(void * conn);

typedef int __cdecl (*TPQbackendPID)(void * conn);

typedef PPGresult __cdecl (*TPQexec)(void * conn, System::PByte command);

typedef PPGresult __cdecl (*TPQexecParams)(void * conn, System::PByte command, int nParams, System::PInteger paramTypes, void * ParamValues, System::PInteger paramLengths, System::PInteger paramFormats, int resultFormat);

typedef PPGresult __cdecl (*TPQprepare)(void * conn, char * stmtName, System::PByte query, int nParams, POid ParamTypes);

typedef PPGresult __cdecl (*TPQexecPrepared)(void * conn, char * stmtName, int nParams, void * paramValues, System::PInteger paramLengths, System::PInteger paramFormats, int resultFormat);

typedef PPGresult __cdecl (*TPQdescribePrepared)(void * conn, char * stmtName);

typedef PPGresult __cdecl (*TPQdescribePortal)(void * conn, char * portalName);

typedef int __cdecl (*TPQresultStatus)(PPGresult res);

typedef System::PByte __cdecl (*TPQresultErrorMessage)(PPGresult res);

typedef System::PByte __cdecl (*TPQresultErrorField)(PPGresult res, int fieldcode);

typedef void __cdecl (*TPQclear)(PPGresult res);

typedef PPGresult __cdecl (*TPQmakeEmptyPGresult)(void * conn, int status);

typedef int __cdecl (*TPQntuples)(PPGresult res);

typedef int __cdecl (*TPQnfields)(PPGresult res);

typedef System::PByte __cdecl (*TPQfname)(PPGresult res, int field_num);

typedef int __cdecl (*TPQfnumber)(PPGresult res, System::PByte field_name);

typedef unsigned __cdecl (*TPQftable)(PPGresult res, int column_number);

typedef int __cdecl (*TPQftablecol)(PPGresult res, int column_number);

typedef int __cdecl (*TPQfformat)(PPGresult res, int column_number);

typedef unsigned __cdecl (*TPQftype)(PPGresult res, int field_num);

typedef int __cdecl (*TPQfmod)(PPGresult res, int field_num);

typedef int __cdecl (*TPQfsize)(PPGresult res, int field_num);

typedef int __cdecl (*TPQbinaryTuples)(PPGresult res);

typedef System::PByte __cdecl (*TPQgetvalue)(PPGresult res, int row_number, int column_number);

typedef int __cdecl (*TPQgetisnull)(PPGresult res, int tup_num, int field_num);

typedef int __cdecl (*TPQgetlength)(PPGresult res, int tup_num, int field_num);

typedef int __cdecl (*TPQnparams)(PPGresult res);

typedef unsigned __cdecl (*TPQparamtype)(PPGresult res, int param_number);

typedef char * __cdecl (*TPQcmdStatus)(PPGresult res);

typedef unsigned __cdecl (*TPQoidValue)(PPGresult res);

typedef char * __cdecl (*TPQoidStatus)(PPGresult res);

typedef char * __cdecl (*TPQcmdTuples)(PPGresult res);

typedef TPQnoticeReceiver __cdecl (*TPQsetNoticeReceiver)(void * conn, TPQnoticeReceiver proc, void * arg);

typedef TPQnoticeProcessor __cdecl (*TPQsetNoticeProcessor)(void * conn, TPQnoticeProcessor proc, void * arg);

typedef void * __cdecl (*TPQgetCancel)(void * conn);

typedef void __cdecl (*TPQfreeCancel)(void * cancel);

typedef int __cdecl (*TPQcancel)(void * cancel, char * errbuf, int errbufsize);

typedef unsigned __cdecl (*Tlo_creat)(void * conn, int mode);

typedef int __cdecl (*Tlo_open)(void * conn, unsigned objoid, int mode);

typedef int __cdecl (*Tlo_write)(void * conn, int fd, void * buf, NativeUInt len);

typedef int __cdecl (*Tlo_read)(void * conn, int fd, void * buf, NativeUInt len);

typedef int __cdecl (*Tlo_lseek)(void * conn, int fd, int offset, int whence);

typedef int __cdecl (*Tlo_tell)(void * conn, int fd);

typedef int __cdecl (*Tlo_close)(void * conn, int fd);

typedef int __cdecl (*Tlo_unlink)(void * conn, unsigned objoid);

typedef int __cdecl (*Tlo_truncate)(void * conn, int fd, NativeUInt len);

typedef PPGresult __cdecl (*TPQgetResult)(void * conn);

typedef int __cdecl (*TPQputCopyData)(void * conn, void * buffer, int nbytes);

typedef int __cdecl (*TPQputCopyEnd)(void * conn, void * errormsg);

typedef int __cdecl (*TPQgetCopyData)(void * conn, void * &buffer, int async);

typedef PPGnotify __cdecl (*TPQnotifies)(void * conn);

typedef void __cdecl (*TPQfreemem)(void * ptr);

typedef int __cdecl (*TPQconsumeInput)(void * conn);

typedef int __cdecl (*TPQsocket)(void * conn);

typedef int __cdecl (*TQsendBulkStart)(void * conn, char * stmtName, unsigned nCols, System::PInteger paramFormats);

typedef int __cdecl (*TPQsendBulk)(void * conn, unsigned nRows, System::PPointer paramValues, System::PInteger paramLengths);

typedef int __fastcall (*TPQsendBulkFinish)(void * conn);

typedef PPGresult __cdecl (*TPQBulkStart)(void * conn, char * stmtName, unsigned nCols, System::PInteger paramFormats);

typedef PPGresult __cdecl (*TPQexecBulk)(void * conn, unsigned nRows, System::PPointer paramValues, System::PInteger paramLengths);

typedef PPGresult __cdecl (*TPQBulkFinish)(void * conn);

typedef PPGresult __cdecl (*TPQexecBulkPrepared)(void * conn, char * stmtName, unsigned nCols, unsigned nRows, System::PPointer paramValues, System::PInteger paramLengths, System::PInteger paramFormats);

typedef char * __cdecl (*TPQencryptPassword)(char * passwd, char * user);

typedef char * __cdecl (*TPQencryptPasswordConn)(void * conn, char * passwd, char * user, char * algorithm);

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 InvalidOid = System::Int8(0x0);
static const System::Word PG_DIAG_SEVERITY = System::Word(0x53);
static const System::Word PG_DIAG_SQLSTATE = System::Word(0x43);
static const System::Word PG_DIAG_MESSAGE_PRIMARY = System::Word(0x4d);
static const System::Word PG_DIAG_MESSAGE_DETAIL = System::Word(0x44);
static const System::Word PG_DIAG_MESSAGE_HINT = System::Word(0x48);
static const System::Word PG_DIAG_STATEMENT_POSITION = System::Word(0x50);
static const System::Word PG_DIAG_INTERNAL_POSITION = System::Word(0x70);
static const System::Word PG_DIAG_INTERNAL_QUERY = System::Word(0x71);
static const System::Word PG_DIAG_CONTEXT = System::Word(0x57);
static const System::Word PG_DIAG_SCHEMA_NAME = System::Word(0x73);
static const System::Word PG_DIAG_TABLE_NAME = System::Word(0x74);
static const System::Word PG_DIAG_COLUMN_NAME = System::Word(0x63);
static const System::Word PG_DIAG_DATATYPE_NAME = System::Word(0x64);
static const System::Word PG_DIAG_CONSTRAINT_NAME = System::Word(0x6e);
static const System::Word PG_DIAG_SOURCE_FILE = System::Word(0x46);
static const System::Word PG_DIAG_SOURCE_LINE = System::Word(0x4c);
static const System::Word PG_DIAG_SOURCE_FUNCTION = System::Word(0x52);
static const System::Int8 PG_COPYRES_ATTRS = System::Int8(0x1);
static const System::Int8 PG_COPYRES_TUPLES = System::Int8(0x2);
static const System::Int8 PG_COPYRES_EVENTS = System::Int8(0x4);
static const System::Int8 PG_COPYRES_NOTICEHOOKS = System::Int8(0x8);
static const System::Int8 CONNECTION_OK = System::Int8(0x0);
static const System::Int8 CONNECTION_BAD = System::Int8(0x1);
static const System::Int8 CONNECTION_STARTED = System::Int8(0x2);
static const System::Int8 CONNECTION_MADE = System::Int8(0x3);
static const System::Int8 CONNECTION_AWAITING_RESPONSE = System::Int8(0x4);
static const System::Int8 CONNECTION_AUTH_OK = System::Int8(0x5);
static const System::Int8 CONNECTION_SETENV = System::Int8(0x6);
static const System::Int8 CONNECTION_SSL_STARTUP = System::Int8(0x7);
static const System::Int8 CONNECTION_NEEDED = System::Int8(0x8);
static const System::Int8 PGRES_POLLING_FAILED = System::Int8(0x0);
static const System::Int8 PGRES_POLLING_READING = System::Int8(0x1);
static const System::Int8 PGRES_POLLING_WRITING = System::Int8(0x2);
static const System::Int8 PGRES_POLLING_OK = System::Int8(0x3);
static const System::Int8 PGRES_POLLING_ACTIVE = System::Int8(0x4);
static const System::Int8 PGRES_EMPTY_QUERY = System::Int8(0x0);
static const System::Int8 PGRES_COMMAND_OK = System::Int8(0x1);
static const System::Int8 PGRES_TUPLES_OK = System::Int8(0x2);
static const System::Int8 PGRES_COPY_OUT = System::Int8(0x3);
static const System::Int8 PGRES_COPY_IN = System::Int8(0x4);
static const System::Int8 PGRES_BAD_RESPONSE = System::Int8(0x5);
static const System::Int8 PGRES_NONFATAL_ERROR = System::Int8(0x6);
static const System::Int8 PGRES_FATAL_ERROR = System::Int8(0x7);
static const System::Int8 PGRES_COPY_BOTH = System::Int8(0x8);
static const System::Int8 PGRES_SINGLE_TUPLE = System::Int8(0x9);
static const System::Int8 PQTRANS_IDLE = System::Int8(0x0);
static const System::Int8 PQTRANS_ACTIVE = System::Int8(0x1);
static const System::Int8 PQTRANS_INTRANS = System::Int8(0x2);
static const System::Int8 PQTRANS_INERROR = System::Int8(0x3);
static const System::Int8 PQTRANS_UNKNOWN = System::Int8(0x4);
static const System::Int8 PQERRORS_TERSE = System::Int8(0x0);
static const System::Int8 PQERRORS_DEFAULT = System::Int8(0x1);
static const System::Int8 PQERRORS_VERBOSE = System::Int8(0x2);
static const System::Int8 PQPING_OK = System::Int8(0x0);
static const System::Int8 PQPING_REJECT = System::Int8(0x1);
static const System::Int8 PQPING_NO_RESPONSE = System::Int8(0x2);
static const System::Int8 PQPING_NO_ATTEMPT = System::Int8(0x3);
static const System::Int8 SQL_BOOL = System::Int8(0x10);
static const System::Int8 SQL_BYTEA = System::Int8(0x11);
static const System::Int8 SQL_CHAR = System::Int8(0x12);
static const System::Int8 SQL_NAME = System::Int8(0x13);
static const System::Int8 SQL_INT8 = System::Int8(0x14);
static const System::Int8 SQL_INT2 = System::Int8(0x15);
static const System::Int8 SQL_INT2VECTOR = System::Int8(0x16);
static const System::Int8 SQL_INT4 = System::Int8(0x17);
static const System::Int8 SQL_REGPROC = System::Int8(0x18);
static const System::Int8 SQL_TEXT = System::Int8(0x19);
static const System::Int8 SQL_OID = System::Int8(0x1a);
static const System::Int8 SQL_TID = System::Int8(0x1b);
static const System::Int8 SQL_XID = System::Int8(0x1c);
static const System::Int8 SQL_CID = System::Int8(0x1d);
static const System::Int8 SQL_OIDVECTOR = System::Int8(0x1e);
static const System::Int8 SQL_JSON = System::Int8(0x72);
static const System::Byte SQL_XML = System::Byte(0x8e);
static const System::Byte SQL_NODE_TREE = System::Byte(0xc2);
static const System::Byte SQL_SMGR = System::Byte(0xd2);
static const System::Word SQL_POINT = System::Word(0x258);
static const System::Word SQL_LSEG = System::Word(0x259);
static const System::Word SQL_PATH = System::Word(0x25a);
static const System::Word SQL_BOX = System::Word(0x25b);
static const System::Word SQL_POLYGON = System::Word(0x25c);
static const System::Word SQL_LINE = System::Word(0x274);
static const System::Word SQL_CIDR = System::Word(0x28a);
static const System::Word SQL_FLOAT4 = System::Word(0x2bc);
static const System::Word SQL_FLOAT8 = System::Word(0x2bd);
static const System::Word SQL_ABSTIME = System::Word(0x2be);
static const System::Word SQL_RELTIME = System::Word(0x2bf);
static const System::Word SQL_TINTERVAL = System::Word(0x2c0);
static const System::Word SQL_UNKNOWN = System::Word(0x2c1);
static const System::Word SQL_CIRCLE = System::Word(0x2ce);
static const System::Word SQL_MACADDR8 = System::Word(0x306);
static const System::Word SQL_CASH = System::Word(0x316);
static const System::Word SQL_MACADDR = System::Word(0x33d);
static const System::Word SQL_INET = System::Word(0x365);
static const System::Word SQL_ACLITEM = System::Word(0x409);
static const System::Word SQL_BPCHAR = System::Word(0x412);
static const System::Word SQL_VARCHAR = System::Word(0x413);
static const System::Word SQL_DATE = System::Word(0x43a);
static const System::Word SQL_TIME = System::Word(0x43b);
static const System::Word SQL_TIMESTAMP = System::Word(0x45a);
static const System::Word SQL_TIMESTAMPTZ = System::Word(0x4a0);
static const System::Word SQL_INTERVAL = System::Word(0x4a2);
static const System::Word SQL_TIMETZ = System::Word(0x4f2);
static const System::Word SQL_BIT = System::Word(0x618);
static const System::Word SQL_VARBIT = System::Word(0x61a);
static const System::Word SQL_NUMERIC = System::Word(0x6a4);
static const System::Word SQL_REFCURSOR = System::Word(0x6fe);
static const System::Word SQL_REGPROCEDURE = System::Word(0x89a);
static const System::Word SQL_REGOPER = System::Word(0x89b);
static const System::Word SQL_REGOPERATOR = System::Word(0x89c);
static const System::Word SQL_REGCLASS = System::Word(0x89d);
static const System::Word SQL_REGTYPE = System::Word(0x89e);
static const System::Word SQL_RECORD = System::Word(0x8c9);
static const System::Word SQL_CSTRING = System::Word(0x8e3);
static const System::Word SQL_ANY = System::Word(0x8e4);
static const System::Word SQL_VOID = System::Word(0x8e6);
static const System::Word SQL_UUID = System::Word(0xb86);
static const System::Word SQL_JSONB = System::Word(0xeda);
static const System::Int8 SelfItemPointerAttributeNumber = System::Int8(-1);
static const System::Int8 ObjectIdAttributeNumber = System::Int8(-2);
static const System::Int8 MinTransactionIdAttributeNumber = System::Int8(-3);
static const System::Int8 MinCommandIdAttributeNumber = System::Int8(-4);
static const System::Int8 MaxTransactionIdAttributeNumber = System::Int8(-5);
static const System::Int8 MaxCommandIdAttributeNumber = System::Int8(-6);
static const System::Int8 TableOidAttributeNumber = System::Int8(-7);
static const System::Int8 RANGE_EMPTY = System::Int8(0x1);
static const System::Int8 RANGE_LB_INC = System::Int8(0x2);
static const System::Int8 RANGE_UB_INC = System::Int8(0x4);
static const System::Int8 RANGE_LB_INF = System::Int8(0x8);
static const System::Int8 RANGE_UB_INF = System::Int8(0x10);
static const System::Int8 RANGE_LB_NULL = System::Int8(0x20);
static const System::Int8 RANGE_UB_NULL = System::Int8(0x40);
static const System::Byte RANGE_CONTAIN_EMPTY = System::Byte(0x80);
static const int POSTGRES_EPOCH_JDATE = int(0x256859);
static const System::Int8 NAMEMAXLEN = System::Int8(0x40);
static const System::Int8 VARHDRSZ = System::Int8(0x4);
static const System::Int8 ARRHDRSZ = System::Int8(0x14);
static const System::Int8 JSONB_VER = System::Int8(0x1);
static const System::Int8 NULL_LEN = System::Int8(-1);
static const int INV_WRITE = int(0x20000);
static const int INV_READ = int(0x40000);
}	/* namespace Pgcli */
}	/* namespace Phys */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS_PGCLI)
using namespace Firedac::Phys::Pgcli;
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
#endif	// Firedac_Phys_PgcliHPP
