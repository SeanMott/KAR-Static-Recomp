//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E1DC0.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_Ready_3(PPC::Runtime::GCContext* context)
{
/*801F8F24 001F5D24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8F28 001F5D28*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8F2C 001F5D2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8F30 001F5D30*/ PPC::Runtime::ASM::bl(fn_801E1DC0);
/*801F8F34 001F5D34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8F38 001F5D38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8F3C 001F5D3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8F40 001F5D40*/ PPC::Runtime::ASM::blr();
}