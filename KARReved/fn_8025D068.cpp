//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_8025D068(PPC::Runtime::GCContext* context)
{
/*8025D068 00259E68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D06C 00259E6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D070 00259E70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D074 00259E74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D078 00259E78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8025D07C 00259E7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025D080 00259E80*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025D084 00259E84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2ED8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025D088 00259E88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D08C 00259E8C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2EDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025D090 00259E90*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8025D094 00259E94*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025D098 00259E98*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025D09C 00259E9C*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025D0A0 00259EA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D0A4 00259EA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D0A8 00259EA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D0AC 00259EAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D0B0 00259EB0*/ PPC::Runtime::ASM::blr();
}