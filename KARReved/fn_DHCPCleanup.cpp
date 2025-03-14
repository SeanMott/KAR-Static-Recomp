//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_DHCPAuto.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_DHCPRelease.hpp"
#include "fn_Stop.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_DHCPCleanup(PPC::Runtime::GCContext* context)
{
/*80479BFC 004769FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80479C00 00476A00*/ PPC::Runtime::ASM::lis(context->r3, lbl_805BDDF8 @ Get_MemoryOffset_HighBit);
/*80479C04 00476A04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80479C08 00476A08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80479C0C 00476A0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80479C10 00476A10*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_805BDDF8 @ Get_MemoryOffset_LowBit);
/*80479C14 00476A14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80479C18 00476A18*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80479C1C 00476A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*80479C20 00476A20*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/* 80479C24 00476A24  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80479C28 00476A28*/ PPC::Runtime::ASM::beq(.L_80479CAC);
/*80479C2C 00476A2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80479C30 00476A30*/ PPC::Runtime::ASM::bl(fn_DHCPAuto);
/*80479C34 00476A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*80479C38 00476A38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80479C3C 00476A3C*/ PPC::Runtime::ASM::beq(.L_80479CA4);
/*80479C40 00476A40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*80479C44 00476A44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*80479C48 00476A48*/ PPC::Runtime::ASM::bne(.L_80479CA4);
/*80479C4C 00476A4C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x328);
/*80479C50 00476A50*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80479C54 00476A54*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80479C58 00476A58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*80479C5C 00476A5C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x350);
/*80479C60 00476A60*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80479C64 00476A64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x378);
/*80479C68 00476A68*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80479C6C 00476A6C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3a0);
/*80479C70 00476A70*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80479C74 00476A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*80479C78 00476A78*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80479C7C 00476A7C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x4);
/*80479C80 00476A80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*80479C84 00476A84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80479C88 00476A88*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80479C8C 00476A8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80479C90 00476A90*/ PPC::Runtime::ASM::bl(fn_DHCPRelease);
/*80479C94 00476A94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80479C98 00476A98*/ PPC::Runtime::ASM::bge(.L_80479CA4);
/*80479C9C 00476A9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80479CA0 00476AA0*/ PPC::Runtime::ASM::bl(fn_Stop);
RUNTIME_PPC_JUMP_LABEL(.L_80479CA4, 0x80479CA4) //this is a jump label
/*80479CA4 00476AA4*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*80479CA8 00476AA8*/ PPC::Runtime::ASM::b(.L_80479CB0);
RUNTIME_PPC_JUMP_LABEL(.L_80479CAC, 0x80479CAC) //this is a jump label
/*80479CAC 00476AAC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80479CB0, 0x80479CB0) //this is a jump label
/*80479CB0 00476AB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80479CB4 00476AB4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80479CB8 00476AB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80479CBC 00476ABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80479CC0 00476AC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80479CC4 00476AC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80479CC8 00476AC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80479CCC 00476ACC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80479CD0 00476AD0*/ PPC::Runtime::ASM::blr();
}