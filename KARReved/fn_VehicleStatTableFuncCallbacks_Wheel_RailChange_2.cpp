//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E7154.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_2(PPC::Runtime::GCContext* context)
{
/*801F9CA4 001F6AA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9CA8 001F6AA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9CAC 001F6AAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9CB0 001F6AB0*/ PPC::Runtime::ASM::bl(fn_801E7154);
/*801F9CB4 001F6AB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9CB8 001F6AB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9CBC 001F6ABC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9CC0 001F6AC0*/ PPC::Runtime::ASM::blr();
}