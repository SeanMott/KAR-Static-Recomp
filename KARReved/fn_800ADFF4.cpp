//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800ABA6C.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_debug_openSubMenu.hpp"
#include "fn_800ABA6C.hpp"
#include "fn_800AD410.hpp"
#include "fn_800AD410.hpp"
#include "fn_800ABA74.hpp"



void fn_800ADFF4(PPC::Runtime::GCContext* context)
{
/*800ADFF4 000AADF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800ADFF8 000AADF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ADFFC 000AADFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AE000 000AAE00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AE004 000AAE04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AE008 000AAE08*/ PPC::Runtime::ASM::bne(.L_800AE040);
/*800AE00C 000AAE0C*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800AE010 000AAE10*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800AE014 000AAE14*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*800AE018 000AAE18*/ PPC::Runtime::ASM::lis(context->r4, StructWithStructs_55 @ Get_MemoryOffset_HighBit);
/*800AE01C 000AAE1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800AE020 000AAE20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructWithStructs_55 @ Get_MemoryOffset_LowBit);
/*800AE024 000AAE24*/ PPC::Runtime::ASM::li(context->r5, -0x3c);
/*800AE028 000AAE28*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800AE02C 000AAE2C*/ PPC::Runtime::ASM::bl(fn_debug_openSubMenu);
/*800AE030 000AAE30*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800AE034 000AAE34*/ PPC::Runtime::ASM::lis(context->r4, fn_800AD410 @ Get_MemoryOffset_HighBit);
/*800AE038 000AAE38*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800AD410 @ Get_MemoryOffset_LowBit);
/*800AE03C 000AAE3C*/ PPC::Runtime::ASM::bl(fn_800ABA74);
RUNTIME_PPC_JUMP_LABEL(.L_800AE040, 0x800AE040) //this is a jump label
/*800AE040 000AAE40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AE044 000AAE44*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AE048 000AAE48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AE04C 000AAE4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AE050 000AAE50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AE054 000AAE54*/ PPC::Runtime::ASM::blr();
}