//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_AS_Land.hpp"
#include "fn_AS_Land.hpp"
#include "fn_801A2AA4.hpp"



void fn_801BAFF0(PPC::Runtime::GCContext* context)
{
/*801BAFF0 001B7DF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BAFF4 001B7DF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BAFF8 001B7DF8*/ PPC::Runtime::ASM::lis(context->r4, fn_AS_Land @ Get_MemoryOffset_HighBit);
/*801BAFFC 001B7DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB000 001B7E00*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_AS_Land @ Get_MemoryOffset_LowBit);
/*801BB004 001B7E04*/ PPC::Runtime::ASM::bl(fn_801A2AA4);
/*801BB008 001B7E08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB00C 001B7E0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BB010 001B7E10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BB014 001B7E14*/ PPC::Runtime::ASM::blr();
}