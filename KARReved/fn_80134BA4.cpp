//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80158E8C.hpp"



void fn_80134BA4(PPC::Runtime::GCContext* context)
{
/*80134BA4 001319A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80134BA8 001319A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134BAC 001319AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134BB0 001319B0*/ PPC::Runtime::ASM::bl(fn_80158E8C);
/*80134BB4 001319B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134BB8 001319B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134BBC 001319BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134BC0 001319C0*/ PPC::Runtime::ASM::blr();
}