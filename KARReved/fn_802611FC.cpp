//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80261228.hpp"
#include "fn_80261228.hpp"
#include "fn_80254D4C.hpp"



void fn_802611FC(PPC::Runtime::GCContext* context)
{
/*802611FC 0025DFFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80261200 0025E000*/ PPC::Runtime::ASM::mflr(context->r0);
/*80261204 0025E004*/ PPC::Runtime::ASM::lis(context->r4, fn_80261228 @ Get_MemoryOffset_HighBit);
/*80261208 0025E008*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026120C 0025E00C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80261228 @ Get_MemoryOffset_LowBit);
/*80261210 0025E010*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*80261214 0025E014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80261218 0025E018*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8026121C 0025E01C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80261220 0025E020*/ PPC::Runtime::ASM::blr();
}