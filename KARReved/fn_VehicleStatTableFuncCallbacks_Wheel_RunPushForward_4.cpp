//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_4.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_RunPushForward_4(PPC::Runtime::GCContext* context)
{
/*801FA5C0 001F73C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA5C4 001F73C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA5C8 001F73C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA5CC 001F73CC*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_4);
/*801FA5D0 001F73D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA5D4 001F73D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA5D8 001F73D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA5DC 001F73DC*/ PPC::Runtime::ASM::blr();
}