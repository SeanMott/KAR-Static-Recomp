//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AAA38.hpp"



void fn_802AAAA8(PPC::Runtime::GCContext* context)
{
/*802AAAA8 002A78A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AAAAC 002A78AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AAAB0 002A78B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AAAB4 002A78B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AAAB8 002A78B8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AAABC 002A78BC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AAAC0 002A78C0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AAAC4 002A78C4*/ PPC::Runtime::ASM::beq(.L_802AAAFC);
/*802AAAC8 002A78C8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804C0EC0 @ Get_MemoryOffset_HighBit);
/*802AAACC 002A78CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AAAD0 002A78D0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804C0EC0 @ Get_MemoryOffset_LowBit);
/*802AAAD4 002A78D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AAAD8 002A78D8*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802AAADC 002A78DC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802AAAE0 002A78E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AAAE4 002A78E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802AAAE8 002A78E8*/ PPC::Runtime::ASM::bl(fn_802AAA38);
/*802AAAEC 002A78EC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AAAF0 002A78F0*/ PPC::Runtime::ASM::ble(.L_802AAAFC);
/*802AAAF4 002A78F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AAAF8 002A78F8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AAAFC, 0x802AAAFC) //this is a jump label
/*802AAAFC 002A78FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AAB00 002A7900*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AAB04 002A7904*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AAB08 002A7908*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AAB0C 002A790C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AAB10 002A7910*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AAB14 002A7914*/ PPC::Runtime::ASM::blr();
}