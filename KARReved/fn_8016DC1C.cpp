//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016DC1C(PPC::Runtime::GCContext* context)
{
/*8016DC1C 0016AA1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016DC20 0016AA20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016DC24 0016AA24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016DC28 0016AA28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016DC2C 0016AA2C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8016DC30 0016AA30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016DC34 0016AA34*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016DC38 0016AA38*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8016DC3C, 0x8016DC3C) //this is a jump label
/*8016DC3C 0016AA3C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016DC40 0016AA40*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8016DC44 0016AA44*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016DC48 0016AA48*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8016DC4C 0016AA4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb44, context->r30));
/*8016DC50 0016AA50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016DC54 0016AA54*/ PPC::Runtime::ASM::beq(.L_8016DC60);
/*8016DC58 0016AA58*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8016DC5C 0016AA5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb44, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8016DC60, 0x8016DC60) //this is a jump label
/*8016DC60 0016AA60*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016DC64 0016AA64*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8016DC68 0016AA68*/ PPC::Runtime::ASM::blt(.L_8016DC3C);
/*8016DC6C 0016AA6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016DC70 0016AA70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016DC74 0016AA74*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016DC78 0016AA78*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016DC7C 0016AA7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016DC80 0016AA80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016DC84 0016AA84*/ PPC::Runtime::ASM::blr();
}