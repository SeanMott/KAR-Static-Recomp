//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C40.hpp"



void fn_801C1F10(PPC::Runtime::GCContext* context)
{
/*801C1F10 001BED10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1F14 001BED14*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1F18 001BED18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1F1C 001BED1C*/ PPC::Runtime::ASM::bl(fn_80199C40);
/*801C1F20 001BED20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1F24 001BED24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1F28 001BED28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1F2C 001BED2C*/ PPC::Runtime::ASM::blr();
}