//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F5F24.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_ReadyPush_3(PPC::Runtime::GCContext* context)
{
/*801F9160 001F5F60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9164 001F5F64*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9168 001F5F68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F916C 001F5F6C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4fc, context->r3));
/*801F9170 001F5F70*/ PPC::Runtime::ASM::bl(fn_801F5F24);
/*801F9174 001F5F74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9178 001F5F78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F917C 001F5F7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9180 001F5F80*/ PPC::Runtime::ASM::blr();
}