//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_8037B33C.hpp"
#include "fn_802EFFB8.hpp"



void fn_802FCE0C(PPC::Runtime::GCContext* context)
{
/*802FCE0C 002F9C0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FCE10 002F9C10*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FCE14 002F9C14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FCE18 002F9C18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FCE1C 002F9C1C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FCE20 002F9C20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802FCE24 002F9C24  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FCE28 002F9C28*/ PPC::Runtime::ASM::beq(.L_802FCF98);
/*802FCE2C 002F9C2C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D9760 @ Get_MemoryOffset_HighBit);
/*802FCE30 002F9C30*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa8);
/*802FCE34 002F9C34*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D9760 @ Get_MemoryOffset_LowBit);
/*802FCE38 002F9C38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FCE3C 002F9C3C*/ PPC::Runtime::ASM::beq(.L_802FCE88);
/*802FCE40 002F9C40*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802FCE44 002F9C44*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802FCE48 002F9C48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r30));
/*802FCE4C 002F9C4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r30));
/*802FCE50 002F9C50*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802FCE54 002F9C54*/ PPC::Runtime::ASM::beq(.L_802FCE60);
/*802FCE58 002F9C58*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FCE5C 002F9C5C*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802FCE60, 0x802FCE60) //this is a jump label
/*802FCE60 002F9C60*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa8);
/*802FCE64 002F9C64*/ PPC::Runtime::ASM::beq(.L_802FCE88);
/*802FCE68 002F9C68*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802FCE6C 002F9C6C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa8);
/*802FCE70 002F9C70*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802FCE74 002F9C74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r30));
/*802FCE78 002F9C78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r30));
/*802FCE7C 002F9C7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FCE80 002F9C80*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FCE84 002F9C84*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FCE88, 0x802FCE88) //this is a jump label
/*802FCE88 002F9C88*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x5c);
/*802FCE8C 002F9C8C*/ PPC::Runtime::ASM::beq(.L_802FCED0);
/*802FCE90 002F9C90*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*802FCE94 002F9C94*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*802FCE98 002F9C98*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*802FCE9C 002F9C9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FCEA0 002F9CA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*802FCEA4 002F9CA4*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*802FCEA8 002F9CA8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x5c);
/*802FCEAC 002F9CAC*/ PPC::Runtime::ASM::beq(.L_802FCED0);
/*802FCEB0 002F9CB0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*802FCEB4 002F9CB4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*802FCEB8 002F9CB8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*802FCEBC 002F9CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*802FCEC0 002F9CC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*802FCEC4 002F9CC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FCEC8 002F9CC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FCECC 002F9CCC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FCED0, 0x802FCED0) //this is a jump label
/*802FCED0 002F9CD0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FCED4 002F9CD4*/ PPC::Runtime::ASM::beq(.L_802FCF88);
/*802FCED8 002F9CD8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FCEDC 002F9CDC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FCEE0 002F9CE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FCEE4 002F9CE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FCEE8 002F9CE8*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FCEEC 002F9CEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FCEF0 002F9CF0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FCEF4 002F9CF4*/ PPC::Runtime::ASM::bctrl();
/*802FCEF8 002F9CF8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FCEFC 002F9CFC*/ PPC::Runtime::ASM::beq(.L_802FCF48);
/*802FCF00 002F9D00*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FCF04 002F9D04*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FCF08 002F9D08*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FCF0C 002F9D0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FCF10 002F9D10*/ PPC::Runtime::ASM::beq(.L_802FCF48);
/*802FCF14 002F9D14*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FCF18 002F9D18*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FCF1C 002F9D1C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FCF20 002F9D20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FCF24 002F9D24*/ PPC::Runtime::ASM::beq(.L_802FCF48);
/*802FCF28 002F9D28*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FCF2C 002F9D2C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FCF30 002F9D30*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FCF34 002F9D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FCF38 002F9D38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FCF3C 002F9D3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FCF40 002F9D40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FCF44 002F9D44*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FCF48, 0x802FCF48) //this is a jump label
/*802FCF48 002F9D48*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FCF4C 002F9D4C*/ PPC::Runtime::ASM::beq(.L_802FCF88);
/*802FCF50 002F9D50*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FCF54 002F9D54*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FCF58 002F9D58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FCF5C 002F9D5C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FCF60 002F9D60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FCF64 002F9D64*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FCF68 002F9D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FCF6C 002F9D6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FCF70 002F9D70*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FCF74 002F9D74*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FCF78 002F9D78*/ PPC::Runtime::ASM::beq(.L_802FCF88);
/*802FCF7C 002F9D7C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FCF80 002F9D80*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FCF84 002F9D84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FCF88, 0x802FCF88) //this is a jump label
/*802FCF88 002F9D88*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FCF8C 002F9D8C*/ PPC::Runtime::ASM::ble(.L_802FCF98);
/*802FCF90 002F9D90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FCF94 002F9D94*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FCF98, 0x802FCF98) //this is a jump label
/*802FCF98 002F9D98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FCF9C 002F9D9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FCFA0 002F9DA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FCFA4 002F9DA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FCFA8 002F9DA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FCFAC 002F9DAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FCFB0 002F9DB0*/ PPC::Runtime::ASM::blr();
}