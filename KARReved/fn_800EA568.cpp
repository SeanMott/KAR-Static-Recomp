//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005F3E8.hpp"
#include "fn_8005F528.hpp"



void fn_800EA568(PPC::Runtime::GCContext* context)
{
/*800EA568 000E7368*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800EA56C 000E736C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EA570 000E7370*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800EA574 000E7374*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800EA578 000E7378*/ PPC::Runtime::ASM::bl(_savegpr_23);
/* 800EA57C 000E737C  7C 9A 23 79 */ mr. context->r26 , context->r4
/*800EA580 000E7380*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_961 @ Get_MemoryOffset_HighBit);
/*800EA584 000E7384*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800EA588 000E7388*/ PPC::Runtime::ASM::mr(context->r23, context->r5);
/*800EA58C 000E738C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_961 @ Get_MemoryOffset_LowBit);
/*800EA590 000E7390*/ PPC::Runtime::ASM::beq(.L_800EA6A0);
/*800EA594 000E7394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800EA598 000E7398*/ PPC::Runtime::ASM::cmpw(context->r0, context->r6);
/*800EA59C 000E739C*/ PPC::Runtime::ASM::ble(.L_800EA5B0);
/*800EA5A0 000E73A0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800EA5A4 000E73A4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xd4);
/*800EA5A8 000E73A8*/ PPC::Runtime::ASM::li(context->r4, 0x1af);
/*800EA5AC 000E73AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EA5B0, 0x800EA5B0) //this is a jump label
/*800EA5B0 000E73B0*/ PPC::Runtime::ASM::mr(context->r30, context->r23);
/*800EA5B4 000E73B4*/ PPC::Runtime::ASM::mr(context->r29, context->r25);
/*800EA5B8 000E73B8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800EA5BC 000E73BC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800EA5C0 000E73C0*/ PPC::Runtime::ASM::b(.L_800EA694);
RUNTIME_PPC_JUMP_LABEL(.L_800EA5C4, 0x800EA5C4) //this is a jump label
/*800EA5C4 000E73C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800EA5C8 000E73C8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800EA5CC 000E73CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800EA5D0 000E73D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x728, context->r29));
/*800EA5D4 000E73D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EA5D8 000E73D8*/ PPC::Runtime::ASM::bgt(.L_800EA684);
/*800EA5DC 000E73DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800EA5E0 000E73E0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r28);
/*800EA5E4 000E73E4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*800EA5E8 000E73E8*/ PPC::Runtime::ASM::add(context->r23, context->r25, context->r0);
/*800EA5EC 000E73EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r23));
/*800EA5F0 000E73F0*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/* 800EA5F4 000E73F4  7C 78 1B 79 */ mr. context->r24 , context->r3
/*800EA5F8 000E73F8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800EA5FC 000E73FC*/ PPC::Runtime::ASM::blt(.L_800EA610);
/*800EA600 000E7400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r23));
/*800EA604 000E7404*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*800EA608 000E7408*/ PPC::Runtime::ASM::bge(.L_800EA610);
/*800EA60C 000E740C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EA610, 0x800EA610) //this is a jump label
/*800EA610 000E7410*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800EA614 000E7414*/ PPC::Runtime::ASM::bne(.L_800EA628);
/*800EA618 000E7418*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800EA61C 000E741C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xac);
/*800EA620 000E7420*/ PPC::Runtime::ASM::li(context->r4, 0x12c);
/*800EA624 000E7424*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800EA628, 0x800EA628) //this is a jump label
/*800EA628 000E7428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r23));
/*800EA62C 000E742C*/ PPC::Runtime::ASM::slwi(context->r0, context->r24, 3);
/*800EA630 000E7430*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800EA634 000E7434*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 800EA638 000E7438  54 00 C0 02 */ extlwi context->r0 , context->r0 , 2 , 24
/*800EA63C 000E743C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 31);
/*800EA640 000E7440*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800EA644 000E7444*/ PPC::Runtime::ASM::beq(.L_800EA660);
/*800EA648 000E7448*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800EA64C 000E744C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r23));
/*800EA650 000E7450*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r23));
/*800EA654 000E7454*/ PPC::Runtime::ASM::bl(fn_8005F3E8);
/*800EA658 000E7458*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x470, context->r23));
/*800EA65C 000E745C*/ PPC::Runtime::ASM::b(.L_800EA674);
RUNTIME_PPC_JUMP_LABEL(.L_800EA660, 0x800EA660) //this is a jump label
/*800EA660 000E7460*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800EA664 000E7464*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r23));
/*800EA668 000E7468*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r23));
/*800EA66C 000E746C*/ PPC::Runtime::ASM::bl(fn_8005F528);
/*800EA670 000E7470*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x470, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_800EA674, 0x800EA674) //this is a jump label
/*800EA674 000E7474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800EA678 000E7478*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0xc);
/*800EA67C 000E747C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800EA680 000E7480*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800EA684, 0x800EA684) //this is a jump label
/*800EA684 000E7484*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*800EA688 000E7488*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*800EA68C 000E748C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x10);
/*800EA690 000E7490*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EA694, 0x800EA694) //this is a jump label
/*800EA694 000E7494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800EA698 000E7498*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800EA69C 000E749C*/ PPC::Runtime::ASM::blt(.L_800EA5C4);
RUNTIME_PPC_JUMP_LABEL(.L_800EA6A0, 0x800EA6A0) //this is a jump label
/*800EA6A0 000E74A0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800EA6A4 000E74A4*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*800EA6A8 000E74A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800EA6AC 000E74AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EA6B0 000E74B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800EA6B4 000E74B4*/ PPC::Runtime::ASM::blr();
}