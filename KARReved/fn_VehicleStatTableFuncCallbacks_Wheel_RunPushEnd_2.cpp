//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_Run_2.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_RunPushEnd_2(PPC::Runtime::GCContext* context)
{
/*801FA6B0 001F74B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA6B4 001F74B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA6B8 001F74B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA6BC 001F74BC*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_Run_2);
/*801FA6C0 001F74C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA6C4 001F74C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA6C8 001F74C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA6CC 001F74CC*/ PPC::Runtime::ASM::blr();
}