//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191EB0.hpp"
#include "fn_80203FCC.hpp"
#include "fn_80191ED4.hpp"
#include "fn_80204060.hpp"



void fn_80203B64(PPC::Runtime::GCContext* context)
{
/*80203B64 00200964*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80203B68 00200968*/ PPC::Runtime::ASM::mflr(context->r0);
/*80203B6C 0020096C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80203B70 00200970*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80203B74 00200974*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80203B78 00200978*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80203B7C 0020097C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80203B80 00200980*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r3));
/*80203B84 00200984*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52c, context->r30));
/*80203B88 00200988*/ PPC::Runtime::ASM::bl(fn_80191EB0);
/*80203B8C 0020098C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80203B90 00200990*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80203B94 00200994*/ PPC::Runtime::ASM::bl(fn_80203FCC);
/*80203B98 00200998*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80203B9C 0020099C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80203BA0 002009A0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80203BA4 002009A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80203BA8 002009A8*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*80203BAC 002009AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80203BB0 002009B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80203BB4 002009B4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*80203BB8 002009B8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80203BBC 002009BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80203BC0 002009C0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80203BC4 002009C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80203BC8 002009C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r30));
/*80203BCC 002009CC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f4);
/*80203BD0 002009D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r30));
/*80203BD4 002009D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r30));
/*80203BD8 002009D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80203BDC 002009DC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80203BE0 002009E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r30));
/*80203BE4 002009E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*80203BE8 002009E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80203BEC 002009EC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80203BF0 002009F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r30));
/*80203BF4 002009F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*80203BF8 002009F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80203BFC 002009FC*/ PPC::Runtime::ASM::beq(.L_80203DA4);
/*80203C00 00200A00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r30));
/*80203C04 00200A04*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80203C08 00200A08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52c, context->r30));
/*80203C0C 00200A0C*/ PPC::Runtime::ASM::bl(fn_80191ED4);
/*80203C10 00200A10*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80203C14 00200A14*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80203C18 00200A18*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb10, context->r30));
/*80203C1C 00200A1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E22F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80203C20 00200A20*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb10, context->r30));
/*80203C24 00200A24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80203C28 00200A28*/ PPC::Runtime::ASM::bge(.L_80203C30);
/*80203C2C 00200A2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80203C30, 0x80203C30) //this is a jump label
/*80203C30 00200A30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb10, context->r30));
/*80203C34 00200A34*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0c, context->r30));
/*80203C38 00200A38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r30));
/*80203C3C 00200A3C*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80203C40 00200A40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E22E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80203C44 00200A44*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80203C48 00200A48*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f2);
/*80203C4C 00200A4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb14, context->r30));
/*80203C50 00200A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80203C54 00200A54*/ PPC::Runtime::ASM::bl(fn_80204060);
/* 80203C58 00200A58  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80203C5C 00200A5C*/ PPC::Runtime::ASM::beq(.L_80203DA4);
/*80203C60 00200A60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb14, context->r30));
/*80203C64 00200A64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80203C68 00200A68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80203C6C 00200A6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80203C70 00200A70*/ PPC::Runtime::ASM::bne(.L_80203C84);
/*80203C74 00200A74*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7140 @ Get_MemoryOffset_SDA21);
/*80203C78 00200A78*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80203C7C 00200A7C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7148 @ Get_MemoryOffset_SDA21);
/*80203C80 00200A80*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80203C84, 0x80203C84) //this is a jump label
/*80203C84 00200A84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80203C88 00200A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80203C8C 00200A8C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80203C90 00200A90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80203C94 00200A94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80203C98 00200A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80203C9C 00200A9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80203CA0 00200AA0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80203CA4 00200AA4*/ PPC::Runtime::ASM::bne(.L_80203CF0);
/*80203CA8 00200AA8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80203CAC 00200AAC*/ PPC::Runtime::ASM::beq(.L_80203CF0);
/*80203CB0 00200AB0*/ PPC::Runtime::ASM::bne(.L_80203CC4);
/*80203CB4 00200AB4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7140 @ Get_MemoryOffset_SDA21);
/*80203CB8 00200AB8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80203CBC 00200ABC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7148 @ Get_MemoryOffset_SDA21);
/*80203CC0 00200AC0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80203CC4, 0x80203CC4) //this is a jump label
/*80203CC4 00200AC4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80203CC8 00200AC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80203CCC 00200ACC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80203CD0 00200AD0*/ PPC::Runtime::ASM::bne(.L_80203CE0);
/*80203CD4 00200AD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80203CD8 00200AD8*/ PPC::Runtime::ASM::beq(.L_80203CE0);
/*80203CDC 00200ADC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80203CE0, 0x80203CE0) //this is a jump label
/*80203CE0 00200AE0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80203CE4 00200AE4*/ PPC::Runtime::ASM::bne(.L_80203CF0);
/*80203CE8 00200AE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80203CEC 00200AEC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80203CF0, 0x80203CF0) //this is a jump label
/*80203CF0 00200AF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80203CF4 00200AF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1e);
/*80203CF8 00200AF8*/ PPC::Runtime::ASM::beq(.L_80203D18);
/*80203CFC 00200AFC*/ PPC::Runtime::ASM::bge(.L_80203D0C);
/*80203D00 00200B00*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80203D04 00200B04*/ PPC::Runtime::ASM::beq(.L_80203D18);
/*80203D08 00200B08*/ PPC::Runtime::ASM::b(.L_80203DA4);
RUNTIME_PPC_JUMP_LABEL(.L_80203D0C, 0x80203D0C) //this is a jump label
/*80203D0C 00200B0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x36);
/*80203D10 00200B10*/ PPC::Runtime::ASM::beq(.L_80203D18);
/*80203D14 00200B14*/ PPC::Runtime::ASM::b(.L_80203DA4);
RUNTIME_PPC_JUMP_LABEL(.L_80203D18, 0x80203D18) //this is a jump label
/*80203D18 00200B18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r30));
/*80203D1C 00200B1C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80203D20 00200B20*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80203D24 00200B24*/ PPC::Runtime::ASM::bne(.L_80203D38);
/*80203D28 00200B28*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7140 @ Get_MemoryOffset_SDA21);
/*80203D2C 00200B2C*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80203D30 00200B30*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7148 @ Get_MemoryOffset_SDA21);
/*80203D34 00200B34*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80203D38, 0x80203D38) //this is a jump label
/*80203D38 00200B38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80203D3C 00200B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80203D40 00200B40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80203D44 00200B44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80203D48 00200B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80203D4C 00200B4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80203D50 00200B50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80203D54 00200B54*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80203D58 00200B58*/ PPC::Runtime::ASM::bne(.L_80203DA4);
/*80203D5C 00200B5C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80203D60 00200B60*/ PPC::Runtime::ASM::beq(.L_80203DA4);
/*80203D64 00200B64*/ PPC::Runtime::ASM::bne(.L_80203D78);
/*80203D68 00200B68*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7140 @ Get_MemoryOffset_SDA21);
/*80203D6C 00200B6C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80203D70 00200B70*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7148 @ Get_MemoryOffset_SDA21);
/*80203D74 00200B74*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80203D78, 0x80203D78) //this is a jump label
/*80203D78 00200B78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80203D7C 00200B7C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80203D80 00200B80*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80203D84 00200B84*/ PPC::Runtime::ASM::bne(.L_80203D94);
/*80203D88 00200B88*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80203D8C 00200B8C*/ PPC::Runtime::ASM::beq(.L_80203D94);
/*80203D90 00200B90*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80203D94, 0x80203D94) //this is a jump label
/*80203D94 00200B94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80203D98 00200B98*/ PPC::Runtime::ASM::bne(.L_80203DA4);
/*80203D9C 00200B9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80203DA0 00200BA0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80203DA4, 0x80203DA4) //this is a jump label
/*80203DA4 00200BA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80203DA8 00200BA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80203DAC 00200BAC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80203DB0 00200BB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80203DB4 00200BB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80203DB8 00200BB8*/ PPC::Runtime::ASM::blr();
}