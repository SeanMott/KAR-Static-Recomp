//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005811C.hpp"



void fn_80058BE8(PPC::Runtime::GCContext* context)
{
/*80058BE8 000559E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80058BEC 000559EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80058BF0 000559F0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_HighBit);
/*80058BF4 000559F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80058BF8 000559F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_LowBit);
/*80058BFC 000559FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80058C00 00055A00*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x4);
/*80058C04 00055A04*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80058C08 00055A08*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80058C0C 00055A0C*/ PPC::Runtime::ASM::bl(fn_8041041C);
/*80058C10 00055A10*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_HighBit);
/*80058C14 00055A14*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_LowBit);
/*80058C18 00055A18*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x8);
/*80058C1C 00055A1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80058C20 00055A20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*80058C24 00055A24*/ PPC::Runtime::ASM::bl(fn_8005811C);
/*80058C28 00055A28*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_HighBit);
/*80058C2C 00055A2C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80058C30 00055A30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_LowBit);
/*80058C34 00055A34*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80058C38 00055A38*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x10);
/*80058C3C 00055A3C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80058C40 00055A40*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80058C44 00055A44*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80058C48, 0x80058C48) //this is a jump label
/*80058C48 00055A48*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80058C4C 00055A4C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80058C50 00055A50*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80058C54 00055A54*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80058C58 00055A58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*80058C5C 00055A5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80058C60 00055A60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80058C64 00055A64*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80058C68 00055A68*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80058C6C 00055A6C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*80058C70 00055A70*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*80058C74 00055A74*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*80058C78 00055A78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r6));
/*80058C7C 00055A7C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r6));
/*80058C80 00055A80*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*80058C84 00055A84*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*80058C88 00055A88*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r6));
/*80058C8C 00055A8C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r6));
/*80058C90 00055A90*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r6));
/*80058C94 00055A94*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r6));
/*80058C98 00055A98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r6));
/*80058C9C 00055A9C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*80058CA0 00055AA0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r6));
/*80058CA4 00055AA4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*80058CA8 00055AA8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r6));
/*80058CAC 00055AAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r6));
/*80058CB0 00055AB0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r6));
/*80058CB4 00055AB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r6));
/*80058CB8 00055AB8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r6));
/*80058CBC 00055ABC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r6));
/*80058CC0 00055AC0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r6));
/*80058CC4 00055AC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r6));
/*80058CC8 00055AC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r6));
/*80058CCC 00055ACC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r6));
/*80058CD0 00055AD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r6));
/*80058CD4 00055AD4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x8c);
/*80058CD8 00055AD8*/ PPC::Runtime::ASM::bdnz(.L_80058C48);
/*80058CDC 00055ADC*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_175 @ Get_MemoryOffset_HighBit);
/*80058CE0 00055AE0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_HighBit);
/*80058CE4 00055AE4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, MemoryOffset_175 @ Get_MemoryOffset_LowBit);
/*80058CE8 00055AE8*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*80058CEC 00055AEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_LowBit);
/*80058CF0 00055AF0*/ PPC::Runtime::ASM::b(.L_80058DF8);
RUNTIME_PPC_JUMP_LABEL(.L_80058CF4, 0x80058CF4) //this is a jump label
/*80058CF4 00055AF4*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x1c);
/*80058CF8 00055AF8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80058CFC 00055AFC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80058D00 00055B00*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80058D04 00055B04*/ PPC::Runtime::ASM::cmpwi(context->r7, 0xa);
/*80058D08 00055B08*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*80058D0C 00055B0C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*80058D10 00055B10*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80058D14 00055B14*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80058D18 00055B18*/ PPC::Runtime::ASM::bne(.L_80058D7C);
/*80058D1C 00055B1C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80058D20 00055B20*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x3);
/*80058D24 00055B24*/ PPC::Runtime::ASM::beq(.L_80058DF4);
/*80058D28 00055B28*/ PPC::Runtime::ASM::bge(.L_80058D3C);
/*80058D2C 00055B2C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*80058D30 00055B30*/ PPC::Runtime::ASM::beq(.L_80058D48);
/*80058D34 00055B34*/ PPC::Runtime::ASM::bge(.L_80058D5C);
/*80058D38 00055B38*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058D3C, 0x80058D3C) //this is a jump label
/*80058D3C 00055B3C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x5);
/*80058D40 00055B40*/ PPC::Runtime::ASM::bge(.L_80058DF4);
/*80058D44 00055B44*/ PPC::Runtime::ASM::b(.L_80058D70);
RUNTIME_PPC_JUMP_LABEL(.L_80058D48, 0x80058D48) //this is a jump label
/*80058D48 00055B48*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_HighBit);
/*80058D4C 00055B4C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_LowBit);
/*80058D50 00055B50*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80058D54 00055B54*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80058D58 00055B58*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058D5C, 0x80058D5C) //this is a jump label
/*80058D5C 00055B5C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80058D60 00055B60*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80058D64 00055B64*/ PPC::Runtime::ASM::subf(context->r5, context->r6, context->r5);
/*80058D68 00055B68*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80058D6C 00055B6C*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058D70, 0x80058D70) //this is a jump label
/*80058D70 00055B70*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80058D74 00055B74*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80058D78 00055B78*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058D7C, 0x80058D7C) //this is a jump label
/*80058D7C 00055B7C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80058D80 00055B80*/ PPC::Runtime::ASM::mulli(context->r7, context->r7, 0x1c);
/*80058D84 00055B84*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_HighBit);
/*80058D88 00055B88*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x3);
/*80058D8C 00055B8C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, STRUCT_BYTE4_COUNT_180537F40 @ Get_MemoryOffset_LowBit);
/*80058D90 00055B90*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r7);
/*80058D94 00055B94*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x10);
/*80058D98 00055B98*/ PPC::Runtime::ASM::beq(.L_80058DF4);
/*80058D9C 00055B9C*/ PPC::Runtime::ASM::bge(.L_80058DB0);
/*80058DA0 00055BA0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*80058DA4 00055BA4*/ PPC::Runtime::ASM::beq(.L_80058DBC);
/*80058DA8 00055BA8*/ PPC::Runtime::ASM::bge(.L_80058DD0);
/*80058DAC 00055BAC*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058DB0, 0x80058DB0) //this is a jump label
/*80058DB0 00055BB0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x5);
/*80058DB4 00055BB4*/ PPC::Runtime::ASM::bge(.L_80058DF4);
/*80058DB8 00055BB8*/ PPC::Runtime::ASM::b(.L_80058DE4);
RUNTIME_PPC_JUMP_LABEL(.L_80058DBC, 0x80058DBC) //this is a jump label
/*80058DBC 00055BBC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80058DC0 00055BC0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80058DC4 00055BC4*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r5);
/*80058DC8 00055BC8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80058DCC 00055BCC*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058DD0, 0x80058DD0) //this is a jump label
/*80058DD0 00055BD0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80058DD4 00055BD4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80058DD8 00055BD8*/ PPC::Runtime::ASM::subf(context->r5, context->r6, context->r5);
/*80058DDC 00055BDC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80058DE0 00055BE0*/ PPC::Runtime::ASM::b(.L_80058DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80058DE4, 0x80058DE4) //this is a jump label
/*80058DE4 00055BE4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80058DE8 00055BE8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80058DEC 00055BEC*/ PPC::Runtime::ASM::add(context->r5, context->r6, context->r5);
/*80058DF0 00055BF0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80058DF4, 0x80058DF4) //this is a jump label
/*80058DF4 00055BF4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x10);
RUNTIME_PPC_JUMP_LABEL(.L_80058DF8, 0x80058DF8) //this is a jump label
/*80058DF8 00055BF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80058DFC 00055BFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xa);
/*80058E00 00055C00*/ PPC::Runtime::ASM::bne(.L_80058CF4);
/*80058E04 00055C04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80058E08 00055C08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80058E0C 00055C0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80058E10 00055C10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80058E14 00055C14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80058E18 00055C18*/ PPC::Runtime::ASM::blr();
}