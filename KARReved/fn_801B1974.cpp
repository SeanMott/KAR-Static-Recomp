//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B15E8.hpp"



void fn_801B1974(PPC::Runtime::GCContext* context)
{
/*801B1974 001AE774*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B1978 001AE778*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B197C 001AE77C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1980 001AE780*/ PPC::Runtime::ASM::bl(fn_801B15E8);
/*801B1984 001AE784*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1988 001AE788*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B198C 001AE78C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B1990 001AE790*/ PPC::Runtime::ASM::blr();
}