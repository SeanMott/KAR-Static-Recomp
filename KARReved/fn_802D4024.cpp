//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D4024(PPC::Runtime::GCContext* context)
{
/*802D4024 002D0E24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D4028 002D0E28*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D402C 002D0E2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D4030 002D0E30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D4034 002D0E34*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802D4038 002D0E38*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802D403C 002D0E3C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802D4040 002D0E40*/ PPC::Runtime::ASM::beq(.L_802D4090);
/*802D4044 002D0E44*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F32A8 @ Get_MemoryOffset_HighBit);
/*802D4048 002D0E48*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F32A8 @ Get_MemoryOffset_LowBit);
/*802D404C 002D0E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802D4050 002D0E50*/ PPC::Runtime::ASM::beq(.L_802D4080);
/*802D4054 002D0E54*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F3510 @ Get_MemoryOffset_HighBit);
/*802D4058 002D0E58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F3510 @ Get_MemoryOffset_LowBit);
/*802D405C 002D0E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802D4060 002D0E60*/ PPC::Runtime::ASM::beq(.L_802D4080);
/*802D4064 002D0E64*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD724 @ Get_MemoryOffset_HighBit);
/*802D4068 002D0E68*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD724 @ Get_MemoryOffset_LowBit);
/*802D406C 002D0E6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802D4070 002D0E70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D4074 002D0E74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802D4078 002D0E78*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D407C 002D0E7C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D4080, 0x802D4080) //this is a jump label
/*802D4080 002D0E80*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802D4084 002D0E84*/ PPC::Runtime::ASM::ble(.L_802D4090);
/*802D4088 002D0E88*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D408C 002D0E8C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802D4090, 0x802D4090) //this is a jump label
/*802D4090 002D0E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D4094 002D0E94*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D4098 002D0E98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D409C 002D0E9C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D40A0 002D0EA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D40A4 002D0EA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D40A8 002D0EA8*/ PPC::Runtime::ASM::blr();
}