//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015F440.hpp"



void fn_80135B4C(PPC::Runtime::GCContext* context)
{
/*80135B4C 0013294C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135B50 00132950*/ PPC::Runtime::ASM::mflr(context->r0);
/*80135B54 00132954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135B58 00132958*/ PPC::Runtime::ASM::bl(fn_8015F440);
/*80135B5C 0013295C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135B60 00132960*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135B64 00132964*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135B68 00132968*/ PPC::Runtime::ASM::blr();
}