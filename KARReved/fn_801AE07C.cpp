//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AD994.hpp"



void fn_801AE07C(PPC::Runtime::GCContext* context)
{
/*801AE07C 001AAE7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AE080 001AAE80*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AE084 001AAE84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE088 001AAE88*/ PPC::Runtime::ASM::bl(fn_801AD994);
/*801AE08C 001AAE8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AE090 001AAE90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AE094 001AAE94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AE098 001AAE98*/ PPC::Runtime::ASM::blr();
}