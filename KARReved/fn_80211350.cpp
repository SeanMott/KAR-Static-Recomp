//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80207DEC.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_801FED40.hpp"
#include "fn_cDice3d_SetBig.hpp"
#include "fn_801FC398.hpp"
#include "fn_80209CE4.hpp"



void fn_80211350(PPC::Runtime::GCContext* context)
{
/*80211350 0020E150*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80211354 0020E154*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211358 0020E158*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021135C 0020E15C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80211360 0020E160*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80211364 0020E164*/ PPC::Runtime::ASM::bl(fn_80207DEC);
/*80211368 0020E168*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8021136C 0020E16C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80211370 0020E170*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80211374 0020E174*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211378 0020E178*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8021137C 0020E17C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*80211380 0020E180*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*80211384 0020E184*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80211388 0020E188*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021138C 0020E18C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*80211390 0020E190*/ PPC::Runtime::ASM::bl(fn_801FED40);
/*80211394 0020E194*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211398 0020E198*/ PPC::Runtime::ASM::bl(fn_cDice3d_SetBig);
/*8021139C 0020E19C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2550 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802113A0 0020E1A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802113A4 0020E1A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2554 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802113A8 0020E1A8*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*802113AC 0020E1AC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802113B0 0020E1B0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802113B4 0020E1B4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802113B8 0020E1B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802113BC 0020E1BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802113C0 0020E1C0*/ PPC::Runtime::ASM::bl(fn_80209CE4);
/*802113C4 0020E1C4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*802113C8 0020E1C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2554 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802113CC 0020E1CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r31));
/*802113D0 0020E1D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*802113D4 0020E1D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
/*802113D8 0020E1D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802113DC 0020E1DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802113E0 0020E1E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802113E4 0020E1E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802113E8 0020E1E8*/ PPC::Runtime::ASM::blr();
}