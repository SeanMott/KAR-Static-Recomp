//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025E950.hpp"
#include "fn_8025E950.hpp"
#include "fn_80255438.hpp"



void fn_8025EAA0(PPC::Runtime::GCContext* context)
{
/*8025EAA0 0025B8A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025EAA4 0025B8A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025EAA8 0025B8A8*/ PPC::Runtime::ASM::lis(context->r4, fn_8025E950 @ Get_MemoryOffset_HighBit);
/*8025EAAC 0025B8AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025EAB0 0025B8B0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025E950 @ Get_MemoryOffset_LowBit);
/*8025EAB4 0025B8B4*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025EAB8 0025B8B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025EABC 0025B8BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025EAC0 0025B8C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025EAC4 0025B8C4*/ PPC::Runtime::ASM::blr();
}