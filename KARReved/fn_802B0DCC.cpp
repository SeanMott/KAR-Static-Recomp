//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80319BDC.hpp"
#include "fn_8031A74C.hpp"
#include "fn_8034BF50.hpp"



void fn_802B0DCC(PPC::Runtime::GCContext* context)
{
/*802B0DCC 002ADBCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*802B0DD0 002ADBD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B0DD4 002ADBD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B0DD8 002ADBD8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B0DDC 002ADBDC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802B0DE0 002ADBE0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802B0DE4 002ADBE4*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*802B0DE8 002ADBE8*/ PPC::Runtime::ASM::bl(fn_8039E4B4);
/*802B0DEC 002ADBEC*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf78, context->r31));
/*802B0DF0 002ADBF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B0DF4 002ADBF4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf28, context->r31));
/*802B0DF8 002ADBF8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B0DFC 002ADBFC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B0E00 002ADC00*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B0E04 002ADC04*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B0E08 002ADC08*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B0E0C 002ADC0C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x16);
/*802B0E10 002ADC10*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802B0E14 002ADC14*/ PPC::Runtime::ASM::blt(.L_802B0E38);
/*802B0E18 002ADC18*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802B0E1C 002ADC1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4AD0 @ Get_MemoryOffset_HighBit);
/*802B0E20 002ADC20*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802B0E24 002ADC24*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C4AD0 @ Get_MemoryOffset_LowBit);
/*802B0E28 002ADC28*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802B0E2C 002ADC2C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B0E30 002ADC30*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B0E34 002ADC34*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B0E38, 0x802B0E38) //this is a jump label
/* 802B0E38 002ADC38  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*802B0E3C 002ADC3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802B0E40 002ADC40*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r28);
/*802B0E44 002ADC44*/ PPC::Runtime::ASM::beq(.L_802B0E58);
/*802B0E48 002ADC48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B0E4C 002ADC4C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802B0E50 002ADC50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B0E54 002ADC54*/ PPC::Runtime::ASM::b(.L_802B0E64);
RUNTIME_PPC_JUMP_LABEL(.L_802B0E58, 0x802B0E58) //this is a jump label
/*802B0E58 002ADC58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B0E5C 002ADC5C*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*802B0E60 002ADC60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802B0E64, 0x802B0E64) //this is a jump label
/*802B0E64 002ADC64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802B0E68 002ADC68*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B0E6C 002ADC6C*/ PPC::Runtime::ASM::beq(.L_802B0FA4);
/*802B0E70 002ADC70*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802B0E74 002ADC74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B0E78 002ADC78*/ PPC::Runtime::ASM::li(context->r5, lbl_805D800C @ Get_MemoryOffset_SDA21);
/*802B0E7C 002ADC7C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7F20 @ Get_MemoryOffset_SDA21);
/*802B0E80 002ADC80*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B0E84 002ADC84*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B0E88 002ADC88*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802B0E8C 002ADC8C*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 802B0E90 002ADC90  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802B0E94 002ADC94*/ PPC::Runtime::ASM::beq(.L_802B0F94);
/*802B0E98 002ADC98*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B0E9C 002ADC9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B0EA0 002ADCA0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FA8 @ Get_MemoryOffset_SDA21);
/*802B0EA4 002ADCA4*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FA0 @ Get_MemoryOffset_SDA21);
/*802B0EA8 002ADCA8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B0EAC 002ADCAC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B0EB0 002ADCB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B0EB4 002ADCB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*802B0EB8 002ADCB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802B0EBC 002ADCBC*/ PPC::Runtime::ASM::bctrl();
/*802B0EC0 002ADCC0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802B0EC4 002ADCC4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*802B0EC8 002ADCC8*/ PPC::Runtime::ASM::bl(fn_80319BDC);
/*802B0ECC 002ADCCC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3458 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B0ED0 002ADCD0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802B0ED4 002ADCD4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802B0ED8 002ADCD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802B0EDC 002ADCDC*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*802B0EE0 002ADCE0*/ PPC::Runtime::ASM::bl(fn_8031A74C);
/*802B0EE4 002ADCE4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E33C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B0EE8 002ADCE8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802B0EEC 002ADCEC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3450 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B0EF0 002ADCF0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802B0EF4 002ADCF4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802B0EF8 002ADCF8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802B0EFC 002ADCFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802B0F00 002ADD00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802B0F04 002ADD04*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B0F08 002ADD08*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802B0F0C 002ADD0C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B0F10 002ADD10*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B0F14 002ADD14*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B0F18 002ADD18*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B0F1C 002ADD1C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B0F20 002ADD20*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B0F24 002ADD24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B0F28 002ADD28*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802B0F2C 002ADD2C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B0F30 002ADD30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B0F34 002ADD34*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B0F38 002ADD38*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B0F3C 002ADD3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B0F40 002ADD40*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B0F44 002ADD44*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802B0F48 002ADD48*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B0F4C 002ADD4C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B0F50 002ADD50*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802B0F54 002ADD54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B0F58 002ADD58*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B0F5C 002ADD5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf28, context->r31));
/*802B0F60 002ADD60*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*802B0F64 002ADD64*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802B0F68 002ADD68*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B0F6C 002ADD6C*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*802B0F70 002ADD70*/ PPC::Runtime::ASM::bl(fn_8034BF50);
/*802B0F74 002ADD74*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x38);
/*802B0F78 002ADD78*/ PPC::Runtime::ASM::beq(.L_802B0F88);
/*802B0F7C 002ADD7C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B0F80 002ADD80*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B0F84 002ADD84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B0F88, 0x802B0F88) //this is a jump label
/*802B0F88 002ADD88*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B0F8C 002ADD8C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B0F90 002ADD90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B0F94, 0x802B0F94) //this is a jump label
/*802B0F94 002ADD94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802B0F98 002ADD98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B0F9C 002ADD9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B0FA0 002ADDA0*/ PPC::Runtime::ASM::b(.L_802B0FB0);
RUNTIME_PPC_JUMP_LABEL(.L_802B0FA4, 0x802B0FA4) //this is a jump label
/*802B0FA4 002ADDA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B0FA8 002ADDA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B0FAC 002ADDAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802B0FB0, 0x802B0FB0) //this is a jump label
/*802B0FB0 002ADDB0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B0FB4 002ADDB4*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802B0FB8 002ADDB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B0FBC 002ADDBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B0FC0 002ADDC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*802B0FC4 002ADDC4*/ PPC::Runtime::ASM::blr();
}