//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_charge_whileGroundedChargingCheck.hpp"
#include "fn_801EF1C8.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_RunPushForward_2(PPC::Runtime::GCContext* context)
{
/*801EF5EC 001EC3EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF5F0 001EC3F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF5F4 001EC3F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF5F8 001EC3F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF5FC 001EC3FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EF600 001EC400*/ PPC::Runtime::ASM::bl(fn_charge_whileGroundedChargingCheck);
/*801EF604 001EC404*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801EF608 001EC408*/ PPC::Runtime::ASM::bne(.L_801EF618);
/*801EF60C 001EC40C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EF610 001EC410*/ PPC::Runtime::ASM::bl(fn_801EF1C8);
/*801EF614 001EC414*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801EF618, 0x801EF618) //this is a jump label
/*801EF618 001EC418*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF61C 001EC41C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EF620 001EC420*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF624 001EC424*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF628 001EC428*/ PPC::Runtime::ASM::blr();
}