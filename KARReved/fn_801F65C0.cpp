//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DA028.hpp"



void fn_801F65C0(PPC::Runtime::GCContext* context)
{
/*801F65C0 001F33C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F65C4 001F33C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F65C8 001F33C8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x738);
/*801F65CC 001F33CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F65D0 001F33D0*/ PPC::Runtime::ASM::bl(fn_801DA028);
/*801F65D4 001F33D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F65D8 001F33D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F65DC 001F33DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F65E0 001F33E0*/ PPC::Runtime::ASM::blr();
}