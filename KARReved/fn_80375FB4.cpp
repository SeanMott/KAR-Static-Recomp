//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_803754BC.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80375060.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_803763CC.hpp"
#include "fn_80378FB4.hpp"



void fn_80375FB4(PPC::Runtime::GCContext* context)
{
/*80375FB4 00372DB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x130, context->r1));
/*80375FB8 00372DB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80375FBC 00372DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*80375FC0 00372DC0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*80375FC4 00372DC4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*80375FC8 00372DC8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*80375FCC 00372DCC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*80375FD0 00372DD0*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*80375FD4 00372DD4*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*80375FD8 00372DD8*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*80375FDC 00372DDC*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1)0, context->qr0);
/*80375FE0 00372DE0*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*80375FE4 00372DE4*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*80375FE8 00372DE8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xe0);
/*80375FEC 00372DEC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80375FF0 00372DF0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80375FF4 00372DF4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375FF8 00372DF8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80375FFC 00372DFC*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80376000 00372E00*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*80376004 00372E04*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*80376008 00372E08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037600C 00372E0C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBA70 @ Get_MemoryOffset_SDA21);
/*80376010 00372E10*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBA68 @ Get_MemoryOffset_SDA21);
/*80376014 00372E14*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80376018 00372E18*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8037601C 00372E1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80376020 00372E20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80376024 00372E24*/ PPC::Runtime::ASM::beq(.L_8037638C);
/*80376028 00372E28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037602C 00372E2C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80376030 00372E30*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80376034 00372E34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376038 00372E38*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8037603C 00372E3C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80376040 00372E40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376044 00372E44*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80376048 00372E48*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8037604C 00372E4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376050 00372E50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80376054 00372E54*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80376058 00372E58*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*8037605C 00372E5C*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*80376060 00372E60*/ PPC::Runtime::ASM::li(context->r0, 0x3c);
/*80376064 00372E64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80376068 00372E68*/ PPC::Runtime::ASM::divwu(context->r5, context->r0, context->r3);
/*8037606C 00372E6C*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x1);
/*80376070 00372E70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80376074 00372E74*/ PPC::Runtime::ASM::divwu(context->r0, context->r3, context->r5);
/*80376078 00372E78*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r5);
/*8037607C 00372E7C*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r3);
/*80376080 00372E80*/ PPC::Runtime::ASM::bne(.L_8037638C);
/*80376084 00372E84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376088 00372E88*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x7c);
/*8037608C 00372E8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376090 00372E90*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80376094 00372E94*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80376098 00372E98*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8037609C 00372E9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803760A0 00372EA0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803760A4 00372EA4*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*803760A8 00372EA8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803760AC 00372EAC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x88);
/*803760B0 00372EB0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803760B4 00372EB4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803760B8 00372EB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803760BC 00372EBC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803760C0 00372EC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803760C4 00372EC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803760C8 00372EC8*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*803760CC 00372ECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803760D0 00372ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803760D4 00372ED4*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*803760D8 00372ED8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4AE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803760DC 00372EDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803760E0 00372EE0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f2);
/*803760E4 00372EE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803760E8 00372EE8*/ PPC::Runtime::ASM::fmuls(context->f30, context->f0, context->f2);
/*803760EC 00372EEC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*803760F0 00372EF0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803760F4 00372EF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803760F8 00372EF8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*803760FC 00372EFC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80376100 00372F00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376104 00372F04*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80376108 00372F08*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*8037610C 00372F0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376110 00372F10*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80376114 00372F14*/ PPC::Runtime::ASM::fdivs(context->f1, context->f30, context->f0);
/*80376118 00372F18*/ PPC::Runtime::ASM::bl(fn_803754BC);
/*8037611C 00372F1C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80376120 00372F20*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x4c);
/*80376124 00372F24*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*80376128 00372F28*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8037612C 00372F2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80376130 00372F30*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80376134 00372F34*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80376138 00372F38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8037613C 00372F3C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80376140 00372F40*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80376144 00372F44*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80376148 00372F48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8037614C 00372F4C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80376150 00372F50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376154 00372F54*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80376158 00372F58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8037615C 00372F5C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80376160 00372F60*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80376164 00372F64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376168 00372F68*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8037616C 00372F6C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80376170 00372F70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376174 00372F74*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80376178 00372F78*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*8037617C 00372F7C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376180 00372F80*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80376184 00372F84*/ PPC::Runtime::ASM::fdivs(context->f1, context->f30, context->f0);
/*80376188 00372F88*/ PPC::Runtime::ASM::bl(fn_80375060);
/*8037618C 00372F8C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80376190 00372F90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x64);
/*80376194 00372F94*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80376198 00372F98*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8037619C 00372F9C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*803761A0 00372FA0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803761A4 00372FA4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803761A8 00372FA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*803761AC 00372FAC*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*803761B0 00372FB0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803761B4 00372FB4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*803761B8 00372FB8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803761BC 00372FBC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803761C0 00372FC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*803761C4 00372FC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x58);
/*803761C8 00372FC8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803761CC 00372FCC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803761D0 00372FD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803761D4 00372FD4*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*803761D8 00372FD8*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803761DC 00372FDC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803761E0 00372FE0*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803761E4 00372FE4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBA70 @ Get_MemoryOffset_SDA21);
/*803761E8 00372FE8*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803761EC 00372FEC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBA68 @ Get_MemoryOffset_SDA21);
/*803761F0 00372FF0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803761F4 00372FF4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803761F8 00372FF8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803761FC 00372FFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80376200 00373000*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x80);
/*80376204 00373004*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80376208 00373008*/ PPC::Runtime::ASM::beq(.L_8037637C);
/*8037620C 0037300C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80376210 00373010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80376214 00373014*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80376218 00373018*/ PPC::Runtime::ASM::lfs(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8037621C 0037301C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80376220 00373020*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376224 00373024*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80376228 00373028*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8037622C 0037302C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376230 00373030*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80376234 00373034*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80376238 00373038*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037623C 0037303C*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80376240 00373040*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f31);
/*80376244 00373044*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376248 00373048*/ PPC::Runtime::ASM::fneg(context->f0, context->f30);
/*8037624C 0037304C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*80376250 00373050*/ PPC::Runtime::ASM::fneg(context->f1, context->f29);
/*80376254 00373054*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80376258 00373058*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*8037625C 0037305C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80376260 00373060*/ PPC::Runtime::ASM::fneg(context->f0, context->f28);
/*80376264 00373064*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80376268 00373068*/ PPC::Runtime::ASM::fdivs(context->f1, context->f27, context->f2);
/*8037626C 0037306C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80376270 00373070*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80376274 00373074*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80376278 00373078*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*8037627C 0037307C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80376280 00373080*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80376284 00373084*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80376288 00373088*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8037628C 0037308C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80376290 00373090*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80376294 00373094*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80376298 00373098*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*8037629C 0037309C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803762A0 003730A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*803762A4 003730A4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803762A8 003730A8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803762AC 003730AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803762B0 003730B0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x34);
/*803762B4 003730B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803762B8 003730B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803762BC 003730BC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803762C0 003730C0*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803762C4 003730C4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803762C8 003730C8*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803762CC 003730CC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803762D0 003730D0*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803762D4 003730D4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803762D8 003730D8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803762DC 003730DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803762E0 003730E0*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*803762E4 003730E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803762E8 003730E8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803762EC 003730EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803762F0 003730F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBA70 @ Get_MemoryOffset_SDA21);
/*803762F4 003730F4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803762F8 003730F8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBA68 @ Get_MemoryOffset_SDA21);
/*803762FC 003730FC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80376300 00373100*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80376304 00373104*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80376308 00373108*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8037630C 0037310C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*80376310 00373110*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376314 00373114*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*80376318 00373118*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*8037631C 0037311C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80376320 00373120*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*80376324 00373124*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80376328 00373128*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*8037632C 0037312C*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80376330 00373130*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*80376334 00373134*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*80376338 00373138*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*8037633C 0037313C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80376340 00373140*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xc);
/*80376344 00373144*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80376348 00373148*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xc);
/*8037634C 0037314C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80376350 00373150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80376354 00373154*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x94);
/*80376358 00373158*/ PPC::Runtime::ASM::bl(fn_803763CC);
/*8037635C 0037315C*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*80376360 00373160*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80376364 00373164*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80376368 00373168*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8037636C 0037316C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80376370 00373170*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80376374 00373174*/ PPC::Runtime::ASM::bl(fn_80378FB4);
/*80376378 00373178*/ PPC::Runtime::ASM::b(.L_8037638C);
RUNTIME_PPC_JUMP_LABEL(.L_8037637C, 0x8037637C) //this is a jump label
/*8037637C 0037317C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F10FC @ Get_MemoryOffset_HighBit);
/*80376380 00373180*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F10FC @ Get_MemoryOffset_LowBit);
/*80376384 00373184*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80376388 00373188*/ PPC::Runtime::ASM::bl(OSReport);
RUNTIME_PPC_JUMP_LABEL(.L_8037638C, 0x8037638C) //this is a jump label
/*8037638C 0037318C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*80376390 00373190*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*80376394 00373194*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*80376398 00373198*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*8037639C 0037319C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*803763A0 003731A0*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*803763A4 003731A4*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1)0, context->qr0);
/*803763A8 003731A8*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*803763AC 003731AC*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*803763B0 003731B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xe0);
/*803763B4 003731B4*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*803763B8 003731B8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*803763BC 003731BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*803763C0 003731C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803763C4 003731C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x130);
/*803763C8 003731C8*/ PPC::Runtime::ASM::blr();
}