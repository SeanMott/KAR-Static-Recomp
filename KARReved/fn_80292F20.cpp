//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80292F20(PPC::Runtime::GCContext* context)
{
/*80292F20 0028FD20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80292F24 0028FD24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80292F28 0028FD28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292F2C 0028FD2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292F30 0028FD30*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80292F34 0028FD34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80292F38 0028FD38  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80292F3C 0028FD3C*/ PPC::Runtime::ASM::beq(.L_80292FD4);
/*80292F40 0028FD40*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD908 @ Get_MemoryOffset_HighBit);
/*80292F44 0028FD44*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x14);
/*80292F48 0028FD48*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD908 @ Get_MemoryOffset_LowBit);
/*80292F4C 0028FD4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292F50 0028FD50*/ PPC::Runtime::ASM::beq(.L_80292F9C);
/*80292F54 0028FD54*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD8C0 @ Get_MemoryOffset_HighBit);
/*80292F58 0028FD58*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x14);
/*80292F5C 0028FD5C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD8C0 @ Get_MemoryOffset_LowBit);
/*80292F60 0028FD60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80292F64 0028FD64*/ PPC::Runtime::ASM::beq(.L_80292F9C);
/*80292F68 0028FD68*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD870 @ Get_MemoryOffset_HighBit);
/*80292F6C 0028FD6C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x14);
/*80292F70 0028FD70*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD870 @ Get_MemoryOffset_LowBit);
/*80292F74 0028FD74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80292F78 0028FD78*/ PPC::Runtime::ASM::beq(.L_80292F9C);
/*80292F7C 0028FD7C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD848 @ Get_MemoryOffset_HighBit);
/*80292F80 0028FD80*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x14);
/*80292F84 0028FD84*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD848 @ Get_MemoryOffset_LowBit);
/*80292F88 0028FD88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80292F8C 0028FD8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80292F90 0028FD90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80292F94 0028FD94*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80292F98 0028FD98*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80292F9C, 0x80292F9C) //this is a jump label
/*80292F9C 0028FD9C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80292FA0 0028FDA0*/ PPC::Runtime::ASM::beq(.L_80292FC4);
/*80292FA4 0028FDA4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD820 @ Get_MemoryOffset_HighBit);
/*80292FA8 0028FDA8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292FAC 0028FDAC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD820 @ Get_MemoryOffset_LowBit);
/*80292FB0 0028FDB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292FB4 0028FDB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292FB8 0028FDB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80292FBC 0028FDBC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80292FC0 0028FDC0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80292FC4, 0x80292FC4) //this is a jump label
/*80292FC4 0028FDC4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80292FC8 0028FDC8*/ PPC::Runtime::ASM::ble(.L_80292FD4);
/*80292FCC 0028FDCC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292FD0 0028FDD0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80292FD4, 0x80292FD4) //this is a jump label
/*80292FD4 0028FDD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292FD8 0028FDD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292FDC 0028FDDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292FE0 0028FDE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80292FE4 0028FDE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292FE8 0028FDE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292FEC 0028FDEC*/ PPC::Runtime::ASM::blr();
}