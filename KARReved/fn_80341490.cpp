//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80341860.hpp"



void fn_80341490(PPC::Runtime::GCContext* context)
{
/*80341490 0033E290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80341494 0033E294*/ PPC::Runtime::ASM::mflr(context->r0);
/*80341498 0033E298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8034149C 0033E29C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*803414A0 0033E2A0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*803414A4 0033E2A4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803414A8 0033E2A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7518 @ Get_MemoryOffset_HighBit);
/*803414AC 0033E2AC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*803414B0 0033E2B0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*803414B4 0033E2B4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804E7518 @ Get_MemoryOffset_LowBit);
/*803414B8 0033E2B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803414BC 0033E2BC*/ PPC::Runtime::ASM::beq(.L_8034167C);
/*803414C0 0033E2C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*803414C4 0033E2C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4504 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803414C8 0033E2C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803414CC 0033E2CC*/ PPC::Runtime::ASM::bge(.L_8034167C);
/*803414D0 0033E2D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*803414D4 0033E2D4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803414D8 0033E2D8*/ PPC::Runtime::ASM::beq(.L_8034167C);
/*803414DC 0033E2DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*803414E0 0033E2E0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803414E4 0033E2E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803414E8 0033E2E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803414EC 0033E2EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*803414F0 0033E2F0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803414F4 0033E2F4*/ PPC::Runtime::ASM::beq(.L_803414FC);
/*803414F8 0033E2F8*/ PPC::Runtime::ASM::b(.L_80341500);
RUNTIME_PPC_JUMP_LABEL(.L_803414FC, 0x803414FC) //this is a jump label
/*803414FC 0033E2FC*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAF38 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80341500, 0x80341500) //this is a jump label
/*80341500 0033E300*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4f0);
/*80341504 0033E304*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 80341508 0033E308  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8034150C 0033E30C*/ PPC::Runtime::ASM::beq(.L_80341514);
/*80341510 0033E310*/ PPC::Runtime::ASM::li(context->r29, 0x6);
RUNTIME_PPC_JUMP_LABEL(.L_80341514, 0x80341514) //this is a jump label
/*80341514 0033E314*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80341518 0033E318*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8034151C 0033E31C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80341520 0033E320*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*80341524 0033E324*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80341528 0033E328*/ PPC::Runtime::ASM::beq(.L_80341530);
/*8034152C 0033E32C*/ PPC::Runtime::ASM::b(.L_80341534);
RUNTIME_PPC_JUMP_LABEL(.L_80341530, 0x80341530) //this is a jump label
/*80341530 0033E330*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAF38 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80341534, 0x80341534) //this is a jump label
/*80341534 0033E334*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x504);
/*80341538 0033E338*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8034153C 0033E33C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80341540 0033E340*/ PPC::Runtime::ASM::beq(.L_80341548);
/*80341544 0033E344*/ PPC::Runtime::ASM::li(context->r29, 0x5);
RUNTIME_PPC_JUMP_LABEL(.L_80341548, 0x80341548) //this is a jump label
/*80341548 0033E348*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8034154C 0033E34C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80341550 0033E350*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80341554 0033E354*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*80341558 0033E358*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8034155C 0033E35C*/ PPC::Runtime::ASM::beq(.L_80341564);
/*80341560 0033E360*/ PPC::Runtime::ASM::b(.L_80341568);
RUNTIME_PPC_JUMP_LABEL(.L_80341564, 0x80341564) //this is a jump label
/*80341564 0033E364*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAF38 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80341568, 0x80341568) //this is a jump label
/*80341568 0033E368*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x518);
/*8034156C 0033E36C*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 80341570 0033E370  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80341574 0033E374*/ PPC::Runtime::ASM::beq(.L_8034157C);
/*80341578 0033E378*/ PPC::Runtime::ASM::li(context->r29, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8034157C, 0x8034157C) //this is a jump label
/*8034157C 0033E37C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80341580 0033E380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80341584 0033E384*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80341588 0033E388*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*8034158C 0033E38C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80341590 0033E390*/ PPC::Runtime::ASM::beq(.L_80341598);
/*80341594 0033E394*/ PPC::Runtime::ASM::b(.L_8034159C);
RUNTIME_PPC_JUMP_LABEL(.L_80341598, 0x80341598) //this is a jump label
/*80341598 0033E398*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAF38 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8034159C, 0x8034159C) //this is a jump label
/*8034159C 0033E39C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x52c);
/*803415A0 0033E3A0*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 803415A4 0033E3A4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803415A8 0033E3A8*/ PPC::Runtime::ASM::beq(.L_803415B0);
/*803415AC 0033E3AC*/ PPC::Runtime::ASM::li(context->r29, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_803415B0, 0x803415B0) //this is a jump label
/*803415B0 0033E3B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*803415B4 0033E3B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803415B8 0033E3B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803415BC 0033E3BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*803415C0 0033E3C0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803415C4 0033E3C4*/ PPC::Runtime::ASM::beq(.L_803415CC);
/*803415C8 0033E3C8*/ PPC::Runtime::ASM::b(.L_803415D0);
RUNTIME_PPC_JUMP_LABEL(.L_803415CC, 0x803415CC) //this is a jump label
/*803415CC 0033E3CC*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAF38 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_803415D0, 0x803415D0) //this is a jump label
/*803415D0 0033E3D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x540);
/*803415D4 0033E3D4*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 803415D8 0033E3D8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*803415DC 0033E3DC*/ PPC::Runtime::ASM::beq(.L_803415E4);
/*803415E0 0033E3E0*/ PPC::Runtime::ASM::li(context->r29, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_803415E4, 0x803415E4) //this is a jump label
/*803415E4 0033E3E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*803415E8 0033E3E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803415EC 0033E3EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803415F0 0033E3F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*803415F4 0033E3F4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803415F8 0033E3F8*/ PPC::Runtime::ASM::beq(.L_80341600);
/*803415FC 0033E3FC*/ PPC::Runtime::ASM::b(.L_80341604);
RUNTIME_PPC_JUMP_LABEL(.L_80341600, 0x80341600) //this is a jump label
/*80341600 0033E400*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAF38 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80341604, 0x80341604) //this is a jump label
/*80341604 0033E404*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x554);
/*80341608 0033E408*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8034160C 0033E40C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80341610 0033E410*/ PPC::Runtime::ASM::beq(.L_80341618);
/*80341614 0033E414*/ PPC::Runtime::ASM::li(context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80341618, 0x80341618) //this is a jump label
/*80341618 0033E418*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8034161C 0033E41C*/ PPC::Runtime::ASM::beq(.L_8034167C);
/*80341620 0033E420*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80341624 0033E424*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80341628 0033E428*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r12));
/*8034162C 0033E42C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80341630 0033E430*/ PPC::Runtime::ASM::bctrl();
/*80341634 0033E434*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80341638 0033E438*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8034163C 0033E43C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80341640 0033E440*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80341644 0033E444*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r0, 24);
/*80341648 0033E448*/ PPC::Runtime::ASM::bl(fn_80341860);
/*8034164C 0033E44C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80341650 0033E450*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80341654 0033E454*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80341658 0033E458*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8034165C 0033E45C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80341660 0033E460*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80341664 0033E464*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80341668 0033E468*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8034166C 0033E46C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80341670 0033E470*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r12));
/*80341674 0033E474*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80341678 0033E478*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8034167C, 0x8034167C) //this is a jump label
/*8034167C 0033E47C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80341680 0033E480*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80341684 0033E484*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80341688 0033E488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8034168C 0033E48C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80341690 0033E490*/ PPC::Runtime::ASM::blr();
}