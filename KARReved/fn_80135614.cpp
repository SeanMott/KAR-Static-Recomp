//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015BE68.hpp"



void fn_80135614(PPC::Runtime::GCContext* context)
{
/*80135614 00132414*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135618 00132418*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013561C 0013241C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135620 00132420*/ PPC::Runtime::ASM::bl(fn_8015BE68);
/*80135624 00132424*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135628 00132428*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013562C 0013242C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135630 00132430*/ PPC::Runtime::ASM::blr();
}