//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802AEDC0(PPC::Runtime::GCContext* context)
{
/*802AEDC0 002ABBC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AEDC4 002ABBC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AEDC8 002ABBC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AEDCC 002ABBCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 802AEDD0 002ABBD0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802AEDD4 002ABBD4*/ PPC::Runtime::ASM::beq(.L_802AEDF8);
/*802AEDD8 002ABBD8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804C04D4 @ Get_MemoryOffset_HighBit);
/*802AEDDC 002ABBDC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*802AEDE0 002ABBE0*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804C04D4 @ Get_MemoryOffset_LowBit);
/*802AEDE4 002ABBE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802AEDE8 002ABBE8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802AEDEC 002ABBEC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802AEDF0 002ABBF0*/ PPC::Runtime::ASM::ble(.L_802AEDF8);
/*802AEDF4 002ABBF4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AEDF8, 0x802AEDF8) //this is a jump label
/*802AEDF8 002ABBF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AEDFC 002ABBFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802AEE00 002ABC00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AEE04 002ABC04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AEE08 002ABC08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AEE0C 002ABC0C*/ PPC::Runtime::ASM::blr();
}