//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"
#include "fn_801B4E2C.hpp"



void fn_801B5070(PPC::Runtime::GCContext* context)
{
/*801B5070 001B1E70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B5074 001B1E74*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B5078 001B1E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B507C 001B1E7C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B5080 001B1E80*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B5084 001B1E84*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801B5088 001B1E88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B508C 001B1E8C*/ PPC::Runtime::ASM::bl(fn_801B4E2C);
/*801B5090 001B1E90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B5094 001B1E94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B5098 001B1E98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B509C 001B1E9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B50A0 001B1EA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B50A4 001B1EA4*/ PPC::Runtime::ASM::blr();
}