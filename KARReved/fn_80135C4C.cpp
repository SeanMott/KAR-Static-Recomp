//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015FB54.hpp"



void fn_80135C4C(PPC::Runtime::GCContext* context)
{
/*80135C4C 00132A4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135C50 00132A50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80135C54 00132A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135C58 00132A58*/ PPC::Runtime::ASM::bl(fn_8015FB54);
/*80135C5C 00132A5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135C60 00132A60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135C64 00132A64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135C68 00132A68*/ PPC::Runtime::ASM::blr();
}