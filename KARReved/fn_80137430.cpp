//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016D5D8.hpp"



void fn_80137430(PPC::Runtime::GCContext* context)
{
/*80137430 00134230*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137434 00134234*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137438 00134238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013743C 0013423C*/ PPC::Runtime::ASM::bl(fn_8016D5D8);
/*80137440 00134240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137444 00134244*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137448 00134248*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013744C 0013424C*/ PPC::Runtime::ASM::blr();
}