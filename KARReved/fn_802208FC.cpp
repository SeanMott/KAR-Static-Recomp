//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802369E0.hpp"
#include "fn_802369F0.hpp"
#include "fn_802211CC.hpp"



void fn_802208FC(PPC::Runtime::GCContext* context)
{
/*802208FC 0021D6FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80220900 0021D700*/ PPC::Runtime::ASM::mflr(context->r0);
/*80220904 0021D704*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220908 0021D708*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022090C 0021D70C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80220910 0021D710*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80220914 0021D714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80220918 0021D718*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8022091C 0021D71C*/ PPC::Runtime::ASM::beq(.L_80220A90);
/*80220920 0021D720*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80220924 0021D724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80220928 0021D728*/ PPC::Runtime::ASM::bl(fn_802369E0);
/*8022092C 0021D72C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80220930 0021D730*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80220934 0021D734*/ PPC::Runtime::ASM::bne(.L_80220944);
/*80220938 0021D738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8022093C 0021D73C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80220940 0021D740*/ PPC::Runtime::ASM::beq(.L_80220A7C);
RUNTIME_PPC_JUMP_LABEL(.L_80220944, 0x80220944) //this is a jump label
/*80220944 0021D744*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80220948 0021D748*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8022094C 0021D74C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80220950 0021D750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80220954 0021D754*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80220958 0021D758*/ PPC::Runtime::ASM::beq(.L_80220A68);
/*8022095C 0021D75C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/* 80220960 0021D760  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*80220964 0021D764*/ PPC::Runtime::ASM::beq(.L_802209F4);
/*80220968 0021D768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8022096C 0021D76C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80220970 0021D770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80220974 0021D774*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80220978 0021D778*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8022097C 0021D77C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80220980 0021D780*/ PPC::Runtime::ASM::ble(.L_802209BC);
RUNTIME_PPC_JUMP_LABEL(.L_80220984, 0x80220984) //this is a jump label
/*80220984 0021D784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80220988 0021D788*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8022098C 0021D78C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80220990 0021D790*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80220994 0021D794*/ PPC::Runtime::ASM::beq(.L_802209B4);
/*80220998 0021D798*/ PPC::Runtime::ASM::bne(.L_802209AC);
/*8022099C 0021D79C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D71A8 @ Get_MemoryOffset_SDA21);
/*802209A0 0021D7A0*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*802209A4 0021D7A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71B0 @ Get_MemoryOffset_SDA21);
/*802209A8 0021D7A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802209AC, 0x802209AC) //this is a jump label
/*802209AC 0021D7AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802209B0 0021D7B0*/ PPC::Runtime::ASM::b(.L_802209D4);
RUNTIME_PPC_JUMP_LABEL(.L_802209B4, 0x802209B4) //this is a jump label
/*802209B4 0021D7B4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*802209B8 0021D7B8*/ PPC::Runtime::ASM::bdnz(.L_80220984);
RUNTIME_PPC_JUMP_LABEL(.L_802209BC, 0x802209BC) //this is a jump label
/*802209BC 0021D7BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B43E8 @ Get_MemoryOffset_HighBit);
/*802209C0 0021D7C0*/ PPC::Runtime::ASM::li(context->r4, 0x22);
/*802209C4 0021D7C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B43E8 @ Get_MemoryOffset_LowBit);
/*802209C8 0021D7C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71B8 @ Get_MemoryOffset_SDA21);
/*802209CC 0021D7CC*/ PPC::Runtime::ASM::bl(fn___assert);
/*802209D0 0021D7D0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802209D4, 0x802209D4) //this is a jump label
/*802209D4 0021D7D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*802209D8 0021D7D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*802209DC 0021D7DC*/ PPC::Runtime::ASM::bge(.L_802209F4);
/*802209E0 0021D7E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*802209E4 0021D7E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*802209E8 0021D7E8*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*802209EC 0021D7EC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802209F0 0021D7F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802209F4, 0x802209F4) //this is a jump label
/*802209F4 0021D7F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*802209F8 0021D7F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802209FC 0021D7FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80220A00 0021D800*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80220A04 0021D804*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80220A08 0021D808*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80220A0C 0021D80C*/ PPC::Runtime::ASM::ble(.L_80220A48);
RUNTIME_PPC_JUMP_LABEL(.L_80220A10, 0x80220A10) //this is a jump label
/*80220A10 0021D810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80220A14 0021D814*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*80220A18 0021D818*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80220A1C 0021D81C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80220A20 0021D820*/ PPC::Runtime::ASM::beq(.L_80220A40);
/*80220A24 0021D824*/ PPC::Runtime::ASM::bne(.L_80220A38);
/*80220A28 0021D828*/ PPC::Runtime::ASM::li(context->r3, lbl_805D71A8 @ Get_MemoryOffset_SDA21);
/*80220A2C 0021D82C*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*80220A30 0021D830*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71B0 @ Get_MemoryOffset_SDA21);
/*80220A34 0021D834*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80220A38, 0x80220A38) //this is a jump label
/*80220A38 0021D838*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80220A3C 0021D83C*/ PPC::Runtime::ASM::b(.L_80220A60);
RUNTIME_PPC_JUMP_LABEL(.L_80220A40, 0x80220A40) //this is a jump label
/*80220A40 0021D840*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80220A44 0021D844*/ PPC::Runtime::ASM::bdnz(.L_80220A10);
RUNTIME_PPC_JUMP_LABEL(.L_80220A48, 0x80220A48) //this is a jump label
/*80220A48 0021D848*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B43E8 @ Get_MemoryOffset_HighBit);
/*80220A4C 0021D84C*/ PPC::Runtime::ASM::li(context->r4, 0x22);
/*80220A50 0021D850*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B43E8 @ Get_MemoryOffset_LowBit);
/*80220A54 0021D854*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71B8 @ Get_MemoryOffset_SDA21);
/*80220A58 0021D858*/ PPC::Runtime::ASM::bl(fn___assert);
/*80220A5C 0021D85C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80220A60, 0x80220A60) //this is a jump label
/*80220A60 0021D860*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80220A64 0021D864*/ PPC::Runtime::ASM::b(.L_80220A8C);
RUNTIME_PPC_JUMP_LABEL(.L_80220A68, 0x80220A68) //this is a jump label
/*80220A68 0021D868*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80220A6C 0021D86C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*80220A70 0021D870*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80220A74 0021D874*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80220A78 0021D878*/ PPC::Runtime::ASM::b(.L_80220A8C);
RUNTIME_PPC_JUMP_LABEL(.L_80220A7C, 0x80220A7C) //this is a jump label
/*80220A7C 0021D87C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80220A80 0021D880*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*80220A84 0021D884*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80220A88 0021D888*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80220A8C, 0x80220A8C) //this is a jump label
/*80220A8C 0021D88C*/ PPC::Runtime::ASM::bl(fn_802369F0);
RUNTIME_PPC_JUMP_LABEL(.L_80220A90, 0x80220A90) //this is a jump label
/*80220A90 0021D890*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80220A94 0021D894*/ PPC::Runtime::ASM::bl(fn_802211CC);
/*80220A98 0021D898*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220A9C 0021D89C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80220AA0 0021D8A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80220AA4 0021D8A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80220AA8 0021D8A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80220AAC 0021D8AC*/ PPC::Runtime::ASM::blr();
}