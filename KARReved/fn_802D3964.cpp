//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802F0268.hpp"



void fn_802D3964(PPC::Runtime::GCContext* context)
{
/*802D3964 002D0764*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802D3968 002D0768*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D396C 002D076C*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BD5F0 @ Get_MemoryOffset_HighBit);
/*802D3970 002D0770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D3974 002D0774*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802D3978 002D0778*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802D397C 002D077C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D3980 002D0780*/ PPC::Runtime::ASM::addi(context->r3, context->r7, lbl_804BD5F0 @ Get_MemoryOffset_LowBit);
/*802D3984 002D0784*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802D3988 002D0788*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802D398C 002D078C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D3990 002D0790*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802D3994 002D0794*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D3998 002D0798*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802D399C 002D079C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802D39A0 002D07A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802D39A4 002D07A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802D39A8 002D07A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802D39AC 002D07AC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802D39B0 002D07B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D39B4 002D07B4*/ PPC::Runtime::ASM::beq(.L_802D39D8);
/*802D39B8 002D07B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802D39BC 002D07BC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802D39C0 002D07C0*/ PPC::Runtime::ASM::beq(.L_802D39D0);
/*802D39C4 002D07C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802D39C8 002D07C8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802D39CC 002D07CC*/ PPC::Runtime::ASM::bne(.L_802D39D4);
RUNTIME_PPC_JUMP_LABEL(.L_802D39D0, 0x802D39D0) //this is a jump label
/*802D39D0 002D07D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802D39D4, 0x802D39D4) //this is a jump label
/*802D39D4 002D07D4*/ PPC::Runtime::ASM::bl(fn_8038CCAC);
RUNTIME_PPC_JUMP_LABEL(.L_802D39D8, 0x802D39D8) //this is a jump label
/*802D39D8 002D07D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802D39DC 002D07DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802D39E0 002D07E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D39E4 002D07E4*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*802D39E8 002D07E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D39EC 002D07EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D39F0 002D07F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D39F4 002D07F4*/ PPC::Runtime::ASM::beq(.L_802D3A20);
/*802D39F8 002D07F8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802D39FC 002D07FC*/ PPC::Runtime::ASM::beq(.L_802D3A18);
/*802D3A00 002D0800*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802D3A04 002D0804*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3A08 002D0808*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3A0C 002D080C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D3A10 002D0810*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3A14 002D0814*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3A18, 0x802D3A18) //this is a jump label
/*802D3A18 002D0818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D3A1C 002D081C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D3A20, 0x802D3A20) //this is a jump label
/*802D3A20 002D0820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D3A24 002D0824*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D3A28 002D0828*/ PPC::Runtime::ASM::beq(.L_802D3A40);
/*802D3A2C 002D082C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3A30 002D0830*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3A34 002D0834*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D3A38 002D0838*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3A3C 002D083C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3A40, 0x802D3A40) //this is a jump label
/*802D3A40 002D0840*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802D3A44 002D0844*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802D3A48 002D0848*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D3A4C 002D084C*/ PPC::Runtime::ASM::beq(.L_802D3A70);
/*802D3A50 002D0850*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802D3A54 002D0854*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802D3A58 002D0858*/ PPC::Runtime::ASM::beq(.L_802D3A68);
/*802D3A5C 002D085C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802D3A60 002D0860*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802D3A64 002D0864*/ PPC::Runtime::ASM::bne(.L_802D3A6C);
RUNTIME_PPC_JUMP_LABEL(.L_802D3A68, 0x802D3A68) //this is a jump label
/*802D3A68 002D0868*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802D3A6C, 0x802D3A6C) //this is a jump label
/*802D3A6C 002D086C*/ PPC::Runtime::ASM::bl(fn_8038CCAC);
RUNTIME_PPC_JUMP_LABEL(.L_802D3A70, 0x802D3A70) //this is a jump label
/*802D3A70 002D0870*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802D3A74 002D0874*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802D3A78 002D0878*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D3A7C 002D087C*/ PPC::Runtime::ASM::cmplw(context->r4, context->r3);
/*802D3A80 002D0880*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D3A84 002D0884*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3A88 002D0888*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D3A8C 002D088C*/ PPC::Runtime::ASM::beq(.L_802D3AB8);
/*802D3A90 002D0890*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802D3A94 002D0894*/ PPC::Runtime::ASM::beq(.L_802D3AB0);
/*802D3A98 002D0898*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802D3A9C 002D089C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3AA0 002D08A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3AA4 002D08A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D3AA8 002D08A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3AAC 002D08AC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3AB0, 0x802D3AB0) //this is a jump label
/*802D3AB0 002D08B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D3AB4 002D08B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802D3AB8, 0x802D3AB8) //this is a jump label
/*802D3AB8 002D08B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D3ABC 002D08BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D3AC0 002D08C0*/ PPC::Runtime::ASM::beq(.L_802D3AD8);
/*802D3AC4 002D08C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3AC8 002D08C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3ACC 002D08CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D3AD0 002D08D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3AD4 002D08D4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3AD8, 0x802D3AD8) //this is a jump label
/*802D3AD8 002D08D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802D3ADC 002D08DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802D3AE0 002D08E0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802D3AE4 002D08E4*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*802D3AE8 002D08E8*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*802D3AEC 002D08EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*802D3AF0 002D08F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802D3AF4 002D08F4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802D3AF8 002D08F8*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*802D3AFC 002D08FC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*802D3B00 002D0900*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D3B04 002D0904*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802D3B08 002D0908*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D3B0C 002D090C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D3B10 002D0910*/ PPC::Runtime::ASM::bne(.L_802D3B34);
/*802D3B14 002D0914*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*802D3B18 002D0918*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802D3B1C 002D091C  7C 60 1B 79 */ mr. context->r0 , context->r3
/*802D3B20 002D0920*/ PPC::Runtime::ASM::beq(.L_802D3B30);
/*802D3B24 002D0924*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802D3B28 002D0928*/ PPC::Runtime::ASM::bl(fn_802F0268);
/*802D3B2C 002D092C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802D3B30, 0x802D3B30) //this is a jump label
/*802D3B30 002D0930*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802D3B34, 0x802D3B34) //this is a jump label
/*802D3B34 002D0934*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802D3B38 002D0938*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802D3B3C 002D093C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*802D3B40 002D0940*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802D3B44 002D0944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*802D3B48 002D0948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*802D3B4C 002D094C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802D3B50 002D0950*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802D3B54 002D0954*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D3B58 002D0958*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D3B5C 002D095C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D3B60 002D0960*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802D3B64 002D0964*/ PPC::Runtime::ASM::blr();
}