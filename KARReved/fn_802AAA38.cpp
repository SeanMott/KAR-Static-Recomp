//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80285130.hpp"



void fn_802AAA38(PPC::Runtime::GCContext* context)
{
/*802AAA38 002A7838*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AAA3C 002A783C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AAA40 002A7840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AAA44 002A7844*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AAA48 002A7848*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AAA4C 002A784C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AAA50 002A7850  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AAA54 002A7854*/ PPC::Runtime::ASM::beq(.L_802AAA8C);
/*802AAA58 002A7858*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F8404 @ Get_MemoryOffset_HighBit);
/*802AAA5C 002A785C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AAA60 002A7860*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F8404 @ Get_MemoryOffset_LowBit);
/*802AAA64 002A7864*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AAA68 002A7868*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802AAA6C 002A786C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802AAA70 002A7870*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AAA74 002A7874*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802AAA78 002A7878*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802AAA7C 002A787C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AAA80 002A7880*/ PPC::Runtime::ASM::ble(.L_802AAA8C);
/*802AAA84 002A7884*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AAA88 002A7888*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AAA8C, 0x802AAA8C) //this is a jump label
/*802AAA8C 002A788C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AAA90 002A7890*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AAA94 002A7894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AAA98 002A7898*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AAA9C 002A789C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AAAA0 002A78A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AAAA4 002A78A4*/ PPC::Runtime::ASM::blr();
}