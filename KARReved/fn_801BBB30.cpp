//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BAF14.hpp"
#include "fn_801BAF14.hpp"
#include "fn_801A2B0C.hpp"



void fn_801BBB30(PPC::Runtime::GCContext* context)
{
/*801BBB30 001B8930*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BBB34 001B8934*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BBB38 001B8938*/ PPC::Runtime::ASM::lis(context->r4, fn_801BAF14 @ Get_MemoryOffset_HighBit);
/*801BBB3C 001B893C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BBB40 001B8940*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801BAF14 @ Get_MemoryOffset_LowBit);
/*801BBB44 001B8944*/ PPC::Runtime::ASM::bl(fn_801A2B0C);
/*801BBB48 001B8948*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BBB4C 001B894C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BBB50 001B8950*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BBB54 001B8954*/ PPC::Runtime::ASM::blr();
}