//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_8021A294(PPC::Runtime::GCContext* context)
{
/*8021A294 00217094*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021A298 00217098*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021A29C 0021709C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021A2A0 002170A0*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*8021A2A4 002170A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021A2A8 002170A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021A2AC 002170AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021A2B0 002170B0*/ PPC::Runtime::ASM::blr();
}