//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_ability_ChangeSpeedometerDesign.hpp"
#include "fn_801B383C.hpp"
#include "fn_801B37F8.hpp"
#include "fn_801B383C.hpp"
#include "fn_801B37F8.hpp"
#include "fn_ability_Spike_giveHat.hpp"



void fn_ability_Spike(PPC::Runtime::GCContext* context)
{
/*801B3688 001B0488*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B368C 001B048C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B3690 001B0490*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E15E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B3694 001B0494*/ PPC::Runtime::ASM::li(context->r4, 0x3d);
/*801B3698 001B0498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B369C 001B049C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B36A0 001B04A0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B36A4 001B04A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E15EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B36A8 001B04A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B36AC 001B04AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B36B0 001B04B0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B36B4 001B04B4*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B36B8 001B04B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B36BC 001B04BC*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*801B36C0 001B04C0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801B36C4 001B04C4*/ PPC::Runtime::ASM::bl(fn_ability_ChangeSpeedometerDesign);
/*801B36C8 001B04C8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801B36CC 001B04CC*/ PPC::Runtime::ASM::lis(context->r4, fn_801B383C @ Get_MemoryOffset_HighBit);
/*801B36D0 001B04D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801B36D4 001B04D4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801B36D8 001B04D8*/ PPC::Runtime::ASM::lis(context->r3, fn_801B37F8 @ Get_MemoryOffset_HighBit);
/*801B36DC 001B04DC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801B383C @ Get_MemoryOffset_LowBit);
/*801B36E0 001B04E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B36E4 001B04E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801B37F8 @ Get_MemoryOffset_LowBit);
/*801B36E8 001B04E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B36EC 001B04EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9fc, context->r31));
/*801B36F0 001B04F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f8, context->r31));
/*801B36F4 001B04F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801B36F8 001B04F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r31));
/*801B36FC 001B04FC*/ PPC::Runtime::ASM::bl(fn_ability_Spike_giveHat);
/*801B3700 001B0500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B3704 001B0504*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B3708 001B0508*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B370C 001B050C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B3710 001B0510*/ PPC::Runtime::ASM::blr();
}