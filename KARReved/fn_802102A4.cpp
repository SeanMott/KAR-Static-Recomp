//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802102D4.hpp"



void fn_802102A4(PPC::Runtime::GCContext* context)
{
/*802102A4 0020D0A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802102A8 0020D0A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802102AC 0020D0AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802102B0 0020D0B0*/ PPC::Runtime::ASM::bl(fn_802102D4);
/*802102B4 0020D0B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802102B8 0020D0B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802102BC 0020D0BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802102C0 0020D0C0*/ PPC::Runtime::ASM::blr();
}