//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80297FE8.hpp"



void fn_80290A18(PPC::Runtime::GCContext* context)
{
/*80290A18 0028D818*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80290A1C 0028D81C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80290A20 0028D820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80290A24 0028D824*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80290A28 0028D828*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80290A2C 0028D82C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 80290A30 0028D830  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80290A34 0028D834*/ PPC::Runtime::ASM::beq(.L_80290ADC);
/*80290A38 0028D838*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290A3C 0028D83C*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290A40 0028D840*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290A44 0028D844*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0xc);
/*80290A48 0028D848*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80290A4C 0028D84C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80290A50 0028D850*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80290A54 0028D854*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80290A58 0028D858*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*80290A5C 0028D85C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80290A60 0028D860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80290A64 0028D864*/ PPC::Runtime::ASM::bl(fn_80297FE8);
/*80290A68 0028D868*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80290A6C 0028D86C*/ PPC::Runtime::ASM::beq(.L_80290AA0);
/*80290A70 0028D870*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80290A74 0028D874*/ PPC::Runtime::ASM::beq(.L_80290AA0);
/*80290A78 0028D878*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80290A7C 0028D87C*/ PPC::Runtime::ASM::beq(.L_80290AA0);
/*80290A80 0028D880*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80290A84 0028D884*/ PPC::Runtime::ASM::beq(.L_80290AA0);
/*80290A88 0028D888*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80290A8C 0028D88C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80290A90 0028D890*/ PPC::Runtime::ASM::beq(.L_80290AA0);
/*80290A94 0028D894*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80290A98 0028D898*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD95C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80290A9C 0028D89C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80290AA0, 0x80290AA0) //this is a jump label
/*80290AA0 0028D8A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80290AA4 0028D8A4*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290AA8 0028D8A8*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290AAC 0028D8AC*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290AB0 0028D8B0*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290AB4 0028D8B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80290AB8 0028D8B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80290ABC 0028D8BC*/ PPC::Runtime::ASM::beq(.L_80290ACC);
/*80290AC0 0028D8C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80290AC4 0028D8C4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD960 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80290AC8 0028D8C8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80290ACC, 0x80290ACC) //this is a jump label
/*80290ACC 0028D8CC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80290AD0 0028D8D0*/ PPC::Runtime::ASM::ble(.L_80290ADC);
/*80290AD4 0028D8D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80290AD8 0028D8D8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80290ADC, 0x80290ADC) //this is a jump label
/*80290ADC 0028D8DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80290AE0 0028D8E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80290AE4 0028D8E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80290AE8 0028D8E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80290AEC 0028D8EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80290AF0 0028D8F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80290AF4 0028D8F4*/ PPC::Runtime::ASM::blr();
}