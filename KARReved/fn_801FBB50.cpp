//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD158.hpp"
#include "fn_801FD158.hpp"
#include "memset.hpp"
#include "fn_801FCCA0.hpp"
#include "fn_801FCCA0.hpp"
#include "fn_8020067C.hpp"
#include "fn_801FB53C.hpp"
#include "memset.hpp"
#include "fn_801FF884.hpp"
#include "fn_80206E2C.hpp"
#include "fn_8020728C.hpp"
#include "fn_80207CE8.hpp"
#include "fn_8020AE7C.hpp"
#include "fn_802006B4.hpp"
#include "fn_8020267C.hpp"
#include "fn_802026D4.hpp"
#include "fn_80202A40.hpp"
#include "fn_8020C634.hpp"
#include "fn_80201EE8.hpp"
#include "fn_80204B70.hpp"
#include "fn_80204C20.hpp"
#include "fn_8020D410.hpp"
#include "fn_801FC670.hpp"
#include "fn_801FC670.hpp"
#include "fn_801FC698.hpp"
#include "fn_801FC698.hpp"
#include "fn_801FC6FC.hpp"
#include "fn_801FC6FC.hpp"
#include "fn_801FC7C4.hpp"
#include "fn_801FC7C4.hpp"
#include "fn_801FC7F8.hpp"
#include "fn_801FC7F8.hpp"
#include "fn_801FC848.hpp"
#include "fn_801FC848.hpp"
#include "fn_801FC8E8.hpp"
#include "fn_801FC8E8.hpp"
#include "fn_801FC8EC.hpp"
#include "fn_801FC8EC.hpp"
#include "fn_801FC9F0.hpp"
#include "fn_801FC9F0.hpp"
#include "fn_801FCABC.hpp"
#include "fn_801FCABC.hpp"
#include "memset.hpp"
#include "fn_801FD780.hpp"
#include "fn_8020072C.hpp"
#include "fn_801FD6B0.hpp"
#include "fn_8018C3B4.hpp"
#include "fn_80201BA4.hpp"
#include "fn_80201904.hpp"
#include "fn_80201AF4.hpp"
#include "fn_801FF8B4.hpp"
#include "fn_800F3EE0.hpp"
#include "fn_801144A0.hpp"
#include "fn_8020D484.hpp"
#include "fn_80200004.hpp"



void fn_801FBB50(PPC::Runtime::GCContext* context)
{
/*801FBB50 001F8950*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801FBB54 001F8954*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FBB58 001F8958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801FBB5C 001F895C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801FBB60 001F8960*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801FBB64 001F8964*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801FBB68 001F8968*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FBB6C 001F896C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801FBB70 001F8970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FBB74 001F8974*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801FBB78 001F8978*/ PPC::Runtime::ASM::ble(.L_801FBF0C);
/*801FBB7C 001F897C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4f);
/*801FBB80 001F8980*/ PPC::Runtime::ASM::bge(.L_801FBF0C);
/*801FBB84 001F8984*/ PPC::Runtime::ASM::li(context->r3, 0x15);
/*801FBB88 001F8988*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*801FBB8C 001F898C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801FBB90 001F8990*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*801FBB94 001F8994*/ PPC::Runtime::ASM::lis(context->r4, fn_801FD158 @ Get_MemoryOffset_HighBit);
/*801FBB98 001F8998*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*801FBB9C 001F899C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FD158 @ Get_MemoryOffset_LowBit);
/*801FBBA0 001F89A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801FBBA4 001F89A4*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801FBBA8 001F89A8*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*801FBBAC 001F89AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055A130 @ Get_MemoryOffset_HighBit);
/*801FBBB0 001F89B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055A130 @ Get_MemoryOffset_LowBit);
/*801FBBB4 001F89B4*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801FBBB8 001F89B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801FBBBC 001F89BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801FBBC0 001F89C0*/ PPC::Runtime::ASM::li(context->r5, 0xbc0);
/*801FBBC4 001F89C4*/ PPC::Runtime::ASM::bl(memset);
/*801FBBC8 001F89C8*/ PPC::Runtime::ASM::lis(context->r4, fn_801FCCA0 @ Get_MemoryOffset_HighBit);
/*801FBBCC 001F89CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBBD0 001F89D0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_801FCCA0 @ Get_MemoryOffset_LowBit);
/*801FBBD4 001F89D4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*801FBBD8 001F89D8*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*801FBBDC 001F89DC*/ PPC::Runtime::ASM::bl(fn_GObj_AddUserData);
/*801FBBE0 001F89E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBBE4 001F89E4*/ PPC::Runtime::ASM::bl(fn_8020067C);
/*801FBBE8 001F89E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBBEC 001F89EC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801FBBF0 001F89F0*/ PPC::Runtime::ASM::bl(fn_801FB53C);
/*801FBBF4 001F89F4*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x5d4);
/*801FBBF8 001F89F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801FBBFC 001F89FC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801FBC00 001F8A00*/ PPC::Runtime::ASM::li(context->r5, 0x2b4);
/*801FBC04 001F8A04*/ PPC::Runtime::ASM::bl(memset);
/*801FBC08 001F8A08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBC0C 001F8A0C*/ PPC::Runtime::ASM::bl(fn_801FF884);
/*801FBC10 001F8A10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FBC14 001F8A14*/ PPC::Runtime::ASM::beq(.L_801FBC88);
/*801FBC18 001F8A18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FBC1C 001F8A1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8c, context->r30));
/*801FBC20 001F8A20*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801FBC24 001F8A24*/ PPC::Runtime::ASM::bne(.L_801FBC88);
/*801FBC28 001F8A28*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801FBC2C 001F8A2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBC30 001F8A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r29));
/*801FBC34 001F8A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r29));
/*801FBC38 001F8A38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*801FBC3C 001F8A3C*/ PPC::Runtime::ASM::bl(fn_80206E2C);
/*801FBC40 001F8A40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801FBC44 001F8A44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*801FBC48 001F8A48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*801FBC4C 001F8A4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r30));
/*801FBC50 001F8A50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r29));
/*801FBC54 001F8A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r29));
/*801FBC58 001F8A58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r30));
/*801FBC5C 001F8A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r29));
/*801FBC60 001F8A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801FBC64 001F8A64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*801FBC68 001F8A68*/ PPC::Runtime::ASM::bge(.L_801FBC88);
/*801FBC6C 001F8A6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBC70 001F8A70*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801FBC74 001F8A74*/ PPC::Runtime::ASM::bl(fn_8020728C);
/*801FBC78 001F8A78*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBC7C 001F8A7C*/ PPC::Runtime::ASM::bl(fn_80207CE8);
/*801FBC80 001F8A80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBC84 001F8A84*/ PPC::Runtime::ASM::bl(fn_8020AE7C);
RUNTIME_PPC_JUMP_LABEL(.L_801FBC88, 0x801FBC88) //this is a jump label
/*801FBC88 001F8A88*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBC8C 001F8A8C*/ PPC::Runtime::ASM::bl(fn_802006B4);
/*801FBC90 001F8A90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801FBC94 001F8A94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801FBC98 001F8A98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FBC9C 001F8A9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801FBCA0 001F8AA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801FBCA4 001F8AA4*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801FBCA8 001F8AA8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*801FBCAC 001F8AAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801FBCB0 001F8AB0*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FBCB4 001F8AB4*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*801FBCB8 001F8AB8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBCBC 001F8ABC*/ PPC::Runtime::ASM::bl(fn_8020267C);
/*801FBCC0 001F8AC0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBCC4 001F8AC4*/ PPC::Runtime::ASM::bl(fn_802026D4);
/*801FBCC8 001F8AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBCCC 001F8ACC*/ PPC::Runtime::ASM::bl(fn_80202A40);
/*801FBCD0 001F8AD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBCD4 001F8AD4*/ PPC::Runtime::ASM::bl(fn_8020C634);
/*801FBCD8 001F8AD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801FBCDC 001F8ADC*/ PPC::Runtime::ASM::lis(context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_HighBit);
/*801FBCE0 001F8AE0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_LowBit);
/*801FBCE4 001F8AE4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801FBCE8 001F8AE8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801FBCEC 001F8AEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801FBCF0 001F8AF0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801FBCF4 001F8AF4*/ PPC::Runtime::ASM::beq(.L_801FBD04);
/*801FBCF8 001F8AF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBCFC 001F8AFC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801FBD00 001F8B00*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801FBD04, 0x801FBD04) //this is a jump label
/*801FBD04 001F8B04*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBD08 001F8B08*/ PPC::Runtime::ASM::bl(fn_80201EE8);
/*801FBD0C 001F8B0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBD10 001F8B10*/ PPC::Runtime::ASM::bl(fn_80204B70);
/*801FBD14 001F8B14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBD18 001F8B18*/ PPC::Runtime::ASM::bl(fn_80204C20);
/*801FBD1C 001F8B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBD20 001F8B20*/ PPC::Runtime::ASM::bl(fn_8020D410);
/*801FBD24 001F8B24*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC670 @ Get_MemoryOffset_HighBit);
/*801FBD28 001F8B28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBD2C 001F8B2C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC670 @ Get_MemoryOffset_LowBit);
/*801FBD30 001F8B30*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801FBD34 001F8B34*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBD38 001F8B38*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC698 @ Get_MemoryOffset_HighBit);
/*801FBD3C 001F8B3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBD40 001F8B40*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC698 @ Get_MemoryOffset_LowBit);
/*801FBD44 001F8B44*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801FBD48 001F8B48*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBD4C 001F8B4C*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC6FC @ Get_MemoryOffset_HighBit);
/*801FBD50 001F8B50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBD54 001F8B54*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC6FC @ Get_MemoryOffset_LowBit);
/*801FBD58 001F8B58*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801FBD5C 001F8B5C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBD60 001F8B60*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC7C4 @ Get_MemoryOffset_HighBit);
/*801FBD64 001F8B64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBD68 001F8B68*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC7C4 @ Get_MemoryOffset_LowBit);
/*801FBD6C 001F8B6C*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*801FBD70 001F8B70*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBD74 001F8B74*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC7F8 @ Get_MemoryOffset_HighBit);
/*801FBD78 001F8B78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBD7C 001F8B7C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC7F8 @ Get_MemoryOffset_LowBit);
/*801FBD80 001F8B80*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*801FBD84 001F8B84*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBD88 001F8B88*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC848 @ Get_MemoryOffset_HighBit);
/*801FBD8C 001F8B8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBD90 001F8B90*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC848 @ Get_MemoryOffset_LowBit);
/*801FBD94 001F8B94*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*801FBD98 001F8B98*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBD9C 001F8B9C*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC8E8 @ Get_MemoryOffset_HighBit);
/*801FBDA0 001F8BA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBDA4 001F8BA4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC8E8 @ Get_MemoryOffset_LowBit);
/*801FBDA8 001F8BA8*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*801FBDAC 001F8BAC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBDB0 001F8BB0*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC8EC @ Get_MemoryOffset_HighBit);
/*801FBDB4 001F8BB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBDB8 001F8BB8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC8EC @ Get_MemoryOffset_LowBit);
/*801FBDBC 001F8BBC*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*801FBDC0 001F8BC0*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBDC4 001F8BC4*/ PPC::Runtime::ASM::lis(context->r4, fn_801FC9F0 @ Get_MemoryOffset_HighBit);
/*801FBDC8 001F8BC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBDCC 001F8BCC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FC9F0 @ Get_MemoryOffset_LowBit);
/*801FBDD0 001F8BD0*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*801FBDD4 001F8BD4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBDD8 001F8BD8*/ PPC::Runtime::ASM::lis(context->r4, fn_801FCABC @ Get_MemoryOffset_HighBit);
/*801FBDDC 001F8BDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBDE0 001F8BE0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801FCABC @ Get_MemoryOffset_LowBit);
/*801FBDE4 001F8BE4*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*801FBDE8 001F8BE8*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801FBDEC 001F8BEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r30));
/*801FBDF0 001F8BF0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801FBDF4 001F8BF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E220C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FBDF8 001F8BF8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801FBDFC 001F8BFC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*801FBE00 001F8C00*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x918);
/*801FBE04 001F8C04*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801FBE08 001F8C08*/ PPC::Runtime::ASM::li(context->r5, 0x38);
/*801FBE0C 001F8C0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r30));
/*801FBE10 001F8C10*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r30));
/*801FBE14 001F8C14*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r7, 5, 26, 26);
/*801FBE18 001F8C18*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r30));
/*801FBE1C 001F8C1C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r30));
/*801FBE20 001F8C20*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r7, 4, 27, 27);
/*801FBE24 001F8C24*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r30));
/*801FBE28 001F8C28*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r30));
/*801FBE2C 001F8C2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r30));
/*801FBE30 001F8C30*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x530, context->r30));
/*801FBE34 001F8C34*/ PPC::Runtime::ASM::bl(memset);
/*801FBE38 001F8C38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2220 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FBE3C 001F8C3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801FBE40 001F8C40*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E220C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FBE44 001F8C44*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBE48 001F8C48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r30));
/*801FBE4C 001F8C4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ac, context->r30));
/*801FBE50 001F8C50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r30));
/*801FBE54 001F8C54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb00, context->r30));
/*801FBE58 001F8C58*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb04, context->r30));
/*801FBE5C 001F8C5C*/ PPC::Runtime::ASM::bl(fn_801FD780);
/*801FBE60 001F8C60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBE64 001F8C64*/ PPC::Runtime::ASM::bl(fn_8020072C);
/*801FBE68 001F8C68*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBE6C 001F8C6C*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*801FBE70 001F8C70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*801FBE74 001F8C74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801FBE78 001F8C78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*801FBE7C 001F8C7C*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*801FBE80 001F8C80*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801FBE84 001F8C84*/ PPC::Runtime::ASM::bl(fn_8018C3B4);
/*801FBE88 001F8C88*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBE8C 001F8C8C*/ PPC::Runtime::ASM::bl(fn_80201BA4);
/*801FBE90 001F8C90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBE94 001F8C94*/ PPC::Runtime::ASM::bl(fn_80201904);
/*801FBE98 001F8C98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBE9C 001F8C9C*/ PPC::Runtime::ASM::bl(fn_80201AF4);
/*801FBEA0 001F8CA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801FBEA4 001F8CA4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*801FBEA8 001F8CA8*/ PPC::Runtime::ASM::bge(.L_801FBED0);
/*801FBEAC 001F8CAC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBEB0 001F8CB0*/ PPC::Runtime::ASM::bl(fn_801FF8B4);
/*801FBEB4 001F8CB4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FBEB8 001F8CB8*/ PPC::Runtime::ASM::bne(.L_801FBED0);
/*801FBEBC 001F8CBC*/ PPC::Runtime::ASM::bl(fn_800F3EE0);
/*801FBEC0 001F8CC0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FBEC4 001F8CC4*/ PPC::Runtime::ASM::bne(.L_801FBED0);
/*801FBEC8 001F8CC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBECC 001F8CCC*/ PPC::Runtime::ASM::bl(fn_801144A0);
RUNTIME_PPC_JUMP_LABEL(.L_801FBED0, 0x801FBED0) //this is a jump label
/*801FBED0 001F8CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBED4 001F8CD4*/ PPC::Runtime::ASM::bl(fn_8020D484);
/*801FBED8 001F8CD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBEDC 001F8CDC*/ PPC::Runtime::ASM::bl(fn_80200004);
/*801FBEE0 001F8CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801FBEE4 001F8CE4*/ PPC::Runtime::ASM::lis(context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_HighBit);
/*801FBEE8 001F8CE8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_LowBit);
/*801FBEEC 001F8CEC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801FBEF0 001F8CF0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801FBEF4 001F8CF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801FBEF8 001F8CF8*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801FBEFC 001F8CFC*/ PPC::Runtime::ASM::beq(.L_801FBF0C);
/*801FBF00 001F8D00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FBF04 001F8D04*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801FBF08 001F8D08*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801FBF0C, 0x801FBF0C) //this is a jump label
/*801FBF0C 001F8D0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801FBF10 001F8D10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FBF14 001F8D14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801FBF18 001F8D18*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801FBF1C 001F8D1C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FBF20 001F8D20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FBF24 001F8D24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801FBF28 001F8D28*/ PPC::Runtime::ASM::blr();
}