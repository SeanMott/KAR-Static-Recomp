//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"



void fn_80190468(PPC::Runtime::GCContext* context)
{
/*80190468 0018D268*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8019046C 0018D26C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80190470 0018D270*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_180559FA8 @ Get_MemoryOffset_HighBit);
/*80190474 0018D274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80190478 0018D278*/ PPC::Runtime::ASM::addi(context->r0, context->r6, STRUCT_BYTE4_COUNT_180559FA8 @ Get_MemoryOffset_LowBit);
/*8019047C 0018D27C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80190480 0018D280*/ PPC::Runtime::ASM::slwi(context->r31, context->r3, 2);
/*80190484 0018D284*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r31);
/*80190488 0018D288*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019048C 0018D28C*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80190490 0018D290*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80190494 0018D294*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80190498 0018D298*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8019049C 0018D29C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801904A0 0018D2A0*/ PPC::Runtime::ASM::bne(.L_801904F8);
/*801904A4 0018D2A4*/ PPC::Runtime::ASM::lis(context->r4, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_HighBit);
/*801904A8 0018D2A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*801904AC 0018D2AC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, StructBudle_RDKirbyDatString_FilenameAndSymbolData @ Get_MemoryOffset_LowBit);
/*801904B0 0018D2B0*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*801904B4 0018D2B4*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*801904B8 0018D2B8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801904BC 0018D2BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801904C0 0018D2C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801904C4 0018D2C4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801904C8 0018D2C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801904CC 0018D2CC*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*801904D0 0018D2D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*801904D4 0018D2D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*801904D8 0018D2D8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r31);
/*801904DC 0018D2DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801904E0 0018D2E0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801904E4 0018D2E4*/ PPC::Runtime::ASM::beq(.L_801904F8);
/*801904E8 0018D2E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801904EC 0018D2EC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801904F0 0018D2F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801904F4 0018D2F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801904F8, 0x801904F8) //this is a jump label
/*801904F8 0018D2F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801904FC 0018D2FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80190500 0018D300*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80190504 0018D304*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80190508 0018D308*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019050C 0018D30C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80190510 0018D310*/ PPC::Runtime::ASM::blr();
}