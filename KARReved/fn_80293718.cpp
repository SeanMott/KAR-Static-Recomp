//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80293718(PPC::Runtime::GCContext* context)
{
/*80293718 00290518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029371C 0029051C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80293720 00290520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80293724 00290524*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80293728 00290528*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8029372C 0029052C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80293730 00290530  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80293734 00290534*/ PPC::Runtime::ASM::beq(.L_80293764);
/*80293738 00290538*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8029373C 0029053C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*80293740 00290540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80293744 00290544*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80293748 00290548*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8029374C 0029054C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293750 00290550*/ PPC::Runtime::ASM::bctrl();
/*80293754 00290554*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80293758 00290558*/ PPC::Runtime::ASM::ble(.L_80293764);
/*8029375C 0029055C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80293760 00290560*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80293764, 0x80293764) //this is a jump label
/*80293764 00290564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80293768 00290568*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029376C 0029056C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80293770 00290570*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80293774 00290574*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80293778 00290578*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029377C 0029057C*/ PPC::Runtime::ASM::blr();
}