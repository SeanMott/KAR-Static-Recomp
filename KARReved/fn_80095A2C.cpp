//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "memcpy.hpp"
#include "fn_800D1D3C.hpp"



void fn_80095A2C(PPC::Runtime::GCContext* context)
{
/*80095A2C 0009282C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80095A30 00092830*/ PPC::Runtime::ASM::mflr(context->r0);
/*80095A34 00092834*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553C00 @ Get_MemoryOffset_HighBit);
/*80095A38 00092838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80095A3C 0009283C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80095A40 00092840*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80553C00 @ Get_MemoryOffset_LowBit);
/*80095A44 00092844*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80095A48 00092848*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80095A4C 0009284C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095A50 00092850*/ PPC::Runtime::ASM::bne(.L_80095C08);
/*80095A54 00092854*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80095A58 00092858*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD674 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095A5C 0009285C*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x63fc);
/*80095A60 00092860*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80095A64 00092864*/ PPC::Runtime::ASM::bl(memset);
/*80095A68 00092868*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80095A6C 0009286C*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*80095A70 00092870*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095A74 00092874*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DD674 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095A78 00092878*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095A7C 0009287C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80095A80, 0x80095A80) //this is a jump label
/*80095A80 00092880*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80095A84 00092884*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095A88 00092888*/ PPC::Runtime::ASM::beq(.L_80095A98);
/*80095A8C 0009288C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095A90 00092890*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095A94 00092894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095A98, 0x80095A98) //this is a jump label
/*80095A98 00092898*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80095A9C 0009289C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095AA0 000928A0*/ PPC::Runtime::ASM::beq(.L_80095AB0);
/*80095AA4 000928A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095AA8 000928A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095AAC 000928AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095AB0, 0x80095AB0) //this is a jump label
/*80095AB0 000928B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80095AB4 000928B4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095AB8 000928B8*/ PPC::Runtime::ASM::beq(.L_80095AC8);
/*80095ABC 000928BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095AC0 000928C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095AC4 000928C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095AC8, 0x80095AC8) //this is a jump label
/*80095AC8 000928C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*80095ACC 000928CC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095AD0 000928D0*/ PPC::Runtime::ASM::beq(.L_80095AE0);
/*80095AD4 000928D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095AD8 000928D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095ADC 000928DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095AE0, 0x80095AE0) //this is a jump label
/*80095AE0 000928E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*80095AE4 000928E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095AE8 000928E8*/ PPC::Runtime::ASM::beq(.L_80095AF8);
/*80095AEC 000928EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095AF0 000928F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095AF4 000928F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095AF8, 0x80095AF8) //this is a jump label
/*80095AF8 000928F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*80095AFC 000928FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095B00 00092900*/ PPC::Runtime::ASM::beq(.L_80095B10);
/*80095B04 00092904*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095B08 00092908*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095B0C 0009290C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095B10, 0x80095B10) //this is a jump label
/*80095B10 00092910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
/*80095B14 00092914*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095B18 00092918*/ PPC::Runtime::ASM::beq(.L_80095B28);
/*80095B1C 0009291C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095B20 00092920*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095B24 00092924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095B28, 0x80095B28) //this is a jump label
/*80095B28 00092928*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r5));
/*80095B2C 0009292C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095B30 00092930*/ PPC::Runtime::ASM::beq(.L_80095B40);
/*80095B34 00092934*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80095B38 00092938*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80095B3C 0009293C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80095B40, 0x80095B40) //this is a jump label
/*80095B40 00092940*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x40);
/*80095B44 00092944*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x7);
/*80095B48 00092948*/ PPC::Runtime::ASM::bdnz(.L_80095A80);
/*80095B4C 0009294C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80095B50 00092950*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80095B54 00092954*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80095B58 00092958*/ PPC::Runtime::ASM::bl(memcpy);
/*80095B5C 0009295C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80095B60 00092960*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*80095B64 00092964*/ PPC::Runtime::ASM::mr(context->r7, context->r8);
/*80095B68 00092968*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_80095B6C, 0x80095B6C) //this is a jump label
/*80095B6C 0009296C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095B70 00092970*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r7);
/*80095B74 00092974*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80095B78 00092978*/ PPC::Runtime::ASM::beq(.L_80095BB4);
/*80095B7C 0009297C*/ PPC::Runtime::ASM::subi(context->r6, context->r30, 0x4);
/*80095B80 00092980*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x4);
/*80095B84 00092984*/ PPC::Runtime::ASM::mtctr(context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80095B88, 0x80095B88) //this is a jump label
/*80095B88 00092988*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80095B8C 0009298C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80095B90 00092990*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80095B94 00092994*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80095B98 00092998*/ PPC::Runtime::ASM::bdnz(.L_80095B88);
/*80095B9C 0009299C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80095BA0 000929A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80095BA4 000929A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*80095BA8 000929A8*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 8, 6);
/*80095BAC 000929AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*80095BB0 000929B0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x9c);
RUNTIME_PPC_JUMP_LABEL(.L_80095BB4, 0x80095BB4) //this is a jump label
/*80095BB4 000929B4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80095BB8 000929B8*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x8);
/*80095BBC 000929BC*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x100);
/*80095BC0 000929C0*/ PPC::Runtime::ASM::blt(.L_80095B6C);
/*80095BC4 000929C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553C00 @ Get_MemoryOffset_HighBit);
/*80095BC8 000929C8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80095BCC 000929CC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_80553C00 @ Get_MemoryOffset_LowBit);
/*80095BD0 000929D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80095BD4 000929D4*/ PPC::Runtime::ASM::li(context->r6, 0x5);
/*80095BD8 000929D8*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80095BDC 000929DC*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r5));
/*80095BE0 000929E0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r5));
/*80095BE4 000929E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80095BE8 000929E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r5));
/*80095BEC 000929EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r31));
/*80095BF0 000929F0*/ PPC::Runtime::ASM::bl(fn_800D1D3C);
/*80095BF4 000929F4*/ PPC::Runtime::ASM::lis(context->r4, lbl_80553C00 @ Get_MemoryOffset_HighBit);
/*80095BF8 000929F8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80553C00 @ Get_MemoryOffset_LowBit);
/*80095BFC 000929FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r4));
/*80095C00 00092A00*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80095C04 00092A04*/ PPC::Runtime::ASM::b(.L_80095C0C);
RUNTIME_PPC_JUMP_LABEL(.L_80095C08, 0x80095C08) //this is a jump label
/*80095C08 00092A08*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80095C0C, 0x80095C0C) //this is a jump label
/*80095C0C 00092A0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80095C10 00092A10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80095C14 00092A14*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80095C18 00092A18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80095C1C 00092A1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80095C20 00092A20*/ PPC::Runtime::ASM::blr();
}