//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_2.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_2(PPC::Runtime::GCContext* context)
{
/*801F9058 001F5E58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F905C 001F5E5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9060 001F5E60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9064 001F5E64*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_2);
/*801F9068 001F5E68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F906C 001F5E6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9070 001F5E70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9074 001F5E74*/ PPC::Runtime::ASM::blr();
}