//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetNode.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_AcceptCallback.hpp"
#include "fn_AcceptCallback.hpp"
#include "fn_TCPGetStatus.hpp"
#include "fn_OSSleepThread.hpp"
#include "fn_TCPGetStatus.hpp"
#include "fn_TCPGetStatus.hpp"
#include "fn_UDPGetLocalSocket.hpp"
#include "fn_TCPGetStatus.hpp"
#include "fn_80476C44.hpp"
#include "fn_80475BD8.hpp"
#include "fn_TCPSetTimeout.hpp"
#include "fn_TCPAcceptAsync.hpp"
#include "fn_OSInitMutex.hpp"
#include "fn_OSInitMutex.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_AddBackLog.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_PutNode.hpp"



void fn_SOAccept(PPC::Runtime::GCContext* context)
{
/*8047C8FC 004796FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047C900 00479700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047C904 00479704*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8047C908 00479708*/ PPC::Runtime::ASM::stmw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047C90C 0047970C*/ PPC::Runtime::ASM::addi(context->r25, context->r4, 0x0);
/*8047C910 00479710*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047C914 00479714*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8047C918 00479718*/ PPC::Runtime::ASM::beq(.L_8047C924);
/*8047C91C 0047971C*/ PPC::Runtime::ASM::li(context->r3, -0x27);
/*8047C920 00479720*/ PPC::Runtime::ASM::b(.L_8047CBA8);
RUNTIME_PPC_JUMP_LABEL(.L_8047C924, 0x8047C924) //this is a jump label
/*8047C924 00479724*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8047C928 00479728*/ PPC::Runtime::ASM::beq(.L_8047C940);
/*8047C92C 0047972C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8047C930 00479730*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*8047C934 00479734*/ PPC::Runtime::ASM::bge(.L_8047C940);
/*8047C938 00479738*/ PPC::Runtime::ASM::li(context->r3, -0x1c);
/*8047C93C 0047973C*/ PPC::Runtime::ASM::b(.L_8047CBA8);
RUNTIME_PPC_JUMP_LABEL(.L_8047C940, 0x8047C940) //this is a jump label
/*8047C940 00479740*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*8047C944 00479744*/ PPC::Runtime::ASM::bl(fn_GetNode);
/* 8047C948 00479748  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8047C94C 0047974C*/ PPC::Runtime::ASM::beq(.L_8047C95C);
/*8047C950 00479750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8047C954 00479754*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047C958 00479758*/ PPC::Runtime::ASM::bne(.L_8047C964);
RUNTIME_PPC_JUMP_LABEL(.L_8047C95C, 0x8047C95C) //this is a jump label
/*8047C95C 0047975C*/ PPC::Runtime::ASM::li(context->r3, -0x8);
/*8047C960 00479760*/ PPC::Runtime::ASM::b(.L_8047CBA8);
RUNTIME_PPC_JUMP_LABEL(.L_8047C964, 0x8047C964) //this is a jump label
/*8047C964 00479764*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047C968 00479768*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8047C96C 0047976C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8047C970 00479770*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8047C974 00479774*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8047C978 00479778*/ PPC::Runtime::ASM::beq(.L_8047C98C);
/*8047C97C 0047977C*/ PPC::Runtime::ASM::bge(.L_8047CB90);
/*8047C980 00479780*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8047C984 00479784*/ PPC::Runtime::ASM::beq(.L_8047C994);
/*8047C988 00479788*/ PPC::Runtime::ASM::b(.L_8047CB90);
RUNTIME_PPC_JUMP_LABEL(.L_8047C98C, 0x8047C98C) //this is a jump label
/*8047C98C 0047978C*/ PPC::Runtime::ASM::li(context->r26, -0x3f);
/*8047C990 00479790*/ PPC::Runtime::ASM::b(.L_8047CB94);
RUNTIME_PPC_JUMP_LABEL(.L_8047C994, 0x8047C994) //this is a jump label
/*8047C994 00479794*/ PPC::Runtime::ASM::lis(context->r4, lbl_805BE4B0 @ Get_MemoryOffset_HighBit);
/*8047C998 00479798*/ PPC::Runtime::ASM::lis(context->r3, fn_AcceptCallback @ Get_MemoryOffset_HighBit);
/*8047C99C 0047979C*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x0);
/*8047C9A0 004797A0*/ PPC::Runtime::ASM::addi(context->r23, context->r4, lbl_805BE4B0 @ Get_MemoryOffset_LowBit);
/*8047C9A4 004797A4*/ PPC::Runtime::ASM::addi(context->r24, context->r3, fn_AcceptCallback @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8047C9A8, 0x8047C9A8) //this is a jump label
/*8047C9A8 004797A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047C9AC 004797AC*/ PPC::Runtime::ASM::bl(fn_TCPGetStatus);
/*8047C9B0 004797B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8047C9B4 004797B4*/ PPC::Runtime::ASM::beq(.L_8047C9C0);
/*8047C9B8 004797B8*/ PPC::Runtime::ASM::li(context->r26, -0x1c);
/*8047C9BC 004797BC*/ PPC::Runtime::ASM::b(.L_8047CB94);
RUNTIME_PPC_JUMP_LABEL(.L_8047C9C0, 0x8047C9C0) //this is a jump label
/*8047C9C0 004797C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r29));
/*8047C9C4 004797C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047C9C8 004797C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r29));
/*8047C9CC 004797CC*/ PPC::Runtime::ASM::b(.L_8047C9F8);
RUNTIME_PPC_JUMP_LABEL(.L_8047C9D0, 0x8047C9D0) //this is a jump label
/*8047C9D0 004797D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*8047C9D4 004797D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8047C9D8 004797D8*/ PPC::Runtime::ASM::beq(.L_8047C9F0);
/*8047C9DC 004797DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r29));
/*8047C9E0 004797E0*/ PPC::Runtime::ASM::li(context->r26, -0x6);
/*8047C9E4 004797E4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047C9E8 004797E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r29));
/*8047C9EC 004797EC*/ PPC::Runtime::ASM::b(.L_8047CB94);
RUNTIME_PPC_JUMP_LABEL(.L_8047C9F0, 0x8047C9F0) //this is a jump label
/*8047C9F0 004797F0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x20);
/*8047C9F4 004797F4*/ PPC::Runtime::ASM::bl(fn_OSSleepThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047C9F8, 0x8047C9F8) //this is a jump label
/*8047C9F8 004797F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047C9FC 004797FC*/ PPC::Runtime::ASM::bl(fn_TCPGetStatus);
/*8047CA00 00479800*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8047CA04 00479804*/ PPC::Runtime::ASM::bne(.L_8047CA14);
/*8047CA08 00479808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r29));
/*8047CA0C 0047980C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047CA10 00479810*/ PPC::Runtime::ASM::beq(.L_8047C9D0);
RUNTIME_PPC_JUMP_LABEL(.L_8047CA14, 0x8047CA14) //this is a jump label
/*8047CA14 00479814*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r29));
/*8047CA18 00479818*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047CA1C 0047981C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8047CA20 00479820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r29));
/*8047CA24 00479824*/ PPC::Runtime::ASM::bl(fn_TCPGetStatus);
/*8047CA28 00479828*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8047CA2C 0047982C*/ PPC::Runtime::ASM::beq(.L_8047CA38);
/*8047CA30 00479830*/ PPC::Runtime::ASM::li(context->r26, -0xd);
/*8047CA34 00479834*/ PPC::Runtime::ASM::b(.L_8047CB94);
RUNTIME_PPC_JUMP_LABEL(.L_8047CA38, 0x8047CA38) //this is a jump label
/*8047CA38 00479838*/ PPC::Runtime::ASM::li(context->r0, 0x100);
/*8047CA3C 0047983C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047CA40 00479840*/ PPC::Runtime::ASM::addi(context->r22, context->r23, 0x0);
/*8047CA44 00479844*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8047CA48, 0x8047CA48) //this is a jump label
/*8047CA48 00479848*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r22));
/*8047CA4C 0047984C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047CA50 00479850*/ PPC::Runtime::ASM::bne(.L_8047CB74);
/*8047CA54 00479854*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r29));
/*8047CA58 00479858*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2bc, context->r3));
/*8047CA5C 0047985C*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*8047CA60 00479860*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8047CA64 00479864*/ PPC::Runtime::ASM::bne(.L_8047CA74);
/*8047CA68 00479868*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047CA6C 0047986C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r29));
/*8047CA70 00479870*/ PPC::Runtime::ASM::b(.L_8047CA7C);
RUNTIME_PPC_JUMP_LABEL(.L_8047CA74, 0x8047CA74) //this is a jump label
/*8047CA74 00479874*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047CA78 00479878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8047CA7C, 0x8047CA7C) //this is a jump label
/*8047CA7C 0047987C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8047CA80 00479880*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r29));
/*8047CA84 00479884*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8047CA88 00479888*/ PPC::Runtime::ASM::beq(.L_8047CA9C);
/*8047CA8C 0047988C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8047CA90 00479890*/ PPC::Runtime::ASM::addi(context->r4, context->r25, 0x0);
/*8047CA94 00479894*/ PPC::Runtime::ASM::bl(fn_UDPGetLocalSocket);
/*8047CA98 00479898*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8047CA9C, 0x8047CA9C) //this is a jump label
/*8047CA9C 0047989C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8047CAA0 004798A0*/ PPC::Runtime::ASM::bl(fn_TCPGetStatus);
/*8047CAA4 004798A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*8047CAA8 004798A8*/ PPC::Runtime::ASM::beq(.L_8047CAB4);
/*8047CAAC 004798AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x7);
/*8047CAB0 004798B0*/ PPC::Runtime::ASM::bne(.L_8047CABC);
RUNTIME_PPC_JUMP_LABEL(.L_8047CAB4, 0x8047CAB4) //this is a jump label
/*8047CAB4 004798B4*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*8047CAB8 004798B8*/ PPC::Runtime::ASM::bge(.L_8047CB30);
RUNTIME_PPC_JUMP_LABEL(.L_8047CABC, 0x8047CABC) //this is a jump label
/*8047CABC 004798BC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8047CAC0 004798C0*/ PPC::Runtime::ASM::bl(fn_80476C44);
/*8047CAC4 004798C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r28));
/*8047CAC8 004798C8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8047CACC 004798CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r28));
/*8047CAD0 004798D0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r28));
/*8047CAD4 004798D4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a4, context->r28));
/*8047CAD8 004798D8*/ PPC::Runtime::ASM::bl(fn_80475BD8);
/*8047CADC 004798DC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE6A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047CAE0 004798E0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8047CAE4 004798E4*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE6A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047CAE8 004798E8*/ PPC::Runtime::ASM::bl(fn_TCPSetTimeout);
/*8047CAEC 004798EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r28));
/*8047CAF0 004798F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r29));
/*8047CAF4 004798F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8047CAF8 004798F8*/ PPC::Runtime::ASM::bne(.L_8047CB04);
/*8047CAFC 004798FC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ac, context->r29));
/*8047CB00 00479900*/ PPC::Runtime::ASM::b(.L_8047CB08);
RUNTIME_PPC_JUMP_LABEL(.L_8047CB04, 0x8047CB04) //this is a jump label
/*8047CB04 00479904*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2bc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8047CB08, 0x8047CB08) //this is a jump label
/*8047CB08 00479908*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r28));
/*8047CB0C 0047990C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047CB10 00479910*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8047CB14 00479914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2bc, context->r28));
/*8047CB18 00479918*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*8047CB1C 0047991C*/ PPC::Runtime::ASM::addi(context->r5, context->r24, 0x0);
/*8047CB20 00479920*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r29));
/*8047CB24 00479924*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047CB28 00479928*/ PPC::Runtime::ASM::bl(fn_TCPAcceptAsync);
/*8047CB2C 0047992C*/ PPC::Runtime::ASM::b(.L_8047C9A8);
RUNTIME_PPC_JUMP_LABEL(.L_8047CB30, 0x8047CB30) //this is a jump label
/*8047CB30 00479930*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*8047CB34 00479934*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8047CB38 00479938*/ PPC::Runtime::ASM::addi(context->r3, context->r22, 0x8);
/*8047CB3C 0047993C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r22));
/*8047CB40 00479940*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r22));
/*8047CB44 00479944*/ PPC::Runtime::ASM::bl(fn_OSInitMutex);
/*8047CB48 00479948*/ PPC::Runtime::ASM::addi(context->r3, context->r22, 0x20);
/*8047CB4C 0047994C*/ PPC::Runtime::ASM::bl(fn_OSInitMutex);
/*8047CB50 00479950*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047CB54 00479954*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8047CB58 00479958*/ PPC::Runtime::ASM::addi(context->r26, context->r27, 0x0);
/*8047CB5C 0047995C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047CB60 00479960*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r22));
/*8047CB64 00479964*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047CB68 00479968*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047CB6C 0047996C*/ PPC::Runtime::ASM::bl(fn_AddBackLog);
/*8047CB70 00479970*/ PPC::Runtime::ASM::b(.L_8047CB80);
RUNTIME_PPC_JUMP_LABEL(.L_8047CB74, 0x8047CB74) //this is a jump label
/*8047CB74 00479974*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x38);
/*8047CB78 00479978*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8047CB7C 0047997C*/ PPC::Runtime::ASM::bdnz(.L_8047CA48);
RUNTIME_PPC_JUMP_LABEL(.L_8047CB80, 0x8047CB80) //this is a jump label
/*8047CB80 00479980*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x100);
/*8047CB84 00479984*/ PPC::Runtime::ASM::blt(.L_8047CB94);
/*8047CB88 00479988*/ PPC::Runtime::ASM::li(context->r26, -0x21);
/*8047CB8C 0047998C*/ PPC::Runtime::ASM::b(.L_8047CB94);
RUNTIME_PPC_JUMP_LABEL(.L_8047CB90, 0x8047CB90) //this is a jump label
/*8047CB90 00479990*/ PPC::Runtime::ASM::li(context->r26, -0x8);
RUNTIME_PPC_JUMP_LABEL(.L_8047CB94, 0x8047CB94) //this is a jump label
/*8047CB94 00479994*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8047CB98 00479998*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047CB9C 0047999C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047CBA0 004799A0*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047CBA4 004799A4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
RUNTIME_PPC_JUMP_LABEL(.L_8047CBA8, 0x8047CBA8) //this is a jump label
/*8047CBA8 004799A8*/ PPC::Runtime::ASM::lmw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047CBAC 004799AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8047CBB0 004799B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8047CBB4 004799B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047CBB8 004799B8*/ PPC::Runtime::ASM::blr();
}