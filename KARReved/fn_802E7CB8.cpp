//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"



void fn_802E7CB8(PPC::Runtime::GCContext* context)
{
/*802E7CB8 002E4AB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*802E7CBC 002E4ABC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E7CC0 002E4AC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802E7CC4 002E4AC4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E7CC8 002E4AC8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E7CCC 002E4ACC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E7CD0 002E4AD0*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E7CD4 002E4AD4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802E7CD8 002E4AD8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802E7CDC 002E4ADC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802E7CE0 002E4AE0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r3));
/*802E7CE4 002E4AE4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802E7CE8 002E4AE8*/ PPC::Runtime::ASM::beq(.L_802E7CF4);
/*802E7CEC 002E4AEC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802E7CF0 002E4AF0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802E7CF4, 0x802E7CF4) //this is a jump label
/*802E7CF4 002E4AF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802E7CF8 002E4AF8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E7CFC 002E4AFC*/ PPC::Runtime::ASM::beq(.L_802E7E44);
/*802E7D00 002E4B00*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E7D04 002E4B04*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*802E7D08 002E4B08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E7D0C 002E4B0C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D94E8 @ Get_MemoryOffset_SDA21);
/*802E7D10 002E4B10*/ PPC::Runtime::ASM::li(context->r6, lbl_805D94E0 @ Get_MemoryOffset_SDA21);
/*802E7D14 002E4B14*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802E7D18 002E4B18*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802E7D1C 002E4B1C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F51DC @ Get_MemoryOffset_HighBit);
/*802E7D20 002E4B20*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*802E7D24 002E4B24*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E7D28 002E4B28*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*802E7D2C 002E4B2C*/ PPC::Runtime::ASM::addi(context->r28, context->r5, lbl_804F51DC @ Get_MemoryOffset_LowBit);
/*802E7D30 002E4B30*/ PPC::Runtime::ASM::addi(context->r29, context->r4, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*802E7D34 002E4B34*/ PPC::Runtime::ASM::b(.L_802E7E3C);
RUNTIME_PPC_JUMP_LABEL(.L_802E7D38, 0x802E7D38) //this is a jump label
/*802E7D38 002E4B38*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*802E7D3C 002E4B3C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802E7D40 002E4B40*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802E7D44 002E4B44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r12));
/*802E7D48 002E4B48*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7D4C 002E4B4C*/ PPC::Runtime::ASM::bctrl();
/*802E7D50 002E4B50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E7D54 002E4B54*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E7D58 002E4B58*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802E7D5C 002E4B5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E7D60 002E4B60*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802E7D64 002E4B64*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802E7D68 002E4B68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E7D6C 002E4B6C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802E7D70 002E4B70*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*802E7D74 002E4B74*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802E7D78 002E4B78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802E7D7C 002E4B7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E7D80 002E4B80*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f1);
/*802E7D84 002E4B84*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*802E7D88 002E4B88*/ PPC::Runtime::ASM::fdivs(context->f30, context->f0, context->f1);
/*802E7D8C 002E4B8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7D90 002E4B90*/ PPC::Runtime::ASM::bctrl();
/*802E7D94 002E4B94*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E7D98 002E4B98*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802E7D9C 002E4B9C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E7DA0 002E4BA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E7DA4 002E4BA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E7DA8 002E4BA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E7DAC 002E4BAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E7DB0 002E4BB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802E7DB4 002E4BB4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E7DB8 002E4BB8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E7DBC 002E4BBC*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E7DC0 002E4BC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E7DC4 002E4BC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802E7DC8 002E4BC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7DCC 002E4BCC*/ PPC::Runtime::ASM::bctrl();
/* 802E7DD0 002E4BD0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E7DD4 002E4BD4*/ PPC::Runtime::ASM::beq(.L_802E7E10);
/*802E7DD8 002E4BD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E7DDC 002E4BDC*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*802E7DE0 002E4BE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E7DE4 002E4BE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*802E7DE8 002E4BE8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7DEC 002E4BEC*/ PPC::Runtime::ASM::bctrl();
/* 802E7DF0 002E4BF0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802E7DF4 002E4BF4*/ PPC::Runtime::ASM::beq(.L_802E7E10);
/*802E7DF8 002E4BF8*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x10);
/*802E7DFC 002E4BFC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*802E7E00 002E4C00*/ PPC::Runtime::ASM::stwx(context->r27, context->r30, context->r0);
/*802E7E04 002E4C04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*802E7E08 002E4C08*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802E7E0C 002E4C0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802E7E10, 0x802E7E10) //this is a jump label
/*802E7E10 002E4C10*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0xc);
/*802E7E14 002E4C14*/ PPC::Runtime::ASM::beq(.L_802E7E24);
/*802E7E18 002E4C18*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*802E7E1C 002E4C1C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*802E7E20 002E4C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802E7E24, 0x802E7E24) //this is a jump label
/*802E7E24 002E4C24*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802E7E28 002E4C28*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802E7E2C 002E4C2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*802E7E30 002E4C30*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E7E34 002E4C34*/ PPC::Runtime::ASM::bctrl();
/*802E7E38 002E4C38*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802E7E3C, 0x802E7E3C) //this is a jump label
/*802E7E3C 002E4C3C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*802E7E40 002E4C40*/ PPC::Runtime::ASM::bne(.L_802E7D38);
RUNTIME_PPC_JUMP_LABEL(.L_802E7E44, 0x802E7E44) //this is a jump label
/*802E7E44 002E4C44*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E7E48 002E4C48*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E7E4C 002E4C4C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E7E50 002E4C50*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802E7E54 002E4C54*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E7E58 002E4C58*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802E7E5C 002E4C5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802E7E60 002E4C60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E7E64 002E4C64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*802E7E68 002E4C68*/ PPC::Runtime::ASM::blr();
}