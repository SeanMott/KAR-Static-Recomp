//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A93B0.hpp"



void fn_801B3CF4(PPC::Runtime::GCContext* context)
{
/*801B3CF4 001B0AF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B3CF8 001B0AF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B3CFC 001B0AFC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801B3D00 001B0B00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3D04 001B0B04*/ PPC::Runtime::ASM::bl(fn_801A93B0);
/*801B3D08 001B0B08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3D0C 001B0B0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B3D10 001B0B10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B3D14 001B0B14*/ PPC::Runtime::ASM::blr();
}