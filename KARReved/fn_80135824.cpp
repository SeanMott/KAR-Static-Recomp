//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015D02C.hpp"



void fn_80135824(PPC::Runtime::GCContext* context)
{
/*80135824 00132624*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135828 00132628*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013582C 0013262C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135830 00132630*/ PPC::Runtime::ASM::bl(fn_8015D02C);
/*80135834 00132634*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135838 00132638*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013583C 0013263C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135840 00132640*/ PPC::Runtime::ASM::blr();
}