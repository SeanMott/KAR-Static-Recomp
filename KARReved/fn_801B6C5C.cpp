//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B6DC0.hpp"



void fn_801B6C5C(PPC::Runtime::GCContext* context)
{
/*801B6C5C 001B3A5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6C60 001B3A60*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6C64 001B3A64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6C68 001B3A68*/ PPC::Runtime::ASM::bl(fn_801B6DC0);
/*801B6C6C 001B3A6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6C70 001B3A70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6C74 001B3A74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6C78 001B3A78*/ PPC::Runtime::ASM::blr();
}