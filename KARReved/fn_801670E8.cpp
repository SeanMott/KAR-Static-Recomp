//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_801670E8(PPC::Runtime::GCContext* context)
{
/*801670E8 00163EE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801670EC 00163EEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801670F0 00163EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801670F4 00163EF4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801670F8 00163EF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa34, context->r3));
/*801670FC 00163EFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80167100 00163F00*/ PPC::Runtime::ASM::beq(.L_80167108);
/*80167104 00163F04*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80167108, 0x80167108) //this is a jump label
/*80167108 00163F08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016710C 00163F0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80167110 00163F10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80167114 00163F14*/ PPC::Runtime::ASM::blr();
}