//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"



void fn_shadowRendering(PPC::Runtime::GCContext* context)
{
/*8007ADE8 00077BE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x110, context->r1));
/*8007ADEC 00077BEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007ADF0 00077BF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r1));
/*8007ADF4 00077BF4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x110);
/*8007ADF8 00077BF8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8007ADFC 00077BFC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AE00 00077C00*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_560 @ Get_MemoryOffset_HighBit);
/*8007AE04 00077C04*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_560 @ Get_MemoryOffset_LowBit);
/*8007AE08 00077C08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8007AE0C 00077C0C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8007AE10 00077C10*/ PPC::Runtime::ASM::beq(.L_8007B26C);
/*8007AE14 00077C14*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE32C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AE18 00077C18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8007AE1C 00077C1C*/ PPC::Runtime::ASM::b(.L_8007AE58);
RUNTIME_PPC_JUMP_LABEL(.L_8007AE20, 0x8007AE20) //this is a jump label
/*8007AE20 00077C20*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8007AE24 00077C24*/ PPC::Runtime::ASM::b(.L_8007AE4C);
RUNTIME_PPC_JUMP_LABEL(.L_8007AE28, 0x8007AE28) //this is a jump label
/*8007AE28 00077C28*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/* 8007AE2C 00077C2C  54 00 07 BF */ clrlwi. context->r0 , context->r0 , 30
/*8007AE30 00077C30*/ PPC::Runtime::ASM::beq(.L_8007AE38);
/*8007AE34 00077C34*/ PPC::Runtime::ASM::b(.L_8007AE80);
RUNTIME_PPC_JUMP_LABEL(.L_8007AE38, 0x8007AE38) //this is a jump label
/*8007AE38 00077C38*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8007AE3C 00077C3C*/ PPC::Runtime::ASM::bne(.L_8007AE48);
/*8007AE40 00077C40*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8007AE44 00077C44*/ PPC::Runtime::ASM::b(.L_8007AE4C);
RUNTIME_PPC_JUMP_LABEL(.L_8007AE48, 0x8007AE48) //this is a jump label
/*8007AE48 00077C48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8007AE4C, 0x8007AE4C) //this is a jump label
/*8007AE4C 00077C4C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8007AE50 00077C50*/ PPC::Runtime::ASM::bne(.L_8007AE28);
/*8007AE54 00077C54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8007AE58, 0x8007AE58) //this is a jump label
/*8007AE58 00077C58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8007AE5C 00077C5C*/ PPC::Runtime::ASM::bne(.L_8007AE20);
/*8007AE60 00077C60*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8007AE64 00077C64*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8007AE68 00077C68*/ PPC::Runtime::ASM::bl(OSReport);
/*8007AE6C 00077C6C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*8007AE70 00077C70*/ PPC::Runtime::ASM::li(context->r4, 0x38);
/*8007AE74 00077C74*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53F8 @ Get_MemoryOffset_SDA21);
/*8007AE78 00077C78*/ PPC::Runtime::ASM::bl(fn___assert);
/*8007AE7C 00077C7C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007AE80, 0x8007AE80) //this is a jump label
/*8007AE80 00077C80*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007AE84 00077C84*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8c);
/*8007AE88 00077C88*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetPosition);
/*8007AE8C 00077C8C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007AE90 00077C90*/ PPC::Runtime::ASM::bne(.L_8007AEB0);
/*8007AE94 00077C94*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x28);
/*8007AE98 00077C98*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8007AE9C 00077C9C*/ PPC::Runtime::ASM::bl(OSReport);
/*8007AEA0 00077CA0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c);
/*8007AEA4 00077CA4*/ PPC::Runtime::ASM::li(context->r4, 0x4e);
/*8007AEA8 00077CA8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53F8 @ Get_MemoryOffset_SDA21);
/*8007AEAC 00077CAC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8007AEB0, 0x8007AEB0) //this is a jump label
/*8007AEB0 00077CB0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007AEB4 00077CB4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x80);
/*8007AEB8 00077CB8*/ PPC::Runtime::ASM::bl(fn_HSD_LObjGetInterest);
/*8007AEBC 00077CBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007AEC0 00077CC0*/ PPC::Runtime::ASM::beq(.L_8007AF08);
/*8007AEC4 00077CC4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8007AEC8 00077CC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8007AECC 00077CCC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8007AED0 00077CD0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007AED4 00077CD4*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*8007AED8 00077CD8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AEDC 00077CDC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007AEE0 00077CE0*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f2);
/*8007AEE4 00077CE4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8007AEE8 00077CE8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8007AEEC 00077CEC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*8007AEF0 00077CF0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8007AEF4 00077CF4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8007AEF8 00077CF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007AEFC 00077CFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007AF00 00077D00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8007AF04 00077D04*/ PPC::Runtime::ASM::b(.L_8007AF18);
RUNTIME_PPC_JUMP_LABEL(.L_8007AF08, 0x8007AF08) //this is a jump label
/*8007AF08 00077D08*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AF0C 00077D0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007AF10 00077D10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007AF14 00077D14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8007AF18, 0x8007AF18) //this is a jump label
/*8007AF18 00077D18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8007AF1C 00077D1C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*8007AF20 00077D20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8007AF24 00077D24*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8007AF28 00077D28*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007AF2C 00077D2C*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*8007AF30 00077D30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8007AF34 00077D34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007AF38 00077D38*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*8007AF3C 00077D3C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8007AF40 00077D40*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8007AF44 00077D44*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8007AF48 00077D48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8007AF4C 00077D4C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8007AF50 00077D50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AF54 00077D54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8007AF58 00077D58*/ PPC::Runtime::ASM::blt(.L_8007B26C);
/*8007AF5C 00077D5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8007AF60 00077D60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8007AF64 00077D64*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f0);
/*8007AF68 00077D68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AF6C 00077D6C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f1);
/*8007AF70 00077D70*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*8007AF74 00077D74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8007AF78 00077D78*/ PPC::Runtime::ASM::ble(.L_8007B02C);
/*8007AF7C 00077D7C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8007AF80 00077D80*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8007AF84 00077D84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8007AF88 00077D88*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8007AF8C 00077D8C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007AF90 00077D90*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805DED90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AF94 00077D94*/ PPC::Runtime::ASM::fsubs(context->f3, context->f2, context->f0);
/*8007AF98 00077D98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8007AF9C 00077D9C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805DED9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AFA0 00077DA0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f0);
/*8007AFA4 00077DA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007AFA8 00077DA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8007AFAC 00077DAC*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8007AFB0 00077DB0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8007AFB4 00077DB4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8007AFB8 00077DB8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8007AFBC 00077DBC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8007AFC0 00077DC0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8007AFC4 00077DC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8007AFC8 00077DC8*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8007AFCC 00077DCC*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805DEDA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007AFD0 00077DD0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f5);
/*8007AFD4 00077DD4*/ PPC::Runtime::ASM::bge(.L_8007B008);
/*8007AFD8 00077DD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8007AFDC 00077DDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8007AFE0 00077DE0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8007AFE4 00077DE4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007AFE8 00077DE8*/ PPC::Runtime::ASM::fnmsubs(context->f4, context->f5, context->f1, context->f0);
/*8007AFEC 00077DEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8007AFF0 00077DF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007AFF4 00077DF4*/ PPC::Runtime::ASM::fnmsubs(context->f2, context->f5, context->f3, context->f2);
/*8007AFF8 00077DF8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8007AFFC 00077DFC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f5, context->f1, context->f0);
/*8007B000 00077E00*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8007B004 00077E04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8007B008, 0x8007B008) //this is a jump label
/*8007B008 00077E08*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x74);
/*8007B00C 00077E0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*8007B010 00077E10*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x44);
/*8007B014 00077E14*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8007B018 00077E18*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8007B01C 00077E1C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*8007B020 00077E20*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x74);
/*8007B024 00077E24*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*8007B028 00077E28*/ PPC::Runtime::ASM::b(.L_8007B040);
RUNTIME_PPC_JUMP_LABEL(.L_8007B02C, 0x8007B02C) //this is a jump label
/*8007B02C 00077E2C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B030 00077E30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEDA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B034 00077E34*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8007B038 00077E38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8007B03C 00077E3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8007B040, 0x8007B040) //this is a jump label
/*8007B040 00077E40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B044 00077E44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B048 00077E48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8007B04C 00077E4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8007B050 00077E50*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8007B054 00077E54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8007B058 00077E58*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8007B05C 00077E5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8007B060 00077E60*/ PPC::Runtime::ASM::b(.L_8007B264);
RUNTIME_PPC_JUMP_LABEL(.L_8007B064, 0x8007B064) //this is a jump label
/*8007B064 00077E64*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8007B068 00077E68*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/* 8007B06C 00077E6C  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*8007B070 00077E70*/ PPC::Runtime::ASM::bne(.L_8007B260);
/* 8007B074 00077E74  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*8007B078 00077E78*/ PPC::Runtime::ASM::beq(.L_8007B0B8);
/*8007B07C 00077E7C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8007B080 00077E80*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8007B084 00077E84*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8007B088 00077E88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8007B08C 00077E8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8007B090 00077E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8007B094 00077E94*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007B098 00077E98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEDA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B09C 00077E9C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B0A0 00077EA0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007B0A4 00077EA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007B0A8 00077EA8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8007B0AC 00077EAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007B0B0 00077EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007B0B4 00077EB4*/ PPC::Runtime::ASM::b(.L_8007B0E8);
RUNTIME_PPC_JUMP_LABEL(.L_8007B0B8, 0x8007B0B8) //this is a jump label
/*8007B0B8 00077EB8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*8007B0BC 00077EBC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8007B0C0 00077EC0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*8007B0C4 00077EC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8007B0C8 00077EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8007B0CC 00077ECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8007B0D0 00077ED0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B0D4 00077ED4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007B0D8 00077ED8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007B0DC 00077EDC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8007B0E0 00077EE0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007B0E4 00077EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8007B0E8, 0x8007B0E8) //this is a jump label
/*8007B0E8 00077EE8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B0EC 00077EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8007B0F0 00077EF0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8007B0F4 00077EF4*/ PPC::Runtime::ASM::clrlwi(context->r27, context->r0, 24);
/*8007B0F8 00077EF8*/ PPC::Runtime::ASM::bne(.L_8007B10C);
/*8007B0FC 00077EFC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*8007B100 00077F00*/ PPC::Runtime::ASM::li(context->r4, 0x67);
/*8007B104 00077F04*/ PPC::Runtime::ASM::li(context->r5, lbl_805D53FC @ Get_MemoryOffset_SDA21);
/*8007B108 00077F08*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8007B10C, 0x8007B10C) //this is a jump label
/*8007B10C 00077F0C*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*8007B110 00077F10*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8007B114 00077F14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B118 00077F18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8007B11C 00077F1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8007B120 00077F20*/ PPC::Runtime::ASM::fadds(context->f5, context->f2, context->f1);
/*8007B124 00077F24*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007B128 00077F28*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007B12C 00077F2C*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*8007B130 00077F30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8007B134 00077F34*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8007B138 00077F38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*8007B13C 00077F3C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8007B140 00077F40*/ PPC::Runtime::ASM::fadds(context->f4, context->f5, context->f4);
/*8007B144 00077F44*/ PPC::Runtime::ASM::fadds(context->f1, context->f5, context->f1);
/*8007B148 00077F48*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8007B14C 00077F4C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8007B150 00077F50*/ PPC::Runtime::ASM::fadds(context->f3, context->f4, context->f3);
/*8007B154 00077F54*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8007B158 00077F58*/ PPC::Runtime::ASM::fadds(context->f0, context->f4, context->f0);
/*8007B15C 00077F5C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007B160 00077F60*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8007B164 00077F64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8007B168 00077F68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B16C 00077F6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8007B170 00077F70*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetEyePosition);
/*8007B174 00077F74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B178 00077F78*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8007B17C 00077F7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8007B180 00077F80*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetInterest);
/*8007B184 00077F84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B188 00077F88*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8007B18C 00077F8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8007B190 00077F90*/ PPC::Runtime::ASM::bl(fn_80402138);
/*8007B194 00077F94*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x98);
/*8007B198 00077F98*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8007B19C 00077F9C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8007B1A0 00077FA0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8007B1A4 00077FA4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8007B1A8 00077FA8*/ PPC::Runtime::ASM::bl(fn_8041DD84);
/*8007B1AC 00077FAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8007B1B0 00077FB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x98);
/*8007B1B4 00077FB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B1B8 00077FB8*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x8);
/*8007B1BC 00077FBC*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*8007B1C0 00077FC0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8007B1C4 00077FC4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*8007B1C8 00077FC8*/ PPC::Runtime::ASM::fmr(context->f4, context->f1);
/*8007B1CC 00077FCC*/ PPC::Runtime::ASM::fmr(context->f3, context->f2);
/*8007B1D0 00077FD0*/ PPC::Runtime::ASM::bl(fn_Shadows_SmoothEdges_Math);
/*8007B1D4 00077FD4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x98);
/*8007B1D8 00077FD8*/ PPC::Runtime::ASM::bl(fn_8041DF98);
/*8007B1DC 00077FDC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007B1E0 00077FE0*/ PPC::Runtime::ASM::beq(.L_8007B200);
/*8007B1E4 00077FE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B1E8 00077FE8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*8007B1EC 00077FEC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r1));
/*8007B1F0 00077FF0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*8007B1F4 00077FF4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8007B1F8 00077FF8*/ PPC::Runtime::ASM::bl(fn_HSD_ShadowSetViewingRect);
/*8007B1FC 00077FFC*/ PPC::Runtime::ASM::b(.L_8007B21C);
RUNTIME_PPC_JUMP_LABEL(.L_8007B200, 0x8007B200) //this is a jump label
/*8007B200 00078000*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DEDAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B204 00078004*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEDB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B208 00078008*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B20C 0007800C*/ PPC::Runtime::ASM::fmr(context->f4, context->f1);
/*8007B210 00078010*/ PPC::Runtime::ASM::fmr(context->f3, context->f2);
/*8007B214 00078014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8007B218 00078018*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetOrtho);
RUNTIME_PPC_JUMP_LABEL(.L_8007B21C, 0x8007B21C) //this is a jump label
/*8007B21C 0007801C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B220 00078020*/ PPC::Runtime::ASM::bl(fn_HSD_ShadowInit);
/*8007B224 00078024*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8007B228 00078028*/ PPC::Runtime::ASM::bl(fn_HSD_StartRender);
/*8007B22C 0007802C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8007B230 00078030*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE31C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007B234 00078034*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8007B238 00078038*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8007B23C 0007803C*/ PPC::Runtime::ASM::beq(.L_8007B24C);
/*8007B240 00078040*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8007B244 00078044*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8007B248 00078048*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8007B24C, 0x8007B24C) //this is a jump label
/*8007B24C 0007804C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B250 00078050*/ PPC::Runtime::ASM::bl(fn_8041D32C);
/*8007B254 00078054*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007B258 00078058*/ PPC::Runtime::ASM::bl(fn_HSD_ShadowEndRender?);
/*8007B25C 0007805C*/ PPC::Runtime::ASM::bl(fn_804105E4);
RUNTIME_PPC_JUMP_LABEL(.L_8007B260, 0x8007B260) //this is a jump label
/*8007B260 00078060*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8007B264, 0x8007B264) //this is a jump label
/*8007B264 00078064*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8007B268 00078068*/ PPC::Runtime::ASM::bne(.L_8007B064);
RUNTIME_PPC_JUMP_LABEL(.L_8007B26C, 0x8007B26C) //this is a jump label
/*8007B26C 0007806C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x110);
/*8007B270 00078070*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8007B274 00078074*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r1));
/*8007B278 00078078*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007B27C 0007807C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x110);
/*8007B280 00078080*/ PPC::Runtime::ASM::blr();
}