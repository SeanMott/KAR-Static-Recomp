//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"



void fn_80341860(PPC::Runtime::GCContext* context)
{
/*80341860 0033E660*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80341864 0033E664*/ PPC::Runtime::ASM::mflr(context->r0);
/*80341868 0033E668*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8034186C 0033E66C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80341870 0033E670*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80341874 0033E674*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80341878 0033E678*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8034187C 0033E67C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80341880 0033E680*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80341884 0033E684*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80341888 0033E688*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x4);
/*8034188C 0033E68C*/ PPC::Runtime::ASM::lfs(context->f29, STRUCT_FLOAT_COUNT_1805E4480 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341890 0033E690*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80341894 0033E694*/ PPC::Runtime::ASM::beq(.L_80341A44);
/*80341898 0033E698*/ PPC::Runtime::ASM::bge(.L_803418B4);
/*8034189C 0033E69C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x2);
/*803418A0 0033E6A0*/ PPC::Runtime::ASM::beq(.L_80341944);
/*803418A4 0033E6A4*/ PPC::Runtime::ASM::bge(.L_803418C4);
/*803418A8 0033E6A8*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*803418AC 0033E6AC*/ PPC::Runtime::ASM::bge(.L_803419C4);
/*803418B0 0033E6B0*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_803418B4, 0x803418B4) //this is a jump label
/*803418B4 0033E6B4*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x6);
/*803418B8 0033E6B8*/ PPC::Runtime::ASM::beq(.L_80341B44);
/*803418BC 0033E6BC*/ PPC::Runtime::ASM::bge(.L_80341BC0);
/*803418C0 0033E6C0*/ PPC::Runtime::ASM::b(.L_80341AC4);
RUNTIME_PPC_JUMP_LABEL(.L_803418C4, 0x803418C4) //this is a jump label
/* 803418C4 0033E6C4  54 C0 06 3F */ clrlwi. context->r0 , context->r6 , 24
/*803418C8 0033E6C8*/ PPC::Runtime::ASM::beq(.L_80341908);
/*803418CC 0033E6CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803418D0 0033E6D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803418D4 0033E6D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*803418D8 0033E6D8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*803418DC 0033E6DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803418E0 0033E6E0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803418E4 0033E6E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803418E8 0033E6E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*803418EC 0033E6EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*803418F0 0033E6F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803418F4 0033E6F4*/ PPC::Runtime::ASM::bne(.L_80341900);
/*803418F8 0033E6F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*803418FC 0033E6FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341900, 0x80341900) //this is a jump label
/*80341900 0033E700*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80341904 0033E704*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341908, 0x80341908) //this is a jump label
/*80341908 0033E708*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034190C 0033E70C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341910 0033E710*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341914 0033E714*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341918 0033E718*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8034191C 0033E71C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341920 0033E720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341924 0033E724*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341928 0033E728*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*8034192C 0033E72C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341930 0033E730*/ PPC::Runtime::ASM::bne(.L_8034193C);
/*80341934 0033E734*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341938 0033E738*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8034193C, 0x8034193C) //this is a jump label
/*8034193C 0033E73C*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80341940 0033E740*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341944, 0x80341944) //this is a jump label
/* 80341944 0033E744  54 C0 06 3F */ clrlwi. context->r0 , context->r6 , 24
/*80341948 0033E748*/ PPC::Runtime::ASM::beq(.L_80341988);
/*8034194C 0033E74C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341950 0033E750*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341954 0033E754*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341958 0033E758*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*8034195C 0033E75C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341960 0033E760*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341964 0033E764*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341968 0033E768*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*8034196C 0033E76C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341970 0033E770*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341974 0033E774*/ PPC::Runtime::ASM::bne(.L_80341980);
/*80341978 0033E778*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*8034197C 0033E77C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341980, 0x80341980) //this is a jump label
/*80341980 0033E780*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80341984 0033E784*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341988, 0x80341988) //this is a jump label
/*80341988 0033E788*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8034198C 0033E78C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341990 0033E790*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341994 0033E794*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341998 0033E798*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8034199C 0033E79C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803419A0 0033E7A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803419A4 0033E7A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*803419A8 0033E7A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*803419AC 0033E7AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803419B0 0033E7B0*/ PPC::Runtime::ASM::bne(.L_803419BC);
/*803419B4 0033E7B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*803419B8 0033E7B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_803419BC, 0x803419BC) //this is a jump label
/*803419BC 0033E7BC*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803419C0 0033E7C0*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_803419C4, 0x803419C4) //this is a jump label
/* 803419C4 0033E7C4  54 C0 06 3F */ clrlwi. context->r0 , context->r6 , 24
/*803419C8 0033E7C8*/ PPC::Runtime::ASM::beq(.L_80341A08);
/*803419CC 0033E7CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803419D0 0033E7D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803419D4 0033E7D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*803419D8 0033E7D8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*803419DC 0033E7DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803419E0 0033E7E0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803419E4 0033E7E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803419E8 0033E7E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*803419EC 0033E7EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*803419F0 0033E7F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803419F4 0033E7F4*/ PPC::Runtime::ASM::bne(.L_80341A00);
/*803419F8 0033E7F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*803419FC 0033E7FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341A00, 0x80341A00) //this is a jump label
/*80341A00 0033E800*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341A04 0033E804*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341A08, 0x80341A08) //this is a jump label
/*80341A08 0033E808*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341A0C 0033E80C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341A10 0033E810*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341A14 0033E814*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341A18 0033E818*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341A1C 0033E81C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341A20 0033E820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341A24 0033E824*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341A28 0033E828*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341A2C 0033E82C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341A30 0033E830*/ PPC::Runtime::ASM::bne(.L_80341A3C);
/*80341A34 0033E834*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341A38 0033E838*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341A3C, 0x80341A3C) //this is a jump label
/*80341A3C 0033E83C*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80341A40 0033E840*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341A44, 0x80341A44) //this is a jump label
/* 80341A44 0033E844  54 C0 06 3F */ clrlwi. context->r0 , context->r6 , 24
/*80341A48 0033E848*/ PPC::Runtime::ASM::beq(.L_80341A88);
/*80341A4C 0033E84C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341A50 0033E850*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341A54 0033E854*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341A58 0033E858*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341A5C 0033E85C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341A60 0033E860*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341A64 0033E864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341A68 0033E868*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341A6C 0033E86C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341A70 0033E870*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341A74 0033E874*/ PPC::Runtime::ASM::bne(.L_80341A80);
/*80341A78 0033E878*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341A7C 0033E87C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341A80, 0x80341A80) //this is a jump label
/*80341A80 0033E880*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80341A84 0033E884*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341A88, 0x80341A88) //this is a jump label
/*80341A88 0033E888*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341A8C 0033E88C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341A90 0033E890*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341A94 0033E894*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341A98 0033E898*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341A9C 0033E89C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341AA0 0033E8A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341AA4 0033E8A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341AA8 0033E8A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341AAC 0033E8AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341AB0 0033E8B0*/ PPC::Runtime::ASM::bne(.L_80341ABC);
/*80341AB4 0033E8B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341AB8 0033E8B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341ABC, 0x80341ABC) //this is a jump label
/*80341ABC 0033E8BC*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80341AC0 0033E8C0*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341AC4, 0x80341AC4) //this is a jump label
/* 80341AC4 0033E8C4  54 C0 06 3F */ clrlwi. context->r0 , context->r6 , 24
/*80341AC8 0033E8C8*/ PPC::Runtime::ASM::beq(.L_80341B08);
/*80341ACC 0033E8CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341AD0 0033E8D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341AD4 0033E8D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341AD8 0033E8D8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341ADC 0033E8DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341AE0 0033E8E0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341AE4 0033E8E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341AE8 0033E8E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341AEC 0033E8EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341AF0 0033E8F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341AF4 0033E8F4*/ PPC::Runtime::ASM::bne(.L_80341B00);
/*80341AF8 0033E8F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341AFC 0033E8FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341B00, 0x80341B00) //this is a jump label
/*80341B00 0033E900*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80341B04 0033E904*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341B08, 0x80341B08) //this is a jump label
/*80341B08 0033E908*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341B0C 0033E90C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341B10 0033E910*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341B14 0033E914*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341B18 0033E918*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341B1C 0033E91C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341B20 0033E920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341B24 0033E924*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341B28 0033E928*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341B2C 0033E92C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341B30 0033E930*/ PPC::Runtime::ASM::bne(.L_80341B3C);
/*80341B34 0033E934*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341B38 0033E938*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341B3C, 0x80341B3C) //this is a jump label
/*80341B3C 0033E93C*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80341B40 0033E940*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341B44, 0x80341B44) //this is a jump label
/* 80341B44 0033E944  54 C0 06 3F */ clrlwi. context->r0 , context->r6 , 24
/*80341B48 0033E948*/ PPC::Runtime::ASM::beq(.L_80341B88);
/*80341B4C 0033E94C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341B50 0033E950*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341B54 0033E954*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341B58 0033E958*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341B5C 0033E95C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341B60 0033E960*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341B64 0033E964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341B68 0033E968*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341B6C 0033E96C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341B70 0033E970*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341B74 0033E974*/ PPC::Runtime::ASM::bne(.L_80341B80);
/*80341B78 0033E978*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341B7C 0033E97C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341B80, 0x80341B80) //this is a jump label
/*80341B80 0033E980*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341B84 0033E984*/ PPC::Runtime::ASM::b(.L_80341BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80341B88, 0x80341B88) //this is a jump label
/*80341B88 0033E988*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341B8C 0033E98C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80341B90 0033E990*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*80341B94 0033E994*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*80341B98 0033E998*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80341B9C 0033E99C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80341BA0 0033E9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80341BA4 0033E9A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*80341BA8 0033E9A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*80341BAC 0033E9AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80341BB0 0033E9B0*/ PPC::Runtime::ASM::bne(.L_80341BBC);
/*80341BB4 0033E9B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*80341BB8 0033E9B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80341BBC, 0x80341BBC) //this is a jump label
/*80341BBC 0033E9BC*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80341BC0, 0x80341BC0) //this is a jump label
/*80341BC0 0033E9C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4488 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341BC4 0033E9C4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80341BC8 0033E9C8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80341BCC 0033E9CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E44FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341BD0 0033E9D0*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80341BD4 0033E9D4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80341BD8 0033E9D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E44F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341BDC 0033E9DC*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80341BE0 0033E9E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*80341BE4 0033E9E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4488 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341BE8 0033E9E8*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f0);
/*80341BEC 0033E9EC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80341BF0 0033E9F0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80341BF4 0033E9F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4488 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341BF8 0033E9F8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80341BFC 0033E9FC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80341C00 0033EA00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4500 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341C04 0033EA04*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80341C08 0033EA08*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80341C0C 0033EA0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4488 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341C10 0033EA10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4480 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80341C14 0033EA14*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80341C18 0033EA18*/ PPC::Runtime::ASM::fmuls(context->f0, context->f29, context->f30);
/*80341C1C 0033EA1C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80341C20 0033EA20*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*80341C24 0033EA24*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80341C28 0033EA28*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80341C2C 0033EA2C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80341C30 0033EA30*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f2);
/*80341C34 0033EA34*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80341C38 0033EA38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80341C3C 0033EA3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80341C40 0033EA40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80341C44 0033EA44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80341C48 0033EA48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80341C4C 0033EA4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80341C50 0033EA50*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80341C54 0033EA54*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80341C58 0033EA58*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80341C5C 0033EA5C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80341C60 0033EA60*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80341C64 0033EA64*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80341C68 0033EA68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80341C6C 0033EA6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80341C70 0033EA70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80341C74 0033EA74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80341C78 0033EA78*/ PPC::Runtime::ASM::blr();
}