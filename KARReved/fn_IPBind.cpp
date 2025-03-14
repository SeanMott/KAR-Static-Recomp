//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memmove.hpp"



void fn_IPBind(PPC::Runtime::GCContext* context)
{
/*8046A9B4 004677B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046A9B8 004677B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046A9BC 004677BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*8046A9C0 004677C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8046A9C4 004677C4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*8046A9C8 004677C8*/ PPC::Runtime::ASM::bne(.L_8046A9F4);
/*8046A9CC 004677CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*8046A9D0 004677D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*8046A9D4 004677D4*/ PPC::Runtime::ASM::bne(.L_8046A9F4);
/*8046A9D8 004677D8*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*8046A9DC 004677DC*/ PPC::Runtime::ASM::cmplwi(context->r8, 0x0);
/*8046A9E0 004677E0*/ PPC::Runtime::ASM::beq(.L_8046A9F4);
/*8046A9E4 004677E4*/ PPC::Runtime::ASM::lbz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8046A9E8 004677E8*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r10, 0, 24, 28);
/*8046A9EC 004677EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf0);
/*8046A9F0 004677F0*/ PPC::Runtime::ASM::bne(.L_8046A9FC);
RUNTIME_PPC_JUMP_LABEL(.L_8046A9F4, 0x8046A9F4) //this is a jump label
/*8046A9F4 004677F4*/ PPC::Runtime::ASM::li(context->r3, -0xc);
/*8046A9F8 004677F8*/ PPC::Runtime::ASM::b(.L_8046AB00);
RUNTIME_PPC_JUMP_LABEL(.L_8046A9FC, 0x8046A9FC) //this is a jump label
/*8046A9FC 004677FC*/ PPC::Runtime::ASM::cmplwi(context->r8, 0x0);
/*8046AA00 00467800*/ PPC::Runtime::ASM::beq(.L_8046AA4C);
/*8046AA04 00467804*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8046AA08 00467808*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046AA0C 0046780C*/ PPC::Runtime::ASM::cmplw(context->r9, context->r0);
/*8046AA10 00467810*/ PPC::Runtime::ASM::beq(.L_8046AA54);
/*8046AA14 00467814*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E629C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046AA18 00467818*/ PPC::Runtime::ASM::cmplw(context->r9, context->r0);
/*8046AA1C 0046781C*/ PPC::Runtime::ASM::beq(.L_8046AA54);
/*8046AA20 00467820*/ PPC::Runtime::ASM::lis(context->r7, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8046AA24 00467824*/ PPC::Runtime::ASM::addi(context->r7, context->r7, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*8046AA28 00467828*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*8046AA2C 0046782C*/ PPC::Runtime::ASM::cmplw(context->r9, context->r0);
/*8046AA30 00467830*/ PPC::Runtime::ASM::beq(.L_8046AA54);
/*8046AA34 00467834*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8046AA38 00467838*/ PPC::Runtime::ASM::cmplw(context->r9, context->r0);
/*8046AA3C 0046783C*/ PPC::Runtime::ASM::beq(.L_8046AA54);
/*8046AA40 00467840*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r10, 0, 24, 27);
/*8046AA44 00467844*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe0);
/*8046AA48 00467848*/ PPC::Runtime::ASM::beq(.L_8046AA54);
RUNTIME_PPC_JUMP_LABEL(.L_8046AA4C, 0x8046AA4C) //this is a jump label
/*8046AA4C 0046784C*/ PPC::Runtime::ASM::li(context->r3, -0xd);
/*8046AA50 00467850*/ PPC::Runtime::ASM::b(.L_8046AB00);
RUNTIME_PPC_JUMP_LABEL(.L_8046AA54, 0x8046AA54) //this is a jump label
/*8046AA54 00467854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8046AA58 00467858*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046AA5C 0046785C*/ PPC::Runtime::ASM::mr(context->r7, context->r0);
/*8046AA60 00467860*/ PPC::Runtime::ASM::bne(.L_8046AA6C);
/*8046AA64 00467864*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046AA68 00467868*/ PPC::Runtime::ASM::b(.L_8046AA70);
RUNTIME_PPC_JUMP_LABEL(.L_8046AA6C, 0x8046AA6C) //this is a jump label
/*8046AA6C 0046786C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8046AA70, 0x8046AA70) //this is a jump label
/*8046AA70 00467870*/ PPC::Runtime::ASM::mr(context->r10, context->r0);
/*8046AA74 00467874*/ PPC::Runtime::ASM::b(.L_8046AAE4);
RUNTIME_PPC_JUMP_LABEL(.L_8046AA78, 0x8046AA78) //this is a jump label
/*8046AA78 00467878*/ PPC::Runtime::ASM::cmplw(context->r7, context->r4);
/*8046AA7C 0046787C*/ PPC::Runtime::ASM::beq(.L_8046AAC8);
/*8046AA80 00467880*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r7));
/*8046AA84 00467884*/ PPC::Runtime::ASM::cmplw(context->r0, context->r8);
/*8046AA88 00467888*/ PPC::Runtime::ASM::bne(.L_8046AAC8);
/*8046AA8C 0046788C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*8046AA90 00467890*/ PPC::Runtime::ASM::cmplw(context->r0, context->r9);
/*8046AA94 00467894*/ PPC::Runtime::ASM::bne(.L_8046AAC8);
/*8046AA98 00467898*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*8046AA9C 0046789C*/ PPC::Runtime::ASM::beq(.L_8046AAC0);
/*8046AAA0 004678A0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r7));
/*8046AAA4 004678A4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r4));
/*8046AAA8 004678A8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046AAAC 004678AC*/ PPC::Runtime::ASM::bne(.L_8046AAC8);
/*8046AAB0 004678B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*8046AAB4 004678B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8046AAB8 004678B8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046AABC 004678BC*/ PPC::Runtime::ASM::bne(.L_8046AAC8);
RUNTIME_PPC_JUMP_LABEL(.L_8046AAC0, 0x8046AAC0) //this is a jump label
/*8046AAC0 004678C0*/ PPC::Runtime::ASM::li(context->r3, -0x5);
/*8046AAC4 004678C4*/ PPC::Runtime::ASM::b(.L_8046AB00);
RUNTIME_PPC_JUMP_LABEL(.L_8046AAC8, 0x8046AAC8) //this is a jump label
/*8046AAC8 004678C8*/ PPC::Runtime::ASM::cmplwi(context->r10, 0x0);
/*8046AACC 004678CC*/ PPC::Runtime::ASM::addi(context->r7, context->r10, 0x0);
/*8046AAD0 004678D0*/ PPC::Runtime::ASM::bne(.L_8046AADC);
/*8046AAD4 004678D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046AAD8 004678D8*/ PPC::Runtime::ASM::b(.L_8046AAE0);
RUNTIME_PPC_JUMP_LABEL(.L_8046AADC, 0x8046AADC) //this is a jump label
/*8046AADC 004678DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r10));
RUNTIME_PPC_JUMP_LABEL(.L_8046AAE0, 0x8046AAE0) //this is a jump label
/*8046AAE0 004678E0*/ PPC::Runtime::ASM::mr(context->r10, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8046AAE4, 0x8046AAE4) //this is a jump label
/*8046AAE4 004678E4*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8046AAE8 004678E8*/ PPC::Runtime::ASM::bne(.L_8046AA78);
/*8046AAEC 004678EC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x8);
/*8046AAF0 004678F0*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x0);
/*8046AAF4 004678F4*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8046AAF8 004678F8*/ PPC::Runtime::ASM::bl(memmove);
/*8046AAFC 004678FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8046AB00, 0x8046AB00) //this is a jump label
/*8046AB00 00467900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8046AB04 00467904*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*8046AB08 00467908*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046AB0C 0046790C*/ PPC::Runtime::ASM::blr();
}