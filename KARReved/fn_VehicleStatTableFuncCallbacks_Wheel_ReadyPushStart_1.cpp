//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F90B8.hpp"
#include "fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_1.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPushStart_1(PPC::Runtime::GCContext* context)
{
/*801F9024 001F5E24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9028 001F5E28*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F902C 001F5E2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9030 001F5E30*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/* 801F9034 001F5E34  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801F9038 001F5E38*/ PPC::Runtime::ASM::beq(.L_801F9044);
/*801F903C 001F5E3C*/ PPC::Runtime::ASM::bl(fn_801F90B8);
/*801F9040 001F5E40*/ PPC::Runtime::ASM::b(.L_801F9048);
RUNTIME_PPC_JUMP_LABEL(.L_801F9044, 0x801F9044) //this is a jump label
/*801F9044 001F5E44*/ PPC::Runtime::ASM::bl(fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_1);
RUNTIME_PPC_JUMP_LABEL(.L_801F9048, 0x801F9048) //this is a jump label
/*801F9048 001F5E48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F904C 001F5E4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9050 001F5E50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9054 001F5E54*/ PPC::Runtime::ASM::blr();
}