//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038C8E8.hpp"
#include "fn_8038CA48.hpp"
#include "fn_8038C770.hpp"



void fn_8038C560(PPC::Runtime::GCContext* context)
{
/*8038C560 00389360*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8038C564 00389364*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038C568 00389368*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8038C56C 0038936C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038C570 00389370*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8038C574 00389374*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038C578 00389378*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038C57C 0038937C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8038C580 00389380*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038C584 00389384*/ PPC::Runtime::ASM::bne(.L_8038C590);
/*8038C588 00389388*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8038C58C 0038938C*/ PPC::Runtime::ASM::b(.L_8038C750);
RUNTIME_PPC_JUMP_LABEL(.L_8038C590, 0x8038C590) //this is a jump label
/*8038C590 00389390*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8038C594 00389394*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x3);
/*8038C598 00389398*/ PPC::Runtime::ASM::clrrwi(context->r30, context->r3, 2);
/*8038C59C 0038939C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8038C5A0 003893A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8038C5A4 003893A4*/ PPC::Runtime::ASM::beq(.L_8038C664);
/*8038C5A8 003893A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8038C5AC 003893AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C5B0 003893B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C5B4 003893B4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 30, 2, 29);
/*8038C5B8 003893B8*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*8038C5BC 003893BC*/ PPC::Runtime::ASM::rlwimi(context->r28, context->r3, 30, 0, 1);
/*8038C5C0 003893C0*/ PPC::Runtime::ASM::b(.L_8038C644);
RUNTIME_PPC_JUMP_LABEL(.L_8038C5C4, 0x8038C5C4) //this is a jump label
/* 8038C5C4 003893C4  54 A0 FF 7F */ extrwi. context->r0 , context->r5 , 3 , 28
/*8038C5C8 003893C8*/ PPC::Runtime::ASM::beq(.L_8038C5D8);
/*8038C5CC 003893CC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r5, 31);
/*8038C5D0 003893D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8038C5D4 003893D4*/ PPC::Runtime::ASM::bne(.L_8038C67C);
RUNTIME_PPC_JUMP_LABEL(.L_8038C5D8, 0x8038C5D8) //this is a jump label
/*8038C5D8 003893D8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8038C5DC 003893DC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8038C5E0 003893E0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8038C5E4 003893E4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8038C5E8 003893E8*/ PPC::Runtime::ASM::bl(fn_8038C8E8);
/*8038C5EC 003893EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/* 8038C5F0 003893F0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8038C5F4 003893F4*/ PPC::Runtime::ASM::clrrwi(context->r3, context->r0, 2);
/*8038C5F8 003893F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038C5FC 003893FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C600 00389400*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r0, 30, 2, 29);
/*8038C604 00389404*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r3, 30, 0, 1);
/*8038C608 00389408*/ PPC::Runtime::ASM::beq(.L_8038C630);
/*8038C60C 0038940C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8038C610 00389410*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*8038C614 00389414*/ PPC::Runtime::ASM::bne(.L_8038C67C);
/*8038C618 00389418*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038C61C 0038941C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038C620 00389420*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 30, 2, 29);
/*8038C624 00389424*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 30, 0, 1);
/*8038C628 00389428*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8038C62C 0038942C*/ PPC::Runtime::ASM::b(.L_8038C67C);
RUNTIME_PPC_JUMP_LABEL(.L_8038C630, 0x8038C630) //this is a jump label
/*8038C630 00389430*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038C634 00389434*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038C638 00389438*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 30, 2, 29);
/*8038C63C 0038943C*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*8038C640 00389440*/ PPC::Runtime::ASM::rlwimi(context->r28, context->r3, 30, 0, 1);
RUNTIME_PPC_JUMP_LABEL(.L_8038C644, 0x8038C644) //this is a jump label
/*8038C644 00389444*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8038C648 00389448*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8038C64C 0038944C*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r5, 30, 2, 29);
/*8038C650 00389450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8038C654 00389454*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 30, 0, 1);
/*8038C658 00389458*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8038C65C 0038945C*/ PPC::Runtime::ASM::bne(.L_8038C5C4);
/*8038C660 00389460*/ PPC::Runtime::ASM::b(.L_8038C67C);
RUNTIME_PPC_JUMP_LABEL(.L_8038C664, 0x8038C664) //this is a jump label
/*8038C664 00389464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8038C668 00389468*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8038C66C 0038946C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8038C670 00389470*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8038C674 00389474*/ PPC::Runtime::ASM::bl(fn_8038CA48);
/*8038C678 00389478*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8038C67C, 0x8038C67C) //this is a jump label
/*8038C67C 0038947C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8038C680 00389480*/ PPC::Runtime::ASM::bne(.L_8038C68C);
/*8038C684 00389484*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8038C688 00389488*/ PPC::Runtime::ASM::bl(fn_8038C770);
RUNTIME_PPC_JUMP_LABEL(.L_8038C68C, 0x8038C68C) //this is a jump label
/*8038C68C 0038948C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8038C690 00389490*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8038C694 00389494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8038C698 00389498*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*8038C69C 0038949C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8038C6A0 003894A0*/ PPC::Runtime::ASM::beq(.L_8038C74C);
/*8038C6A4 003894A4*/ PPC::Runtime::ASM::srwi(context->r5, context->r30, 2);
/*8038C6A8 003894A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8038C6AC 003894AC*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8038C6B0 003894B0*/ PPC::Runtime::ASM::ble(.L_8038C74C);
/*8038C6B4 003894B4*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x8);
/*8038C6B8 003894B8*/ PPC::Runtime::ASM::subi(context->r3, context->r5, 0x8);
/*8038C6BC 003894BC*/ PPC::Runtime::ASM::ble(.L_8038C724);
/*8038C6C0 003894C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7);
/*8038C6C4 003894C4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8038C6C8 003894C8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*8038C6CC 003894CC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8038C6D0 003894D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8038C6D4 003894D4*/ PPC::Runtime::ASM::ble(.L_8038C724);
RUNTIME_PPC_JUMP_LABEL(.L_8038C6D8, 0x8038C6D8) //this is a jump label
/*8038C6D8 003894D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C6DC 003894DC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8);
/*8038C6E0 003894E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038C6E4 003894E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C6E8 003894E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038C6EC 003894EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C6F0 003894F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8038C6F4 003894F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C6F8 003894F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8038C6FC 003894FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C700 00389500*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8038C704 00389504*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C708 00389508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8038C70C 0038950C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C710 00389510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8038C714 00389514*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C718 00389518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8038C71C 0038951C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*8038C720 00389520*/ PPC::Runtime::ASM::bdnz(.L_8038C6D8);
RUNTIME_PPC_JUMP_LABEL(.L_8038C724, 0x8038C724) //this is a jump label
/*8038C724 00389524*/ PPC::Runtime::ASM::slwi(context->r3, context->r6, 2);
/*8038C728 00389528*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r5);
/*8038C72C 0038952C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8038C730 00389530*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8038C734 00389534*/ PPC::Runtime::ASM::cmplw(context->r6, context->r5);
/*8038C738 00389538*/ PPC::Runtime::ASM::bge(.L_8038C74C);
RUNTIME_PPC_JUMP_LABEL(.L_8038C73C, 0x8038C73C) //this is a jump label
/*8038C73C 0038953C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8038C740 00389540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038C744 00389544*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8038C748 00389548*/ PPC::Runtime::ASM::bdnz(.L_8038C73C);
RUNTIME_PPC_JUMP_LABEL(.L_8038C74C, 0x8038C74C) //this is a jump label
/*8038C74C 0038954C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8038C750, 0x8038C750) //this is a jump label
/*8038C750 00389550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038C754 00389554*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8038C758 00389558*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038C75C 0038955C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038C760 00389560*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038C764 00389564*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038C768 00389568*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8038C76C 0038956C*/ PPC::Runtime::ASM::blr();
}