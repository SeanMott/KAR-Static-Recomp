//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027A0B8.hpp"
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_ability_ChangeSpeedometerDesign.hpp"
#include "fn_ability_Sleep_giveHat.hpp"
#include "fn_801A7BDC.hpp"
#include "fn_801B1084.hpp"
#include "fn_801B103C.hpp"
#include "fn_801B1084.hpp"
#include "fn_801B103C.hpp"



void fn_ability_Sleep(PPC::Runtime::GCContext* context)
{
/*801B0BF0 001AD9F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0BF4 001AD9F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B0BF8 001AD9F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0BFC 001AD9FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B0C00 001ADA00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B0C04 001ADA04*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801B0C08 001ADA08*/ PPC::Runtime::ASM::bl(fn_8027A0B8);
/*801B0C0C 001ADA0C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E14C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B0C10 001ADA10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B0C14 001ADA14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E14CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B0C18 001ADA18*/ PPC::Runtime::ASM::li(context->r4, 0x35);
/*801B0C1C 001ADA1C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B0C20 001ADA20*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B0C24 001ADA24*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B0C28 001ADA28*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B0C2C 001ADA2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B0C30 001ADA30*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801B0C34 001ADA34*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801B0C38 001ADA38*/ PPC::Runtime::ASM::bl(fn_ability_ChangeSpeedometerDesign);
/*801B0C3C 001ADA3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B0C40 001ADA40*/ PPC::Runtime::ASM::bl(fn_ability_Sleep_giveHat);
/*801B0C44 001ADA44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B0C48 001ADA48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801B0C4C 001ADA4C*/ PPC::Runtime::ASM::bl(fn_801A7BDC);
/*801B0C50 001ADA50*/ PPC::Runtime::ASM::lis(context->r4, fn_801B1084 @ Get_MemoryOffset_HighBit);
/*801B0C54 001ADA54*/ PPC::Runtime::ASM::lis(context->r3, fn_801B103C @ Get_MemoryOffset_HighBit);
/*801B0C58 001ADA58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801B1084 @ Get_MemoryOffset_LowBit);
/*801B0C5C 001ADA5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r31));
/*801B0C60 001ADA60*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801B103C @ Get_MemoryOffset_LowBit);
/*801B0C64 001ADA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r31));
/*801B0C68 001ADA68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B0C6C 001ADA6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0C70 001ADA70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B0C74 001ADA74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B0C78 001ADA78*/ PPC::Runtime::ASM::blr();
}