//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254058.hpp"



void fn_80258528(PPC::Runtime::GCContext* context)
{
/*80258528 00255328*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025852C 0025532C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80258530 00255330*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258534 00255334*/ PPC::Runtime::ASM::bl(fn_80254058);
/*80258538 00255338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025853C 0025533C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80258540 00255340*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80258544 00255344*/ PPC::Runtime::ASM::blr();
}