//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AB428.hpp"



void fn_801B4180(PPC::Runtime::GCContext* context)
{
/*801B4180 001B0F80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4184 001B0F84*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4188 001B0F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B418C 001B0F8C*/ PPC::Runtime::ASM::bl(fn_801AB428);
/*801B4190 001B0F90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4194 001B0F94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4198 001B0F98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B419C 001B0F9C*/ PPC::Runtime::ASM::blr();
}