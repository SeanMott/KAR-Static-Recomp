//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80235190.hpp"



void fn_8023CC20(PPC::Runtime::GCContext* context)
{
/*8023CC20 00239A20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023CC24 00239A24*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023CC28 00239A28*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B5518 @ Get_MemoryOffset_HighBit);
/*8023CC2C 00239A2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023CC30 00239A30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023CC34 00239A34*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804B5518 @ Get_MemoryOffset_LowBit);
/*8023CC38 00239A38*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023CC3C 00239A3C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8023CC40 00239A40*/ PPC::Runtime::ASM::subis(context->r0, context->r30, 0x5);
/*8023CC44 00239A44*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa5b9);
/*8023CC48 00239A48*/ PPC::Runtime::ASM::bne(.L_8023CC54);
/*8023CC4C 00239A4C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x50);
/*8023CC50 00239A50*/ PPC::Runtime::ASM::b(.L_8023CC94);
RUNTIME_PPC_JUMP_LABEL(.L_8023CC54, 0x8023CC54) //this is a jump label
/*8023CC54 00239A54*/ PPC::Runtime::ASM::bl(fn_80235190);
/*8023CC58 00239A58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023CC5C 00239A5C*/ PPC::Runtime::ASM::beq(.L_8023CC6C);
/*8023CC60 00239A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8023CC64 00239A64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8023CC68 00239A68*/ PPC::Runtime::ASM::bne(.L_8023CC94);
RUNTIME_PPC_JUMP_LABEL(.L_8023CC6C, 0x8023CC6C) //this is a jump label
/*8023CC6C 00239A6C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8023CC70 00239A70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x60);
/*8023CC74 00239A74*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8023CC78 00239A78*/ PPC::Runtime::ASM::bl(OSReport);
/*8023CC7C 00239A7C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8023CC80 00239A80*/ PPC::Runtime::ASM::li(context->r4, 0x2ad);
/*8023CC84 00239A84*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72C0 @ Get_MemoryOffset_SDA21);
/*8023CC88 00239A88*/ PPC::Runtime::ASM::bl(fn___assert);
/*8023CC8C 00239A8C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023CC90 00239A90*/ PPC::Runtime::ASM::b(.L_8023CC9C);
RUNTIME_PPC_JUMP_LABEL(.L_8023CC94, 0x8023CC94) //this is a jump label
/*8023CC94 00239A94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8023CC98 00239A98*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
RUNTIME_PPC_JUMP_LABEL(.L_8023CC9C, 0x8023CC9C) //this is a jump label
/*8023CC9C 00239A9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023CCA0 00239AA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023CCA4 00239AA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023CCA8 00239AA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023CCAC 00239AAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8023CCB0 00239AB0*/ PPC::Runtime::ASM::blr();
}