//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E3040.hpp"



void fn_801C80A4(PPC::Runtime::GCContext* context)
{
/*801C80A4 001C4EA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C80A8 001C4EA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C80AC 001C4EAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C80B0 001C4EB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C80B4 001C4EB4*/ PPC::Runtime::ASM::bl(fn_801E3040);
/*801C80B8 001C4EB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C80BC 001C4EBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C80C0 001C4EC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C80C4 001C4EC4*/ PPC::Runtime::ASM::blr();
}