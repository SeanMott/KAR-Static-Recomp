//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F8578.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_RailChange_4(PPC::Runtime::GCContext* context)
{
/*801F9D20 001F6B20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9D24 001F6B24*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9D28 001F6B28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9D2C 001F6B2C*/ PPC::Runtime::ASM::bl(fn_801F8578);
/*801F9D30 001F6B30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9D34 001F6B34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9D38 001F6B38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9D3C 001F6B3C*/ PPC::Runtime::ASM::blr();
}