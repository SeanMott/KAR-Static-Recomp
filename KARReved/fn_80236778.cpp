//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80236778(PPC::Runtime::GCContext* context)
{
/*80236778 00233578*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023677C 0023357C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80236780 00233580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236784 00233584*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80236788 00233588*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023678C 0023358C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80236790 00233590*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80236794 00233594*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/* 80236798 00233598  34 9D FF FB */ subic. context->r4 , context->r29 , 0x5
/*8023679C 0023359C*/ PPC::Runtime::ASM::lis(context->r3, String_ "efModelDat" Get_MemoryOffset_HighBit);
/*802367A0 002335A0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, String_ "efModelDat" Get_MemoryOffset_LowBit);
/*802367A4 002335A4*/ PPC::Runtime::ASM::blt(.L_802367B4);
/*802367A8 002335A8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x200);
/*802367AC 002335AC*/ PPC::Runtime::ASM::bge(.L_802367B4);
/*802367B0 002335B0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802367B4, 0x802367B4) //this is a jump label
/*802367B4 002335B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802367B8 002335B8*/ PPC::Runtime::ASM::bne(.L_802367DC);
/*802367BC 002335BC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802367C0 002335C0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x58);
/*802367C4 002335C4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802367C8 002335C8*/ PPC::Runtime::ASM::bl(OSReport);
/*802367CC 002335CC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x70);
/*802367D0 002335D0*/ PPC::Runtime::ASM::li(context->r3, String_ "eflib." Get_MemoryOffset_SDA21);
/*802367D4 002335D4*/ PPC::Runtime::ASM::li(context->r4, 0x182);
/*802367D8 002335D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802367DC, 0x802367DC) //this is a jump label
/*802367DC 002335DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802367E0 002335E0*/ PPC::Runtime::ASM::slwi(context->r5, context->r29, 3);
/*802367E4 002335E4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802367E8 002335E8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802367EC 002335EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r31));
/*802367F0 002335F0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*802367F4 002335F4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*802367F8 002335F8*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
/*802367FC 002335FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r31));
/*80236800 00233600*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*80236804 00233604*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80236808 00233608*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8023680C 0023360C*/ PPC::Runtime::ASM::blt(.L_8023684C);
/*80236810 00233610*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1f);
/*80236814 00233614*/ PPC::Runtime::ASM::bgt(.L_8023684C);
/*80236818 00233618*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x2);
/*8023681C 0023361C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80236820 00233620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*80236824 00233624*/ PPC::Runtime::ASM::slw(context->r29, context->r4, context->r3);
/*80236828 00233628*/ PPC::Runtime::ASM::and.(context->r0, context->r0, context->r29);
/*8023682C 0023362C*/ PPC::Runtime::ASM::bne(.L_80236840);
/*80236830 00233630*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x20);
/*80236834 00233634*/ PPC::Runtime::ASM::li(context->r3, String_ "eflib." Get_MemoryOffset_SDA21);
/*80236838 00233638*/ PPC::Runtime::ASM::li(context->r4, 0x140);
/*8023683C 0023363C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80236840, 0x80236840) //this is a jump label
/*80236840 00233640*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*80236844 00233644*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r29);
/*80236848 00233648*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8023684C, 0x8023684C) //this is a jump label
/*8023684C 0023364C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80236850 00233650*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*80236854 00233654*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r4));
/*80236858 00233658*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8023685C 0023365C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r4));
/*80236860 00233660*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80236864 00233664*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80236868 00233668*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023686C 0023366C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236870 00233670*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80236874 00233674*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80236878 00233678*/ PPC::Runtime::ASM::blr();
}