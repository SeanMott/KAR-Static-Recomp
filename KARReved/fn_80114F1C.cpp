//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80009908.hpp"
#include "fn_80068588.hpp"
#include "fn_800685AC.hpp"
#include "fn_80068574.hpp"



void fn_80114F1C(PPC::Runtime::GCContext* context)
{
/*80114F1C 00111D1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80114F20 00111D20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80114F24 00111D24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80114F28 00111D28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80114F2C 00111D2C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80114F30 00111D30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80114F34 00111D34*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80114F38 00111D38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80114F3C 00111D3C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 80114F40 00111D40  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*80114F44 00111D44*/ PPC::Runtime::ASM::beq(.L_80114FF4);
/*80114F48 00111D48*/ PPC::Runtime::ASM::extrwi(context->r3, context->r3, 2, 28);
/*80114F4C 00111D4C*/ PPC::Runtime::ASM::bl(fn_80009908);
/*80114F50 00111D50*/ PPC::Runtime::ASM::lis(context->r4, lbl_805578B8 @ Get_MemoryOffset_HighBit);
/*80114F54 00111D54*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80114F58 00111D58*/ PPC::Runtime::ASM::lbz(context->r0, lbl_805578B8 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*80114F5C 00111D5C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80114F60 00111D60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80114F64 00111D64*/ PPC::Runtime::ASM::beq(.L_80114F78);
/*80114F68 00111D68*/ PPC::Runtime::ASM::blt(.L_80114FC4);
/*80114F6C 00111D6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80114F70 00111D70*/ PPC::Runtime::ASM::bge(.L_80114FC4);
/*80114F74 00111D74*/ PPC::Runtime::ASM::b(.L_80114FA0);
RUNTIME_PPC_JUMP_LABEL(.L_80114F78, 0x80114F78) //this is a jump label
/*80114F78 00111D78*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80114F7C 00111D7C*/ PPC::Runtime::ASM::bl(fn_80068588);
/*80114F80 00111D80*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80114F84 00111D84*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80114F88 00111D88*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80114F8C 00111D8C*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80114F90 00111D90*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*80114F94 00111D94*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*80114F98 00111D98*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
/*80114F9C 00111D9C*/ PPC::Runtime::ASM::b(.L_80114FC4);
RUNTIME_PPC_JUMP_LABEL(.L_80114FA0, 0x80114FA0) //this is a jump label
/*80114FA0 00111DA0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80114FA4 00111DA4*/ PPC::Runtime::ASM::bl(fn_800685AC);
/*80114FA8 00111DA8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80114FAC 00111DAC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80114FB0 00111DB0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80114FB4 00111DB4*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80114FB8 00111DB8*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*80114FBC 00111DBC*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*80114FC0 00111DC0*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
RUNTIME_PPC_JUMP_LABEL(.L_80114FC4, 0x80114FC4) //this is a jump label
/*80114FC4 00111DC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80114FC8 00111DC8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80114FCC 00111DCC*/ PPC::Runtime::ASM::bl(fn_GXLink_Common);
/*80114FD0 00111DD0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80114FD4 00111DD4*/ PPC::Runtime::ASM::bl(fn_80068574);
/*80114FD8 00111DD8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80114FDC 00111DDC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80114FE0 00111DE0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80114FE4 00111DE4*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*80114FE8 00111DE8*/ PPC::Runtime::ASM::subf(context->r6, context->r4, context->r0);
/*80114FEC 00111DEC*/ PPC::Runtime::ASM::subf(context->r5, context->r3, context->r5);
/*80114FF0 00111DF0*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
RUNTIME_PPC_JUMP_LABEL(.L_80114FF4, 0x80114FF4) //this is a jump label
/*80114FF4 00111DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80114FF8 00111DF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80114FFC 00111DFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80115000 00111E00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115004 00111E04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80115008 00111E08*/ PPC::Runtime::ASM::blr();
}