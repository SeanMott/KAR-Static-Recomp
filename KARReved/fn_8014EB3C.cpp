//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8014E2B8.hpp"



void fn_8014EB3C(PPC::Runtime::GCContext* context)
{
/*8014EB3C 0014B93C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014EB40 0014B940*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014EB44 0014B944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014EB48 0014B948*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014EB4C 0014B94C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014EB50 0014B950*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014EB54 0014B954*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014EB58 0014B958*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8014EB5C 0014B95C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8014EB60 0014B960*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8014EB64 0014B964*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014EB68 0014B968*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014EB6C 0014B96C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8014EB70 0014B970*/ PPC::Runtime::ASM::bl(fn_8014E2B8);
/*8014EB74 0014B974*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8014EB78 0014B978*/ PPC::Runtime::ASM::bne(.L_8014EB8C);
/*8014EB7C 0014B97C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6738 @ Get_MemoryOffset_SDA21);
/*8014EB80 0014B980*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8014EB84 0014B984*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6740 @ Get_MemoryOffset_SDA21);
/*8014EB88 0014B988*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014EB8C, 0x8014EB8C) //this is a jump label
/*8014EB8C 0014B98C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014EB90 0014B990*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014EB94 0014B994*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8014EB98 0014B998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8014EB9C 0014B99C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014EBA0 0014B9A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8014EBA4 0014B9A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014EBA8 0014B9A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8014EBAC 0014B9AC*/ PPC::Runtime::ASM::bne(.L_8014EBF8);
/*8014EBB0 0014B9B0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8014EBB4 0014B9B4*/ PPC::Runtime::ASM::beq(.L_8014EBF8);
/*8014EBB8 0014B9B8*/ PPC::Runtime::ASM::bne(.L_8014EBCC);
/*8014EBBC 0014B9BC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6738 @ Get_MemoryOffset_SDA21);
/*8014EBC0 0014B9C0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8014EBC4 0014B9C4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6740 @ Get_MemoryOffset_SDA21);
/*8014EBC8 0014B9C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014EBCC, 0x8014EBCC) //this is a jump label
/*8014EBCC 0014B9CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014EBD0 0014B9D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8014EBD4 0014B9D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8014EBD8 0014B9D8*/ PPC::Runtime::ASM::bne(.L_8014EBE8);
/*8014EBDC 0014B9DC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8014EBE0 0014B9E0*/ PPC::Runtime::ASM::beq(.L_8014EBE8);
/*8014EBE4 0014B9E4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8014EBE8, 0x8014EBE8) //this is a jump label
/*8014EBE8 0014B9E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8014EBEC 0014B9EC*/ PPC::Runtime::ASM::bne(.L_8014EBF8);
/*8014EBF0 0014B9F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8014EBF4 0014B9F4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8014EBF8, 0x8014EBF8) //this is a jump label
/*8014EBF8 0014B9F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014EBFC 0014B9FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014EC00 0014BA00*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014EC04 0014BA04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014EC08 0014BA08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014EC0C 0014BA0C*/ PPC::Runtime::ASM::blr();
}