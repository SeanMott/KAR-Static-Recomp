//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_80049070(PPC::Runtime::GCContext* context)
{
/*80049070 00045E70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80049074 00045E74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80049078 00045E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004907C 00045E7C*/ PPC::Runtime::ASM::bl(fn_80047844);
/*80049080 00045E80*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80049084 00045E84*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*80049088 00045E88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*8004908C 00045E8C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80049090 00045E90*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80049094 00045E94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80049098 00045E98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004909C 00045E9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800490A0 00045EA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800490A4 00045EA4*/ PPC::Runtime::ASM::blr();
}