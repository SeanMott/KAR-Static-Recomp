//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003F670.hpp"



void fn_8000AF38(PPC::Runtime::GCContext* context)
{
/*8000AF38 00007D38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000AF3C 00007D3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000AF40 00007D40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000AF44 00007D44*/ PPC::Runtime::ASM::bl(fn_8003F670);
/*8000AF48 00007D48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000AF4C 00007D4C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*8000AF50 00007D50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000AF54 00007D54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000AF58 00007D58*/ PPC::Runtime::ASM::blr();
}