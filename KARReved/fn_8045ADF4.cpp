//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803E64EC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_803E5B68.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_CARDFreeBlocks.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"
#include "fn_8045C87C.hpp"
#include "fn_8045C7D4.hpp"
#include "fn_8045BC18.hpp"
#include "fn_8045BC18.hpp"
#include "fn_8045C7D4.hpp"
#include "fn_8045BC08.hpp"
#include "fn_8045C7D4.hpp"
#include "fn_8045BC18.hpp"
#include "fn_8045BC18.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_80453080.hpp"
#include "fn_804534C4.hpp"
#include "fn_8045360C.hpp"
#include "fn_8045379C.hpp"
#include "fn_8045B9BC.hpp"



void fn_8045ADF4(PPC::Runtime::GCContext* context)
{
/*8045ADF4 00457BF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8045ADF8 00457BF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045ADFC 00457BFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8045AE00 00457C00*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8045AE04 00457C04*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*8045AE08 00457C08*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8045AE0C 00457C0C*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045AE10 00457C10*/ PPC::Runtime::ASM::mulli(context->r0, context->r26, 0x1c);
/*8045AE14 00457C14*/ PPC::Runtime::ASM::lis(context->r7, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*8045AE18 00457C18*/ PPC::Runtime::ASM::addi(context->r6, context->r5, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045AE1C 00457C1C*/ PPC::Runtime::ASM::mr(context->r22, context->r4);
/*8045AE20 00457C20*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r0);
/*8045AE24 00457C24*/ PPC::Runtime::ASM::addis(context->r4, context->r6, 0x1);
/*8045AE28 00457C28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x608, context->r5));
/*8045AE2C 00457C2C*/ PPC::Runtime::ASM::addi(context->r31, context->r7, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*8045AE30 00457C30*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8045AE34 00457C34*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8045AE38 00457C38*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x2a00);
/*8045AE3C 00457C3C*/ PPC::Runtime::ASM::bl(fn_803E64EC);
/* 8045AE40 00457C40  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8045AE44 00457C44*/ PPC::Runtime::ASM::beq(.L_8045AE6C);
/*8045AE48 00457C48*/ PPC::Runtime::ASM::cmpwi(context->r28, -0x6);
/*8045AE4C 00457C4C*/ PPC::Runtime::ASM::beq(.L_8045AE6C);
/*8045AE50 00457C50*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8045AE54 00457C54*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x178);
/*8045AE58 00457C58*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045AE5C 00457C5C*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045AE60 00457C60*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8045AE64 00457C64*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*8045AE68 00457C68*/ PPC::Runtime::ASM::b(.L_8045AF08);
RUNTIME_PPC_JUMP_LABEL(.L_8045AE6C, 0x8045AE6C) //this is a jump label
/*8045AE6C 00457C6C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8045AE70 00457C70*/ PPC::Runtime::ASM::bl(fn_803E5B68);
/* 8045AE74 00457C74  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8045AE78 00457C78*/ PPC::Runtime::ASM::beq(.L_8045AE98);
/*8045AE7C 00457C7C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8045AE80 00457C80*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*8045AE84 00457C84*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045AE88 00457C88*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045AE8C 00457C8C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8045AE90 00457C90*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*8045AE94 00457C94*/ PPC::Runtime::ASM::b(.L_8045AF08);
RUNTIME_PPC_JUMP_LABEL(.L_8045AE98, 0x8045AE98) //this is a jump label
/*8045AE98 00457C98*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8045AE9C 00457C9C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8045AEA0 00457CA0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*8045AEA4 00457CA4*/ PPC::Runtime::ASM::bl(fn_CARDFreeBlocks);
/* 8045AEA8 00457CA8  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8045AEAC 00457CAC*/ PPC::Runtime::ASM::beq(.L_8045AEC0);
/*8045AEB0 00457CB0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1e0);
/*8045AEB4 00457CB4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045AEB8 00457CB8*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045AEBC 00457CBC*/ PPC::Runtime::ASM::b(.L_8045AF00);
RUNTIME_PPC_JUMP_LABEL(.L_8045AEC0, 0x8045AEC0) //this is a jump label
/*8045AEC0 00457CC0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8045AEC4 00457CC4*/ PPC::Runtime::ASM::beq(.L_8045AEE8);
/*8045AEC8 00457CC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045AECC 00457CCC*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8045AED0 00457CD0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x220);
/*8045AED4 00457CD4*/ PPC::Runtime::ASM::divw(context->r28, context->r0, context->r30);
/*8045AED8 00457CD8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8045AEDC 00457CDC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045AEE0 00457CE0*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045AEE4 00457CE4*/ PPC::Runtime::ASM::b(.L_8045AF00);
RUNTIME_PPC_JUMP_LABEL(.L_8045AEE8, 0x8045AEE8) //this is a jump label
/*8045AEE8 00457CE8*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8045AEEC 00457CEC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x250);
/*8045AEF0 00457CF0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8045AEF4 00457CF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045AEF8 00457CF8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045AEFC 00457CFC*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF00, 0x8045AF00) //this is a jump label
/*8045AF00 00457D00*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8045AF04 00457D04*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF08, 0x8045AF08) //this is a jump label
/*8045AF08 00457D08*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8045AF0C 00457D0C*/ PPC::Runtime::ASM::beq(.L_8045AF18);
/*8045AF10 00457D10*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r22));
/*8045AF14 00457D14*/ PPC::Runtime::ASM::b(.L_8045AF1C);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF18, 0x8045AF18) //this is a jump label
/*8045AF18 00457D18*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF1C, 0x8045AF1C) //this is a jump label
/*8045AF1C 00457D1C*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8045AF20 00457D20*/ PPC::Runtime::ASM::beq(.L_8045AF2C);
/*8045AF24 00457D24*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r22));
/*8045AF28 00457D28*/ PPC::Runtime::ASM::b(.L_8045AF30);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF2C, 0x8045AF2C) //this is a jump label
/*8045AF2C 00457D2C*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF30, 0x8045AF30) //this is a jump label
/*8045AF30 00457D30*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x0);
/*8045AF34 00457D34*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045AF38 00457D38*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045AF3C 00457D3C*/ PPC::Runtime::ASM::blt(.L_8045AF4C);
/*8045AF40 00457D40*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x1);
/*8045AF44 00457D44*/ PPC::Runtime::ASM::bgt(.L_8045AF4C);
/*8045AF48 00457D48*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8045AF4C, 0x8045AF4C) //this is a jump label
/*8045AF4C 00457D4C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045AF50 00457D50*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8045AF54 00457D54*/ PPC::Runtime::ASM::stw(context->r22, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8045AF58 00457D58*/ PPC::Runtime::ASM::beq(.L_8045AF60);
/*8045AF5C 00457D5C*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_8045AF60, 0x8045AF60) //this is a jump label
/*8045AF60 00457D60*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045AF64 00457D64*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045AF68 00457D68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045AF6C 00457D6C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8045AF70 00457D70*/ PPC::Runtime::ASM::beq(.L_8045AF78);
/*8045AF74 00457D74*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8045AF78, 0x8045AF78) //this is a jump label
/*8045AF78 00457D78*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8045AF7C 00457D7C*/ PPC::Runtime::ASM::bge(.L_8045AF88);
/*8045AF80 00457D80*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8045AF84 00457D84*/ PPC::Runtime::ASM::b(.L_8045B304);
RUNTIME_PPC_JUMP_LABEL(.L_8045AF88, 0x8045AF88) //this is a jump label
/*8045AF88 00457D88*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8045AF8C 00457D8C*/ PPC::Runtime::ASM::beq(.L_8045B300);
/*8045AF90 00457D90*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8045AF94 00457D94*/ PPC::Runtime::ASM::beq(.L_8045AFA4);
/*8045AF98 00457D98*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8045AF9C 00457D9C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045AFA0 00457DA0*/ PPC::Runtime::ASM::bl(fn_8045C87C);
RUNTIME_PPC_JUMP_LABEL(.L_8045AFA4, 0x8045AFA4) //this is a jump label
/*8045AFA4 00457DA4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8045AFA8 00457DA8*/ PPC::Runtime::ASM::beq(.L_8045B088);
/*8045AFAC 00457DAC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r25));
/*8045AFB0 00457DB0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8045AFB4 00457DB4*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8045AFB8 00457DB8*/ PPC::Runtime::ASM::bl(fn_8045C7D4);
/*8045AFBC 00457DBC*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r30);
/*8045AFC0 00457DC0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8045AFC4 00457DC4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045AFC8 00457DC8*/ PPC::Runtime::ASM::xoris(context->r5, context->r7, 0x8000);
/*8045AFCC 00457DCC*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r30);
/*8045AFD0 00457DD0*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r3);
/*8045AFD4 00457DD4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*8045AFD8 00457DD8*/ PPC::Runtime::ASM::subf(context->r6, context->r0, context->r30);
/*8045AFDC 00457DDC*/ PPC::Runtime::ASM::subf(context->r0, context->r7, context->r6);
/*8045AFE0 00457DE0*/ PPC::Runtime::ASM::addc(context->r3, context->r0, context->r5);
/*8045AFE4 00457DE4*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r7);
/*8045AFE8 00457DE8*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r3);
/*8045AFEC 00457DEC*/ PPC::Runtime::ASM::andc(context->r3, context->r0, context->r3);
/*8045AFF0 00457DF0*/ PPC::Runtime::ASM::bl(fn_8045BC18);
/*8045AFF4 00457DF4*/ PPC::Runtime::ASM::slwi(context->r4, context->r26, 2);
/*8045AFF8 00457DF8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8045AFFC 00457DFC*/ PPC::Runtime::ASM::li(context->r24, 0x1);
/*8045B000 00457E00*/ PPC::Runtime::ASM::addi(context->r23, context->r29, 0x24);
/*8045B004 00457E04*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r4);
/*8045B008 00457E08*/ PPC::Runtime::ASM::addi(context->r22, context->r4, 0x24);
/*8045B00C 00457E0C*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8045B010 00457E10*/ PPC::Runtime::ASM::add(context->r22, context->r29, context->r22);
/*8045B014 00457E14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8045B018 00457E18*/ PPC::Runtime::ASM::add(context->r26, context->r27, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B01C, 0x8045B01C) //this is a jump label
/*8045B01C 00457E1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*8045B020 00457E20*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8045B024 00457E24*/ PPC::Runtime::ASM::beq(.L_8045B088);
/*8045B028 00457E28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*8045B02C 00457E2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8045B030 00457E30*/ PPC::Runtime::ASM::ble(.L_8045B074);
/*8045B034 00457E34*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r23));
/*8045B038 00457E38*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045B03C 00457E3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*8045B040 00457E40*/ PPC::Runtime::ASM::bl(fn_8045BC18);
/*8045B044 00457E44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*8045B048 00457E48*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8045B04C 00457E4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r22));
/*8045B050 00457E50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*8045B054 00457E54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8045B058 00457E58*/ PPC::Runtime::ASM::bne(.L_8045B06C);
/*8045B05C 00457E5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*8045B060 00457E60*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*8045B064 00457E64*/ PPC::Runtime::ASM::add(context->r26, context->r26, context->r0);
/*8045B068 00457E68*/ PPC::Runtime::ASM::b(.L_8045B074);
RUNTIME_PPC_JUMP_LABEL(.L_8045B06C, 0x8045B06C) //this is a jump label
/*8045B06C 00457E6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*8045B070 00457E70*/ PPC::Runtime::ASM::add(context->r26, context->r26, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B074, 0x8045B074) //this is a jump label
/*8045B074 00457E74*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*8045B078 00457E78*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x24);
/*8045B07C 00457E7C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x10);
/*8045B080 00457E80*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x24);
/*8045B084 00457E84*/ PPC::Runtime::ASM::blt(.L_8045B01C);
RUNTIME_PPC_JUMP_LABEL(.L_8045B088, 0x8045B088) //this is a jump label
/*8045B088 00457E88*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8045B08C 00457E8C*/ PPC::Runtime::ASM::beq(.L_8045B198);
/*8045B090 00457E90*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8045B094 00457E94*/ PPC::Runtime::ASM::beq(.L_8045B198);
/*8045B098 00457E98*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8045B09C 00457E9C*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8045B0A0 00457EA0*/ PPC::Runtime::ASM::bl(fn_8045C7D4);
/*8045B0A4 00457EA4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045B0A8 00457EA8*/ PPC::Runtime::ASM::bl(fn_8045BC08);
/*8045B0AC 00457EAC*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8045B0B0 00457EB0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8045B0B4 00457EB4*/ PPC::Runtime::ASM::bl(fn_8045C7D4);
/*8045B0B8 00457EB8*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r30);
/*8045B0BC 00457EBC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8045B0C0 00457EC0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045B0C4 00457EC4*/ PPC::Runtime::ASM::xoris(context->r5, context->r7, 0x8000);
/*8045B0C8 00457EC8*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r30);
/*8045B0CC 00457ECC*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r3);
/*8045B0D0 00457ED0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*8045B0D4 00457ED4*/ PPC::Runtime::ASM::subf(context->r6, context->r0, context->r30);
/*8045B0D8 00457ED8*/ PPC::Runtime::ASM::subf(context->r0, context->r7, context->r6);
/*8045B0DC 00457EDC*/ PPC::Runtime::ASM::addc(context->r3, context->r0, context->r5);
/*8045B0E0 00457EE0*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r7);
/*8045B0E4 00457EE4*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r3);
/*8045B0E8 00457EE8*/ PPC::Runtime::ASM::andc(context->r3, context->r0, context->r3);
/*8045B0EC 00457EEC*/ PPC::Runtime::ASM::bl(fn_8045BC18);
/*8045B0F0 00457EF0*/ PPC::Runtime::ASM::add(context->r22, context->r26, context->r3);
/*8045B0F4 00457EF4*/ PPC::Runtime::ASM::addi(context->r25, context->r29, 0x24);
/*8045B0F8 00457EF8*/ PPC::Runtime::ASM::li(context->r23, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8045B0FC, 0x8045B0FC) //this is a jump label
/*8045B0FC 00457EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*8045B100 00457F00*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8045B104 00457F04*/ PPC::Runtime::ASM::beq(.L_8045B178);
/*8045B108 00457F08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8045B10C 00457F0C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045B110 00457F10*/ PPC::Runtime::ASM::bl(fn_8045BC18);
/*8045B114 00457F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*8045B118 00457F18*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8045B11C 00457F1C*/ PPC::Runtime::ASM::beq(.L_8045B144);
/*8045B120 00457F20*/ PPC::Runtime::ASM::bge(.L_8045B130);
/*8045B124 00457F24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8045B128 00457F28*/ PPC::Runtime::ASM::bge(.L_8045B13C);
/*8045B12C 00457F2C*/ PPC::Runtime::ASM::b(.L_8045B164);
RUNTIME_PPC_JUMP_LABEL(.L_8045B130, 0x8045B130) //this is a jump label
/*8045B130 00457F30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8045B134 00457F34*/ PPC::Runtime::ASM::bge(.L_8045B164);
/*8045B138 00457F38*/ PPC::Runtime::ASM::b(.L_8045B150);
RUNTIME_PPC_JUMP_LABEL(.L_8045B13C, 0x8045B13C) //this is a jump label
/*8045B13C 00457F3C*/ PPC::Runtime::ASM::add(context->r22, context->r22, context->r3);
/*8045B140 00457F40*/ PPC::Runtime::ASM::b(.L_8045B168);
RUNTIME_PPC_JUMP_LABEL(.L_8045B144, 0x8045B144) //this is a jump label
/*8045B144 00457F44*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 1);
/*8045B148 00457F48*/ PPC::Runtime::ASM::add(context->r22, context->r22, context->r0);
/*8045B14C 00457F4C*/ PPC::Runtime::ASM::b(.L_8045B168);
RUNTIME_PPC_JUMP_LABEL(.L_8045B150, 0x8045B150) //this is a jump label
/*8045B150 00457F50*/ PPC::Runtime::ASM::cmpw(context->r24, context->r3);
/*8045B154 00457F54*/ PPC::Runtime::ASM::add(context->r22, context->r22, context->r3);
/*8045B158 00457F58*/ PPC::Runtime::ASM::bge(.L_8045B168);
/*8045B15C 00457F5C*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*8045B160 00457F60*/ PPC::Runtime::ASM::b(.L_8045B168);
RUNTIME_PPC_JUMP_LABEL(.L_8045B164, 0x8045B164) //this is a jump label
/*8045B164 00457F64*/ PPC::Runtime::ASM::add(context->r22, context->r22, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8045B168, 0x8045B168) //this is a jump label
/*8045B168 00457F68*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*8045B16C 00457F6C*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x24);
/*8045B170 00457F70*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x10);
/*8045B174 00457F74*/ PPC::Runtime::ASM::blt(.L_8045B0FC);
RUNTIME_PPC_JUMP_LABEL(.L_8045B178, 0x8045B178) //this is a jump label
/*8045B178 00457F78*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B17C 00457F7C*/ PPC::Runtime::ASM::add(context->r22, context->r22, context->r24);
/*8045B180 00457F80*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B184 00457F84*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4ec);
/*8045B188 00457F88*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x510, context->r4));
/*8045B18C 00457F8C*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*8045B190 00457F90*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045B194 00457F94*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
RUNTIME_PPC_JUMP_LABEL(.L_8045B198, 0x8045B198) //this is a jump label
/*8045B198 00457F98*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B19C 00457F9C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8045B1A0 00457FA0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B1A4 00457FA4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4cc);
/*8045B1A8 00457FA8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x514, context->r5));
/*8045B1AC 00457FAC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045B1B0 00457FB0*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045B1B4 00457FB4*/ PPC::Runtime::ASM::bl(fn_80453080);
/* 8045B1B8 00457FB8  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*8045B1BC 00457FBC*/ PPC::Runtime::ASM::beq(.L_8045B1C4);
/*8045B1C0 00457FC0*/ PPC::Runtime::ASM::b(.L_8045B304);
RUNTIME_PPC_JUMP_LABEL(.L_8045B1C4, 0x8045B1C4) //this is a jump label
/*8045B1C4 00457FC4*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8045B1C8 00457FC8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B1CC 00457FCC*/ PPC::Runtime::ASM::mr(context->r22, context->r24);
/*8045B1D0 00457FD0*/ PPC::Runtime::ASM::addi(context->r28, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8045B1D4, 0x8045B1D4) //this is a jump label
/*8045B1D4 00457FD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8045B1D8 00457FD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*8045B1DC 00457FDC*/ PPC::Runtime::ASM::beq(.L_8045B300);
/*8045B1E0 00457FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8045B1E4 00457FE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8045B1E8 00457FE8*/ PPC::Runtime::ASM::ble(.L_8045B2EC);
/*8045B1EC 00457FEC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8045B1F0 00457FF0*/ PPC::Runtime::ASM::beq(.L_8045B21C);
/*8045B1F4 00457FF4*/ PPC::Runtime::ASM::bge(.L_8045B204);
/*8045B1F8 00457FF8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8045B1FC 00457FFC*/ PPC::Runtime::ASM::bge(.L_8045B210);
/*8045B200 00458000*/ PPC::Runtime::ASM::b(.L_8045B2D8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B204, 0x8045B204) //this is a jump label
/*8045B204 00458004*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*8045B208 00458008*/ PPC::Runtime::ASM::bge(.L_8045B2D8);
/*8045B20C 0045800C*/ PPC::Runtime::ASM::b(.L_8045B2D0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B210, 0x8045B210) //this is a jump label
/*8045B210 00458010*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*8045B214 00458014*/ PPC::Runtime::ASM::bl(fn_804534C4);
/*8045B218 00458018*/ PPC::Runtime::ASM::b(.L_8045B2D8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B21C, 0x8045B21C) //this is a jump label
/*8045B21C 0045801C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B220 00458020*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r28));
/*8045B224 00458024*/ PPC::Runtime::ASM::addi(context->r26, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B228 00458028*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*8045B22C 0045802C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8045B230 00458030*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*8045B234 00458034*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r4));
/*8045B238 00458038*/ PPC::Runtime::ASM::bl(fn_8045360C);
/*8045B23C 0045803C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8045B240 00458040*/ PPC::Runtime::ASM::ble(.L_8045B24C);
/*8045B244 00458044*/ PPC::Runtime::ASM::li(context->r23, 0x1);
/*8045B248 00458048*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8045B24C, 0x8045B24C) //this is a jump label
/*8045B24C 0045804C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8045B250 00458050*/ PPC::Runtime::ASM::bge(.L_8045B274);
/*8045B254 00458054*/ PPC::Runtime::ASM::slwi(context->r0, context->r25, 2);
/*8045B258 00458058*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8045B25C 0045805C*/ PPC::Runtime::ASM::add(context->r4, context->r22, context->r0);
/*8045B260 00458060*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8045B264 00458064*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r4);
/*8045B268 00458068*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8045B26C 0045806C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8045B270 00458070*/ PPC::Runtime::ASM::b(.L_8045B2D8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B274, 0x8045B274) //this is a jump label
/*8045B274 00458074*/ PPC::Runtime::ASM::add(context->r6, context->r30, context->r22);
/*8045B278 00458078*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*8045B27C 0045807C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8045B280 00458080*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*8045B284 00458084*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*8045B288 00458088*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*8045B28C 0045808C*/ PPC::Runtime::ASM::beq(.L_8045B2A4);
/*8045B290 00458090*/ PPC::Runtime::ASM::slwi(context->r3, context->r25, 2);
/*8045B294 00458094*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8045B298 00458098*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1c);
/*8045B29C 0045809C*/ PPC::Runtime::ASM::stwx(context->r4, context->r6, context->r0);
/*8045B2A0 004580A0*/ PPC::Runtime::ASM::b(.L_8045B2B4);
RUNTIME_PPC_JUMP_LABEL(.L_8045B2A4, 0x8045B2A4) //this is a jump label
/*8045B2A4 004580A4*/ PPC::Runtime::ASM::slwi(context->r3, context->r25, 2);
/*8045B2A8 004580A8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045B2AC 004580AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1c);
/*8045B2B0 004580B0*/ PPC::Runtime::ASM::stwx(context->r4, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B2B4, 0x8045B2B4) //this is a jump label
/*8045B2B4 004580B4*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 2);
/*8045B2B8 004580B8*/ PPC::Runtime::ASM::slwi(context->r3, context->r25, 2);
/*8045B2BC 004580BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7628);
/*8045B2C0 004580C0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r26, context->r0);
/*8045B2C4 004580C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x14);
/*8045B2C8 004580C8*/ PPC::Runtime::ASM::stwx(context->r4, context->r6, context->r0);
/*8045B2CC 004580CC*/ PPC::Runtime::ASM::b(.L_8045B2D8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B2D0, 0x8045B2D0) //this is a jump label
/*8045B2D0 004580D0*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*8045B2D4 004580D4*/ PPC::Runtime::ASM::bl(fn_8045379C);
RUNTIME_PPC_JUMP_LABEL(.L_8045B2D8, 0x8045B2D8) //this is a jump label
/*8045B2D8 004580D8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8045B2DC 004580DC*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*8045B2E0 004580E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x300);
/*8045B2E4 004580E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045B2E8 004580E8*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
RUNTIME_PPC_JUMP_LABEL(.L_8045B2EC, 0x8045B2EC) //this is a jump label
/*8045B2EC 004580EC*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*8045B2F0 004580F0*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x24);
/*8045B2F4 004580F4*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x10);
/*8045B2F8 004580F8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x24);
/*8045B2FC 004580FC*/ PPC::Runtime::ASM::blt(.L_8045B1D4);
RUNTIME_PPC_JUMP_LABEL(.L_8045B300, 0x8045B300) //this is a jump label
/*8045B300 00458100*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_8045B304, 0x8045B304) //this is a jump label
/*8045B304 00458104*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8045B308 00458108*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*8045B30C 0045810C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8045B310 00458110*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045B314 00458114*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8045B318 00458118*/ PPC::Runtime::ASM::blr();
}