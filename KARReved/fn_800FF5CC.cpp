//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FFCD0.hpp"
#include "fn_killWhispy.hpp"
#include "fn_killWhispy.hpp"



void fn_800FF5CC(PPC::Runtime::GCContext* context)
{
/*800FF5CC 000FC3CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800FF5D0 000FC3D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FF5D4 000FC3D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FF5D8 000FC3D8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800FF5DC 000FC3DC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800FF5E0 000FC3E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800FF5E4 000FC3E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FF5E8 000FC3E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800FF5EC 000FC3EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FF5F0 000FC3F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800FF5F4 000FC3F4*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*800FF5F8 000FC3F8*/ PPC::Runtime::ASM::blt(.L_800FF650);
/*800FF5FC 000FC3FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FF600 000FC400*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800FF604 000FC404*/ PPC::Runtime::ASM::bne(.L_800FF650);
/*800FF608 000FC408*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FF60C 000FC40C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FF610 000FC410*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800FF614 000FC414*/ PPC::Runtime::ASM::b(.L_800FF62C);
RUNTIME_PPC_JUMP_LABEL(.L_800FF618, 0x800FF618) //this is a jump label
/*800FF618 000FC418*/ PPC::Runtime::ASM::cmpw(context->r5, context->r4);
/*800FF61C 000FC41C*/ PPC::Runtime::ASM::bne(.L_800FF624);
/*800FF620 000FC420*/ PPC::Runtime::ASM::b(.L_800FF64C);
RUNTIME_PPC_JUMP_LABEL(.L_800FF624, 0x800FF624) //this is a jump label
/*800FF624 000FC424*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FF628 000FC428*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FF62C, 0x800FF62C) //this is a jump label
/*800FF62C 000FC42C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800FF630 000FC430*/ PPC::Runtime::ASM::bne(.L_800FF618);
/*800FF634 000FC434*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1013 @ Get_MemoryOffset_HighBit);
/*800FF638 000FC438*/ PPC::Runtime::ASM::li(context->r4, 0x96c);
/*800FF63C 000FC43C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1013 @ Get_MemoryOffset_LowBit);
/*800FF640 000FC440*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6288 @ Get_MemoryOffset_SDA21);
/*800FF644 000FC444*/ PPC::Runtime::ASM::bl(fn___assert);
/*800FF648 000FC448*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FF64C, 0x800FF64C) //this is a jump label
/*800FF64C 000FC44C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800FF650, 0x800FF650) //this is a jump label
/*800FF650 000FC450*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/*800FF654 000FC454*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FF658 000FC458*/ PPC::Runtime::ASM::ble(.L_800FF680);
/*800FF65C 000FC45C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800FF660 000FC460*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/*800FF664 000FC464*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/*800FF668 000FC468*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FF66C 000FC46C*/ PPC::Runtime::ASM::bgt(.L_800FF680);
/*800FF670 000FC470*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*800FF674 000FC474*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800FF678 000FC478*/ PPC::Runtime::ASM::beq(.L_800FF680);
/*800FF67C 000FC47C*/ PPC::Runtime::ASM::bl(fn_800FFCD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FF680, 0x800FF680) //this is a jump label
/*800FF680 000FC480*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/* 800FF684 000FC484  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*800FF688 000FC488*/ PPC::Runtime::ASM::beq(.L_800FF738);
/*800FF68C 000FC48C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800FF690 000FC490*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*800FF694 000FC494*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*800FF698 000FC498*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800FF69C 000FC49C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FF6A0 000FC4A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r28));
/*800FF6A4 000FC4A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800FF6A8 000FC4A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800FF6AC 000FC4AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FF6B0 000FC4B0*/ PPC::Runtime::ASM::bne(.L_800FF6BC);
/*800FF6B4 000FC4B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FF6B8 000FC4B8*/ PPC::Runtime::ASM::b(.L_800FF70C);
RUNTIME_PPC_JUMP_LABEL(.L_800FF6BC, 0x800FF6BC) //this is a jump label
/*800FF6BC 000FC4BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800FF6C0 000FC4C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r4));
/*800FF6C4 000FC4C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FF6C8 000FC4C8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FF6CC 000FC4CC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*800FF6D0 000FC4D0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*800FF6D4 000FC4D4*/ PPC::Runtime::ASM::bne(.L_800FF6EC);
/*800FF6D8 000FC4D8*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "gryakupushoutwall." Get_MemoryOffset_HighBit);
/*800FF6DC 000FC4DC*/ PPC::Runtime::ASM::li(context->r4, 0xa6);
/*800FF6E0 000FC4E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "gryakupushoutwall." Get_MemoryOffset_LowBit);
/*800FF6E4 000FC4E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6280 @ Get_MemoryOffset_SDA21);
/*800FF6E8 000FC4E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FF6EC, 0x800FF6EC) //this is a jump label
/*800FF6EC 000FC4EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*800FF6F0 000FC4F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800FF6F4 000FC4F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FF6F8 000FC4F8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*800FF6FC 000FC4FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*800FF700 000FC500*/ PPC::Runtime::ASM::bge(.L_800FF708);
/*800FF704 000FC504*/ PPC::Runtime::ASM::b(.L_800FF70C);
RUNTIME_PPC_JUMP_LABEL(.L_800FF708, 0x800FF708) //this is a jump label
/*800FF708 000FC508*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FF70C, 0x800FF70C) //this is a jump label
/*800FF70C 000FC50C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800FF710 000FC510*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800FF714 000FC514*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FF718 000FC518*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800FF71C 000FC51C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r28));
/*800FF720 000FC520*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FF724 000FC524*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800FF728 000FC528*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800FF72C 000FC52C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800FF730 000FC530*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*800FF734 000FC534*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_800FF738, 0x800FF738) //this is a jump label
/*800FF738 000FC538*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800FF73C 000FC53C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800FF740 000FC540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800FF744 000FC544*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*800FF748 000FC548*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FF74C 000FC54C*/ PPC::Runtime::ASM::bgt(.L_800FF780);
/*800FF750 000FC550*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*800FF754 000FC554*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FF758 000FC558*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FF75C 000FC55C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FF760 000FC560*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FF764 000FC564*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FF768 000FC568*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800FF76C 000FC56C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800FF770 000FC570*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800FF774 000FC574*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800FF778 000FC578*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*800FF77C 000FC57C*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_800FF780, 0x800FF780) //this is a jump label
/*800FF780 000FC580*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800FF784 000FC584*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800FF788 000FC588*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FF78C 000FC58C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FF790 000FC590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800FF794 000FC594*/ PPC::Runtime::ASM::blr();
}