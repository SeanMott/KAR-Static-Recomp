//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C1DB8.hpp"



void fn_801C1F70(PPC::Runtime::GCContext* context)
{
/*801C1F70 001BED70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1F74 001BED74*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1F78 001BED78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1F7C 001BED7C*/ PPC::Runtime::ASM::bl(fn_801C1DB8);
/*801C1F80 001BED80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1F84 001BED84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1F88 001BED88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1F8C 001BED8C*/ PPC::Runtime::ASM::blr();
}