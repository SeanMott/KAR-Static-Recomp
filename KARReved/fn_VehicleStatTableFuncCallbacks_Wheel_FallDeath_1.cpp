//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E6670.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_FallDeath_1(PPC::Runtime::GCContext* context)
{
/*801F935C 001F615C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9360 001F6160*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9364 001F6164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9368 001F6168*/ PPC::Runtime::ASM::bl(fn_801E6670);
/*801F936C 001F616C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9370 001F6170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9374 001F6174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9378 001F6178*/ PPC::Runtime::ASM::blr();
}