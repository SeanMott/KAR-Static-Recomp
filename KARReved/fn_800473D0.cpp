//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80139078.hpp"



void fn_800473D0(PPC::Runtime::GCContext* context)
{
/*800473D0 000441D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800473D4 000441D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800473D8 000441D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800473DC 000441DC*/ PPC::Runtime::ASM::bl(fn_80139078);
/*800473E0 000441E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800473E4 000441E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800473E8 000441E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800473EC 000441EC*/ PPC::Runtime::ASM::blr();
}