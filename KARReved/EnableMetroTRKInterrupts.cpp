//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_EnableEXI2Interrupts.hpp"



void EnableMetroTRKInterrupts(PPC::Runtime::GCContext* context)
{
/*803C219C 003BEF9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C21A0 003BEFA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C21A4 003BEFA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C21A8 003BEFA8*/ PPC::Runtime::ASM::bl(fn_EnableEXI2Interrupts);
/*803C21AC 003BEFAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C21B0 003BEFB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C21B4 003BEFB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C21B8 003BEFB8*/ PPC::Runtime::ASM::blr();
}