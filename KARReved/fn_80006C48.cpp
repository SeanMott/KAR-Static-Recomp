//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"



void fn_80006C48(PPC::Runtime::GCContext* context)
{
/*80006C48 00003A48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80006C4C 00003A4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80006C50 00003A50*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80006C54 00003A54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80006C58 00003A58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80006C5C 00003A5C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80006C60 00003A60*/ PPC::Runtime::ASM::li(context->r5, 0x34);
/*80006C64 00003A64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80006C68 00003A68*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0xa94);
/*80006C6C 00003A6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80006C70 00003A70*/ PPC::Runtime::ASM::bl(memset);
/*80006C74 00003A74*/ PPC::Runtime::ASM::li(context->r11, 0x1);
/*80006C78 00003A78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006C7C 00003A7C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r11, 7, 24, 24);
/*80006C80 00003A80*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80006C84 00003A84*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006C88 00003A88*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*80006C8C 00003A8C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r11, 6, 25, 25);
/*80006C90 00003A90*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80006C94 00003A94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006C98 00003A98*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r10, 4, 27, 27);
/*80006C9C 00003A9C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*80006CA0 00003AA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r31));
/*80006CA4 00003AA4*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r11, 5, 26, 26);
/*80006CA8 00003AA8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80006CAC 00003AAC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r10, 6, 24, 25);
/*80006CB0 00003AB0*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r3, 24);
/*80006CB4 00003AB4*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r10, 3, 28, 28);
/*80006CB8 00003AB8*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r4, 24);
/*80006CBC 00003ABC*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r11, 4, 27, 27);
/*80006CC0 00003AC0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006CC4 00003AC4*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r7, 24);
/*80006CC8 00003AC8*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r0, 24);
/*80006CCC 00003ACC*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r11, 1, 29, 30);
/*80006CD0 00003AD0*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80006CD4 00003AD4*/ PPC::Runtime::ASM::clrlwi(context->r8, context->r3, 24);
/*80006CD8 00003AD8*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r11, 5, 26, 26);
/*80006CDC 00003ADC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r31));
/*80006CE0 00003AE0*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r10, 3, 28, 28);
/*80006CE4 00003AE4*/ PPC::Runtime::ASM::clrlwi(context->r9, context->r5, 24);
/*80006CE8 00003AE8*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r6, 24);
/*80006CEC 00003AEC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006CF0 00003AF0*/ PPC::Runtime::ASM::rlwimi(context->r9, context->r10, 0, 31, 31);
/*80006CF4 00003AF4*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r8, 24);
/*80006CF8 00003AF8*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r11, 4, 27, 27);
/*80006CFC 00003AFC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80006D00 00003B00*/ PPC::Runtime::ASM::rlwimi(context->r7, context->r11, 1, 29, 30);
/*80006D04 00003B04*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r7, 24);
/*80006D08 00003B08*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r4, 24);
/*80006D0C 00003B0C*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006D10 00003B10*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r9, 24);
/*80006D14 00003B14*/ PPC::Runtime::ASM::li(context->r8, 0x78);
/*80006D18 00003B18*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r10, 4, 27, 27);
/*80006D1C 00003B1C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r31));
/*80006D20 00003B20*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r10, 3, 28, 28);
/*80006D24 00003B24*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r10, 5, 26, 26);
/*80006D28 00003B28*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80006D2C 00003B2C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006D30 00003B30*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r31));
/*80006D34 00003B34*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80006D38 00003B38*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80006D3C 00003B3C*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80006D40 00003B40*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80006D44 00003B44*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*80006D48 00003B48*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80006D4C 00003B4C*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80006D50 00003B50*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80006D54 00003B54*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80006D58 00003B58*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80006D5C 00003B5C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80006D60 00003B60*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r31));
/*80006D64 00003B64*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80006D68 00003B68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r31));
/*80006D6C 00003B6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80006D70 00003B70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80006D74 00003B74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80006D78 00003B78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80006D7C 00003B7C*/ PPC::Runtime::ASM::blr();
}