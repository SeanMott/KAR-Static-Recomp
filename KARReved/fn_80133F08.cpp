//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80150BA0.hpp"



void fn_80133F08(PPC::Runtime::GCContext* context)
{
/*80133F08 00130D08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133F0C 00130D0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133F10 00130D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133F14 00130D14*/ PPC::Runtime::ASM::bl(fn_80150BA0);
/*80133F18 00130D18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133F1C 00130D1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133F20 00130D20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133F24 00130D24*/ PPC::Runtime::ASM::blr();
}