//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007D42C.hpp"
#include "fn_8007D440.hpp"
#include "fn_8007D458.hpp"
#include "fn_8007D4FC.hpp"
#include "fn_8007EF44.hpp"
#include "fn_80009BEC.hpp"
#include "fn_8007EF00.hpp"



void fn_8007EDA8(PPC::Runtime::GCContext* context)
{
/*8007EDA8 0007BBA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8007EDAC 0007BBAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007EDB0 0007BBB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007EDB4 0007BBB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007EDB8 0007BBB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007EDBC 0007BBBC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007EDC0 0007BBC0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8007EDC4 0007BBC4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007EDC8 0007BBC8*/ PPC::Runtime::ASM::bl(fn_8007D42C);
/*8007EDCC 0007BBCC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8007EDD0 0007BBD0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007EDD4 0007BBD4*/ PPC::Runtime::ASM::bl(fn_8007D440);
/*8007EDD8 0007BBD8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8007EDDC 0007BBDC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007EDE0 0007BBE0*/ PPC::Runtime::ASM::bl(fn_8007D458);
/*8007EDE4 0007BBE4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8007EDE8 0007BBE8*/ PPC::Runtime::ASM::bl(fn_8007D4FC);
/*8007EDEC 0007BBEC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007EDF0 0007BBF0*/ PPC::Runtime::ASM::beq(.L_8007EEC8);
/*8007EDF4 0007BBF4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_HighBit);
/*8007EDF8 0007BBF8*/ PPC::Runtime::ASM::addi(context->r29, context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_LowBit);
/*8007EDFC 0007BBFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/* 8007EE00 0007BC00  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8007EE04 0007BC04*/ PPC::Runtime::ASM::bne(.L_8007EE0C);
/*8007EE08 0007BC08*/ PPC::Runtime::ASM::bl(fn_8007EF44);
RUNTIME_PPC_JUMP_LABEL(.L_8007EE0C, 0x8007EE0C) //this is a jump label
/*8007EE0C 0007BC0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r28, 0, 25, 25);
/*8007EE10 0007BC10*/ PPC::Runtime::ASM::beq(.L_8007EEE0);
/*8007EE14 0007BC14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 30, 30);
/*8007EE18 0007BC18*/ PPC::Runtime::ASM::beq(.L_8007EE4C);
/*8007EE1C 0007BC1C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8007EE20 0007BC20*/ PPC::Runtime::ASM::extrwi(context->r3, context->r4, 2, 24);
/*8007EE24 0007BC24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8007EE28 0007BC28*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 6, 24, 25);
/*8007EE2C 0007BC2C*/ PPC::Runtime::ASM::extrwi(context->r0, context->r4, 2, 24);
/*8007EE30 0007BC30*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8007EE34 0007BC34*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8007EE38 0007BC38*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r4, 24);
/*8007EE3C 0007BC3C*/ PPC::Runtime::ASM::blt(.L_8007EE4C);
/*8007EE40 0007BC40*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8007EE44 0007BC44*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 24, 25);
/*8007EE48 0007BC48*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8007EE4C, 0x8007EE4C) //this is a jump label
/*8007EE4C 0007BC4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/* 8007EE50 0007BC50  54 00 D7 BF */ extrwi. context->r0 , context->r0 , 2 , 24
/*8007EE54 0007BC54*/ PPC::Runtime::ASM::beq(.L_8007EE5C);
/*8007EE58 0007BC58*/ PPC::Runtime::ASM::b(.L_8007EEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8007EE5C, 0x8007EE5C) //this is a jump label
/*8007EE5C 0007BC5C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 29, 29);
/*8007EE60 0007BC60*/ PPC::Runtime::ASM::beq(.L_8007EE8C);
/*8007EE64 0007BC64*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_HighBit);
/*8007EE68 0007BC68*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_LowBit);
/*8007EE6C 0007BC6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8007EE70 0007BC70*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8007EE74 0007BC74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8007EE78 0007BC78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8007EE7C 0007BC7C*/ PPC::Runtime::ASM::blt(.L_8007EEB8);
/*8007EE80 0007BC80*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8007EE84 0007BC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8007EE88 0007BC88*/ PPC::Runtime::ASM::b(.L_8007EEB8);
RUNTIME_PPC_JUMP_LABEL(.L_8007EE8C, 0x8007EE8C) //this is a jump label
/*8007EE8C 0007BC8C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 28, 28);
/*8007EE90 0007BC90*/ PPC::Runtime::ASM::beq(.L_8007EEB8);
/*8007EE94 0007BC94*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_HighBit);
/*8007EE98 0007BC98*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_LowBit);
/*8007EE9C 0007BC9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8007EEA0 0007BCA0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8007EEA4 0007BCA4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8007EEA8 0007BCA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8007EEAC 0007BCAC*/ PPC::Runtime::ASM::bge(.L_8007EEB8);
/*8007EEB0 0007BCB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8007EEB4 0007BCB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8007EEB8, 0x8007EEB8) //this is a jump label
/*8007EEB8 0007BCB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r30, 0, 23, 23);
/*8007EEBC 0007BCBC*/ PPC::Runtime::ASM::beq(.L_8007EEE0);
/*8007EEC0 0007BCC0*/ PPC::Runtime::ASM::bl(fn_80009BEC);
/*8007EEC4 0007BCC4*/ PPC::Runtime::ASM::b(.L_8007EEE0);
RUNTIME_PPC_JUMP_LABEL(.L_8007EEC8, 0x8007EEC8) //this is a jump label
/*8007EEC8 0007BCC8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_HighBit);
/*8007EECC 0007BCCC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180552DD8 @ Get_MemoryOffset_LowBit);
/*8007EED0 0007BCD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 8007EED4 0007BCD4  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8007EED8 0007BCD8*/ PPC::Runtime::ASM::beq(.L_8007EEE0);
/*8007EEDC 0007BCDC*/ PPC::Runtime::ASM::bl(fn_8007EF00);
RUNTIME_PPC_JUMP_LABEL(.L_8007EEE0, 0x8007EEE0) //this is a jump label
/*8007EEE0 0007BCE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007EEE4 0007BCE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007EEE8 0007BCE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007EEEC 0007BCEC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007EEF0 0007BCF0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007EEF4 0007BCF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007EEF8 0007BCF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8007EEFC 0007BCFC*/ PPC::Runtime::ASM::blr();
}