//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190ADC.hpp"
#include "fn_80193500.hpp"
#include "fn_8019E6DC.hpp"



void fn_80192B60(PPC::Runtime::GCContext* context)
{
/*80192B60 0018F960*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80192B64 0018F964*/ PPC::Runtime::ASM::mflr(context->r0);
/*80192B68 0018F968*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*80192B6C 0018F96C*/ PPC::Runtime::ASM::li(context->r5, -0x2);
/*80192B70 0018F970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192B74 0018F974*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80192B78 0018F978*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80192B7C 0018F97C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192B80 0018F980*/ PPC::Runtime::ASM::bl(fn_80190ADC);
/*80192B84 0018F984*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192B88 0018F988*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*80192B8C 0018F98C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80192B90 0018F990*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80192B94 0018F994*/ PPC::Runtime::ASM::bl(fn_80193500);
/*80192B98 0018F998*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192B9C 0018F99C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80192BA0 0018F9A0*/ PPC::Runtime::ASM::bl(fn_8019E6DC);
/*80192BA4 0018F9A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192BA8 0018F9A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80192BAC 0018F9AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80192BB0 0018F9B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80192BB4 0018F9B4*/ PPC::Runtime::ASM::blr();
}