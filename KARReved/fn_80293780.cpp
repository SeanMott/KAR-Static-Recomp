//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80293780(PPC::Runtime::GCContext* context)
{
/*80293780 00290580*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80293784 00290584*/ PPC::Runtime::ASM::mflr(context->r0);
/*80293788 00290588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029378C 0029058C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80293790 00290590*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80293794 00290594*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80293798 00290598  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8029379C 0029059C*/ PPC::Runtime::ASM::beq(.L_802937DC);
/*802937A0 002905A0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*802937A4 002905A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*802937A8 002905A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802937AC 002905AC*/ PPC::Runtime::ASM::beq(.L_802937CC);
/*802937B0 002905B0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*802937B4 002905B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*802937B8 002905B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802937BC 002905BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802937C0 002905C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802937C4 002905C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802937C8 002905C8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802937CC, 0x802937CC) //this is a jump label
/*802937CC 002905CC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802937D0 002905D0*/ PPC::Runtime::ASM::ble(.L_802937DC);
/*802937D4 002905D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802937D8 002905D8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802937DC, 0x802937DC) //this is a jump label
/*802937DC 002905DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802937E0 002905E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802937E4 002905E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802937E8 002905E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802937EC 002905EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802937F0 002905F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802937F4 002905F4*/ PPC::Runtime::ASM::blr();
}