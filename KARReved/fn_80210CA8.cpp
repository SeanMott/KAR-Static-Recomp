//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_80210CA8(PPC::Runtime::GCContext* context)
{
/*80210CA8 0020DAA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80210CAC 0020DAAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80210CB0 0020DAB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210CB4 0020DAB4*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*80210CB8 0020DAB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210CBC 0020DABC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210CC0 0020DAC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80210CC4 0020DAC4*/ PPC::Runtime::ASM::blr();
}