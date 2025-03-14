//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047FE2C.hpp"
#include "fn_8047FE2C.hpp"
#include "OSSetAlarm.hpp"
#include "fn_OutPADT.hpp"
#include "memmove.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_8047FCFC(PPC::Runtime::GCContext* context)
{
/*8047FCFC 0047CAFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047FD00 0047CB00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047FD04 0047CB04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*8047FD08 0047CB08*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047FD0C 0047CB0C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*8047FD10 0047CB10*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*8047FD14 0047CB14*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047FD18 0047CB18*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*8047FD1C 0047CB1C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*8047FD20 0047CB20*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8047FD24 0047CB24*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*8047FD28 0047CB28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*8047FD2C 0047CB2C*/ PPC::Runtime::ASM::lis(context->r3, fn_8047FE2C @ Get_MemoryOffset_HighBit);
/*8047FD30 0047CB30*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_8047FE2C @ Get_MemoryOffset_LowBit);
/*8047FD34 0047CB34*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 2);
/*8047FD38 0047CB38*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8047FD3C 0047CB3C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8047FD40 0047CB40*/ PPC::Runtime::ASM::mullw(context->r4, context->r28, context->r3);
/*8047FD44 0047CB44*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r5, context->r3);
/*8047FD48 0047CB48*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*8047FD4C 0047CB4C*/ PPC::Runtime::ASM::mullw(context->r6, context->r5, context->r3);
/*8047FD50 0047CB50*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r28);
/*8047FD54 0047CB54*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*8047FD58 0047CB58*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*8047FD5C 0047CB5C*/ PPC::Runtime::ASM::bl(OSSetAlarm);
/*8047FD60 0047CB60*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047FD64 0047CB64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa7);
/*8047FD68 0047CB68*/ PPC::Runtime::ASM::bne(.L_8047FD80);
/*8047FD6C 0047CB6C*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8047FD70 0047CB70*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047FD74 0047CB74*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x38);
/*8047FD78 0047CB78*/ PPC::Runtime::ASM::bl(fn_OutPADT);
/*8047FD7C 0047CB7C*/ PPC::Runtime::ASM::b(.L_8047FE10);
RUNTIME_PPC_JUMP_LABEL(.L_8047FD80, 0x8047FD80) //this is a jump label
/*8047FD80 0047CB80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r29));
/*8047FD84 0047CB84*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047FD88 0047CB88*/ PPC::Runtime::ASM::li(context->r4, 0x3c);
/*8047FD8C 0047CB8C*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047FD90 0047CB90  4E 80 00 21 */ blrl
/*8047FD94 0047CB94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/* 8047FD98 0047CB98  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*8047FD9C 0047CB9C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x3e);
/*8047FDA0 0047CBA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f, context->r30));
/*8047FDA4 0047CBA4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8047FDA8 0047CBA8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8047FDAC 0047CBAC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61a, context->r30));
/*8047FDB0 0047CBB0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8047FDB4 0047CBB4*/ PPC::Runtime::ASM::beq(.L_8047FE10);
/*8047FDB8 0047CBB8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8047FDBC 0047CBBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r27));
/*8047FDC0 0047CBC0*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8047FDC4 0047CBC4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x779d);
/*8047FDC8 0047CBC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*8047FDCC 0047CBCC*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x12);
/*8047FDD0 0047CBD0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x38);
/*8047FDD4 0047CBD4*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61a, context->r30));
/*8047FDD8 0047CBD8*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8047FDDC 0047CBDC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x6);
/*8047FDE0 0047CBE0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*8047FDE4 0047CBE4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*8047FDE8 0047CBE8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8047FDEC 0047CBEC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8047FDF0 0047CBF0*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r27));
/*8047FDF4 0047CBF4*/ PPC::Runtime::ASM::bl(memmove);
/*8047FDF8 0047CBF8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8047FDFC 0047CBFC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047FE00 0047CC00*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x0);
/*8047FE04 0047CC04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x624, context->r30));
/*8047FE08 0047CC08*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047FE0C 0047CC0C  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_8047FE10, 0x8047FE10) //this is a jump label
/*8047FE10 0047CC10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8047FE14 0047CC14*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047FE18 0047CC18*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047FE1C 0047CC1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047FE20 0047CC20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*8047FE24 0047CC24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047FE28 0047CC28*/ PPC::Runtime::ASM::blr();
}