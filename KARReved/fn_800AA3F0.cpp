//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007D42C.hpp"
#include "fn_8007D440.hpp"
#include "fn_8007D458.hpp"
#include "fn_8007A4C8.hpp"
#include "fn_8007A38C.hpp"
#include "fn_8007A420.hpp"
#include "fn_800AA2A4.hpp"
#include "fn_800AA2A4.hpp"
#include "fn_8009A3D8.hpp"
#include "fn_800AA2A4.hpp"
#include "fn_8009A3D8.hpp"



void fn_800AA3F0(PPC::Runtime::GCContext* context)
{
/*800AA3F0 000A71F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800AA3F4 000A71F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AA3F8 000A71F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800AA3FC 000A71FC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800AA400 000A7200*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800AA404 000A7204*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800AA408 000A7208*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800AA40C 000A720C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800AA410 000A7210*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800AA414 000A7214*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800AA418 000A7218*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_HighBit);
/*800AA41C 000A721C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*800AA420 000A7220*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0x44);
/*800AA424 000A7224*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_18058B0E4 @ Get_MemoryOffset_LowBit);
/*800AA428 000A7228*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r5);
/*800AA42C 000A722C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*800AA430 000A7230*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*800AA434 000A7234*/ PPC::Runtime::ASM::bl(fn_8007D42C);
/*800AA438 000A7238*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*800AA43C 000A723C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800AA440 000A7240*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*800AA444 000A7244*/ PPC::Runtime::ASM::bl(fn_8007D440);
/*800AA448 000A7248*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*800AA44C 000A724C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800AA450 000A7250*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*800AA454 000A7254*/ PPC::Runtime::ASM::bl(fn_8007D458);
/*800AA458 000A7258*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 29, 29);
/*800AA45C 000A725C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800AA460 000A7260*/ PPC::Runtime::ASM::beq(.L_800AA48C);
/*800AA464 000A7264*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA468 000A7268*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA46C 000A726C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r4));
/*800AA470 000A7270*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800AA474 000A7274*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*800AA478 000A7278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r4));
/*800AA47C 000A727C*/ PPC::Runtime::ASM::ble(.L_800AA4B4);
/*800AA480 000A7280*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800AA484 000A7284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r4));
/*800AA488 000A7288*/ PPC::Runtime::ASM::b(.L_800AA4B4);
RUNTIME_PPC_JUMP_LABEL(.L_800AA48C, 0x800AA48C) //this is a jump label
/*800AA48C 000A728C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r5, 0, 28, 28);
/*800AA490 000A7290*/ PPC::Runtime::ASM::beq(.L_800AA4B4);
/*800AA494 000A7294*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA498 000A7298*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA49C 000A729C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r4));
/* 800AA4A0 000A72A0  34 03 FF FF */ subic. context->r0 , context->r3 , 0x1
/*800AA4A4 000A72A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r4));
/*800AA4A8 000A72A8*/ PPC::Runtime::ASM::bge(.L_800AA4B4);
/*800AA4AC 000A72AC*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*800AA4B0 000A72B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800AA4B4, 0x800AA4B4) //this is a jump label
/*800AA4B4 000A72B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA4B8 000A72B8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA4BC 000A72BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f54, context->r6));
/*800AA4C0 000A72C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800AA4C4 000A72C4*/ PPC::Runtime::ASM::beq(.L_800AA5BC);
/*800AA4C8 000A72C8*/ PPC::Runtime::ASM::bge(.L_800AA4E4);
/*800AA4CC 000A72CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800AA4D0 000A72D0*/ PPC::Runtime::ASM::beq(.L_800AA574);
/*800AA4D4 000A72D4*/ PPC::Runtime::ASM::bge(.L_800AA58C);
/*800AA4D8 000A72D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800AA4DC 000A72DC*/ PPC::Runtime::ASM::bge(.L_800AA4F4);
/*800AA4E0 000A72E0*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA4E4, 0x800AA4E4) //this is a jump label
/*800AA4E4 000A72E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*800AA4E8 000A72E8*/ PPC::Runtime::ASM::beq(.L_800AA610);
/*800AA4EC 000A72EC*/ PPC::Runtime::ASM::bge(.L_800AA62C);
/*800AA4F0 000A72F0*/ PPC::Runtime::ASM::b(.L_800AA5F8);
RUNTIME_PPC_JUMP_LABEL(.L_800AA4F4, 0x800AA4F4) //this is a jump label
/*800AA4F4 000A72F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r5, 0, 23, 23);
/*800AA4F8 000A72F8*/ PPC::Runtime::ASM::beq(.L_800AA62C);
/*800AA4FC 000A72FC*/ PPC::Runtime::ASM::bl(fn_8007A4C8);
/*800AA500 000A7300*/ PPC::Runtime::ASM::lis(context->r4, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA504 000A7304*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800AA508 000A7308*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA50C 000A730C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x2f5c);
/*800AA510 000A7310*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800AA514 000A7314*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x4);
/*800AA518 000A7318*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x8);
/*800AA51C 000A731C*/ PPC::Runtime::ASM::bl(fn_8007A38C);
/*800AA520 000A7320*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800AA524 000A7324*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x14);
/*800AA528 000A7328*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x18);
/*800AA52C 000A732C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*800AA530 000A7330*/ PPC::Runtime::ASM::bl(fn_8007A420);
/*800AA534 000A7334*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800AA538 000A7338*/ PPC::Runtime::ASM::beq(.L_800AA558);
/*800AA53C 000A733C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA540 000A7340*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800AA544 000A7344*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA548 000A7348*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r3));
/*800AA54C 000A734C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*800AA550 000A7350*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r3));
/*800AA554 000A7354*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA558, 0x800AA558) //this is a jump label
/*800AA558 000A7358*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA55C 000A735C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AA560 000A7360*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA564 000A7364*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r3));
/*800AA568 000A7368*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*800AA56C 000A736C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r3));
/*800AA570 000A7370*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA574, 0x800AA574) //this is a jump label
/*800AA574 000A7374*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x2f5c);
/*800AA578 000A7378*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800AA57C 000A737C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800AA580 000A7380*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800AA584 000A7384*/ PPC::Runtime::ASM::bl(fn_800AA2A4);
/*800AA588 000A7388*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA58C, 0x800AA58C) //this is a jump label
/*800AA58C 000A738C*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x2f60);
/*800AA590 000A7390*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800AA594 000A7394*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800AA598 000A7398*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800AA59C 000A739C*/ PPC::Runtime::ASM::bl(fn_800AA2A4);
/*800AA5A0 000A73A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA5A4 000A73A4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800AA5A8 000A73A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA5AC 000A73AC*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*800AA5B0 000A73B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2f64);
/*800AA5B4 000A73B4*/ PPC::Runtime::ASM::bl(fn_8009A3D8);
/*800AA5B8 000A73B8*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA5BC, 0x800AA5BC) //this is a jump label
/*800AA5BC 000A73BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r6));
/* 800AA5C0 000A73C0  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*800AA5C4 000A73C4*/ PPC::Runtime::ASM::beq(.L_800AA62C);
/*800AA5C8 000A73C8*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x2f70);
/*800AA5CC 000A73CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800AA5D0 000A73D0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800AA5D4 000A73D4*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800AA5D8 000A73D8*/ PPC::Runtime::ASM::bl(fn_800AA2A4);
/*800AA5DC 000A73DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800AA5E0 000A73E0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800AA5E4 000A73E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800AA5E8 000A73E8*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*800AA5EC 000A73EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2f74);
/*800AA5F0 000A73F0*/ PPC::Runtime::ASM::bl(fn_8009A3D8);
/*800AA5F4 000A73F4*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA5F8, 0x800AA5F8) //this is a jump label
/*800AA5F8 000A73F8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r5, 0, 23, 23);
/*800AA5FC 000A73FC*/ PPC::Runtime::ASM::beq(.L_800AA62C);
/*800AA600 000A7400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f58, context->r6));
/*800AA604 000A7404*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, -0x1);
/*800AA608 000A7408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f58, context->r6));
/*800AA60C 000A740C*/ PPC::Runtime::ASM::b(.L_800AA62C);
RUNTIME_PPC_JUMP_LABEL(.L_800AA610, 0x800AA610) //this is a jump label
/*800AA610 000A7410*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r5, 0, 23, 23);
/*800AA614 000A7414*/ PPC::Runtime::ASM::beq(.L_800AA62C);
/*800AA618 000A7418*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r6));
/*800AA61C 000A741C*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 1, 25);
/*800AA620 000A7420*/ PPC::Runtime::ASM::xori(context->r0, context->r0, 0x1);
/*800AA624 000A7424*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 25, 25);
/*800AA628 000A7428*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8d, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_800AA62C, 0x800AA62C) //this is a jump label
/*800AA62C 000A742C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800AA630 000A7430*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800AA634 000A7434*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800AA638 000A7438*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800AA63C 000A743C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800AA640 000A7440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800AA644 000A7444*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800AA648 000A7448*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AA64C 000A744C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800AA650 000A7450*/ PPC::Runtime::ASM::blr();
}