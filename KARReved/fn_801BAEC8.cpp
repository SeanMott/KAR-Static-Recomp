//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BAF14.hpp"
#include "fn_801BAF14.hpp"
#include "fn_801A2B0C.hpp"



void fn_801BAEC8(PPC::Runtime::GCContext* context)
{
/*801BAEC8 001B7CC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BAECC 001B7CCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BAED0 001B7CD0*/ PPC::Runtime::ASM::lis(context->r4, fn_801BAF14 @ Get_MemoryOffset_HighBit);
/*801BAED4 001B7CD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAED8 001B7CD8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801BAF14 @ Get_MemoryOffset_LowBit);
/*801BAEDC 001B7CDC*/ PPC::Runtime::ASM::bl(fn_801A2B0C);
/*801BAEE0 001B7CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAEE4 001B7CE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BAEE8 001B7CE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BAEEC 001B7CEC*/ PPC::Runtime::ASM::blr();
}