//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007D610.hpp"
#include "fn_800ABA6C.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_debug_openSubMenu.hpp"
#include "fn_800ABA6C.hpp"
#include "fn_debug_subMenu_InBetween1.hpp"
#include "fn_debug_subMenu_InBetween1.hpp"
#include "fn_800ABA74.hpp"



void fn_debug_openRace3DMode(PPC::Runtime::GCContext* context)
{
/*800AD97C 000AA77C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AD980 000AA780*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AD984 000AA784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AD988 000AA788*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AD98C 000AA78C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800AD990 000AA790*/ PPC::Runtime::ASM::bl(fn_8007D610);
/*800AD994 000AA794*/ PPC::Runtime::ASM::lis(context->r4, StructWithFuncPtrs_28_HasTheMassiveMaybeCTFunctionalityStructArrayInside @ Get_MemoryOffset_HighBit);
/*800AD998 000AA798*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*800AD99C 000AA79C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructWithFuncPtrs_28_HasTheMassiveMaybeCTFunctionalityStructArrayInside @ Get_MemoryOffset_LowBit);
/*800AD9A0 000AA7A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r4));
/*800AD9A4 000AA7A4*/ PPC::Runtime::ASM::bne(.L_800AD9DC);
/*800AD9A8 000AA7A8*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800AD9AC 000AA7AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800AD9B0 000AA7B0*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*800AD9B4 000AA7B4*/ PPC::Runtime::ASM::lis(context->r4, StructWithFuncPtrs_27_MaybeCTMenuFuctionality @ Get_MemoryOffset_HighBit);
/*800AD9B8 000AA7B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800AD9BC 000AA7BC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructWithFuncPtrs_27_MaybeCTMenuFuctionality @ Get_MemoryOffset_LowBit);
/*800AD9C0 000AA7C0*/ PPC::Runtime::ASM::li(context->r5, -0x3c);
/*800AD9C4 000AA7C4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800AD9C8 000AA7C8*/ PPC::Runtime::ASM::bl(fn_debug_openSubMenu);
/*800AD9CC 000AA7CC*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800AD9D0 000AA7D0*/ PPC::Runtime::ASM::lis(context->r4, fn_debug_subMenu_InBetween1 @ Get_MemoryOffset_HighBit);
/*800AD9D4 000AA7D4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_debug_subMenu_InBetween1 @ Get_MemoryOffset_LowBit);
/*800AD9D8 000AA7D8*/ PPC::Runtime::ASM::bl(fn_800ABA74);
RUNTIME_PPC_JUMP_LABEL(.L_800AD9DC, 0x800AD9DC) //this is a jump label
/*800AD9DC 000AA7DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AD9E0 000AA7E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AD9E4 000AA7E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AD9E8 000AA7E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AD9EC 000AA7EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AD9F0 000AA7F0*/ PPC::Runtime::ASM::blr();
}