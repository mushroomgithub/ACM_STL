/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Sep 10 20:25:24 2014
 */
/* Compiler settings for E:\MFCÁ·Ï°\TestCom1\TestCom1.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


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

const IID IID_IFun = {0xC5E06306,0x1ACF,0x414F,{0xAF,0x62,0xC7,0x8C,0xE0,0x98,0x98,0xE9}};


const IID LIBID_TESTCOM1Lib = {0x77E81041,0x7FB2,0x45BD,{0xB2,0xB7,0x30,0xF9,0x0A,0x2A,0xD8,0x71}};


const CLSID CLSID_Fun = {0xAF8D0082,0x7BF9,0x4038,{0x89,0xED,0xAA,0x79,0x6F,0x0E,0xFE,0xF1}};


#ifdef __cplusplus
}
#endif

