//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_80260688(PPC::Runtime::GCContext* context)
{
/*80260688 0025D488*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8026068C 0025D48C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80260690 0025D490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80260694 0025D494*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80260698 0025D498*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8026069C 0025D49C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802606A0 0025D4A0*/ PPC::Runtime::ASM::bl(fn_80250340);
/*802606A4 0025D4A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802606A8 0025D4A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802606AC 0025D4AC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802606B0 0025D4B0*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*802606B4 0025D4B4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802606B8 0025D4B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802606BC 0025D4BC*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*802606C0 0025D4C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802606C4 0025D4C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802606C8 0025D4C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802606CC 0025D4CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802606D0 0025D4D0*/ PPC::Runtime::ASM::blr();
}