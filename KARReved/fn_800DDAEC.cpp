//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802443A0.hpp"



void fn_800DDAEC(PPC::Runtime::GCContext* context)
{
/*800DDAEC 000DA8EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*800DDAF0 000DA8F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DDAF4 000DA8F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800DDAF8 000DA8F8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*800DDAFC 000DA8FC*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*800DDB00 000DA900*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800DDB04 000DA904*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*800DDB08 000DA908*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*800DDB0C 000DA90C*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*800DDB10 000DA910*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800DDB14 000DA914*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800DDB18 000DA918*/ PPC::Runtime::ASM::b(.L_800DDC14);
RUNTIME_PPC_JUMP_LABEL(.L_800DDB1C, 0x800DDB1C) //this is a jump label
/*800DDB1C 000DA91C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r25));
/*800DDB20 000DA920*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800DDB24 000DA924*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*800DDB28 000DA928*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x1a);
/*800DDB2C 000DA92C*/ PPC::Runtime::ASM::beq(.L_800DDB3C);
/*800DDB30 000DA930*/ PPC::Runtime::ASM::subis(context->r0, context->r4, 0x200);
/*800DDB34 000DA934*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1a);
/*800DDB38 000DA938*/ PPC::Runtime::ASM::bne(.L_800DDC0C);
RUNTIME_PPC_JUMP_LABEL(.L_800DDB3C, 0x800DDB3C) //this is a jump label
/*800DDB3C 000DA93C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*800DDB40 000DA940*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x18);
/*800DDB44 000DA944*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800DDB48 000DA948*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*800DDB4C 000DA94C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x3c);
/*800DDB50 000DA950*/ PPC::Runtime::ASM::addi(context->r11, context->r31, 0x50);
/*800DDB54 000DA954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800DDB58 000DA958*/ PPC::Runtime::ASM::addi(context->r22, context->r31, 0x60);
/*800DDB5C 000DA95C*/ PPC::Runtime::ASM::addi(context->r10, context->r31, 0x74);
/*800DDB60 000DA960*/ PPC::Runtime::ASM::addi(context->r23, context->r31, 0x84);
/*800DDB64 000DA964*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r25));
/*800DDB68 000DA968*/ PPC::Runtime::ASM::addi(context->r24, context->r31, 0xa8);
/*800DDB6C 000DA96C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0xcc);
/*800DDB70 000DA970*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x98);
/*800DDB74 000DA974*/ PPC::Runtime::ASM::add(context->r4, context->r12, context->r4);
/*800DDB78 000DA978*/ PPC::Runtime::ASM::add(context->r7, context->r12, context->r7);
/*800DDB7C 000DA97C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800DDB80 000DA980*/ PPC::Runtime::ASM::add(context->r22, context->r12, context->r22);
/*800DDB84 000DA984*/ PPC::Runtime::ASM::add(context->r23, context->r12, context->r23);
/*800DDB88 000DA988*/ PPC::Runtime::ASM::add(context->r24, context->r12, context->r24);
/*800DDB8C 000DA98C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r12, context->r3);
/*800DDB90 000DA990*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0xbc);
/*800DDB94 000DA994*/ PPC::Runtime::ASM::add(context->r0, context->r12, context->r0);
/*800DDB98 000DA998*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800DDB9C 000DA99C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DDBA0 000DA9A0*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800DDBA4 000DA9A4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*800DDBA8 000DA9A8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*800DDBAC 000DA9AC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800DDBB0 000DA9B0*/ PPC::Runtime::ASM::li(context->r7, 0x6);
/*800DDBB4 000DA9B4*/ PPC::Runtime::ASM::lwzx(context->r11, context->r12, context->r11);
/*800DDBB8 000DA9B8*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800DDBBC 000DA9BC*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DDBC0 000DA9C0*/ PPC::Runtime::ASM::lwzx(context->r10, context->r12, context->r10);
/*800DDBC4 000DA9C4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800DDBC8 000DA9C8*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DDBCC 000DA9CC*/ PPC::Runtime::ASM::lwzx(context->r9, context->r12, context->r9);
/*800DDBD0 000DA9D0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800DDBD4 000DA9D4*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DDBD8 000DA9D8*/ PPC::Runtime::ASM::lwzx(context->r8, context->r12, context->r8);
/*800DDBDC 000DA9DC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800DDBE0 000DA9E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DDBE4 000DA9E4*/ PPC::Runtime::ASM::bl(fn_802443A0);
/*800DDBE8 000DA9E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF6C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DDBEC 000DA9EC*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*800DDBF0 000DA9F0*/ PPC::Runtime::ASM::beq(.L_800DDC0C);
/*800DDBF4 000DA9F4*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800DDBF8 000DA9F8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800DDBFC 000DA9FC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x1);
/*800DDC00 000DAA00*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r4, 16, 1);
/*800DDC04 000DAA04*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800DDC08 000DAA08*/ PPC::Runtime::ASM::sthx(context->r26, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800DDC0C, 0x800DDC0C) //this is a jump label
/*800DDC0C 000DAA0C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x140);
/*800DDC10 000DAA10*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800DDC14, 0x800DDC14) //this is a jump label
/*800DDC14 000DAA14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r25));
/*800DDC18 000DAA18*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*800DDC1C 000DAA1C*/ PPC::Runtime::ASM::blt(.L_800DDB1C);
/*800DDC20 000DAA20*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x60);
/*800DDC24 000DAA24*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*800DDC28 000DAA28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800DDC2C 000DAA2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DDC30 000DAA30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*800DDC34 000DAA34*/ PPC::Runtime::ASM::blr();
}