//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_8040800C(PPC::Runtime::GCContext* context)
{
/*8040800C 00404E0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80408010 00404E10*/ PPC::Runtime::ASM::mflr(context->r0);
/*80408014 00404E14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80408018 00404E18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8040801C 00404E1C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80408020 00404E20*/ PPC::Runtime::ASM::bne(.L_80408034);
/*80408024 00404E24*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_531 @ Get_MemoryOffset_SDA21);
/*80408028 00404E28*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8040802C 00404E2C*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_530 @ Get_MemoryOffset_SDA21);
/*80408030 00404E30*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80408034, 0x80408034) //this is a jump label
/*80408034 00404E34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80408038 00404E38*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8040803C 00404E3C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80408040 00404E40*/ PPC::Runtime::ASM::bne(.L_80408050);
/*80408044 00404E44*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80408048 00404E48*/ PPC::Runtime::ASM::beq(.L_80408050);
/*8040804C 00404E4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80408050, 0x80408050) //this is a jump label
/*80408050 00404E50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80408054 00404E54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80408058 00404E58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8040805C 00404E5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80408060 00404E60*/ PPC::Runtime::ASM::blr();
}