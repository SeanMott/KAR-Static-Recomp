//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E1260.hpp"
#include "FuncCramedBetwenSupportFuncs_Wheel_WaitJump.hpp"



void FuncCramedBefore_Wheel_WaitJump_4(PPC::Runtime::GCContext* context)
{
/*801F8D94 001F5B94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8D98 001F5B98*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8D9C 001F5B9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8DA0 001F5BA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8DA4 001F5BA4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8DA8 001F5BA8*/ PPC::Runtime::ASM::bl(fn_801E1260);
/*801F8DAC 001F5BAC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F8DB0 001F5BB0*/ PPC::Runtime::ASM::beq(.L_801F8DC4);
/*801F8DB4 001F5BB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8DB8 001F5BB8*/ PPC::Runtime::ASM::bl(FuncCramedBetwenSupportFuncs_Wheel_WaitJump);
/*801F8DBC 001F5BBC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801F8DC0 001F5BC0*/ PPC::Runtime::ASM::b(.L_801F8DC8);
RUNTIME_PPC_JUMP_LABEL(.L_801F8DC4, 0x801F8DC4) //this is a jump label
/*801F8DC4 001F5BC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801F8DC8, 0x801F8DC8) //this is a jump label
/*801F8DC8 001F5BC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8DCC 001F5BCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8DD0 001F5BD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8DD4 001F5BD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8DD8 001F5BD8*/ PPC::Runtime::ASM::blr();
}