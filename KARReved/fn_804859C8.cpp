//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80482598.hpp"



void fn_804859C8(PPC::Runtime::GCContext* context)
{
/*804859C8 004827C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804859CC 004827CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804859D0 004827D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*804859D4 004827D4*/ PPC::Runtime::ASM::bl(fn_80482598);
/*804859D8 004827D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804859DC 004827DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*804859E0 004827E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804859E4 004827E4*/ PPC::Runtime::ASM::blr();
}