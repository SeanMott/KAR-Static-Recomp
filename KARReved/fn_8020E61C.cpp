//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204D8C.hpp"



void fn_8020E61C(PPC::Runtime::GCContext* context)
{
/*8020E61C 0020B41C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020E620 0020B420*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020E624 0020B424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020E628 0020B428*/ PPC::Runtime::ASM::bl(fn_80204D8C);
/*8020E62C 0020B42C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020E630 0020B430*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020E634 0020B434*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020E638 0020B438*/ PPC::Runtime::ASM::blr();
}