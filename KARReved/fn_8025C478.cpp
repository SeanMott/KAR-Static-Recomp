//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025C478(PPC::Runtime::GCContext* context)
{
/*8025C478 00259278*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025C47C 0025927C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025C480 00259280*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C484 00259284*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C488 00259288*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025C48C 0025928C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025C490 00259290*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025C494 00259294*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C498 00259298*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025C49C 0025929C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025C4A0 002592A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025C4A4 002592A4*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025C4A8 002592A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025C4AC 002592AC*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025C4B0 002592B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2EB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025C4B4 002592B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025C4B8 002592B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2EBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025C4BC 002592BC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025C4C0 002592C0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025C4C4 002592C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025C4C8 002592C8*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025C4CC 002592CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025C4D0 002592D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025C4D4 002592D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025C4D8 002592D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025C4DC 002592DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025C4E0 002592E0*/ PPC::Runtime::ASM::blr();
}