//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "memset.hpp"
#include "fn_8001F950.hpp"



void fn_8001FB64(PPC::Runtime::GCContext* context)
{
/*8001FB64 0001C964*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8001FB68 0001C968*/ PPC::Runtime::ASM::mflr(context->r0);
/*8001FB6C 0001C96C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001FB70 0001C970*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001FB74 0001C974*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001FB78 0001C978*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xbc);
/*8001FB7C 0001C97C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001FB80 0001C980*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8001FB84 0001C984*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8001FB88 0001C988*/ PPC::Runtime::ASM::li(context->r5, 0x18);
/*8001FB8C 0001C98C*/ PPC::Runtime::ASM::bl(memset);
/*8001FB90 0001C990*/ PPC::Runtime::ASM::bl(fn_8001F950);
/*8001FB94 0001C994*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8001FB98 0001C998*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8001FB9C 0001C99C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001FBA0 0001C9A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001FBA4 0001C9A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8001FBA8 0001C9A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8001FBAC 0001C9AC*/ PPC::Runtime::ASM::blr();
}