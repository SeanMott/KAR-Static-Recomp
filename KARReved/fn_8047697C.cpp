//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80476C44.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80475738.hpp"
#include "fn_cbForCancelSync3.hpp"
#include "fn_8047477C.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_8047697C(PPC::Runtime::GCContext* context)
{
/*8047697C 0047377C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80476980 00473780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80476984 00473784*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*80476988 00473788*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8047698C 0047378C*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x0);
/*80476990 00473790*/ PPC::Runtime::ASM::addi(context->r27, context->r4, 0x0);
/*80476994 00473794*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80476998 00473798*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8047699C 0047379C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*804769A0 004737A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*804769A4 004737A4*/ PPC::Runtime::ASM::beq(.L_804769B8);
/*804769A8 004737A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804769AC 004737AC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804769B0 004737B0*/ PPC::Runtime::ASM::li(context->r3, -0xc);
/*804769B4 004737B4*/ PPC::Runtime::ASM::b(.L_80476C30);
RUNTIME_PPC_JUMP_LABEL(.L_804769B8, 0x804769B8) //this is a jump label
/*804769B8 004737B8*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*804769BC 004737BC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*804769C0 004737C0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*804769C4 004737C4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*804769C8 004737C8*/ PPC::Runtime::ASM::beq(.L_804769D4);
/*804769CC 004737CC*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x2);
/*804769D0 004737D0*/ PPC::Runtime::ASM::bne(.L_80476B6C);
RUNTIME_PPC_JUMP_LABEL(.L_804769D4, 0x804769D4) //this is a jump label
/*804769D4 004737D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r26));
/*804769D8 004737D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804769DC 004737DC*/ PPC::Runtime::ASM::ble(.L_804769F8);
/*804769E0 004737E0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*804769E4 004737E4*/ PPC::Runtime::ASM::bl(fn_80476C44);
/*804769E8 004737E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804769EC 004737EC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804769F0 004737F0*/ PPC::Runtime::ASM::li(context->r3, -0x8);
/*804769F4 004737F4*/ PPC::Runtime::ASM::b(.L_80476C30);
RUNTIME_PPC_JUMP_LABEL(.L_804769F8, 0x804769F8) //this is a jump label
/*804769F8 004737F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r26));
/*804769FC 004737FC*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x10);
/*80476A00 00473800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r26));
/*80476A04 00473804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r26));
/*80476A08 00473808*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80476A0C 0047380C*/ PPC::Runtime::ASM::bge(.L_80476A20);
/*80476A10 00473810*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80476A14 00473814*/ PPC::Runtime::ASM::beq(.L_80476A34);
/*80476A18 00473818*/ PPC::Runtime::ASM::bge(.L_80476A3C);
/*80476A1C 0047381C*/ PPC::Runtime::ASM::b(.L_80476B68);
RUNTIME_PPC_JUMP_LABEL(.L_80476A20, 0x80476A20) //this is a jump label
/*80476A20 00473820*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*80476A24 00473824*/ PPC::Runtime::ASM::bge(.L_80476B68);
/*80476A28 00473828*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*80476A2C 0047382C*/ PPC::Runtime::ASM::bge(.L_80476B68);
/*80476A30 00473830*/ PPC::Runtime::ASM::b(.L_80476ACC);
RUNTIME_PPC_JUMP_LABEL(.L_80476A34, 0x80476A34) //this is a jump label
/*80476A34 00473834*/ PPC::Runtime::ASM::li(context->r28, -0x4);
/*80476A38 00473838*/ PPC::Runtime::ASM::b(.L_80476B6C);
RUNTIME_PPC_JUMP_LABEL(.L_80476A3C, 0x80476A3C) //this is a jump label
/*80476A3C 0047383C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r26));
/*80476A40 00473840*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80476A44 00473844*/ PPC::Runtime::ASM::mr(context->r12, context->r0);
/*80476A48 00473848*/ PPC::Runtime::ASM::beq(.L_80476A80);
/*80476A4C 0047384C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r26));
/*80476A50 00473850*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80476A54 00473854*/ PPC::Runtime::ASM::beq(.L_80476A68);
/*80476A58 00473858*/ PPC::Runtime::ASM::li(context->r0, -0x8);
/*80476A5C 0047385C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80476A60 00473860*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476A64 00473864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80476A68, 0x80476A68) //this is a jump label
/*80476A68 00473868*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476A6C 0047386C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*80476A70 00473870*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r26));
/*80476A74 00473874*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80476A78 00473878*/ PPC::Runtime::ASM::li(context->r4, -0x8);
/* 80476A7C 0047387C  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_80476A80, 0x80476A80) //this is a jump label
/*80476A80 00473880*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r26));
/*80476A84 00473884*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80476A88 00473888*/ PPC::Runtime::ASM::beq(.L_80476AC0);
/*80476A8C 0047388C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r26));
/*80476A90 00473890*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80476A94 00473894*/ PPC::Runtime::ASM::beq(.L_80476AA8);
/*80476A98 00473898*/ PPC::Runtime::ASM::li(context->r0, -0x8);
/*80476A9C 0047389C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80476AA0 004738A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476AA4 004738A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80476AA8, 0x80476AA8) //this is a jump label
/*80476AA8 004738A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476AAC 004738AC*/ PPC::Runtime::ASM::mtlr(context->r12);
/*80476AB0 004738B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r26));
/*80476AB4 004738B4*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80476AB8 004738B8*/ PPC::Runtime::ASM::li(context->r4, -0x8);
/* 80476ABC 004738BC  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_80476AC0, 0x80476AC0) //this is a jump label
/*80476AC0 004738C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476AC4 004738C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r26));
/*80476AC8 004738C8*/ PPC::Runtime::ASM::b(.L_80476B6C);
RUNTIME_PPC_JUMP_LABEL(.L_80476ACC, 0x80476ACC) //this is a jump label
/*80476ACC 004738CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r26));
/*80476AD0 004738D0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80476AD4 004738D4*/ PPC::Runtime::ASM::beq(.L_80476B0C);
/*80476AD8 004738D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r26));
/*80476ADC 004738DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80476AE0 004738E0*/ PPC::Runtime::ASM::beq(.L_80476AF4);
/*80476AE4 004738E4*/ PPC::Runtime::ASM::li(context->r0, -0x8);
/*80476AE8 004738E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80476AEC 004738EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476AF0 004738F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80476AF4, 0x80476AF4) //this is a jump label
/*80476AF4 004738F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476AF8 004738F8*/ PPC::Runtime::ASM::mtlr(context->r12);
/*80476AFC 004738FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r26));
/*80476B00 00473900*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80476B04 00473904*/ PPC::Runtime::ASM::li(context->r4, -0x8);
/* 80476B08 00473908  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_80476B0C, 0x80476B0C) //this is a jump label
/*80476B0C 0047390C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r26));
/*80476B10 00473910*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80476B14 00473914*/ PPC::Runtime::ASM::beq(.L_80476B4C);
/*80476B18 00473918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r26));
/*80476B1C 0047391C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80476B20 00473920*/ PPC::Runtime::ASM::beq(.L_80476B34);
/*80476B24 00473924*/ PPC::Runtime::ASM::li(context->r0, -0x8);
/*80476B28 00473928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80476B2C 0047392C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476B30 00473930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80476B34, 0x80476B34) //this is a jump label
/*80476B34 00473934*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476B38 00473938*/ PPC::Runtime::ASM::mtlr(context->r12);
/*80476B3C 0047393C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r26));
/*80476B40 00473940*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80476B44 00473944*/ PPC::Runtime::ASM::li(context->r4, -0x8);
/* 80476B48 00473948  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_80476B4C, 0x80476B4C) //this is a jump label
/*80476B4C 0047394C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r26));
/*80476B50 00473950*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80476B54 00473954*/ PPC::Runtime::ASM::ble(.L_80476B6C);
/*80476B58 00473958*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80476B5C 0047395C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r26));
/*80476B60 00473960*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*80476B64 00473964*/ PPC::Runtime::ASM::b(.L_80476B6C);
RUNTIME_PPC_JUMP_LABEL(.L_80476B68, 0x80476B68) //this is a jump label
/*80476B68 00473968*/ PPC::Runtime::ASM::li(context->r28, -0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80476B6C, 0x80476B6C) //this is a jump label
/*80476B6C 0047396C*/ PPC::Runtime::ASM::subi(context->r0, context->r27, 0x1);
/*80476B70 00473970*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80476B74 00473974*/ PPC::Runtime::ASM::bgt(.L_80476C00);
/*80476B78 00473978*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r26));
/*80476B7C 0047397C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x8);
/*80476B80 00473980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r26));
/*80476B84 00473984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r26));
/*80476B88 00473988*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa);
/*80476B8C 0047398C*/ PPC::Runtime::ASM::bgt(.L_80476BEC);
/*80476B90 00473990*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80534118 @ Get_MemoryOffset_HighBit);
/*80476B94 00473994*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80534118 @ Get_MemoryOffset_LowBit);
/*80476B98 00473998*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80476B9C 0047399C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80476BA0 004739A0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80476BA4 004739A4*/ PPC::Runtime::ASM::bctr();
/*80476BA8 004739A8*/ PPC::Runtime::ASM::li(context->r29, -0x4);
/*80476BAC 004739AC*/ PPC::Runtime::ASM::b(.L_80476BF0);
/*80476BB0 004739B0*/ PPC::Runtime::ASM::li(context->r0, -0x8);
/*80476BB4 004739B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*80476BB8 004739B8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80476BBC 004739BC*/ PPC::Runtime::ASM::bl(fn_80475738);
/*80476BC0 004739C0*/ PPC::Runtime::ASM::b(.L_80476BF0);
/*80476BC4 004739C4*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80476BC8 004739C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r26));
/*80476BCC 004739CC*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*80476BD0 004739D0*/ PPC::Runtime::ASM::b(.L_80476BF0);
/*80476BD4 004739D4*/ PPC::Runtime::ASM::li(context->r29, -0x8);
/*80476BD8 004739D8*/ PPC::Runtime::ASM::b(.L_80476BF0);
/*80476BDC 004739DC*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*80476BE0 004739E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r26));
/*80476BE4 004739E4*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*80476BE8 004739E8*/ PPC::Runtime::ASM::b(.L_80476BF0);
RUNTIME_PPC_JUMP_LABEL(.L_80476BEC, 0x80476BEC) //this is a jump label
/*80476BEC 004739EC*/ PPC::Runtime::ASM::li(context->r29, -0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80476BF0, 0x80476BF0) //this is a jump label
/*80476BF0 004739F0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*80476BF4 004739F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80476BF8 004739F8*/ PPC::Runtime::ASM::ble(.L_80476C00);
/*80476BFC 004739FC*/ PPC::Runtime::ASM::bl(fn_cbForCancelSync3);
RUNTIME_PPC_JUMP_LABEL(.L_80476C00, 0x80476C00) //this is a jump label
/*80476C00 00473A00*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80476C04 00473A04*/ PPC::Runtime::ASM::beq(.L_80476C14);
/*80476C08 00473A08*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80476C0C 00473A0C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80476C10 00473A10*/ PPC::Runtime::ASM::bl(fn_8047477C);
RUNTIME_PPC_JUMP_LABEL(.L_80476C14, 0x80476C14) //this is a jump label
/*80476C14 00473A14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80476C18 00473A18*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80476C1C 00473A1C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r28);
/*80476C20 00473A20*/ PPC::Runtime::ASM::bge(.L_80476C2C);
/*80476C24 00473A24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80476C28 00473A28*/ PPC::Runtime::ASM::b(.L_80476C30);
RUNTIME_PPC_JUMP_LABEL(.L_80476C2C, 0x80476C2C) //this is a jump label
/*80476C2C 00473A2C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_80476C30, 0x80476C30) //this is a jump label
/*80476C30 00473A30*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80476C34 00473A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80476C38 00473A38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*80476C3C 00473A3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80476C40 00473A40*/ PPC::Runtime::ASM::blr();
}