//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3BC.hpp"



void fn_801C4928(PPC::Runtime::GCContext* context)
{
/*801C4928 001C1728*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C492C 001C172C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4930 001C1730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4934 001C1734*/ PPC::Runtime::ASM::bl(fn_8019F3BC);
/*801C4938 001C1738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C493C 001C173C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4940 001C1740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4944 001C1744*/ PPC::Runtime::ASM::blr();
}