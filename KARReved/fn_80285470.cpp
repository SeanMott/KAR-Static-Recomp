//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80285470(PPC::Runtime::GCContext* context)
{
/*80285470 00282270*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80285474 00282274*/ PPC::Runtime::ASM::mflr(context->r0);
/*80285478 00282278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028547C 0028227C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80285480 00282280  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80285484 00282284*/ PPC::Runtime::ASM::beq(.L_802854B4);
/*80285488 00282288*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*8028548C 0028228C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*80285490 00282290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80285494 00282294*/ PPC::Runtime::ASM::beq(.L_802854A4);
/*80285498 00282298*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*8028549C 0028229C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802854A0 002822A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802854A4, 0x802854A4) //this is a jump label
/*802854A4 002822A4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*802854A8 002822A8*/ PPC::Runtime::ASM::ble(.L_802854B4);
/*802854AC 002822AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802854B0 002822B0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802854B4, 0x802854B4) //this is a jump label
/*802854B4 002822B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802854B8 002822B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802854BC 002822BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802854C0 002822C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802854C4 002822C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802854C8 002822C8*/ PPC::Runtime::ASM::blr();
}