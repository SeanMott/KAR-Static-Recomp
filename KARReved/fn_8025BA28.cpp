//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_8025BA28(PPC::Runtime::GCContext* context)
{
/*8025BA28 00258828*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025BA2C 0025882C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025BA30 00258830*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BA34 00258834*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BA38 00258838*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8025BA3C 0025883C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025BA40 00258840*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025BA44 00258844*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025BA48 00258848*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025BA4C 0025884C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025BA50 00258850*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8025BA54 00258854*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025BA58 00258858*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025BA5C 0025885C*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025BA60 00258860*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025BA64 00258864*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025BA68 00258868*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025BA6C 0025886C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025BA70 00258870*/ PPC::Runtime::ASM::blr();
}