//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_JObjUnref.hpp"
#include "fn_HSD_JObjUnref.hpp"
#include "fn___assert.hpp"



void fn_8042B6A0(PPC::Runtime::GCContext* context)
{
/*8042B6A0 004284A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8042B6A4 004284A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042B6A8 004284A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042B6AC 004284AC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8042B6B0 004284B0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 8042B6B4 004284B4  7C 9C 23 79 */ mr. context->r28 , context->r4
/*8042B6B8 004284B8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8042B6BC 004284BC*/ PPC::Runtime::ASM::blt(.L_8042B764);
/*8042B6C0 004284C0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x100);
/*8042B6C4 004284C4*/ PPC::Runtime::ASM::ble(.L_8042B6CC);
/*8042B6C8 004284C8*/ PPC::Runtime::ASM::b(.L_8042B764);
RUNTIME_PPC_JUMP_LABEL(.L_8042B6CC, 0x8042B6CC) //this is a jump label
/*8042B6CC 004284CC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058C808 @ Get_MemoryOffset_HighBit);
/*8042B6D0 004284D0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8042B6D4 004284D4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_18058C808 @ Get_MemoryOffset_LowBit);
/*8042B6D8 004284D8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8042B6DC, 0x8042B6DC) //this is a jump label
/*8042B6DC 004284DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8042B6E0 004284E0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8042B6E4 004284E4*/ PPC::Runtime::ASM::bne(.L_8042B6F0);
/*8042B6E8 004284E8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*8042B6EC 004284EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8042B6F0, 0x8042B6F0) //this is a jump label
/*8042B6F0 004284F0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8042B6F4 004284F4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8042B6F8 004284F8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x100);
/*8042B6FC 004284FC*/ PPC::Runtime::ASM::blt(.L_8042B6DC);
/*8042B700 00428500*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8042B704 00428504*/ PPC::Runtime::ASM::beq(.L_8042B764);
/*8042B708 00428508*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058C808 @ Get_MemoryOffset_HighBit);
/*8042B70C 0042850C*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*8042B710 00428510*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18058C808 @ Get_MemoryOffset_LowBit);
/*8042B714 00428514*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8042B718 00428518*/ PPC::Runtime::ASM::lwzu(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r30));
/*8042B71C 0042851C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8042B720 00428520*/ PPC::Runtime::ASM::beq(.L_8042B728);
/*8042B724 00428524*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_8042B728, 0x8042B728) //this is a jump label
/*8042B728 00428528*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8042B72C 0042852C*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8042B730 00428530*/ PPC::Runtime::ASM::beq(.L_8042B764);
/*8042B734 00428534*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8042B738 00428538*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8042B73C 0042853C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8042B740 00428540*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8042B744 00428544*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8042B748 00428548*/ PPC::Runtime::ASM::bne(.L_8042B764);
/*8042B74C 0042854C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504FB0 @ Get_MemoryOffset_HighBit);
/*8042B750 00428550*/ PPC::Runtime::ASM::lis(context->r5, lbl_80504FBC @ Get_MemoryOffset_HighBit);
/*8042B754 00428554*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504FB0 @ Get_MemoryOffset_LowBit);
/*8042B758 00428558*/ PPC::Runtime::ASM::li(context->r4, 0x5d);
/*8042B75C 0042855C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80504FBC @ Get_MemoryOffset_LowBit);
/*8042B760 00428560*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042B764, 0x8042B764) //this is a jump label
/*8042B764 00428564*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8042B768 00428568*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8042B76C 0042856C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042B770 00428570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042B774 00428574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8042B778 00428578*/ PPC::Runtime::ASM::blr();
}