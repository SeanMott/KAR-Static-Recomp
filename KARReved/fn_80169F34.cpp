//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016A87C.hpp"



void fn_80169F34(PPC::Runtime::GCContext* context)
{
/*80169F34 00166D34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80169F38 00166D38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80169F3C 00166D3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80169F40 00166D40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80169F44 00166D44*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80169F48 00166D48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80169F4C 00166D4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80169F50 00166D50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80169F54 00166D54*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80169F58 00166D58*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80169F5C 00166D5C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80169F60 00166D60*/ PPC::Runtime::ASM::bl(fn_8016A87C);
/*80169F64 00166D64*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80169F68 00166D68*/ PPC::Runtime::ASM::bne(.L_80169F7C);
/*80169F6C 00166D6C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B68 @ Get_MemoryOffset_SDA21);
/*80169F70 00166D70*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80169F74 00166D74*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B70 @ Get_MemoryOffset_SDA21);
/*80169F78 00166D78*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80169F7C, 0x80169F7C) //this is a jump label
/*80169F7C 00166D7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80169F80 00166D80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169F84 00166D84*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80169F88 00166D88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80169F8C 00166D8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80169F90 00166D90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80169F94 00166D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80169F98 00166D98*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80169F9C 00166D9C*/ PPC::Runtime::ASM::bne(.L_80169FE8);
/*80169FA0 00166DA0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80169FA4 00166DA4*/ PPC::Runtime::ASM::beq(.L_80169FE8);
/*80169FA8 00166DA8*/ PPC::Runtime::ASM::bne(.L_80169FBC);
/*80169FAC 00166DAC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6B68 @ Get_MemoryOffset_SDA21);
/*80169FB0 00166DB0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80169FB4 00166DB4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6B70 @ Get_MemoryOffset_SDA21);
/*80169FB8 00166DB8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80169FBC, 0x80169FBC) //this is a jump label
/*80169FBC 00166DBC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80169FC0 00166DC0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80169FC4 00166DC4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80169FC8 00166DC8*/ PPC::Runtime::ASM::bne(.L_80169FD8);
/*80169FCC 00166DCC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80169FD0 00166DD0*/ PPC::Runtime::ASM::beq(.L_80169FD8);
/*80169FD4 00166DD4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80169FD8, 0x80169FD8) //this is a jump label
/*80169FD8 00166DD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80169FDC 00166DDC*/ PPC::Runtime::ASM::bne(.L_80169FE8);
/*80169FE0 00166DE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80169FE4 00166DE4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80169FE8, 0x80169FE8) //this is a jump label
/*80169FE8 00166DE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80169FEC 00166DEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80169FF0 00166DF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80169FF4 00166DF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80169FF8 00166DF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80169FFC 00166DFC*/ PPC::Runtime::ASM::blr();
}