

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Apr 10 14:51:14 2018
 */
/* Compiler settings for TrueConf_CallX.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ITrueConfCallX,0x0C10C07D,0xA35F,0x495A,0xBC,0x37,0x7E,0xF9,0xFD,0x4D,0x6E,0x66);


MIDL_DEFINE_GUID(IID, LIBID_TrueConf_CallXLib,0xB5D60CBD,0xE7F7,0x4D70,0x95,0x9B,0xBD,0x14,0x06,0x84,0x36,0xA5);


MIDL_DEFINE_GUID(IID, DIID__ITrueConfCallXEvents,0x0018D12A,0x35E1,0x4811,0x85,0xDC,0x19,0x7D,0x54,0xEB,0x32,0x91);


MIDL_DEFINE_GUID(CLSID, CLSID_TrueConfCallX,0x27EF4BA2,0x4500,0x4839,0xB8,0x8A,0xF2,0xF4,0x74,0x4F,0xE5,0x6A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



