//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802599B4.hpp"
#include "fn_802599B4.hpp"
#include "fn_80254D4C.hpp"



void fn_80259988(PPC::Runtime::GCContext* context)
{
/*80259988 00256788*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025998C 0025678C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80259990 00256790*/ PPC::Runtime::ASM::lis(context->r4, fn_802599B4 @ Get_MemoryOffset_HighBit);
/*80259994 00256794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259998 00256798*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802599B4 @ Get_MemoryOffset_LowBit);
/*8025999C 0025679C*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*802599A0 002567A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802599A4 002567A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802599A8 002567A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802599AC 002567AC*/ PPC::Runtime::ASM::blr();
}