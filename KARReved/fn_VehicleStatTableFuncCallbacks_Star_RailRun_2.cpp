//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_charge_WhileGrindingCheck.hpp"
#include "fn_801F0954.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_RailRun_2(PPC::Runtime::GCContext* context)
{
/*801F06A4 001ED4A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F06A8 001ED4A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F06AC 001ED4AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F06B0 001ED4B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F06B4 001ED4B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F06B8 001ED4B8*/ PPC::Runtime::ASM::bl(fn_charge_WhileGrindingCheck);
/*801F06BC 001ED4BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F06C0 001ED4C0*/ PPC::Runtime::ASM::bne(.L_801F06D0);
/*801F06C4 001ED4C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F06C8 001ED4C8*/ PPC::Runtime::ASM::bl(fn_801F0954);
/*801F06CC 001ED4CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801F06D0, 0x801F06D0) //this is a jump label
/*801F06D0 001ED4D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F06D4 001ED4D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F06D8 001ED4D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F06DC 001ED4DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F06E0 001ED4E0*/ PPC::Runtime::ASM::blr();
}