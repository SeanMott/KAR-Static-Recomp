//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801311FC.hpp"
#include "fn_80059520.hpp"



void fn_8014D050(PPC::Runtime::GCContext* context)
{
/*8014D050 00149E50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014D054 00149E54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014D058 00149E58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014D05C 00149E5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014D060 00149E60*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014D064 00149E64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014D068 00149E68*/ PPC::Runtime::ASM::bl(fn_801311FC);
/*8014D06C 00149E6C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1200 @ Get_MemoryOffset_HighBit);
/*8014D070 00149E70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014D074 00149E74*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1200 @ Get_MemoryOffset_LowBit);
/*8014D078 00149E78*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8014D07C 00149E7C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x414);
/*8014D080 00149E80*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8014D084 00149E84*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8014D088 00149E88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014D08C 00149E8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014D090 00149E90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014D094 00149E94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014D098 00149E98*/ PPC::Runtime::ASM::blr();
}