//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B8424.hpp"



void fn_801BAFA8(PPC::Runtime::GCContext* context)
{
/*801BAFA8 001B7DA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BAFAC 001B7DAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BAFB0 001B7DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAFB4 001B7DB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801BAFB8 001B7DB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*801BAFBC 001B7DBC*/ PPC::Runtime::ASM::bl(fn_801B8424);
/*801BAFC0 001B7DC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BAFC4 001B7DC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BAFC8 001B7DC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BAFCC 001B7DCC*/ PPC::Runtime::ASM::blr();
}