//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_abilityTimer_Plasma_removeEffect.hpp"



void fn_800F72AC(PPC::Runtime::GCContext* context)
{
/*800F72AC 000F40AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F72B0 000F40B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F72B4 000F40B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F72B8 000F40B8*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
/*800F72BC 000F40BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F72C0 000F40C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F72C4 000F40C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F72C8 000F40C8*/ PPC::Runtime::ASM::blr();
}