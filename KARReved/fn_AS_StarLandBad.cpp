//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194240.hpp"
#include "fn_Rider_ActionStateChange.hpp"



void fn_AS_StarLandBad(PPC::Runtime::GCContext* context)
{
/*801ACE40 001A9C40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ACE44 001A9C44*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ACE48 001A9C48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACE4C 001A9C4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ACE50 001A9C50*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801ACE54 001A9C54*/ PPC::Runtime::ASM::bl(fn_80194240);
/*801ACE58 001A9C58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1418 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ACE5C 001A9C5C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AF630 @ Get_MemoryOffset_HighBit);
/*801ACE60 001A9C60*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*801ACE64 001A9C64*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E141C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ACE68 001A9C68*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804AF630 @ Get_MemoryOffset_LowBit);
/*801ACE6C 001A9C6C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801ACE70 001A9C70*/ PPC::Runtime::ASM::lwzx(context->r5, context->r3, context->r0);
/*801ACE74 001A9C74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ACE78 001A9C78*/ PPC::Runtime::ASM::li(context->r4, 0x6b);
/*801ACE7C 001A9C7C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801ACE80 001A9C80*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801ACE84 001A9C84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ACE88 001A9C88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ACE8C 001A9C8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ACE90 001A9C90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ACE94 001A9C94*/ PPC::Runtime::ASM::blr();
}