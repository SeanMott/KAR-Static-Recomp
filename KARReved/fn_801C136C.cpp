//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F39C.hpp"



void fn_801C136C(PPC::Runtime::GCContext* context)
{
/*801C136C 001BE16C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1370 001BE170*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1374 001BE174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1378 001BE178*/ PPC::Runtime::ASM::bl(fn_8019F39C);
/*801C137C 001BE17C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1380 001BE180*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1384 001BE184*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1388 001BE188*/ PPC::Runtime::ASM::blr();
}