//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSGetResetSwitchState.hpp"
#include "OSResetSystem.hpp"
#include "memcpy.hpp"
#include "fn_PADRead.hpp"
#include "fn_PADClamp.hpp"
#include "fn_PADReset.hpp"



void fn_8043F5D4(PPC::Runtime::GCContext* context)
{
/*8043F5D4 0043C3D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8043F5D8 0043C3D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043F5DC 0043C3DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043F5E0 0043C3E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043F5E4 0043C3E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8043F5E8 0043C3E8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8043F5EC 0043C3EC*/ PPC::Runtime::ASM::bl(fn_OSGetResetSwitchState);
/*8043F5F0 0043C3F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8043F5F4 0043C3F4*/ PPC::Runtime::ASM::beq(.L_8043F60C);
/*8043F5F8 0043C3F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F5FC 0043C3FC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8043F600 0043C400*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F604 0043C404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r3));
/*8043F608 0043C408*/ PPC::Runtime::ASM::b(.L_8043F634);
RUNTIME_PPC_JUMP_LABEL(.L_8043F60C, 0x8043F60C) //this is a jump label
/*8043F60C 0043C40C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F610 0043C410*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F614 0043C414*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r3));
/*8043F618 0043C418*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8043F61C 0043C41C*/ PPC::Runtime::ASM::beq(.L_8043F634);
/*8043F620 0043C420*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8043F624 0043C424*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8043F628 0043C428*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8043F62C 0043C42C*/ PPC::Runtime::ASM::bl(OSResetSystem);
RUNTIME_PPC_JUMP_LABEL(.L_8043F630, 0x8043F630) //this is a jump label
/*8043F630 0043C430*/ PPC::Runtime::ASM::b(.L_8043F630);
RUNTIME_PPC_JUMP_LABEL(.L_8043F634, 0x8043F634) //this is a jump label
/*8043F634 0043C434*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F638 0043C438*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*8043F63C 0043C43C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F640 0043C440*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x54);
/*8043F644 0043C444*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8043F648 0043C448*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x84);
/*8043F64C 0043C44C*/ PPC::Runtime::ASM::bl(memcpy);
/*8043F650 0043C450*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8043F654 0043C454*/ PPC::Runtime::ASM::bl(fn_PADRead);
/*8043F658 0043C458*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8043F65C 0043C45C*/ PPC::Runtime::ASM::bl(fn_PADClamp);
/*8043F660 0043C460*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F664 0043C464*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8043F668 0043C468*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F66C 0043C46C*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*8043F670 0043C470*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*8043F674 0043C474*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8043F678 0043C478*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8043F67C 0043C47C*/ PPC::Runtime::ASM::bne(.L_8043F688);
/*8043F680 0043C480*/ PPC::Runtime::ASM::srw(context->r0, context->r3, context->r5);
/*8043F684 0043C484*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8043F688, 0x8043F688) //this is a jump label
/*8043F688 0043C488*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*8043F68C 0043C48C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8043F690 0043C490*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r31));
/*8043F694 0043C494*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8043F698 0043C498*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8043F69C 0043C49C*/ PPC::Runtime::ASM::bne(.L_8043F6A8);
/*8043F6A0 0043C4A0*/ PPC::Runtime::ASM::srw(context->r0, context->r3, context->r5);
/*8043F6A4 0043C4A4*/ PPC::Runtime::ASM::or(context->r30, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8043F6A8, 0x8043F6A8) //this is a jump label
/*8043F6A8 0043C4A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r4));
/*8043F6AC 0043C4AC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8043F6B0 0043C4B0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*8043F6B4 0043C4B4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8043F6B8 0043C4B8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8043F6BC 0043C4BC*/ PPC::Runtime::ASM::bne(.L_8043F6C8);
/*8043F6C0 0043C4C0*/ PPC::Runtime::ASM::srw(context->r0, context->r3, context->r5);
/*8043F6C4 0043C4C4*/ PPC::Runtime::ASM::or(context->r30, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8043F6C8, 0x8043F6C8) //this is a jump label
/*8043F6C8 0043C4C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r4));
/*8043F6CC 0043C4CC*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8043F6D0 0043C4D0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8043F6D4 0043C4D4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8043F6D8 0043C4D8*/ PPC::Runtime::ASM::bne(.L_8043F6E4);
/*8043F6DC 0043C4DC*/ PPC::Runtime::ASM::srw(context->r0, context->r3, context->r5);
/*8043F6E0 0043C4E0*/ PPC::Runtime::ASM::or(context->r30, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8043F6E4, 0x8043F6E4) //this is a jump label
/*8043F6E4 0043C4E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8043F6E8 0043C4E8*/ PPC::Runtime::ASM::beq(.L_8043F6F4);
/*8043F6EC 0043C4EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8043F6F0 0043C4F0*/ PPC::Runtime::ASM::bl(fn_PADReset);
RUNTIME_PPC_JUMP_LABEL(.L_8043F6F4, 0x8043F6F4) //this is a jump label
/*8043F6F4 0043C4F4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8e, context->r31));
/*8043F6F8 0043C4F8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8043F6FC 0043C4FC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F700 0043C500*/ PPC::Runtime::ASM::bne(.L_8043F710);
/*8043F704 0043C504*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*8043F708 0043C508*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F70C 0043C50C*/ PPC::Runtime::ASM::beq(.L_8043F774);
RUNTIME_PPC_JUMP_LABEL(.L_8043F710, 0x8043F710) //this is a jump label
/*8043F710 0043C510*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*8043F714 0043C514*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8043F718 0043C518*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a, context->r31));
/*8043F71C 0043C51C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F720 0043C520*/ PPC::Runtime::ASM::bne(.L_8043F730);
/*8043F724 0043C524*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r3));
/*8043F728 0043C528*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F72C 0043C52C*/ PPC::Runtime::ASM::beq(.L_8043F774);
RUNTIME_PPC_JUMP_LABEL(.L_8043F730, 0x8043F730) //this is a jump label
/*8043F730 0043C530*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a, context->r3));
/*8043F734 0043C534*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*8043F738 0043C538*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*8043F73C 0043C53C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F740 0043C540*/ PPC::Runtime::ASM::bne(.L_8043F750);
/*8043F744 0043C544*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r3));
/*8043F748 0043C548*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F74C 0043C54C*/ PPC::Runtime::ASM::beq(.L_8043F774);
RUNTIME_PPC_JUMP_LABEL(.L_8043F750, 0x8043F750) //this is a jump label
/*8043F750 0043C550*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a, context->r3));
/*8043F754 0043C554*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*8043F758 0043C558*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*8043F75C 0043C55C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F760 0043C560*/ PPC::Runtime::ASM::bne(.L_8043F770);
/*8043F764 0043C564*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r3));
/*8043F768 0043C568*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8043F76C 0043C56C*/ PPC::Runtime::ASM::beq(.L_8043F774);
RUNTIME_PPC_JUMP_LABEL(.L_8043F770, 0x8043F770) //this is a jump label
/*8043F770 0043C570*/ PPC::Runtime::ASM::li(context->r6, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F774, 0x8043F774) //this is a jump label
/*8043F774 0043C574*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x4);
/*8043F778 0043C578*/ PPC::Runtime::ASM::bne(.L_8043F794);
/*8043F77C 0043C57C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F780 0043C580*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043F784 0043C584*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F788 0043C588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r3));
/*8043F78C 0043C58C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*8043F790 0043C590*/ PPC::Runtime::ASM::b(.L_8043F808);
RUNTIME_PPC_JUMP_LABEL(.L_8043F794, 0x8043F794) //this is a jump label
/*8043F794 0043C594*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F798 0043C598*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F79C 0043C59C*/ PPC::Runtime::ASM::mulli(context->r5, context->r6, 0xc);
/*8043F7A0 0043C5A0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r4));
/*8043F7A4 0043C5A4*/ PPC::Runtime::ASM::addi(context->r7, context->r4, 0x54);
/*8043F7A8 0043C5A8*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r5);
/*8043F7AC 0043C5AC*/ PPC::Runtime::ASM::lhzx(context->r6, context->r7, context->r5);
/*8043F7B0 0043C5B0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*8043F7B4 0043C5B4*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r6);
/*8043F7B8 0043C5B8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r4));
/*8043F7BC 0043C5BC*/ PPC::Runtime::ASM::and(context->r0, context->r6, context->r0);
/* 8043F7C0 0043C5C0  54 00 04 3F */ clrlwi. context->r0 , context->r0 , 16
/*8043F7C4 0043C5C4*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*8043F7C8 0043C5C8*/ PPC::Runtime::ASM::beq(.L_8043F7D8);
/*8043F7CC 0043C5CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043F7D0 0043C5D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r4));
/*8043F7D4 0043C5D4*/ PPC::Runtime::ASM::b(.L_8043F7FC);
RUNTIME_PPC_JUMP_LABEL(.L_8043F7D8, 0x8043F7D8) //this is a jump label
/*8043F7D8 0043C5D8*/ PPC::Runtime::ASM::lhzx(context->r0, context->r7, context->r5);
/*8043F7DC 0043C5DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043F7E0 0043C5E0*/ PPC::Runtime::ASM::beq(.L_8043F7FC);
/*8043F7E4 0043C5E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r4));
/*8043F7E8 0043C5E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8043F7EC 0043C5EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1e);
/*8043F7F0 0043C5F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r4));
/*8043F7F4 0043C5F4*/ PPC::Runtime::ASM::ble(.L_8043F7FC);
/*8043F7F8 0043C5F8*/ PPC::Runtime::ASM::lhzx(context->r6, context->r7, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8043F7FC, 0x8043F7FC) //this is a jump label
/*8043F7FC 0043C5FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F800 0043C600*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043F804 0043C604*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8043F808, 0x8043F808) //this is a jump label
/*8043F808 0043C608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043F80C 0043C60C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043F810 0043C610*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8043F814 0043C614*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043F818 0043C618*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8043F81C 0043C61C*/ PPC::Runtime::ASM::blr();
}