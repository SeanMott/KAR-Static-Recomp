//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_charge_WhileMidAirChargingCheck.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_FlyPush_2(PPC::Runtime::GCContext* context)
{
/*801EFC9C 001ECA9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EFCA0 001ECAA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EFCA4 001ECAA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EFCA8 001ECAA8*/ PPC::Runtime::ASM::bl(fn_charge_WhileMidAirChargingCheck);
/*801EFCAC 001ECAAC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801EFCB0 001ECAB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EFCB4 001ECAB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EFCB8 001ECAB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EFCBC 001ECABC*/ PPC::Runtime::ASM::blr();
}