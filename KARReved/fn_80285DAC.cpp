//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80285DAC(PPC::Runtime::GCContext* context)
{
/*80285DAC 00282BAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80285DB0 00282BB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80285DB4 00282BB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80285DB8 00282BB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80285DBC 00282BBC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80285DC0 00282BC0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80285DC4 00282BC4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80285DC8 00282BC8*/ PPC::Runtime::ASM::beq(.L_80285F7C);
/*80285DCC 00282BCC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BBF98 @ Get_MemoryOffset_HighBit);
/*80285DD0 00282BD0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x60);
/*80285DD4 00282BD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BBF98 @ Get_MemoryOffset_LowBit);
/*80285DD8 00282BD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80285DDC 00282BDC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*80285DE0 00282BE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80285DE4 00282BE4*/ PPC::Runtime::ASM::beq(.L_80285E6C);
/*80285DE8 00282BE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F61C4 @ Get_MemoryOffset_HighBit);
/*80285DEC 00282BEC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x60);
/*80285DF0 00282BF0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F61C4 @ Get_MemoryOffset_LowBit);
/*80285DF4 00282BF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80285DF8 00282BF8*/ PPC::Runtime::ASM::beq(.L_80285E6C);
/*80285DFC 00282BFC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6278 @ Get_MemoryOffset_HighBit);
/*80285E00 00282C00*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x7c);
/*80285E04 00282C04*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6278 @ Get_MemoryOffset_LowBit);
/*80285E08 00282C08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80285E0C 00282C0C*/ PPC::Runtime::ASM::beq(.L_80285E30);
/*80285E10 00282C10*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80285E14 00282C14*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80285E18 00282C18*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*80285E1C 00282C1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80285E20 00282C20*/ PPC::Runtime::ASM::beq(.L_80285E30);
/*80285E24 00282C24*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80285E28 00282C28*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*80285E2C 00282C2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80285E30, 0x80285E30) //this is a jump label
/*80285E30 00282C30*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x60);
/*80285E34 00282C34*/ PPC::Runtime::ASM::beq(.L_80285E6C);
/*80285E38 00282C38*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC184 @ Get_MemoryOffset_HighBit);
/*80285E3C 00282C3C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x60);
/*80285E40 00282C40*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC184 @ Get_MemoryOffset_LowBit);
/*80285E44 00282C44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80285E48 00282C48*/ PPC::Runtime::ASM::beq(.L_80285E6C);
/*80285E4C 00282C4C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC15C @ Get_MemoryOffset_HighBit);
/*80285E50 00282C50*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x60);
/*80285E54 00282C54*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC15C @ Get_MemoryOffset_LowBit);
/*80285E58 00282C58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80285E5C 00282C5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80285E60 00282C60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80285E64 00282C64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80285E68 00282C68*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80285E6C, 0x80285E6C) //this is a jump label
/*80285E6C 00282C6C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x50);
/*80285E70 00282C70*/ PPC::Runtime::ASM::beq(.L_80285E94);
/*80285E74 00282C74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*80285E78 00282C78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80285E7C 00282C7C*/ PPC::Runtime::ASM::beq(.L_80285E94);
/*80285E80 00282C80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80285E84 00282C84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80285E88 00282C88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80285E8C 00282C8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80285E90 00282C90*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80285E94, 0x80285E94) //this is a jump label
/*80285E94 00282C94*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80285E98 00282C98*/ PPC::Runtime::ASM::beq(.L_80285F58);
/*80285E9C 00282C9C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F6F70 @ Get_MemoryOffset_HighBit);
/*80285EA0 00282CA0*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x38);
/*80285EA4 00282CA4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F6F70 @ Get_MemoryOffset_LowBit);
/*80285EA8 00282CA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80285EAC 00282CAC*/ PPC::Runtime::ASM::beq(.L_80285EE0);
/*80285EB0 00282CB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*80285EB4 00282CB4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80285EB8 00282CB8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*80285EBC 00282CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80285EC0 00282CC0*/ PPC::Runtime::ASM::beq(.L_80285EE0);
/*80285EC4 00282CC4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*80285EC8 00282CC8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*80285ECC 00282CCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80285ED0 00282CD0*/ PPC::Runtime::ASM::beq(.L_80285EE0);
/*80285ED4 00282CD4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*80285ED8 00282CD8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*80285EDC 00282CDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80285EE0, 0x80285EE0) //this is a jump label
/*80285EE0 00282CE0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80285EE4 00282CE4*/ PPC::Runtime::ASM::beq(.L_80285F58);
/*80285EE8 00282CE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*80285EEC 00282CEC*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*80285EF0 00282CF0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*80285EF4 00282CF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80285EF8 00282CF8*/ PPC::Runtime::ASM::beq(.L_80285F1C);
/*80285EFC 00282CFC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80285F00 00282D00*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80285F04 00282D04*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*80285F08 00282D08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80285F0C 00282D0C*/ PPC::Runtime::ASM::beq(.L_80285F1C);
/*80285F10 00282D10*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80285F14 00282D14*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*80285F18 00282D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80285F1C, 0x80285F1C) //this is a jump label
/*80285F1C 00282D1C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80285F20 00282D20*/ PPC::Runtime::ASM::beq(.L_80285F58);
/*80285F24 00282D24*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*80285F28 00282D28*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80285F2C 00282D2C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*80285F30 00282D30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80285F34 00282D34*/ PPC::Runtime::ASM::beq(.L_80285F58);
/*80285F38 00282D38*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*80285F3C 00282D3C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*80285F40 00282D40*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*80285F44 00282D44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80285F48 00282D48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80285F4C 00282D4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80285F50 00282D50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80285F54 00282D54*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80285F58, 0x80285F58) //this is a jump label
/*80285F58 00282D58*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80285F5C 00282D5C*/ PPC::Runtime::ASM::beq(.L_80285F6C);
/*80285F60 00282D60*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*80285F64 00282D64*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*80285F68 00282D68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80285F6C, 0x80285F6C) //this is a jump label
/*80285F6C 00282D6C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80285F70 00282D70*/ PPC::Runtime::ASM::ble(.L_80285F7C);
/*80285F74 00282D74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80285F78 00282D78*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80285F7C, 0x80285F7C) //this is a jump label
/*80285F7C 00282D7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80285F80 00282D80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80285F84 00282D84*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80285F88 00282D88*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80285F8C 00282D8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80285F90 00282D90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80285F94 00282D94*/ PPC::Runtime::ASM::blr();
}