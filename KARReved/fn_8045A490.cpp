//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_804527FC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_CARDUnmount.hpp"



void fn_8045A490(PPC::Runtime::GCContext* context)
{
/*8045A490 00457290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8045A494 00457294*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045A498 00457298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045A49C 0045729C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045A4A0 004572A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045A4A4 004572A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/* 8045A4A8 004572A8  7F C0 F3 79 */ mr. context->r0 , context->r30
/*8045A4AC 004572AC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045A4B0 004572B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045A4B4 004572B4*/ PPC::Runtime::ASM::blt(.L_8045A4C0);
/*8045A4B8 004572B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8045A4BC 004572BC*/ PPC::Runtime::ASM::ble(.L_8045A4C4);
RUNTIME_PPC_JUMP_LABEL(.L_8045A4C0, 0x8045A4C0) //this is a jump label
/*8045A4C0 004572C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045A4C4, 0x8045A4C4) //this is a jump label
/*8045A4C4 004572C4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x1c);
/*8045A4C8 004572C8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8045A4CC 004572CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x600, context->r3));
/*8045A4D0 004572D0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x5);
/*8045A4D4 004572D4*/ PPC::Runtime::ASM::beq(.L_8045A55C);
/*8045A4D8 004572D8*/ PPC::Runtime::ASM::bge(.L_8045A508);
/*8045A4DC 004572DC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0xe);
/*8045A4E0 004572E0*/ PPC::Runtime::ASM::beq(.L_8045A574);
/*8045A4E4 004572E4*/ PPC::Runtime::ASM::bge(.L_8045A4F4);
/*8045A4E8 004572E8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x80);
/*8045A4EC 004572EC*/ PPC::Runtime::ASM::beq(.L_8045A55C);
/*8045A4F0 004572F0*/ PPC::Runtime::ASM::b(.L_8045A574);
RUNTIME_PPC_JUMP_LABEL(.L_8045A4F4, 0x8045A4F4) //this is a jump label
/*8045A4F4 004572F4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x6);
/*8045A4F8 004572F8*/ PPC::Runtime::ASM::bge(.L_8045A56C);
/*8045A4FC 004572FC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0xc);
/*8045A500 00457300*/ PPC::Runtime::ASM::bge(.L_8045A574);
/*8045A504 00457304*/ PPC::Runtime::ASM::b(.L_8045A564);
RUNTIME_PPC_JUMP_LABEL(.L_8045A508, 0x8045A508) //this is a jump label
/*8045A508 00457308*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8045A50C 0045730C*/ PPC::Runtime::ASM::beq(.L_8045A534);
/*8045A510 00457310*/ PPC::Runtime::ASM::bge(.L_8045A524);
/*8045A514 00457314*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x3);
/*8045A518 00457318*/ PPC::Runtime::ASM::beq(.L_8045A53C);
/*8045A51C 0045731C*/ PPC::Runtime::ASM::bge(.L_8045A544);
/*8045A520 00457320*/ PPC::Runtime::ASM::b(.L_8045A54C);
RUNTIME_PPC_JUMP_LABEL(.L_8045A524, 0x8045A524) //this is a jump label
/*8045A524 00457324*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8045A528 00457328*/ PPC::Runtime::ASM::beq(.L_8045A574);
/*8045A52C 0045732C*/ PPC::Runtime::ASM::bge(.L_8045A574);
/*8045A530 00457330*/ PPC::Runtime::ASM::b(.L_8045A554);
RUNTIME_PPC_JUMP_LABEL(.L_8045A534, 0x8045A534) //this is a jump label
/*8045A534 00457334*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*8045A538 00457338*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A53C, 0x8045A53C) //this is a jump label
/*8045A53C 0045733C*/ PPC::Runtime::ASM::li(context->r3, 0xe);
/*8045A540 00457340*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A544, 0x8045A544) //this is a jump label
/*8045A544 00457344*/ PPC::Runtime::ASM::li(context->r3, 0xf);
/*8045A548 00457348*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A54C, 0x8045A54C) //this is a jump label
/*8045A54C 0045734C*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8045A550 00457350*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A554, 0x8045A554) //this is a jump label
/*8045A554 00457354*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8045A558 00457358*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A55C, 0x8045A55C) //this is a jump label
/*8045A55C 0045735C*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*8045A560 00457360*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A564, 0x8045A564) //this is a jump label
/*8045A564 00457364*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*8045A568 00457368*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A56C, 0x8045A56C) //this is a jump label
/*8045A56C 0045736C*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*8045A570 00457370*/ PPC::Runtime::ASM::b(.L_8045A578);
RUNTIME_PPC_JUMP_LABEL(.L_8045A574, 0x8045A574) //this is a jump label
/*8045A574 00457374*/ PPC::Runtime::ASM::li(context->r3, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_8045A578, 0x8045A578) //this is a jump label
/*8045A578 00457378*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xe);
/*8045A57C 0045737C*/ PPC::Runtime::ASM::beq(.L_8045A5E8);
/*8045A580 00457380*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xf);
/*8045A584 00457384*/ PPC::Runtime::ASM::bne(.L_8045A58C);
/*8045A588 00457388*/ PPC::Runtime::ASM::b(.L_8045A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8045A58C, 0x8045A58C) //this is a jump label
/*8045A58C 0045738C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8045A590 00457390*/ PPC::Runtime::ASM::bl(fn_804527FC);
/* 8045A594 00457394  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8045A598 00457398*/ PPC::Runtime::ASM::beq(.L_8045A5B0);
/*8045A59C 0045739C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x9);
/*8045A5A0 004573A0*/ PPC::Runtime::ASM::bne(.L_8045A5A8);
/*8045A5A4 004573A4*/ PPC::Runtime::ASM::li(context->r31, 0xa);
RUNTIME_PPC_JUMP_LABEL(.L_8045A5A8, 0x8045A5A8) //this is a jump label
/*8045A5A8 004573A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045A5AC 004573AC*/ PPC::Runtime::ASM::b(.L_8045A5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8045A5B0, 0x8045A5B0) //this is a jump label
/*8045A5B0 004573B0*/ PPC::Runtime::ASM::slwi(context->r6, context->r30, 2);
/*8045A5B4 004573B4*/ PPC::Runtime::ASM::li(context->r7, AllZeros_37 @ Get_MemoryOffset_SDA21);
/*8045A5B8 004573B8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*8045A5BC 004573BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*8045A5C0 004573C0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*8045A5C4 004573C4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8045A5C8 004573C8*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*8045A5CC 004573CC*/ PPC::Runtime::ASM::stwx(context->r0, context->r7, context->r6);
/*8045A5D0 004573D0*/ PPC::Runtime::ASM::lwzx(context->r5, context->r7, context->r6);
/*8045A5D4 004573D4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8045A5D8 004573D8*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045A5DC 004573DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8045A5E0 004573E0*/ PPC::Runtime::ASM::bl(fn_CARDUnmount);
/*8045A5E4 004573E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8045A5E8, 0x8045A5E8) //this is a jump label
/*8045A5E8 004573E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045A5EC 004573EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045A5F0 004573F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045A5F4 004573F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045A5F8 004573F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045A5FC 004573FC*/ PPC::Runtime::ASM::blr();
}