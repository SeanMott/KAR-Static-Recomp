//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006ADA4.hpp"



void fn_801D633C(PPC::Runtime::GCContext* context)
{
/*801D633C 001D313C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D6340 001D3140*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D6344 001D3144*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc8);
/*801D6348 001D3148*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D634C 001D314C*/ PPC::Runtime::ASM::bl(fn_8006ADA4);
/*801D6350 001D3150*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D6354 001D3154*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D6358 001D3158*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D635C 001D315C*/ PPC::Runtime::ASM::blr();
}