//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025D068.hpp"
#include "fn_8025D068.hpp"
#include "fn_80255438.hpp"



void fn_8025D1B8(PPC::Runtime::GCContext* context)
{
/*8025D1B8 00259FB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D1BC 00259FBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D1C0 00259FC0*/ PPC::Runtime::ASM::lis(context->r4, fn_8025D068 @ Get_MemoryOffset_HighBit);
/*8025D1C4 00259FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D1C8 00259FC8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025D068 @ Get_MemoryOffset_LowBit);
/*8025D1CC 00259FCC*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025D1D0 00259FD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D1D4 00259FD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D1D8 00259FD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D1DC 00259FDC*/ PPC::Runtime::ASM::blr();
}