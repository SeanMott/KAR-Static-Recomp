//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802500B0.hpp"



void fn_800EB568(PPC::Runtime::GCContext* context)
{
/*800EB568 000E8368*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800EB56C 000E836C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800EB570 000E8370*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EB574 000E8374*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800EB578 000E8378*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800EB57C 000E837C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB580 000E8380*/ PPC::Runtime::ASM::slwi(context->r30, context->r3, 1);
/*800EB584 000E8384*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800EB588 000E8388*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800EB58C 000E838C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800EB590 000E8390*/ PPC::Runtime::ASM::b(.L_800EB7C0);
RUNTIME_PPC_JUMP_LABEL(.L_800EB594, 0x800EB594) //this is a jump label
/*800EB594 000E8394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800EB598 000E8398*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r31);
/*800EB59C 000E839C*/ PPC::Runtime::ASM::extsh(context->r27, context->r0);
/*800EB5A0 000E83A0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800EB5A4 000E83A4*/ PPC::Runtime::ASM::bl(fn_802500B0);
/*800EB5A8 000E83A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800EB5AC 000E83AC*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r31);
/*800EB5B0 000E83B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4);
/*800EB5B4 000E83B4*/ PPC::Runtime::ASM::lhax(context->r4, context->r30, context->r0);
/*800EB5B8 000E83B8*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800EB5BC 000E83BC*/ PPC::Runtime::ASM::beq(.L_800EB7B8);
/*800EB5C0 000E83C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800EB5C4 000E83C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800EB5C8 000E83C8*/ PPC::Runtime::ASM::beq(.L_800EB654);
/*800EB5CC 000E83CC*/ PPC::Runtime::ASM::bge(.L_800EB5DC);
/*800EB5D0 000E83D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EB5D4 000E83D4*/ PPC::Runtime::ASM::bge(.L_800EB5E8);
/*800EB5D8 000E83D8*/ PPC::Runtime::ASM::b(.L_800EB730);
RUNTIME_PPC_JUMP_LABEL(.L_800EB5DC, 0x800EB5DC) //this is a jump label
/*800EB5DC 000E83DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800EB5E0 000E83E0*/ PPC::Runtime::ASM::bge(.L_800EB730);
/*800EB5E4 000E83E4*/ PPC::Runtime::ASM::b(.L_800EB6C4);
RUNTIME_PPC_JUMP_LABEL(.L_800EB5E8, 0x800EB5E8) //this is a jump label
/*800EB5E8 000E83E8*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB5EC 000E83EC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800EB5F0 000E83F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800EB5F4 000E83F4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r5));
/*800EB5F8 000E83F8*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*800EB5FC 000E83FC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800EB600 000E8400*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EB604 000E8404*/ PPC::Runtime::ASM::ble(.L_800EB628);
RUNTIME_PPC_JUMP_LABEL(.L_800EB608, 0x800EB608) //this is a jump label
/*800EB608 000E8408*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800EB60C 000E840C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800EB610 000E8410*/ PPC::Runtime::ASM::bne(.L_800EB61C);
/*800EB614 000E8414*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*800EB618 000E8418*/ PPC::Runtime::ASM::b(.L_800EB628);
RUNTIME_PPC_JUMP_LABEL(.L_800EB61C, 0x800EB61C) //this is a jump label
/*800EB61C 000E841C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EB620 000E8420*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800EB624 000E8424*/ PPC::Runtime::ASM::bdnz(.L_800EB608);
RUNTIME_PPC_JUMP_LABEL(.L_800EB628, 0x800EB628) //this is a jump label
/*800EB628 000E8428*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x44);
/*800EB62C 000E842C*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*800EB630 000E8430*/ PPC::Runtime::ASM::stbx(context->r4, context->r5, context->r0);
/*800EB634 000E8434*/ PPC::Runtime::ASM::bne(.L_800EB730);
/*800EB638 000E8438*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB63C 000E843C*/ PPC::Runtime::ASM::stbx(context->r27, context->r3, context->r6);
/*800EB640 000E8440*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB644 000E8444*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*800EB648 000E8448*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800EB64C 000E844C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*800EB650 000E8450*/ PPC::Runtime::ASM::b(.L_800EB730);
RUNTIME_PPC_JUMP_LABEL(.L_800EB654, 0x800EB654) //this is a jump label
/*800EB654 000E8454*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB658 000E8458*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800EB65C 000E845C*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*800EB660 000E8460*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x111, context->r5));
/*800EB664 000E8464*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*800EB668 000E8468*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800EB66C 000E846C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EB670 000E8470*/ PPC::Runtime::ASM::ble(.L_800EB694);
RUNTIME_PPC_JUMP_LABEL(.L_800EB674, 0x800EB674) //this is a jump label
/*800EB674 000E8474*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x89, context->r3));
/*800EB678 000E8478*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*800EB67C 000E847C*/ PPC::Runtime::ASM::bne(.L_800EB688);
/*800EB680 000E8480*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*800EB684 000E8484*/ PPC::Runtime::ASM::b(.L_800EB694);
RUNTIME_PPC_JUMP_LABEL(.L_800EB688, 0x800EB688) //this is a jump label
/*800EB688 000E8488*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EB68C 000E848C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800EB690 000E8490*/ PPC::Runtime::ASM::bdnz(.L_800EB674);
RUNTIME_PPC_JUMP_LABEL(.L_800EB694, 0x800EB694) //this is a jump label
/*800EB694 000E8494*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0xcd);
/*800EB698 000E8498*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*800EB69C 000E849C*/ PPC::Runtime::ASM::stbx(context->r4, context->r5, context->r0);
/*800EB6A0 000E84A0*/ PPC::Runtime::ASM::bne(.L_800EB730);
/*800EB6A4 000E84A4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB6A8 000E84A8*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x89);
/*800EB6AC 000E84AC*/ PPC::Runtime::ASM::stbx(context->r27, context->r3, context->r0);
/*800EB6B0 000E84B0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB6B4 000E84B4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x111, context->r4));
/*800EB6B8 000E84B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800EB6BC 000E84BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x111, context->r4));
/*800EB6C0 000E84C0*/ PPC::Runtime::ASM::b(.L_800EB730);
RUNTIME_PPC_JUMP_LABEL(.L_800EB6C4, 0x800EB6C4) //this is a jump label
/*800EB6C4 000E84C4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB6C8 000E84C8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800EB6CC 000E84CC*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*800EB6D0 000E84D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19a, context->r5));
/*800EB6D4 000E84D4*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*800EB6D8 000E84D8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800EB6DC 000E84DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EB6E0 000E84E0*/ PPC::Runtime::ASM::ble(.L_800EB704);
RUNTIME_PPC_JUMP_LABEL(.L_800EB6E4, 0x800EB6E4) //this is a jump label
/*800EB6E4 000E84E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x112, context->r3));
/*800EB6E8 000E84E8*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*800EB6EC 000E84EC*/ PPC::Runtime::ASM::bne(.L_800EB6F8);
/*800EB6F0 000E84F0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*800EB6F4 000E84F4*/ PPC::Runtime::ASM::b(.L_800EB704);
RUNTIME_PPC_JUMP_LABEL(.L_800EB6F8, 0x800EB6F8) //this is a jump label
/*800EB6F8 000E84F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EB6FC 000E84FC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800EB700 000E8500*/ PPC::Runtime::ASM::bdnz(.L_800EB6E4);
RUNTIME_PPC_JUMP_LABEL(.L_800EB704, 0x800EB704) //this is a jump label
/*800EB704 000E8504*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x156);
/*800EB708 000E8508*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*800EB70C 000E850C*/ PPC::Runtime::ASM::stbx(context->r4, context->r5, context->r0);
/*800EB710 000E8510*/ PPC::Runtime::ASM::bne(.L_800EB730);
/*800EB714 000E8514*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB718 000E8518*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x112);
/*800EB71C 000E851C*/ PPC::Runtime::ASM::stbx(context->r27, context->r3, context->r0);
/*800EB720 000E8520*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB724 000E8524*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19a, context->r4));
/*800EB728 000E8528*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800EB72C 000E852C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19a, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800EB730, 0x800EB730) //this is a jump label
/*800EB730 000E8530*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x14);
/*800EB734 000E8534*/ PPC::Runtime::ASM::ble(.L_800EB740);
/*800EB738 000E8538*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x3d);
/*800EB73C 000E853C*/ PPC::Runtime::ASM::blt(.L_800EB7B8);
RUNTIME_PPC_JUMP_LABEL(.L_800EB740, 0x800EB740) //this is a jump label
/*800EB740 000E8540*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB744 000E8544*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800EB748 000E8548*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*800EB74C 000E854C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r5));
/*800EB750 000E8550*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*800EB754 000E8554*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800EB758 000E8558*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800EB75C 000E855C*/ PPC::Runtime::ASM::ble(.L_800EB780);
RUNTIME_PPC_JUMP_LABEL(.L_800EB760, 0x800EB760) //this is a jump label
/*800EB760 000E8560*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x224, context->r3));
/*800EB764 000E8564*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*800EB768 000E8568*/ PPC::Runtime::ASM::bne(.L_800EB774);
/*800EB76C 000E856C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*800EB770 000E8570*/ PPC::Runtime::ASM::b(.L_800EB780);
RUNTIME_PPC_JUMP_LABEL(.L_800EB774, 0x800EB774) //this is a jump label
/*800EB774 000E8574*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800EB778 000E8578*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800EB77C 000E857C*/ PPC::Runtime::ASM::bdnz(.L_800EB760);
RUNTIME_PPC_JUMP_LABEL(.L_800EB780, 0x800EB780) //this is a jump label
/*800EB780 000E8580*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800EB784 000E8584*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x24);
/*800EB788 000E8588*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*800EB78C 000E858C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x24c);
/*800EB790 000E8590*/ PPC::Runtime::ASM::lhax(context->r3, context->r4, context->r3);
/*800EB794 000E8594*/ PPC::Runtime::ASM::stbx(context->r3, context->r5, context->r0);
/*800EB798 000E8598*/ PPC::Runtime::ASM::bne(.L_800EB7B8);
/*800EB79C 000E859C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB7A0 000E85A0*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x224);
/*800EB7A4 000E85A4*/ PPC::Runtime::ASM::stbx(context->r27, context->r3, context->r0);
/*800EB7A8 000E85A8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EB7AC 000E85AC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r4));
/*800EB7B0 000E85B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800EB7B4 000E85B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800EB7B8, 0x800EB7B8) //this is a jump label
/*800EB7B8 000E85B8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x28);
/*800EB7BC 000E85BC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800EB7C0, 0x800EB7C0) //this is a jump label
/*800EB7C0 000E85C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800EB7C4 000E85C4*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800EB7C8 000E85C8*/ PPC::Runtime::ASM::blt(.L_800EB594);
/*800EB7CC 000E85CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800EB7D0 000E85D0*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800EB7D4 000E85D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800EB7D8 000E85D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800EB7DC 000E85DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800EB7E0 000E85E0*/ PPC::Runtime::ASM::blr();
}