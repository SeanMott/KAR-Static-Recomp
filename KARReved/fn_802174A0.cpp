//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_802174DC.hpp"



void fn_802174A0(PPC::Runtime::GCContext* context)
{
/*802174A0 002142A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802174A4 002142A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802174A8 002142A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802174AC 002142AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802174B0 002142B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802174B4 002142B4*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*802174B8 002142B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802174BC 002142BC*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*802174C0 002142C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802174C4 002142C4*/ PPC::Runtime::ASM::bl(fn_802174DC);
/*802174C8 002142C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802174CC 002142CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802174D0 002142D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802174D4 002142D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802174D8 002142D8*/ PPC::Runtime::ASM::blr();
}