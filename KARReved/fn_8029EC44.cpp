//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029EC44(PPC::Runtime::GCContext* context)
{
/*8029EC44 0029BA44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029EC48 0029BA48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029EC4C 0029BA4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029EC50 0029BA50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8029EC54 0029BA54  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8029EC58 0029BA58*/ PPC::Runtime::ASM::beq(.L_8029EC88);
/*8029EC5C 0029BA5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF99C @ Get_MemoryOffset_HighBit);
/*8029EC60 0029BA60*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF99C @ Get_MemoryOffset_LowBit);
/*8029EC64 0029BA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8029EC68 0029BA68*/ PPC::Runtime::ASM::beq(.L_8029EC78);
/*8029EC6C 0029BA6C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD254 @ Get_MemoryOffset_HighBit);
/*8029EC70 0029BA70*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD254 @ Get_MemoryOffset_LowBit);
/*8029EC74 0029BA74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8029EC78, 0x8029EC78) //this is a jump label
/*8029EC78 0029BA78*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*8029EC7C 0029BA7C*/ PPC::Runtime::ASM::ble(.L_8029EC88);
/*8029EC80 0029BA80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029EC84 0029BA84*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8029EC88, 0x8029EC88) //this is a jump label
/*8029EC88 0029BA88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029EC8C 0029BA8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8029EC90 0029BA90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029EC94 0029BA94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029EC98 0029BA98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029EC9C 0029BA9C*/ PPC::Runtime::ASM::blr();
}