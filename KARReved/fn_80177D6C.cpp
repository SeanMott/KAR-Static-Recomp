//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80177D6C(PPC::Runtime::GCContext* context)
{
/*80177D6C 00174B6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80177D70 00174B70*/ PPC::Runtime::ASM::mflr(context->r0);
/*80177D74 00174B74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80177D78 00174B78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80177D7C 00174B7C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80177D80 00174B80*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80177D84 00174B84*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177D88 00174B88*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80177D8C, 0x80177D8C) //this is a jump label
/*80177D8C 00174B8C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80177D90 00174B90*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80177D94 00174B94*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80177D98 00174B98*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80177D9C 00174B9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd30, context->r30));
/*80177DA0 00174BA0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80177DA4 00174BA4*/ PPC::Runtime::ASM::beq(.L_80177DB0);
/*80177DA8 00174BA8*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80177DAC 00174BAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80177DB0, 0x80177DB0) //this is a jump label
/*80177DB0 00174BB0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80177DB4 00174BB4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80177DB8 00174BB8*/ PPC::Runtime::ASM::blt(.L_80177D8C);
/*80177DBC 00174BBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80177DC0 00174BC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80177DC4 00174BC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80177DC8 00174BC8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80177DCC 00174BCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80177DD0 00174BD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80177DD4 00174BD4*/ PPC::Runtime::ASM::blr();
}