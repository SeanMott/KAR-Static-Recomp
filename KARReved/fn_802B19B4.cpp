//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80319BDC.hpp"
#include "fn_8031A74C.hpp"
#include "fn_8034BF50.hpp"



void fn_802B19B4(PPC::Runtime::GCContext* context)
{
/*802B19B4 002AE7B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc0, context->r1));
/*802B19B8 002AE7B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B19BC 002AE7BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B19C0 002AE7C0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B19C4 002AE7C4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*802B19C8 002AE7C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802B19CC 002AE7CC*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*802B19D0 002AE7D0*/ PPC::Runtime::ASM::bl(fn_8039E4B4);
/*802B19D4 002AE7D4*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19a0, context->r31));
/*802B19D8 002AE7D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B19DC 002AE7DC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1950, context->r31));
/*802B19E0 002AE7E0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B19E4 002AE7E4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B19E8 002AE7E8*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B19EC 002AE7EC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B19F0 002AE7F0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B19F4 002AE7F4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x16);
/*802B19F8 002AE7F8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802B19FC 002AE7FC*/ PPC::Runtime::ASM::blt(.L_802B1A20);
/*802B1A00 002AE800*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802B1A04 002AE804*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4AD0 @ Get_MemoryOffset_HighBit);
/*802B1A08 002AE808*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802B1A0C 002AE80C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C4AD0 @ Get_MemoryOffset_LowBit);
/*802B1A10 002AE810*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802B1A14 002AE814*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B1A18 002AE818*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B1A1C 002AE81C*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B1A20, 0x802B1A20) //this is a jump label
/* 802B1A20 002AE820  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*802B1A24 002AE824*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802B1A28 002AE828*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r28);
/*802B1A2C 002AE82C*/ PPC::Runtime::ASM::beq(.L_802B1A40);
/*802B1A30 002AE830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B1A34 002AE834*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802B1A38 002AE838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B1A3C 002AE83C*/ PPC::Runtime::ASM::b(.L_802B1A4C);
RUNTIME_PPC_JUMP_LABEL(.L_802B1A40, 0x802B1A40) //this is a jump label
/*802B1A40 002AE840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B1A44 002AE844*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*802B1A48 002AE848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802B1A4C, 0x802B1A4C) //this is a jump label
/*802B1A4C 002AE84C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802B1A50 002AE850*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B1A54 002AE854*/ PPC::Runtime::ASM::beq(.L_802B1B8C);
/*802B1A58 002AE858*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802B1A5C 002AE85C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1A60 002AE860*/ PPC::Runtime::ASM::li(context->r5, lbl_805D800C @ Get_MemoryOffset_SDA21);
/*802B1A64 002AE864*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7F20 @ Get_MemoryOffset_SDA21);
/*802B1A68 002AE868*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1A6C 002AE86C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1A70 002AE870*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*802B1A74 002AE874*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 802B1A78 002AE878  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802B1A7C 002AE87C*/ PPC::Runtime::ASM::beq(.L_802B1B7C);
/*802B1A80 002AE880*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1A84 002AE884*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1A88 002AE888*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7FA8 @ Get_MemoryOffset_SDA21);
/*802B1A8C 002AE88C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7FA0 @ Get_MemoryOffset_SDA21);
/*802B1A90 002AE890*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1A94 002AE894*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1A98 002AE898*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B1A9C 002AE89C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*802B1AA0 002AE8A0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802B1AA4 002AE8A4*/ PPC::Runtime::ASM::bctrl();
/*802B1AA8 002AE8A8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802B1AAC 002AE8AC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*802B1AB0 002AE8B0*/ PPC::Runtime::ASM::bl(fn_80319BDC);
/*802B1AB4 002AE8B4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3458 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1AB8 002AE8B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802B1ABC 002AE8BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802B1AC0 002AE8C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802B1AC4 002AE8C4*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*802B1AC8 002AE8C8*/ PPC::Runtime::ASM::bl(fn_8031A74C);
/*802B1ACC 002AE8CC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E33C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1AD0 002AE8D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802B1AD4 002AE8D4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3450 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1AD8 002AE8D8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802B1ADC 002AE8DC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802B1AE0 002AE8E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802B1AE4 002AE8E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802B1AE8 002AE8E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802B1AEC 002AE8EC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B1AF0 002AE8F0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802B1AF4 002AE8F4*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B1AF8 002AE8F8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B1AFC 002AE8FC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B1B00 002AE900*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B1B04 002AE904*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B1B08 002AE908*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B1B0C 002AE90C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B1B10 002AE910*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802B1B14 002AE914*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802B1B18 002AE918*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B1B1C 002AE91C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B1B20 002AE920*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7EB8 @ Get_MemoryOffset_SDA21);
/*802B1B24 002AE924*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B1B28 002AE928*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7EB0 @ Get_MemoryOffset_SDA21);
/*802B1B2C 002AE92C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802B1B30 002AE930*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1B34 002AE934*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B1B38 002AE938*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802B1B3C 002AE93C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B1B40 002AE940*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B1B44 002AE944*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1950, context->r31));
/*802B1B48 002AE948*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*802B1B4C 002AE94C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802B1B50 002AE950*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B1B54 002AE954*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*802B1B58 002AE958*/ PPC::Runtime::ASM::bl(fn_8034BF50);
/*802B1B5C 002AE95C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x38);
/*802B1B60 002AE960*/ PPC::Runtime::ASM::beq(.L_802B1B70);
/*802B1B64 002AE964*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B1B68 002AE968*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B1B6C 002AE96C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B1B70, 0x802B1B70) //this is a jump label
/*802B1B70 002AE970*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802B1B74 002AE974*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802B1B78 002AE978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802B1B7C, 0x802B1B7C) //this is a jump label
/*802B1B7C 002AE97C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802B1B80 002AE980*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B1B84 002AE984*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B1B88 002AE988*/ PPC::Runtime::ASM::b(.L_802B1B98);
RUNTIME_PPC_JUMP_LABEL(.L_802B1B8C, 0x802B1B8C) //this is a jump label
/*802B1B8C 002AE98C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*802B1B90 002AE990*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B1B94 002AE994*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802B1B98, 0x802B1B98) //this is a jump label
/*802B1B98 002AE998*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*802B1B9C 002AE99C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802B1BA0 002AE9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802B1BA4 002AE9A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B1BA8 002AE9A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xc0);
/*802B1BAC 002AE9AC*/ PPC::Runtime::ASM::blr();
}