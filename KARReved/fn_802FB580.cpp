//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DE0E4.hpp"



void fn_802FB580(PPC::Runtime::GCContext* context)
{
/*802FB580 002F8380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*802FB584 002F8384*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FB588 002F8388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802FB58C 002F838C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802FB590 002F8390*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802FB594 002F8394*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802FB598 002F8398*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802FB59C 002F839C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802FB5A0 002F83A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802FB5A4 002F83A4*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802FB5A8 002F83A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB5AC 002F83AC*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x8);
/*802FB5B0 002F83B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20f8, context->r3));
/*802FB5B4 002F83B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FB5B8 002F83B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r5));
/*802FB5BC 002F83BC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802FB5C0 002F83C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FB5C4 002F83C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FB5C8 002F83C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802FB5CC 002F83CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r5));
/*802FB5D0 002F83D0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802FB5D4 002F83D4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FB5D8 002F83D8*/ PPC::Runtime::ASM::bne(.L_802FB5EC);
/*802FB5DC 002F83DC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB5E0 002F83E0*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*802FB5E4 002F83E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB5E8 002F83E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB5EC, 0x802FB5EC) //this is a jump label
/*802FB5EC 002F83EC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB5F0 002F83F0*/ PPC::Runtime::ASM::bne(.L_802FB604);
/*802FB5F4 002F83F4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB5F8 002F83F8*/ PPC::Runtime::ASM::li(context->r4, 0x317);
/*802FB5FC 002F83FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9814 @ Get_MemoryOffset_SDA21);
/*802FB600 002F8400*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB604, 0x802FB604) //this is a jump label
/*802FB604 002F8404*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FB608 002F8408*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*802FB60C 002F840C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FB610 002F8410*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802FB614 002F8414*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802FB618 002F8418*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802FB61C 002F841C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FB620 002F8420*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802FB624 002F8424*/ PPC::Runtime::ASM::bne(.L_802FB670);
/*802FB628 002F8428*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FB62C 002F842C*/ PPC::Runtime::ASM::beq(.L_802FB670);
/*802FB630 002F8430*/ PPC::Runtime::ASM::bne(.L_802FB644);
/*802FB634 002F8434*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB638 002F8438*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FB63C 002F843C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB640 002F8440*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB644, 0x802FB644) //this is a jump label
/*802FB644 002F8444*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802FB648 002F8448*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FB64C 002F844C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FB650 002F8450*/ PPC::Runtime::ASM::bne(.L_802FB660);
/*802FB654 002F8454*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FB658 002F8458*/ PPC::Runtime::ASM::beq(.L_802FB660);
/*802FB65C 002F845C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FB660, 0x802FB660) //this is a jump label
/* 802FB660 002F8460  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FB664 002F8464*/ PPC::Runtime::ASM::bne(.L_802FB670);
/*802FB668 002F8468*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FB66C 002F846C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802FB670, 0x802FB670) //this is a jump label
/*802FB670 002F8470*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB674 002F8474*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*802FB678 002F8478*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802FB67C 002F847C*/ PPC::Runtime::ASM::cmplw(context->r5, context->r4);
/*802FB680 002F8480*/ PPC::Runtime::ASM::bge(.L_802FB744);
/*802FB684 002F8484*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802FB688 002F8488*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r3));
/*802FB68C 002F848C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FB690 002F8490*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB694 002F8494*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB698 002F8498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FB69C 002F849C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB6A0 002F84A0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FB6A4 002F84A4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FB6A8 002F84A8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*802FB6AC 002F84AC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E3B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB6B0 002F84B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FB6B4 002F84B4*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805E3B1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB6B8 002F84B8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FB6BC 002F84BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802FB6C0 002F84C0*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*802FB6C4 002F84C4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*802FB6C8 002F84C8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802FB6CC 002F84CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*802FB6D0 002F84D0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f5, context->f0);
/*802FB6D4 002F84D4*/ PPC::Runtime::ASM::bne(.L_802FB6E8);
/*802FB6D8 002F84D8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB6DC 002F84DC*/ PPC::Runtime::ASM::li(context->r4, 0x3d4);
/*802FB6E0 002F84E0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB6E4 002F84E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB6E8, 0x802FB6E8) //this is a jump label
/*802FB6E8 002F84E8*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*802FB6EC 002F84EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB6F0 002F84F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802FB6F4 002F84F4*/ PPC::Runtime::ASM::bne(.L_802FB818);
/*802FB6F8 002F84F8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB6FC 002F84FC*/ PPC::Runtime::ASM::beq(.L_802FB818);
/*802FB700 002F8500*/ PPC::Runtime::ASM::bne(.L_802FB714);
/*802FB704 002F8504*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB708 002F8508*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FB70C 002F850C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB710 002F8510*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB714, 0x802FB714) //this is a jump label
/*802FB714 002F8514*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB718 002F8518*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FB71C 002F851C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FB720 002F8520*/ PPC::Runtime::ASM::bne(.L_802FB730);
/*802FB724 002F8524*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FB728 002F8528*/ PPC::Runtime::ASM::beq(.L_802FB730);
/*802FB72C 002F852C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FB730, 0x802FB730) //this is a jump label
/* 802FB730 002F8530  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FB734 002F8534*/ PPC::Runtime::ASM::bne(.L_802FB818);
/*802FB738 002F8538*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802FB73C 002F853C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*802FB740 002F8540*/ PPC::Runtime::ASM::b(.L_802FB818);
RUNTIME_PPC_JUMP_LABEL(.L_802FB744, 0x802FB744) //this is a jump label
/*802FB744 002F8544*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a, context->r31));
/*802FB748 002F8548*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*802FB74C 002F854C*/ PPC::Runtime::ASM::subf(context->r4, context->r4, context->r5);
/*802FB750 002F8550*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FB754 002F8554*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB758 002F8558*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802FB75C 002F855C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB760 002F8560*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FB764 002F8564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FB768 002F8568*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f3);
/*802FB76C 002F856C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FB770 002F8570*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802FB774 002F8574*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*802FB778 002F8578*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*802FB77C 002F857C*/ PPC::Runtime::ASM::bl(fn_tanf?);
/*802FB780 002F8580*/ PPC::Runtime::ASM::frsp(context->f2, context->f1);
/*802FB784 002F8584*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB788 002F8588*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB78C 002F858C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB790 002F8590*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802FB794 002F8594*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r3));
/*802FB798 002F8598*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3B1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB79C 002F859C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB7A0 002F85A0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802FB7A4 002F85A4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802FB7A8 002F85A8*/ PPC::Runtime::ASM::fmuls(context->f31, context->f2, context->f0);
/*802FB7AC 002F85AC*/ PPC::Runtime::ASM::bne(.L_802FB7C0);
/*802FB7B0 002F85B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB7B4 002F85B4*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*802FB7B8 002F85B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB7BC 002F85BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB7C0, 0x802FB7C0) //this is a jump label
/*802FB7C0 002F85C0*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802FB7C4 002F85C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB7C8 002F85C8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802FB7CC 002F85CC*/ PPC::Runtime::ASM::bne(.L_802FB818);
/*802FB7D0 002F85D0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB7D4 002F85D4*/ PPC::Runtime::ASM::beq(.L_802FB818);
/*802FB7D8 002F85D8*/ PPC::Runtime::ASM::bne(.L_802FB7EC);
/*802FB7DC 002F85DC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB7E0 002F85E0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FB7E4 002F85E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB7E8 002F85E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB7EC, 0x802FB7EC) //this is a jump label
/*802FB7EC 002F85EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB7F0 002F85F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FB7F4 002F85F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FB7F8 002F85F8*/ PPC::Runtime::ASM::bne(.L_802FB808);
/*802FB7FC 002F85FC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FB800 002F8600*/ PPC::Runtime::ASM::beq(.L_802FB808);
/*802FB804 002F8604*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FB808, 0x802FB808) //this is a jump label
/* 802FB808 002F8608  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FB80C 002F860C*/ PPC::Runtime::ASM::bne(.L_802FB818);
/*802FB810 002F8610*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802FB814 002F8614*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802FB818, 0x802FB818) //this is a jump label
/*802FB818 002F8618*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB81C 002F861C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FB820 002F8620*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r5));
/*802FB824 002F8624*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x8);
/*802FB828 002F8628*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802FB82C 002F862C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802FB830 002F8630*/ PPC::Runtime::ASM::bne(.L_802FB844);
/*802FB834 002F8634*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB838 002F8638*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*802FB83C 002F863C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB840 002F8640*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB844, 0x802FB844) //this is a jump label
/*802FB844 002F8644*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FB848 002F8648*/ PPC::Runtime::ASM::bne(.L_802FB860);
/*802FB84C 002F864C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D8FB8 @ Get_MemoryOffset_HighBit);
/*802FB850 002F8650*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB854 002F8654*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804D8FB8 @ Get_MemoryOffset_LowBit);
/*802FB858 002F8658*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*802FB85C 002F865C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB860, 0x802FB860) //this is a jump label
/*802FB860 002F8660*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FB864 002F8664*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802FB868 002F8668*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FB86C 002F866C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*802FB870 002F8670*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FB874 002F8674*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*802FB878 002F8678*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB87C 002F867C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802FB880 002F8680*/ PPC::Runtime::ASM::bne(.L_802FB8CC);
/*802FB884 002F8684*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB888 002F8688*/ PPC::Runtime::ASM::beq(.L_802FB8CC);
/*802FB88C 002F868C*/ PPC::Runtime::ASM::bne(.L_802FB8A0);
/*802FB890 002F8690*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB894 002F8694*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FB898 002F8698*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB89C 002F869C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB8A0, 0x802FB8A0) //this is a jump label
/*802FB8A0 002F86A0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB8A4 002F86A4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FB8A8 002F86A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FB8AC 002F86AC*/ PPC::Runtime::ASM::bne(.L_802FB8BC);
/*802FB8B0 002F86B0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FB8B4 002F86B4*/ PPC::Runtime::ASM::beq(.L_802FB8BC);
/*802FB8B8 002F86B8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FB8BC, 0x802FB8BC) //this is a jump label
/* 802FB8BC 002F86BC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FB8C0 002F86C0*/ PPC::Runtime::ASM::bne(.L_802FB8CC);
/*802FB8C4 002F86C4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802FB8C8 002F86C8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802FB8CC, 0x802FB8CC) //this is a jump label
/*802FB8CC 002F86CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB8D0 002F86D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802FB8D4 002F86D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802FB8D8 002F86D8*/ PPC::Runtime::ASM::bl(fn_atan2?);
/*802FB8DC 002F86DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB8E0 002F86E0*/ PPC::Runtime::ASM::frsp(context->f31, context->f1);
/*802FB8E4 002F86E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FB8E8 002F86E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802FB8EC 002F86EC*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802FB8F0 002F86F0  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802FB8F4 002F86F4*/ PPC::Runtime::ASM::bne(.L_802FB908);
/*802FB8F8 002F86F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB8FC 002F86FC*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*802FB900 002F8700*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB904 002F8704*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB908, 0x802FB908) //this is a jump label
/*802FB908 002F8708*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB90C 002F870C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*802FB910 002F8710*/ PPC::Runtime::ASM::beq(.L_802FB928);
/*802FB914 002F8714*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D8FC4 @ Get_MemoryOffset_HighBit);
/*802FB918 002F8718*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB91C 002F871C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804D8FC4 @ Get_MemoryOffset_LowBit);
/*802FB920 002F8720*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*802FB924 002F8724*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB928, 0x802FB928) //this is a jump label
/*802FB928 002F8728*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*802FB92C 002F872C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB930 002F8730*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802FB934 002F8734*/ PPC::Runtime::ASM::bne(.L_802FB980);
/*802FB938 002F8738*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802FB93C 002F873C*/ PPC::Runtime::ASM::beq(.L_802FB980);
/*802FB940 002F8740*/ PPC::Runtime::ASM::bne(.L_802FB954);
/*802FB944 002F8744*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802FB948 002F8748*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802FB94C 002F874C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802FB950 002F8750*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802FB954, 0x802FB954) //this is a jump label
/*802FB954 002F8754*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802FB958 002F8758*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802FB95C 002F875C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802FB960 002F8760*/ PPC::Runtime::ASM::bne(.L_802FB970);
/*802FB964 002F8764*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802FB968 002F8768*/ PPC::Runtime::ASM::beq(.L_802FB970);
/*802FB96C 002F876C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802FB970, 0x802FB970) //this is a jump label
/* 802FB970 002F8770  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802FB974 002F8774*/ PPC::Runtime::ASM::bne(.L_802FB980);
/*802FB978 002F8778*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802FB97C 002F877C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802FB980, 0x802FB980) //this is a jump label
/*802FB980 002F8780*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB984 002F8784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802FB988 002F8788*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802FB98C 002F878C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802FB990 002F8790*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FB994 002F8794*/ PPC::Runtime::ASM::bctrl();
/*802FB998 002F8798*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802FB99C 002F879C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802FB9A0 002F87A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r12));
/*802FB9A4 002F87A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FB9A8 002F87A8*/ PPC::Runtime::ASM::bctrl();
/*802FB9AC 002F87AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FB9B0 002F87B0*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_HighBit);
/*802FB9B4 002F87B4*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_LowBit);
/*802FB9B8 002F87B8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3B10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FB9BC 002F87BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r4));
/*802FB9C0 002F87C0*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802FB9C4 002F87C4*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*802FB9C8 002F87C8*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*802FB9CC 002F87CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802FB9D0 002F87D0*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/* 802FB9D4 002F87D4  4C C6 32 42 */ crset context->cr1eq
/*802FB9D8 002F87D8*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*802FB9DC 002F87DC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802FB9E0 002F87E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802FB9E4 002F87E4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802FB9E8 002F87E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802FB9EC 002F87EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802FB9F0 002F87F0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802FB9F4 002F87F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FB9F8 002F87F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*802FB9FC 002F87FC*/ PPC::Runtime::ASM::blr();
}