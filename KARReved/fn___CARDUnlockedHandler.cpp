//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_EXIProbe.hpp"



void fn___CARDUnlockedHandler(PPC::Runtime::GCContext* context)
{
/*803E20F8 003DEEF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E20FC 003DEEFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E2100 003DEF00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E2104 003DEF04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E2108 003DEF08*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E210C 003DEF0C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803E2110 003DEF10*/ PPC::Runtime::ASM::mulli(context->r4, context->r30, 0x110);
/*803E2114 003DEF14*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E2118 003DEF18*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E211C 003DEF1C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*803E2120 003DEF20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r3));
/*803E2124 003DEF24*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803E2128 003DEF28*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*803E212C 003DEF2C*/ PPC::Runtime::ASM::beq(.L_803E2164);
/*803E2130 003DEF30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803E2134 003DEF34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r3));
/*803E2138 003DEF38*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E213C 003DEF3C*/ PPC::Runtime::ASM::bl(fn_EXIProbe);
/*803E2140 003DEF40*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E2144 003DEF44*/ PPC::Runtime::ASM::beq(.L_803E2150);
/*803E2148 003DEF48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803E214C 003DEF4C*/ PPC::Runtime::ASM::b(.L_803E2154);
RUNTIME_PPC_JUMP_LABEL(.L_803E2150, 0x803E2150) //this is a jump label
/*803E2150 003DEF50*/ PPC::Runtime::ASM::li(context->r4, -0x3);
RUNTIME_PPC_JUMP_LABEL(.L_803E2154, 0x803E2154) //this is a jump label
/*803E2154 003DEF54*/ PPC::Runtime::ASM::addi(context->r12, context->r31, 0x0);
/*803E2158 003DEF58*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803E215C 003DEF5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/* 803E2160 003DEF60  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803E2164, 0x803E2164) //this is a jump label
/*803E2164 003DEF64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E2168 003DEF68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E216C 003DEF6C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E2170 003DEF70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E2174 003DEF74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E2178 003DEF78*/ PPC::Runtime::ASM::blr();
}