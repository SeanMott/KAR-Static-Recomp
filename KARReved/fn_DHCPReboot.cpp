//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DHCPRequest.hpp"



void fn_DHCPReboot(PPC::Runtime::GCContext* context)
{
/*80479CD4 00476AD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80479CD8 00476AD8*/ PPC::Runtime::ASM::lis(context->r3, lbl_805BDDF8 @ Get_MemoryOffset_HighBit);
/*80479CDC 00476ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80479CE0 00476AE0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805BDDF8 @ Get_MemoryOffset_LowBit);
/*80479CE4 00476AE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80479CE8 00476AE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80479CEC 00476AEC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*80479CF0 00476AF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r3));
/*80479CF4 00476AF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80479CF8 00476AF8*/ PPC::Runtime::ASM::bge(.L_80479D44);
/*80479CFC 00476AFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80479D00 00476B00*/ PPC::Runtime::ASM::bge(.L_80479D08);
/*80479D04 00476B04*/ PPC::Runtime::ASM::b(.L_80479D44);
RUNTIME_PPC_JUMP_LABEL(.L_80479D08, 0x80479D08) //this is a jump label
/*80479D08 00476B08*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*80479D0C 00476B0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*80479D10 00476B10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x630, context->r31));
/*80479D14 00476B14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*80479D18 00476B18*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 80479D1C 00476B1C  4E 80 00 21 */ blrl
/*80479D20 00476B20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80479D24 00476B24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*80479D28 00476B28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80479D2C 00476B2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80479D30 00476B30*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80479D34 00476B34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80479D38 00476B38*/ PPC::Runtime::ASM::bl(fn_DHCPRequest);
/*80479D3C 00476B3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80479D40 00476B40*/ PPC::Runtime::ASM::b(.L_80479D48);
RUNTIME_PPC_JUMP_LABEL(.L_80479D44, 0x80479D44) //this is a jump label
/*80479D44 00476B44*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80479D48, 0x80479D48) //this is a jump label
/*80479D48 00476B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80479D4C 00476B4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80479D50 00476B50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80479D54 00476B54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80479D58 00476B58*/ PPC::Runtime::ASM::blr();
}