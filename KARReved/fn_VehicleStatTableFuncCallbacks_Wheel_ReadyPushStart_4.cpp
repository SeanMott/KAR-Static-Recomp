//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_4.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_4(PPC::Runtime::GCContext* context)
{
/*801F9098 001F5E98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F909C 001F5E9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F90A0 001F5EA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F90A4 001F5EA4*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_4);
/*801F90A8 001F5EA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F90AC 001F5EAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F90B0 001F5EB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F90B4 001F5EB4*/ PPC::Runtime::ASM::blr();
}