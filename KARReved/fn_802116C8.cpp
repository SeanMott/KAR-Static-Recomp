//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802069E8.hpp"



void fn_802116C8(PPC::Runtime::GCContext* context)
{
/*802116C8 0020E4C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802116CC 0020E4CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802116D0 0020E4D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802116D4 0020E4D4*/ PPC::Runtime::ASM::bl(fn_802069E8);
/*802116D8 0020E4D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802116DC 0020E4DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802116E0 0020E4E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802116E4 0020E4E4*/ PPC::Runtime::ASM::blr();
}