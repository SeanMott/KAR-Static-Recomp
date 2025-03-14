//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GetNode.hpp"
#include "fn_TCPListen.hpp"
#include "fn_AddBackLog.hpp"
#include "fn_PutNode.hpp"



void fn_SOListen(PPC::Runtime::GCContext* context)
{
/*8047C7D0 004795D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047C7D4 004795D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047C7D8 004795D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*8047C7DC 004795DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047C7E0 004795E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8047C7E4 004795E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047C7E8 004795E8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047C7EC 004795EC*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*8047C7F0 004795F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047C7F4 004795F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8047C7F8 004795F8*/ PPC::Runtime::ASM::beq(.L_8047C804);
/*8047C7FC 004795FC*/ PPC::Runtime::ASM::li(context->r3, -0x27);
/*8047C800 00479600*/ PPC::Runtime::ASM::b(.L_8047C8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8047C804, 0x8047C804) //this is a jump label
/*8047C804 00479604*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x1);
/*8047C808 00479608*/ PPC::Runtime::ASM::bge(.L_8047C810);
/*8047C80C 0047960C*/ PPC::Runtime::ASM::li(context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8047C810, 0x8047C810) //this is a jump label
/*8047C810 00479610*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*8047C814 00479614*/ PPC::Runtime::ASM::bl(fn_GetNode);
/* 8047C818 00479618  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8047C81C 0047961C*/ PPC::Runtime::ASM::beq(.L_8047C82C);
/*8047C820 00479620*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8047C824 00479624*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8047C828 00479628*/ PPC::Runtime::ASM::bne(.L_8047C834);
RUNTIME_PPC_JUMP_LABEL(.L_8047C82C, 0x8047C82C) //this is a jump label
/*8047C82C 0047962C*/ PPC::Runtime::ASM::li(context->r3, -0x8);
/*8047C830 00479630*/ PPC::Runtime::ASM::b(.L_8047C8DC);
RUNTIME_PPC_JUMP_LABEL(.L_8047C834, 0x8047C834) //this is a jump label
/*8047C834 00479634*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8047C838 00479638*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8047C83C 0047963C*/ PPC::Runtime::ASM::beq(.L_8047C850);
/*8047C840 00479640*/ PPC::Runtime::ASM::bge(.L_8047C8CC);
/*8047C844 00479644*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8047C848 00479648*/ PPC::Runtime::ASM::beq(.L_8047C858);
/*8047C84C 0047964C*/ PPC::Runtime::ASM::b(.L_8047C8CC);
RUNTIME_PPC_JUMP_LABEL(.L_8047C850, 0x8047C850) //this is a jump label
/*8047C850 00479650*/ PPC::Runtime::ASM::li(context->r29, -0x3f);
/*8047C854 00479654*/ PPC::Runtime::ASM::b(.L_8047C8D0);
RUNTIME_PPC_JUMP_LABEL(.L_8047C858, 0x8047C858) //this is a jump label
/*8047C858 00479658*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8047C85C 0047965C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8047C860 00479660*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8047C864 00479664*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047C868 00479668*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8047C86C 0047966C*/ PPC::Runtime::ASM::bl(fn_TCPListen);
/*8047C870 00479670*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*8047C874 00479674*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x5);
/*8047C878 00479678*/ PPC::Runtime::ASM::beq(.L_8047C8C4);
/*8047C87C 0047967C*/ PPC::Runtime::ASM::bge(.L_8047C88C);
/*8047C880 00479680*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x7);
/*8047C884 00479684*/ PPC::Runtime::ASM::beq(.L_8047C8BC);
/*8047C888 00479688*/ PPC::Runtime::ASM::b(.L_8047C8C4);
RUNTIME_PPC_JUMP_LABEL(.L_8047C88C, 0x8047C88C) //this is a jump label
/*8047C88C 0047968C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8047C890 00479690*/ PPC::Runtime::ASM::beq(.L_8047C8AC);
/*8047C894 00479694*/ PPC::Runtime::ASM::b(.L_8047C8C4);
/*8047C898 00479698*/ PPC::Runtime::ASM::b(.L_8047C8AC);
RUNTIME_PPC_JUMP_LABEL(.L_8047C89C, 0x8047C89C) //this is a jump label
/*8047C89C 0047969C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047C8A0 004796A0*/ PPC::Runtime::ASM::bl(fn_AddBackLog);
/*8047C8A4 004796A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8047C8A8 004796A8*/ PPC::Runtime::ASM::beq(.L_8047C8D0);
RUNTIME_PPC_JUMP_LABEL(.L_8047C8AC, 0x8047C8AC) //this is a jump label
/*8047C8AC 004796AC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*8047C8B0 004796B0*/ PPC::Runtime::ASM::subi(context->r28, context->r28, 0x1);
/*8047C8B4 004796B4*/ PPC::Runtime::ASM::bgt(.L_8047C89C);
/*8047C8B8 004796B8*/ PPC::Runtime::ASM::b(.L_8047C8D0);
RUNTIME_PPC_JUMP_LABEL(.L_8047C8BC, 0x8047C8BC) //this is a jump label
/*8047C8BC 004796BC*/ PPC::Runtime::ASM::li(context->r29, -0x2a);
/*8047C8C0 004796C0*/ PPC::Runtime::ASM::b(.L_8047C8D0);
RUNTIME_PPC_JUMP_LABEL(.L_8047C8C4, 0x8047C8C4) //this is a jump label
/*8047C8C4 004796C4*/ PPC::Runtime::ASM::li(context->r29, -0x1c);
/*8047C8C8 004796C8*/ PPC::Runtime::ASM::b(.L_8047C8D0);
RUNTIME_PPC_JUMP_LABEL(.L_8047C8CC, 0x8047C8CC) //this is a jump label
/*8047C8CC 004796CC*/ PPC::Runtime::ASM::li(context->r29, -0x8);
RUNTIME_PPC_JUMP_LABEL(.L_8047C8D0, 0x8047C8D0) //this is a jump label
/*8047C8D0 004796D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8047C8D4 004796D4*/ PPC::Runtime::ASM::bl(fn_PutNode);
/*8047C8D8 004796D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_8047C8DC, 0x8047C8DC) //this is a jump label
/*8047C8DC 004796DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047C8E0 004796E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047C8E4 004796E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8047C8E8 004796E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047C8EC 004796EC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047C8F0 004796F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*8047C8F4 004796F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047C8F8 004796F8*/ PPC::Runtime::ASM::blr();
}