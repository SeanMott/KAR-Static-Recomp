//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Run_4.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_4(PPC::Runtime::GCContext* context)
{
/*801FA6F0 001F74F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA6F4 001F74F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA6F8 001F74F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA6FC 001F74FC*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_Run_4);
/*801FA700 001F7500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA704 001F7504*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA708 001F7508*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA70C 001F750C*/ PPC::Runtime::ASM::blr();
}