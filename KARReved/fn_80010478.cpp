//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022CE94.hpp"
#include "fn_8022CEDC.hpp"
#include "fn_80009A30.hpp"
#include "fn_8011370C.hpp"
#include "fn_800101F4.hpp"



void fn_80010478(PPC::Runtime::GCContext* context)
{
/*80010478 0000D278*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8001047C 0000D27C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80010480 0000D280*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80010484 0000D284*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80010488 0000D288*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8001048C 0000D28C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80010490 0000D290*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80010494 0000D294*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80010498 0000D298*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x830);
/*8001049C 0000D29C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800104A0 0000D2A0*/ PPC::Runtime::ASM::mr(context->r30, context->r28);
/*800104A4 0000D2A4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800104A8, 0x800104A8) //this is a jump label
/*800104A8 0000D2A8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800104AC 0000D2AC*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*800104B0 0000D2B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800104B4 0000D2B4*/ PPC::Runtime::ASM::beq(.L_800106B8);
/*800104B8 0000D2B8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800104BC 0000D2BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800104C0 0000D2C0*/ PPC::Runtime::ASM::bl(fn_8022CE94);
/*800104C4 0000D2C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800104C8 0000D2C8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800104CC 0000D2CC*/ PPC::Runtime::ASM::beq(.L_800106CC);
/*800104D0 0000D2D0*/ PPC::Runtime::ASM::add(context->r29, context->r28, context->r27);
/*800104D4 0000D2D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r29));
/*800104D8 0000D2D8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800104DC 0000D2DC*/ PPC::Runtime::ASM::bne(.L_800106B8);
/*800104E0 0000D2E0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800104E4 0000D2E4*/ PPC::Runtime::ASM::bl(fn_8022CEDC);
/*800104E8 0000D2E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800104EC 0000D2EC*/ PPC::Runtime::ASM::beq(.L_80010508);
/*800104F0 0000D2F0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800104F4 0000D2F4*/ PPC::Runtime::ASM::bl(fn_80009A30);
/*800104F8 0000D2F8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800104FC 0000D2FC*/ PPC::Runtime::ASM::beq(.L_80010508);
/*80010500 0000D300*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80010504 0000D304*/ PPC::Runtime::ASM::bl(fn_8011370C);
RUNTIME_PPC_JUMP_LABEL(.L_80010508, 0x80010508) //this is a jump label
/*80010508 0000D308*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8001050C 0000D30C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c);
/*80010510 0000D310*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010514 0000D314*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x80);
/*80010518 0000D318*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r3);
/*8001051C 0000D31C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80010520 0000D320*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010524 0000D324*/ PPC::Runtime::ASM::stfsx(context->f0, context->r3, context->r0);
/*80010528 0000D328*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001052C 0000D32C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80010530 0000D330*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
/*80010534 0000D334*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80010538 0000D338*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8001053C 0000D33C*/ PPC::Runtime::ASM::beq(.L_800105BC);
/*80010540 0000D340*/ PPC::Runtime::ASM::bge(.L_80010550);
/*80010544 0000D344*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80010548 0000D348*/ PPC::Runtime::ASM::bge(.L_8001055C);
/*8001054C 0000D34C*/ PPC::Runtime::ASM::b(.L_80010670);
RUNTIME_PPC_JUMP_LABEL(.L_80010550, 0x80010550) //this is a jump label
/*80010550 0000D350*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80010554 0000D354*/ PPC::Runtime::ASM::bge(.L_80010670);
/*80010558 0000D358*/ PPC::Runtime::ASM::b(.L_80010600);
RUNTIME_PPC_JUMP_LABEL(.L_8001055C, 0x8001055C) //this is a jump label
/*8001055C 0000D35C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010560 0000D360*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010564 0000D364*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80010568 0000D368*/ PPC::Runtime::ASM::bne(.L_80010580);
/*8001056C 0000D36C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010570 0000D370*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010574 0000D374*/ PPC::Runtime::ASM::bge(.L_80010580);
/*80010578 0000D378*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8001057C 0000D37C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80010580, 0x80010580) //this is a jump label
/*80010580 0000D380*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010584 0000D384*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010588 0000D388*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8001058C 0000D38C*/ PPC::Runtime::ASM::bne(.L_80010670);
/*80010590 0000D390*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE79C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010594 0000D394*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010598 0000D398*/ PPC::Runtime::ASM::bge(.L_80010670);
/*8001059C 0000D39C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800105A0 0000D3A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
/*800105A4 0000D3A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*800105A8 0000D3A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800105AC 0000D3AC*/ PPC::Runtime::ASM::blt(.L_80010670);
/*800105B0 0000D3B0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800105B4 0000D3B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*800105B8 0000D3B8*/ PPC::Runtime::ASM::b(.L_80010670);
RUNTIME_PPC_JUMP_LABEL(.L_800105BC, 0x800105BC) //this is a jump label
/*800105BC 0000D3BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800105C0 0000D3C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800105C4 0000D3C4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800105C8 0000D3C8*/ PPC::Runtime::ASM::bne(.L_800105D4);
/*800105CC 0000D3CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800105D0 0000D3D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800105D4, 0x800105D4) //this is a jump label
/*800105D4 0000D3D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800105D8 0000D3D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800105DC 0000D3DC*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800105E0 0000D3E0*/ PPC::Runtime::ASM::bne(.L_80010670);
/*800105E4 0000D3E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800105E8 0000D3E8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800105EC 0000D3EC*/ PPC::Runtime::ASM::bge(.L_80010670);
/*800105F0 0000D3F0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
/*800105F4 0000D3F4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800105F8 0000D3F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
/*800105FC 0000D3FC*/ PPC::Runtime::ASM::b(.L_80010670);
RUNTIME_PPC_JUMP_LABEL(.L_80010600, 0x80010600) //this is a jump label
/*80010600 0000D400*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010604 0000D404*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010608 0000D408*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8001060C 0000D40C*/ PPC::Runtime::ASM::bne(.L_8001061C);
/*80010610 0000D410*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010614 0000D414*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010618 0000D418*/ PPC::Runtime::ASM::blt(.L_8001062C);
RUNTIME_PPC_JUMP_LABEL(.L_8001061C, 0x8001061C) //this is a jump label
/*8001061C 0000D41C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE79C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010620 0000D420*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010624 0000D424*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80010628 0000D428*/ PPC::Runtime::ASM::bne(.L_80010648);
RUNTIME_PPC_JUMP_LABEL(.L_8001062C, 0x8001062C) //this is a jump label
/*8001062C 0000D42C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80010630 0000D430*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80010634 0000D434*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
/*80010638 0000D438*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8001063C 0000D43C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80010640 0000D440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80010644 0000D444*/ PPC::Runtime::ASM::bl(fn_800101F4);
RUNTIME_PPC_JUMP_LABEL(.L_80010648, 0x80010648) //this is a jump label
/*80010648 0000D448*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8001064C 0000D44C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010650 0000D450*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80010654 0000D454*/ PPC::Runtime::ASM::bne(.L_80010670);
/*80010658 0000D458*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8001065C 0000D45C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*80010660 0000D460*/ PPC::Runtime::ASM::bge(.L_80010670);
/*80010664 0000D464*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
/*80010668 0000D468*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8001066C 0000D46C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80010670, 0x80010670) //this is a jump label
/*80010670 0000D470*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80010674 0000D474*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80010678 0000D478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8001067C 0000D47C*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*80010680 0000D480*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80010684 0000D484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80010688 0000D488*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*8001068C 0000D48C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DE788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80010690 0000D490*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80010694 0000D494*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f4);
/*80010698 0000D498*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE7A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8001069C 0000D49C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*800106A0 0000D4A0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f4, context->f1);
/*800106A4 0000D4A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r30));
/*800106A8 0000D4A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r30));
/*800106AC 0000D4AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800106B0 0000D4B0*/ PPC::Runtime::ASM::bge(.L_800106B8);
/*800106B4 0000D4B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800106B8, 0x800106B8) //this is a jump label
/*800106B8 0000D4B8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*800106BC 0000D4BC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*800106C0 0000D4C0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x5);
/*800106C4 0000D4C4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*800106C8 0000D4C8*/ PPC::Runtime::ASM::blt(.L_800104A8);
RUNTIME_PPC_JUMP_LABEL(.L_800106CC, 0x800106CC) //this is a jump label
/*800106CC 0000D4CC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800106D0 0000D4D0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800106D4 0000D4D4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800106D8 0000D4D8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800106DC 0000D4DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800106E0 0000D4E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800106E4 0000D4E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800106E8 0000D4E8*/ PPC::Runtime::ASM::blr();
}