//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F9EC4.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_Run_2(PPC::Runtime::GCContext* context)
{
/*801F94A0 001F62A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F94A4 001F62A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F94A8 001F62A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F94AC 001F62AC*/ PPC::Runtime::ASM::bl(fn_801F9EC4);
/*801F94B0 001F62B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F94B4 001F62B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F94B8 001F62B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F94BC 001F62BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F94C0 001F62C0*/ PPC::Runtime::ASM::blr();
}