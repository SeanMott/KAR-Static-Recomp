//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EFE44.hpp"



void fn_802F8920(PPC::Runtime::GCContext* context)
{
/*802F8920 002F5720*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802F8924 002F5724*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F8928 002F5728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F892C 002F572C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F8930 002F5730*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802F8934 002F5734*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F8938 002F5738*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F893C 002F573C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F8940 002F5740*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*802F8944 002F5744*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F8948 002F5748*/ PPC::Runtime::ASM::beq(.L_802F898C);
/*802F894C 002F574C*/ PPC::Runtime::ASM::bne(.L_802F8960);
/*802F8950 002F5750*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F8954 002F5754*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F8958 002F5758*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F895C 002F575C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F8960, 0x802F8960) //this is a jump label
/*802F8960 002F5760*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F8964 002F5764*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F8968 002F5768*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F896C 002F576C*/ PPC::Runtime::ASM::bne(.L_802F897C);
/*802F8970 002F5770*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F8974 002F5774*/ PPC::Runtime::ASM::beq(.L_802F897C);
/*802F8978 002F5778*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F897C, 0x802F897C) //this is a jump label
/* 802F897C 002F577C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F8980 002F5780*/ PPC::Runtime::ASM::beq(.L_802F898C);
/*802F8984 002F5784*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F8988 002F5788*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_802F898C, 0x802F898C) //this is a jump label
/*802F898C 002F578C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F8990 002F5790*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F8994 002F5794*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*802F8998 002F5798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*802F899C 002F579C*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x44);
/*802F89A0 002F57A0*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 802F89A4 002F57A4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802F89A8 002F57A8*/ PPC::Runtime::ASM::bne(.L_802F89BC);
/*802F89AC 002F57AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F89B0 002F57B0*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*802F89B4 002F57B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F89B8 002F57B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F89BC, 0x802F89BC) //this is a jump label
/*802F89BC 002F57BC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*802F89C0 002F57C0*/ PPC::Runtime::ASM::bne(.L_802F89D4);
/*802F89C4 002F57C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F89C8 002F57C8*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*802F89CC 002F57CC*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 3 @ Get_MemoryOffset_SDA21);
/*802F89D0 002F57D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F89D4, 0x802F89D4) //this is a jump label
/*802F89D4 002F57D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802F89D8 002F57D8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*802F89DC 002F57DC*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*802F89E0 002F57E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F89E4 002F57E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802F89E8 002F57E8*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*802F89EC 002F57EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F89F0 002F57F0*/ PPC::Runtime::ASM::beq(.L_802F8A34);
/*802F89F4 002F57F4*/ PPC::Runtime::ASM::bne(.L_802F8A08);
/*802F89F8 002F57F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9800 @ Get_MemoryOffset_SDA21);
/*802F89FC 002F57FC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*802F8A00 002F5800*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9808 @ Get_MemoryOffset_SDA21);
/*802F8A04 002F5804*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802F8A08, 0x802F8A08) //this is a jump label
/*802F8A08 002F5808*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802F8A0C 002F580C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802F8A10 002F5810*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*802F8A14 002F5814*/ PPC::Runtime::ASM::bne(.L_802F8A24);
/*802F8A18 002F5818*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*802F8A1C 002F581C*/ PPC::Runtime::ASM::beq(.L_802F8A24);
/*802F8A20 002F5820*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802F8A24, 0x802F8A24) //this is a jump label
/* 802F8A24 002F5824  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802F8A28 002F5828*/ PPC::Runtime::ASM::bne(.L_802F8A34);
/*802F8A2C 002F582C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802F8A30 002F5830*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_802F8A34, 0x802F8A34) //this is a jump label
/*802F8A34 002F5834*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F8A38 002F5838*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F8A3C 002F583C*/ PPC::Runtime::ASM::bl(fn_802EFE44);
/*802F8A40 002F5840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F8A44 002F5844*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F8A48 002F5848*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F8A4C 002F584C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F8A50 002F5850*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F8A54 002F5854*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802F8A58 002F5858*/ PPC::Runtime::ASM::blr();
}