//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80170F28.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8017119C.hpp"
#include "fn_80171E40.hpp"
#include "fn_8017224C.hpp"



void fn_80171898(PPC::Runtime::GCContext* context)
{
/*80171898 0016E698*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8017189C 0016E69C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801718A0 0016E6A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801718A4 0016E6A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801718A8 0016E6A8*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801718AC 0016E6AC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801718B0 0016E6B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801718B4 0016E6B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801718B8 0016E6B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*801718BC 0016E6BC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801718C0 0016E6C0*/ PPC::Runtime::ASM::ble(.L_801718FC);
/*801718C4 0016E6C4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*801718C8 0016E6C8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801718CC 0016E6CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*801718D0 0016E6D0*/ PPC::Runtime::ASM::bgt(.L_801718FC);
/*801718D4 0016E6D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801718D8 0016E6D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801718DC 0016E6DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801718E0 0016E6E0*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801718E4 0016E6E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801718E8 0016E6E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801718EC 0016E6EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801718F0 0016E6F0*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801718F4 0016E6F4*/ PPC::Runtime::ASM::li(context->r0, 0xac);
/*801718F8 0016E6F8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801718FC, 0x801718FC) //this is a jump label
/*801718FC 0016E6FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80171900 0016E700*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80171904 0016E704*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*80171908 0016E708*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017190C 0016E70C*/ PPC::Runtime::ASM::bl(fn_80170F28);
/*80171910 0016E710*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80171914 0016E714*/ PPC::Runtime::ASM::bne(.L_80171928);
/*80171918 0016E718*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C58 @ Get_MemoryOffset_SDA21);
/*8017191C 0016E71C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80171920 0016E720*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C60 @ Get_MemoryOffset_SDA21);
/*80171924 0016E724*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80171928, 0x80171928) //this is a jump label
/*80171928 0016E728*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017192C 0016E72C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80171930 0016E730*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80171934 0016E734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80171938 0016E738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8017193C 0016E73C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80171940 0016E740*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80171944 0016E744*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80171948 0016E748*/ PPC::Runtime::ASM::bne(.L_80171994);
/*8017194C 0016E74C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80171950 0016E750*/ PPC::Runtime::ASM::beq(.L_80171994);
/*80171954 0016E754*/ PPC::Runtime::ASM::bne(.L_80171968);
/*80171958 0016E758*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C58 @ Get_MemoryOffset_SDA21);
/*8017195C 0016E75C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80171960 0016E760*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C60 @ Get_MemoryOffset_SDA21);
/*80171964 0016E764*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80171968, 0x80171968) //this is a jump label
/*80171968 0016E768*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017196C 0016E76C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80171970 0016E770*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80171974 0016E774*/ PPC::Runtime::ASM::bne(.L_80171984);
/*80171978 0016E778*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8017197C 0016E77C*/ PPC::Runtime::ASM::beq(.L_80171984);
/*80171980 0016E780*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80171984, 0x80171984) //this is a jump label
/*80171984 0016E784*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80171988 0016E788*/ PPC::Runtime::ASM::bne(.L_80171994);
/*8017198C 0016E78C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80171990 0016E790*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80171994, 0x80171994) //this is a jump label
/*80171994 0016E794*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80171998 0016E798*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8017199C 0016E79C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801719A0 0016E7A0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x28);
/*801719A4 0016E7A4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801719A8 0016E7A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801719AC 0016E7AC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x34);
/*801719B0 0016E7B0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801719B4 0016E7B4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801719B8 0016E7B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*801719BC 0016E7BC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801719C0 0016E7C0*/ PPC::Runtime::ASM::addi(context->r27, context->r31, 0x40);
/*801719C4 0016E7C4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801719C8 0016E7C8*/ PPC::Runtime::ASM::bne(.L_801719DC);
/*801719CC 0016E7CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C58 @ Get_MemoryOffset_SDA21);
/*801719D0 0016E7D0*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*801719D4 0016E7D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C60 @ Get_MemoryOffset_SDA21);
/*801719D8 0016E7D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801719DC, 0x801719DC) //this is a jump label
/*801719DC 0016E7DC*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*801719E0 0016E7E0*/ PPC::Runtime::ASM::bne(.L_801719F4);
/*801719E4 0016E7E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C58 @ Get_MemoryOffset_SDA21);
/*801719E8 0016E7E8*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*801719EC 0016E7EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C68 @ Get_MemoryOffset_SDA21);
/*801719F0 0016E7F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801719F4, 0x801719F4) //this is a jump label
/*801719F4 0016E7F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*801719F8 0016E7F8*/ PPC::Runtime::ASM::addi(context->r26, context->r31, 0x4c);
/*801719FC 0016E7FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80171A00 0016E800*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80171A04 0016E804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80171A08 0016E808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*80171A0C 0016E80C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*80171A10 0016E810*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80171A14 0016E814*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80171A18 0016E818*/ PPC::Runtime::ASM::bne(.L_80171A2C);
/*80171A1C 0016E81C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C58 @ Get_MemoryOffset_SDA21);
/*80171A20 0016E820*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*80171A24 0016E824*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C60 @ Get_MemoryOffset_SDA21);
/*80171A28 0016E828*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80171A2C, 0x80171A2C) //this is a jump label
/*80171A2C 0016E82C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80171A30 0016E830*/ PPC::Runtime::ASM::bne(.L_80171A44);
/*80171A34 0016E834*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6C58 @ Get_MemoryOffset_SDA21);
/*80171A38 0016E838*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*80171A3C 0016E83C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6C68 @ Get_MemoryOffset_SDA21);
/*80171A40 0016E840*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80171A44, 0x80171A44) //this is a jump label
/*80171A44 0016E844*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*80171A48 0016E848*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r27));
/*80171A4C 0016E84C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80171A50 0016E850*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*80171A54 0016E854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*80171A58 0016E858*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80171A5C 0016E85C*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r30));
/*80171A60 0016E860*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80171A64 0016E864*/ PPC::Runtime::ASM::ble(.L_80171A94);
/*80171A68 0016E868*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80171A6C 0016E86C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r30));
/*80171A70 0016E870*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r30));
/*80171A74 0016E874*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80171A78 0016E878*/ PPC::Runtime::ASM::bgt(.L_80171A94);
/*80171A7C 0016E87C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80171A80 0016E880*/ PPC::Runtime::ASM::bl(fn_8017119C);
/*80171A84 0016E884*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*80171A88 0016E888*/ PPC::Runtime::ASM::bl(fn_80171E40);
/*80171A8C 0016E88C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*80171A90 0016E890*/ PPC::Runtime::ASM::bl(fn_8017224C);
RUNTIME_PPC_JUMP_LABEL(.L_80171A94, 0x80171A94) //this is a jump label
/*80171A94 0016E894*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80171A98 0016E898*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80171A9C 0016E89C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80171AA0 0016E8A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80171AA4 0016E8A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80171AA8 0016E8A8*/ PPC::Runtime::ASM::blr();
}