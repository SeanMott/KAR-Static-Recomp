//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025D260(PPC::Runtime::GCContext* context)
{
/*8025D260 0025A060*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D264 0025A064*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D268 0025A068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D26C 0025A06C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D270 0025A070*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D274 0025A074*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025D278 0025A078*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025D27C 0025A07C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D280 0025A080*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025D284 0025A084*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D288 0025A088*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025D28C 0025A08C*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025D290 0025A090*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025D294 0025A094*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025D298 0025A098*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2EE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025D29C 0025A09C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025D2A0 0025A0A0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2EE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025D2A4 0025A0A4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025D2A8 0025A0A8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025D2AC 0025A0AC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025D2B0 0025A0B0*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025D2B4 0025A0B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D2B8 0025A0B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025D2BC 0025A0BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025D2C0 0025A0C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D2C4 0025A0C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D2C8 0025A0C8*/ PPC::Runtime::ASM::blr();
}