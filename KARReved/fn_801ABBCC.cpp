//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A5F2C.hpp"



void fn_801ABBCC(PPC::Runtime::GCContext* context)
{
/*801ABBCC 001A89CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ABBD0 001A89D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ABBD4 001A89D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ABBD8 001A89D8*/ PPC::Runtime::ASM::bl(fn_801A5F2C);
/*801ABBDC 001A89DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ABBE0 001A89E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ABBE4 001A89E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ABBE8 001A89E8*/ PPC::Runtime::ASM::blr();
}