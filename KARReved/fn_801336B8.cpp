//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013CEB8.hpp"



void fn_801336B8(PPC::Runtime::GCContext* context)
{
/*801336B8 001304B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801336BC 001304BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801336C0 001304C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801336C4 001304C4*/ PPC::Runtime::ASM::bl(fn_8013CEB8);
/*801336C8 001304C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801336CC 001304CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801336D0 001304D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801336D4 001304D4*/ PPC::Runtime::ASM::blr();
}