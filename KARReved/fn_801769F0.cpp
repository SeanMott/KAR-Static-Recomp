//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80172C3C.hpp"
#include "fn_80172CA8.hpp"



void fn_801769F0(PPC::Runtime::GCContext* context)
{
/*801769F0 001737F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801769F4 001737F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801769F8 001737F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801769FC 001737FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80176A00 00173800*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80176A04 00173804*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80176A08 00173808*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80176A0C 0017380C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176A10 00173810*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80176A14 00173814*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r30));
/*80176A18 00173818*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80176A1C 0017381C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80176A20 00173820*/ PPC::Runtime::ASM::bgt(.L_80176A34);
/*80176A24 00173824*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80176A28 00173828*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80176A2C 0017382C*/ PPC::Runtime::ASM::bl(fn_80172C3C);
/*80176A30 00173830*/ PPC::Runtime::ASM::b(.L_80176A40);
RUNTIME_PPC_JUMP_LABEL(.L_80176A34, 0x80176A34) //this is a jump label
/*80176A34 00173834*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80176A38 00173838*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80176A3C 0017383C*/ PPC::Runtime::ASM::bl(fn_80172CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80176A40, 0x80176A40) //this is a jump label
/*80176A40 00173840*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80176A44 00173844*/ PPC::Runtime::ASM::bne(.L_80176A58);
/*80176A48 00173848*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CF8 @ Get_MemoryOffset_SDA21);
/*80176A4C 0017384C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80176A50 00173850*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D00 @ Get_MemoryOffset_SDA21);
/*80176A54 00173854*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80176A58, 0x80176A58) //this is a jump label
/*80176A58 00173858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80176A5C 0017385C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80176A60 00173860*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80176A64 00173864*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80176A68 00173868*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80176A6C 0017386C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80176A70 00173870*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80176A74 00173874*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80176A78 00173878*/ PPC::Runtime::ASM::bne(.L_80176AC4);
/*80176A7C 0017387C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80176A80 00173880*/ PPC::Runtime::ASM::beq(.L_80176AC4);
/*80176A84 00173884*/ PPC::Runtime::ASM::bne(.L_80176A98);
/*80176A88 00173888*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CF8 @ Get_MemoryOffset_SDA21);
/*80176A8C 0017388C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80176A90 00173890*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D00 @ Get_MemoryOffset_SDA21);
/*80176A94 00173894*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80176A98, 0x80176A98) //this is a jump label
/*80176A98 00173898*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80176A9C 0017389C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80176AA0 001738A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80176AA4 001738A4*/ PPC::Runtime::ASM::bne(.L_80176AB4);
/*80176AA8 001738A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80176AAC 001738AC*/ PPC::Runtime::ASM::beq(.L_80176AB4);
/*80176AB0 001738B0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80176AB4, 0x80176AB4) //this is a jump label
/*80176AB4 001738B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80176AB8 001738B8*/ PPC::Runtime::ASM::bne(.L_80176AC4);
/*80176ABC 001738BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176AC0 001738C0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80176AC4, 0x80176AC4) //this is a jump label
/*80176AC4 001738C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80176AC8 001738C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80176ACC 001738CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80176AD0 001738D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80176AD4 001738D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80176AD8 001738D8*/ PPC::Runtime::ASM::blr();
}