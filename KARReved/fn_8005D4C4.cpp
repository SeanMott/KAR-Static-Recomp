//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005C6DC.hpp"



void fn_8005D4C4(PPC::Runtime::GCContext* context)
{
/*8005D4C4 0005A2C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005D4C8 0005A2C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005D4CC 0005A2CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005D4D0 0005A2D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005D4D4 0005A2D4*/ PPC::Runtime::ASM::bl(fn_8005C6DC);
/*8005D4D8 0005A2D8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005D4DC 0005A2DC*/ PPC::Runtime::ASM::bne(.L_8005D4E8);
/*8005D4E0 0005A2E0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8005D4E4 0005A2E4*/ PPC::Runtime::ASM::b(.L_8005D530);
RUNTIME_PPC_JUMP_LABEL(.L_8005D4E8, 0x8005D4E8) //this is a jump label
/*8005D4E8 0005A2E8*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005D4EC 0005A2EC*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*8005D4F0 0005A2F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005D4F4 0005A2F4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8005D4F8 0005A2F8*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r3);
/*8005D4FC 0005A2FC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x22);
/*8005D500 0005A300*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r5));
/*8005D504 0005A304*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8005D508 0005A308*/ PPC::Runtime::ASM::li(context->r4, 0x3e7);
/*8005D50C 0005A30C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a1, context->r5));
/*8005D510 0005A310*/ PPC::Runtime::ASM::bl(fn_80444984);
/*8005D514 0005A314*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8005D518 0005A318*/ PPC::Runtime::ASM::bne(.L_8005D530);
/*8005D51C 0005A31C*/ PPC::Runtime::ASM::lis(context->r3, String_lbaudio.c @ Get_MemoryOffset_HighBit);
/*8005D520 0005A320*/ PPC::Runtime::ASM::li(context->r4, 0x709);
/*8005D524 0005A324*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_lbaudio.c @ Get_MemoryOffset_LowBit);
/*8005D528 0005A328*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5290 @ Get_MemoryOffset_SDA21);
/*8005D52C 0005A32C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8005D530, 0x8005D530) //this is a jump label
/*8005D530 0005A330*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005D534 0005A334*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8005D538 0005A338*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005D53C 0005A33C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005D540 0005A340*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005D544 0005A344*/ PPC::Runtime::ASM::blr();
}