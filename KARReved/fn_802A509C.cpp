//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802A51E4.hpp"



void fn_802A509C(PPC::Runtime::GCContext* context)
{
/*802A509C 002A1E9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A50A0 002A1EA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A50A4 002A1EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A50A8 002A1EA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A50AC 002A1EAC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A50B0 002A1EB0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A50B4 002A1EB4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A50B8 002A1EB8*/ PPC::Runtime::ASM::beq(.L_802A51C8);
/*802A50BC 002A1EBC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C3764 @ Get_MemoryOffset_HighBit);
/*802A50C0 002A1EC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3d4);
/*802A50C4 002A1EC4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804C3764 @ Get_MemoryOffset_LowBit);
/*802A50C8 002A1EC8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A50CC 002A1ECC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A50D0 002A1ED0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x10);
/*802A50D4 002A1ED4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A50D8 002A1ED8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A50DC 002A1EDC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802A50E0 002A1EE0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A50E4 002A1EE4*/ PPC::Runtime::ASM::bl(fn_802A51E4);
/*802A50E8 002A1EE8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A50EC 002A1EEC*/ PPC::Runtime::ASM::beq(.L_802A51B8);
/*802A50F0 002A1EF0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802A50F4 002A1EF4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A50F8 002A1EF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802A50FC 002A1EFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A5100 002A1F00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A5104 002A1F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5108 002A1F08*/ PPC::Runtime::ASM::beq(.L_802A512C);
/*802A510C 002A1F0C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A5110 002A1F10*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A5114 002A1F14*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A5118 002A1F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802A511C 002A1F1C*/ PPC::Runtime::ASM::beq(.L_802A512C);
/*802A5120 002A1F20*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A5124 002A1F24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A5128 002A1F28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A512C, 0x802A512C) //this is a jump label
/*802A512C 002A1F2C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A5130 002A1F30*/ PPC::Runtime::ASM::beq(.L_802A51A4);
/*802A5134 002A1F34*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A5138 002A1F38*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802A513C 002A1F3C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A5140 002A1F40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5144 002A1F44*/ PPC::Runtime::ASM::beq(.L_802A5168);
/*802A5148 002A1F48*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A514C 002A1F4C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A5150 002A1F50*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A5154 002A1F54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802A5158 002A1F58*/ PPC::Runtime::ASM::beq(.L_802A5168);
/*802A515C 002A1F5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A5160 002A1F60*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A5164 002A1F64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A5168, 0x802A5168) //this is a jump label
/*802A5168 002A1F68*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A516C 002A1F6C*/ PPC::Runtime::ASM::beq(.L_802A51A4);
/*802A5170 002A1F70*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A5174 002A1F74*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A5178 002A1F78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A517C 002A1F7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5180 002A1F80*/ PPC::Runtime::ASM::beq(.L_802A51A4);
/*802A5184 002A1F84*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A5188 002A1F88*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802A518C 002A1F8C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A5190 002A1F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5194 002A1F94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5198 002A1F98*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A519C 002A1F9C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A51A0 002A1FA0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A51A4, 0x802A51A4) //this is a jump label
/*802A51A4 002A1FA4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A51A8 002A1FA8*/ PPC::Runtime::ASM::beq(.L_802A51B8);
/*802A51AC 002A1FAC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A51B0 002A1FB0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A51B4 002A1FB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A51B8, 0x802A51B8) //this is a jump label
/*802A51B8 002A1FB8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A51BC 002A1FBC*/ PPC::Runtime::ASM::ble(.L_802A51C8);
/*802A51C0 002A1FC0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A51C4 002A1FC4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A51C8, 0x802A51C8) //this is a jump label
/*802A51C8 002A1FC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A51CC 002A1FCC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A51D0 002A1FD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A51D4 002A1FD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A51D8 002A1FD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A51DC 002A1FDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A51E0 002A1FE0*/ PPC::Runtime::ASM::blr();
}