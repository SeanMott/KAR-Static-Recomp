//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80391B1C.hpp"
#include "fn_80391C70.hpp"



void fn_8039A02C(PPC::Runtime::GCContext* context)
{
/*8039A02C 00396E2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A030 00396E30*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A034 00396E34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A038 00396E38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A03C 00396E3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A040 00396E40*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A044 00396E44*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8039A048 00396E48*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8039A04C 00396E4C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A050 00396E50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A054 00396E54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039A058 00396E58*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A05C 00396E5C*/ PPC::Runtime::ASM::bctrl();
/*8039A060 00396E60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039A064 00396E64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A068 00396E68*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A06C 00396E6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039A070 00396E70*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A074 00396E74*/ PPC::Runtime::ASM::bctrl();
/*8039A078 00396E78*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8039A07C 00396E7C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8039A080 00396E80*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8039A084 00396E84*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*8039A088 00396E88*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8039A08C 00396E8C*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8039A090 00396E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A094 00396E94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A098 00396E98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A09C 00396E9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A0A0 00396EA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A0A4 00396EA4*/ PPC::Runtime::ASM::blr();
}