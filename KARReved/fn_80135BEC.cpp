//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015F1F8.hpp"



void fn_80135BEC(PPC::Runtime::GCContext* context)
{
/*80135BEC 001329EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135BF0 001329F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80135BF4 001329F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135BF8 001329F8*/ PPC::Runtime::ASM::bl(fn_8015F1F8);
/*80135BFC 001329FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135C00 00132A00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135C04 00132A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135C08 00132A08*/ PPC::Runtime::ASM::blr();
}