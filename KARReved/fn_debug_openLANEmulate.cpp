//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800ABA6C.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_debug_openSubMenu.hpp"
#include "fn_800ABA6C.hpp"
#include "fn_800AFD78.hpp"
#include "fn_800AFD78.hpp"
#include "fn_800ABA74.hpp"



void fn_debug_openLANEmulate(PPC::Runtime::GCContext* context)
{
/*800ADD20 000AAB20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800ADD24 000AAB24*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ADD28 000AAB28*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800ADD2C 000AAB2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ADD30 000AAB30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800ADD34 000AAB34*/ PPC::Runtime::ASM::bne(.L_800ADD6C);
/*800ADD38 000AAB38*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800ADD3C 000AAB3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800ADD40 000AAB40*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*800ADD44 000AAB44*/ PPC::Runtime::ASM::lis(context->r4, StructWithFuncPtrs_38_PotenciallyLANMenuStuffForEmulatingLan @ Get_MemoryOffset_HighBit);
/*800ADD48 000AAB48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800ADD4C 000AAB4C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructWithFuncPtrs_38_PotenciallyLANMenuStuffForEmulatingLan @ Get_MemoryOffset_LowBit);
/*800ADD50 000AAB50*/ PPC::Runtime::ASM::li(context->r5, -0x3c);
/*800ADD54 000AAB54*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800ADD58 000AAB58*/ PPC::Runtime::ASM::bl(fn_debug_openSubMenu);
/*800ADD5C 000AAB5C*/ PPC::Runtime::ASM::bl(fn_800ABA6C);
/*800ADD60 000AAB60*/ PPC::Runtime::ASM::lis(context->r4, fn_800AFD78 @ Get_MemoryOffset_HighBit);
/*800ADD64 000AAB64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800AFD78 @ Get_MemoryOffset_LowBit);
/*800ADD68 000AAB68*/ PPC::Runtime::ASM::bl(fn_800ABA74);
RUNTIME_PPC_JUMP_LABEL(.L_800ADD6C, 0x800ADD6C) //this is a jump label
/*800ADD6C 000AAB6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ADD70 000AAB70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800ADD74 000AAB74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800ADD78 000AAB78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800ADD7C 000AAB7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800ADD80 000AAB80*/ PPC::Runtime::ASM::blr();
}