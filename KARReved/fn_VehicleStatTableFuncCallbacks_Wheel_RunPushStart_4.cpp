//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_4.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_RunPushStart_4(PPC::Runtime::GCContext* context)
{
/*801FA044 001F6E44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA048 001F6E48*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA04C 001F6E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA050 001F6E50*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_RunPush_4);
/*801FA054 001F6E54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA058 001F6E58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA05C 001F6E5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA060 001F6E60*/ PPC::Runtime::ASM::blr();
}