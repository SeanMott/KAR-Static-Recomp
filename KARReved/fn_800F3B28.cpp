//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204054.hpp"



void fn_800F3B28(PPC::Runtime::GCContext* context)
{
/*800F3B28 000F0928*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F3B2C 000F092C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F3B30 000F0930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F3B34 000F0934*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F3B38 000F0938*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F3B3C 000F093C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800F3B40 000F0940*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 800F3B44 000F0944  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*800F3B48 000F0948*/ PPC::Runtime::ASM::beq(.L_800F3C90);
/*800F3B4C 000F094C*/ PPC::Runtime::ASM::bl(fn_80204054);
/*800F3B50 000F0950*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F3B54 000F0954*/ PPC::Runtime::ASM::blt(.L_800F3C90);
/*800F3B58 000F0958*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3B5C 000F095C*/ PPC::Runtime::ASM::mulli(context->r31, context->r3, 0x5c);
/*800F3B60 000F0960*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F3B64 000F0964*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800F3B68 000F0968*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*800F3B6C 000F096C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r29);
/*800F3B70 000F0970*/ PPC::Runtime::ASM::bne(.L_800F3C90);
/*800F3B74 000F0974*/ PPC::Runtime::ASM::lha(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*800F3B78 000F0978*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*800F3B7C 000F097C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800F3B80 000F0980*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x52);
/*800F3B84 000F0984*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*800F3B88 000F0988*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3B8C 000F098C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F3B90 000F0990*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800F3B94 000F0994*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4e, context->r3));
/*800F3B98 000F0998*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3B9C 000F099C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F3BA0 000F09A0*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800F3BA4 000F09A4*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*800F3BA8 000F09A8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3BAC 000F09AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F3BB0 000F09B0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r4);
/*800F3BB4 000F09B4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*800F3BB8 000F09B8*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r4);
/*800F3BBC 000F09BC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3BC0 000F09C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F3BC4 000F09C4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r4);
/*800F3BC8 000F09C8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 6, 25, 25);
/*800F3BCC 000F09CC*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r4);
/*800F3BD0 000F09D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3BD4 000F09D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F3BD8 000F09D8*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800F3BDC 000F09DC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*800F3BE0 000F09E0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3BE4 000F09E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F3BE8 000F09E8*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r31);
/*800F3BEC 000F09EC*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*800F3BF0 000F09F0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3BF4 000F09F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800F3BF8 000F09F8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800F3BFC 000F09FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800F3C00 000F0A00*/ PPC::Runtime::ASM::beq(.L_800F3C28);
/*800F3C04 000F0A04*/ PPC::Runtime::ASM::bge(.L_800F3C54);
/*800F3C08 000F0A08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800F3C0C 000F0A0C*/ PPC::Runtime::ASM::bge(.L_800F3C14);
/*800F3C10 000F0A10*/ PPC::Runtime::ASM::b(.L_800F3C54);
RUNTIME_PPC_JUMP_LABEL(.L_800F3C14, 0x800F3C14) //this is a jump label
/*800F3C14 000F0A14*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C18 000F0A18*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800F3C1C 000F0A1C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800F3C20 000F0A20*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800F3C24 000F0A24*/ PPC::Runtime::ASM::b(.L_800F3C54);
RUNTIME_PPC_JUMP_LABEL(.L_800F3C28, 0x800F3C28) //this is a jump label
/*800F3C28 000F0A28*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x18);
/*800F3C2C 000F0A2C*/ PPC::Runtime::ASM::bge(.L_800F3C44);
/*800F3C30 000F0A30*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C34 000F0A34*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800F3C38 000F0A38*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800F3C3C 000F0A3C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800F3C40 000F0A40*/ PPC::Runtime::ASM::b(.L_800F3C54);
RUNTIME_PPC_JUMP_LABEL(.L_800F3C44, 0x800F3C44) //this is a jump label
/*800F3C44 000F0A44*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C48 000F0A48*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r4));
/*800F3C4C 000F0A4C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*800F3C50 000F0A50*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800F3C54, 0x800F3C54) //this is a jump label
/*800F3C54 000F0A54*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C58 000F0A58*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD700 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C5C 000F0A5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800F3C60 000F0A60*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*800F3C64 000F0A64*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C68 000F0A68*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*800F3C6C 000F0A6C*/ PPC::Runtime::ASM::li(context->r0, StructValues_57 @ Get_MemoryOffset_SDA21);
/*800F3C70 000F0A70*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C74 000F0A74*/ PPC::Runtime::ASM::stw(context->r0, StructWithStructs_27 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F3C78 000F0A78*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*800F3C7C 000F0A7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800F3C80 000F0A80*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r31);
/*800F3C84 000F0A84*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*800F3C88 000F0A88*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*800F3C8C 000F0A8C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800F3C90, 0x800F3C90) //this is a jump label
/*800F3C90 000F0A90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F3C94 000F0A94*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800F3C98 000F0A98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F3C9C 000F0A9C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F3CA0 000F0AA0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F3CA4 000F0AA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F3CA8 000F0AA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F3CAC 000F0AAC*/ PPC::Runtime::ASM::blr();
}