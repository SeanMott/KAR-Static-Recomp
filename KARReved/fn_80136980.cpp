//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80164C38.hpp"



void fn_80136980(PPC::Runtime::GCContext* context)
{
/*80136980 00133780*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136984 00133784*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136988 00133788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013698C 0013378C*/ PPC::Runtime::ASM::bl(fn_80164C38);
/*80136990 00133790*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136994 00133794*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136998 00133798*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013699C 0013379C*/ PPC::Runtime::ASM::blr();
}