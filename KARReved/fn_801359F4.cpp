//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015E424.hpp"



void fn_801359F4(PPC::Runtime::GCContext* context)
{
/*801359F4 001327F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801359F8 001327F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801359FC 001327FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135A00 00132800*/ PPC::Runtime::ASM::bl(fn_8015E424);
/*80135A04 00132804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135A08 00132808*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135A0C 0013280C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135A10 00132810*/ PPC::Runtime::ASM::blr();
}