//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015F0C8.hpp"



void fn_80135B2C(PPC::Runtime::GCContext* context)
{
/*80135B2C 0013292C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135B30 00132930*/ PPC::Runtime::ASM::mflr(context->r0);
/*80135B34 00132934*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135B38 00132938*/ PPC::Runtime::ASM::bl(fn_8015F0C8);
/*80135B3C 0013293C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135B40 00132940*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135B44 00132944*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135B48 00132948*/ PPC::Runtime::ASM::blr();
}