//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801B7144(PPC::Runtime::GCContext* context)
{
/*801B7144 001B3F44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B7148 001B3F48*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B714C 001B3F4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7150 001B3F50*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801B7154 001B3F54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B7158 001B3F58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B715C 001B3F5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B7160 001B3F60*/ PPC::Runtime::ASM::blr();
}