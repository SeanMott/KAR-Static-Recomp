//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2818.hpp"



void fn_801A4924(PPC::Runtime::GCContext* context)
{
/*801A4924 001A1724*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A4928 001A1728*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A492C 001A172C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4930 001A1730*/ PPC::Runtime::ASM::bl(fn_801A2818);
/*801A4934 001A1734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4938 001A1738*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A493C 001A173C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A4940 001A1740*/ PPC::Runtime::ASM::blr();
}