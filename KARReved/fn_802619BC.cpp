//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027B418.hpp"



void fn_802619BC(PPC::Runtime::GCContext* context)
{
/*802619BC 0025E7BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802619C0 0025E7C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802619C4 0025E7C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802619C8 0025E7C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802619CC 0025E7CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802619D0 0025E7D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802619D4 0025E7D4*/ PPC::Runtime::ASM::bl(fn_8027B418);
/*802619D8 0025E7D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*802619DC 0025E7DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802619E0 0025E7E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*802619E4 0025E7E4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*802619E8 0025E7E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*802619EC 0025E7EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802619F0 0025E7F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802619F4 0025E7F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802619F8 0025E7F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802619FC 0025E7FC*/ PPC::Runtime::ASM::blr();
}