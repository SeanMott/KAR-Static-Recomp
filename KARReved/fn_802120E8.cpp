//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FFD78.hpp"



void fn_802120E8(PPC::Runtime::GCContext* context)
{
/*802120E8 0020EEE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802120EC 0020EEEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802120F0 0020EEF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802120F4 0020EEF4*/ PPC::Runtime::ASM::bl(fn_801FFD78);
/*802120F8 0020EEF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802120FC 0020EEFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212100 0020EF00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212104 0020EF04*/ PPC::Runtime::ASM::blr();
}