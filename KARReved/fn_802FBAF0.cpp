//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF844.hpp"
#include "fn_802D48BC.hpp"
#include "fn_802F0CC0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802D4AB0.hpp"
#include "fn_802D4B3C.hpp"
#include "fn_80379398.hpp"
#include "fn_80379784.hpp"



void fn_802FBAF0(PPC::Runtime::GCContext* context)
{
/*802FBAF0 002F88F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*802FBAF4 002F88F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FBAF8 002F88F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802FBAFC 002F88FC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802FBB00 002F8900*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802FBB04 002F8904*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*802FBB08 002F8908*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*802FBB0C 002F890C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*802FBB10 002F8910*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802FBB14 002F8914*/ PPC::Runtime::ASM::mr(context->r0, context->r27);
/*802FBB18 002F8918*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*802FBB1C 002F891C*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*802FBB20 002F8920*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*802FBB24 002F8924*/ PPC::Runtime::ASM::bl(fn_802DF844);
/*802FBB28 002F8928*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FBB2C 002F892C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FBB30 002F8930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802FBB34 002F8934*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBB38 002F8938*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802FBB3C 002F893C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802FBB40 002F8940*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802FBB44 002F8944*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FBB48 002F8948*/ PPC::Runtime::ASM::bctrl();
/*802FBB4C 002F894C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FBB50 002F8950*/ PPC::Runtime::ASM::addi(context->r25, context->r28, 0x8);
/*802FBB54 002F8954*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FBB58 002F8958*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*802FBB5C 002F895C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802FBB60 002F8960*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802FBB64 002F8964*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802FBB68 002F8968*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802FBB6C 002F896C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*802FBB70 002F8970*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802FBB74 002F8974*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802FBB78 002F8978*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FBB7C 002F897C*/ PPC::Runtime::ASM::bctrl();
/*802FBB80 002F8980*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FBB84 002F8984*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FBB88 002F8988*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FBB8C 002F898C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802FBB90 002F8990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802FBB94 002F8994*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FBB98 002F8998*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBB9C 002F899C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802FBBA0 002F89A0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*802FBBA4 002F89A4*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*802FBBA8 002F89A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r25));
/*802FBBAC 002F89AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802FBBB0 002F89B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802FBBB4 002F89B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FBBB8 002F89B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FBBBC 002F89BC*/ PPC::Runtime::ASM::bctrl();
/*802FBBC0 002F89C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBBC4 002F89C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBBC8 002F89C8*/ PPC::Runtime::ASM::bl(fn_802D48BC);
/*802FBBCC 002F89CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBBD0 002F89D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xe0);
/*802FBBD4 002F89D4*/ PPC::Runtime::ASM::bl(fn_802F0CC0);
/*802FBBD8 002F89D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBBDC 002F89DC*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r3));
/*802FBBE0 002F89E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FBBE4 002F89E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FBBE8 002F89E8*/ PPC::Runtime::ASM::bctrl();
/*802FBBEC 002F89EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBBF0 002F89F0*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r3));
/*802FBBF4 002F89F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FBBF8 002F89F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FBBFC 002F89FC*/ PPC::Runtime::ASM::bctrl();
/*802FBC00 002F8A00*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBC04 002F8A04*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802FBC08 002F8A08*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802FBC0C 002F8A0C*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*802FBC10 002F8A10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf0, context->r5));
/*802FBC14 002F8A14*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xbf8);
/*802FBC18 002F8A18*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf7, context->r5));
/*802FBC1C 002F8A1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf6, context->r5));
/*802FBC20 002F8A20*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf5, context->r5));
/*802FBC24 002F8A24*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf4, context->r5));
/*802FBC28 002F8A28*/ PPC::Runtime::ASM::bl(fn_803839BC);
/*802FBC2C 002F8A2C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBC30 002F8A30*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FBC34 002F8A34*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802FBC38 002F8A38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBC3C 002F8A3C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FBC40 002F8A40*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802FBC44 002F8A44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBC48 002F8A48*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FBC4C 002F8A4C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*802FBC50 002F8A50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBC54 002F8A54*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802FBC58 002F8A58*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBC5C 002F8A5C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBC60 002F8A60*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802FBC64 002F8A64*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802FBC68 002F8A68*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802FBC6C 002F8A6C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802FBC70 002F8A70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*802FBC74 002F8A74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBC78 002F8A78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*802FBC7C 002F8A7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802FBC80 002F8A80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802FBC84 002F8A84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBC88 002F8A88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802FBC8C 002F8A8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBC90 002F8A90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*802FBC94 002F8A94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBC98 002F8A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*802FBC9C 002F8A9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBCA0 002F8AA0*/ PPC::Runtime::ASM::bl(fn_802D4AB0);
/*802FBCA4 002F8AA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802FBCA8 002F8AA8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802FBCAC 002F8AAC*/ PPC::Runtime::ASM::bl(fn_802D4B3C);
/*802FBCB0 002F8AB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D90E8 @ Get_MemoryOffset_HighBit);
/*802FBCB4 002F8AB4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802FBCB8 002F8AB8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D90E8 @ Get_MemoryOffset_LowBit);
/*802FBCBC 002F8ABC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802FBCC0 002F8AC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802FBCC4 002F8AC4*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x50);
/*802FBCC8 002F8AC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802FBCCC 002F8ACC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*802FBCD0 002F8AD0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FBCD4 002F8AD4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*802FBCD8 002F8AD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FBCDC 002F8ADC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*802FBCE0 002F8AE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FBCE4 002F8AE4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*802FBCE8 002F8AE8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*802FBCEC 002F8AEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*802FBCF0 002F8AF0*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*802FBCF4 002F8AF4*/ PPC::Runtime::ASM::bl(fn_80379398);
/*802FBCF8 002F8AF8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802FBCFC 002F8AFC*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*802FBD00 002F8B00*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FBD04 002F8B04*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x50);
/*802FBD08 002F8B08*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xe);
/*802FBD0C 002F8B0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FBD10 002F8B10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*802FBD14 002F8B14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*802FBD18 002F8B18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*802FBD1C 002F8B1C*/ PPC::Runtime::ASM::bl(fn_80379784);
/*802FBD20 002F8B20*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802FBD24 002F8B24*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802FBD28 002F8B28*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*802FBD2C 002F8B2C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802FBD30 002F8B30*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*802FBD34 002F8B34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802FBD38 002F8B38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FBD3C 002F8B3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802FBD40 002F8B40*/ PPC::Runtime::ASM::blr();
}