//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80078D58.hpp"



void fn_800AFC1C(PPC::Runtime::GCContext* context)
{
/*800AFC1C 000ACA1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AFC20 000ACA20*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AFC24 000ACA24*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AFC28 000ACA28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFC2C 000ACA2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AFC30 000ACA30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800AFC34 000ACA34*/ PPC::Runtime::ASM::bne(.L_800AFC80);
/*800AFC38 000ACA38*/ PPC::Runtime::ASM::li(context->r3, 0x2710);
/*800AFC3C 000ACA3C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800AFC40 000ACA40*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*800AFC44 000ACA44*/ PPC::Runtime::ASM::li(context->r3, 0x100);
/*800AFC48 000ACA48*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*800AFC4C 000ACA4C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800AFC50 000ACA50*/ PPC::Runtime::ASM::clrlwi(context->r30, context->r3, 24);
/*800AFC54 000ACA54*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800AFC58 000ACA58*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800AFC5C 000ACA5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800AFC60 000ACA60*/ PPC::Runtime::ASM::bl(fn_80078D58);
/*800AFC64 000ACA64*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "MemCardTestShi" Get_MemoryOffset_HighBit);
/*800AFC68 000ACA68*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800AFC6C 000ACA6C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "MemCardTestShi" Get_MemoryOffset_LowBit);
/*800AFC70 000ACA70*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800AFC74 000ACA74*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800AFC78 000ACA78*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800AFC7C 000ACA7C*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_800AFC80, 0x800AFC80) //this is a jump label
/*800AFC80 000ACA80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AFC84 000ACA84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AFC88 000ACA88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800AFC8C 000ACA8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800AFC90 000ACA90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AFC94 000ACA94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AFC98 000ACA98*/ PPC::Runtime::ASM::blr();
}