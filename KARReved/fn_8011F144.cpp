//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_800094C4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_800094C4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_8011F114.hpp"
#include "fn_8011F114.hpp"
#include "fn_80114A34.hpp"
#include "fn_8011E8F0.hpp"
#include "fn_8011E8F0.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_8022CA08.hpp"
#include "fn_8022CA78.hpp"
#include "fn_8022CA08.hpp"
#include "fn_800094C4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_800094C4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_8011F144(PPC::Runtime::GCContext* context)
{
/*8011F144 0011BF44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011F148 0011BF48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011F14C 0011BF4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011F150 0011BF50*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8011F154 0011BF54*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8011F158 0011BF58*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8011F15C 0011BF5C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8011F160 0011BF60*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011F164 0011BF64*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x280);
/*8011F168 0011BF68*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F16C 0011BF6C*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*8011F170 0011BF70*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F174 0011BF74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F178 0011BF78*/ PPC::Runtime::ASM::bne(.L_8011F1B4);
/*8011F17C 0011BF7C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F180 0011BF80*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F184 0011BF84*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F188 0011BF88*/ PPC::Runtime::ASM::bne(.L_8011F194);
/*8011F18C 0011BF8C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8011F190 0011BF90*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F194, 0x8011F194) //this is a jump label
/*8011F194 0011BF94*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F198 0011BF98*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F19C 0011BF9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F1A0 0011BFA0*/ PPC::Runtime::ASM::bne(.L_8011F1AC);
/*8011F1A4 0011BFA4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8011F1A8 0011BFA8*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F1AC, 0x8011F1AC) //this is a jump label
/*8011F1AC 0011BFAC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8011F1B0 0011BFB0*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F1B4, 0x8011F1B4) //this is a jump label
/*8011F1B4 0011BFB4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F1B8 0011BFB8*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*8011F1BC 0011BFBC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F1C0 0011BFC0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F1C4 0011BFC4*/ PPC::Runtime::ASM::bne(.L_8011F200);
/*8011F1C8 0011BFC8*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F1CC 0011BFCC*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F1D0 0011BFD0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F1D4 0011BFD4*/ PPC::Runtime::ASM::bne(.L_8011F1E0);
/*8011F1D8 0011BFD8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8011F1DC 0011BFDC*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F1E0, 0x8011F1E0) //this is a jump label
/*8011F1E0 0011BFE0*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F1E4 0011BFE4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F1E8 0011BFE8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F1EC 0011BFEC*/ PPC::Runtime::ASM::bne(.L_8011F1F8);
/*8011F1F0 0011BFF0*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8011F1F4 0011BFF4*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F1F8, 0x8011F1F8) //this is a jump label
/*8011F1F8 0011BFF8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8011F1FC 0011BFFC*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F200, 0x8011F200) //this is a jump label
/*8011F200 0011C000*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F204 0011C004*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F208 0011C008*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F20C 0011C00C*/ PPC::Runtime::ASM::bne(.L_8011F218);
/*8011F210 0011C010*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8011F214 0011C014*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F218, 0x8011F218) //this is a jump label
/*8011F218 0011C018*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F21C 0011C01C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F220 0011C020*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F224 0011C024*/ PPC::Runtime::ASM::bne(.L_8011F230);
/*8011F228 0011C028*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8011F22C 0011C02C*/ PPC::Runtime::ASM::b(.L_8011F234);
RUNTIME_PPC_JUMP_LABEL(.L_8011F230, 0x8011F230) //this is a jump label
/*8011F230 0011C030*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8011F234, 0x8011F234) //this is a jump label
/*8011F234 0011C034*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8011F238 0011C038*/ PPC::Runtime::ASM::lis(context->r3, fn_8011F114 @ Get_MemoryOffset_HighBit);
/*8011F23C 0011C03C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_8011F114 @ Get_MemoryOffset_LowBit);
/*8011F240 0011C040*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8011F244 0011C044*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011F248 0011C048*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011F24C 0011C04C*/ PPC::Runtime::ASM::bl(fn_80114A34);
/*8011F250 0011C050*/ PPC::Runtime::ASM::lis(context->r4, fn_8011E8F0 @ Get_MemoryOffset_HighBit);
/*8011F254 0011C054*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8011F258 0011C058*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8011F25C 0011C05C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8011F260 0011C060*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011E8F0 @ Get_MemoryOffset_LowBit);
/*8011F264 0011C064*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8011F268 0011C068*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFD60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011F26C 0011C06C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8011F270 0011C070*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8011F274 0011C074*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8011F278 0011C078*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*8011F27C 0011C07C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F280 0011C080*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*8011F284 0011C084*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*8011F288 0011C088*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8011F28C 0011C08C*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*8011F290 0011C090*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8011F294 0011C094*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8011F298 0011C098*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8011F29C 0011C09C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011F2A0 0011C0A0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F2A4 0011C0A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r27));
/*8011F2A8 0011C0A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*8011F2AC 0011C0AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*8011F2B0 0011C0B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*8011F2B4 0011C0B4*/ PPC::Runtime::ASM::bl(fn_8022CA08);
/*8011F2B8 0011C0B8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8011F2BC 0011C0BC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F2C0 0011C0C0*/ PPC::Runtime::ASM::bl(fn_8022CA78);
/*8011F2C4 0011C0C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*8011F2C8 0011C0C8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F2CC 0011C0CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*8011F2D0 0011C0D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r27));
/*8011F2D4 0011C0D4*/ PPC::Runtime::ASM::bl(fn_8022CA08);
/*8011F2D8 0011C0D8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*8011F2DC 0011C0DC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8011F2E0 0011C0E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011F2E4 0011C0E4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F2E8 0011C0E8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*8011F2EC 0011C0EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*8011F2F0 0011C0F0*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*8011F2F4 0011C0F4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F2F8 0011C0F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F2FC 0011C0FC*/ PPC::Runtime::ASM::bne(.L_8011F41C);
/*8011F300 0011C100*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F304 0011C104*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F308 0011C108*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F30C 0011C10C*/ PPC::Runtime::ASM::bgt(.L_8011F364);
/*8011F310 0011C110*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F314 0011C114*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F318 0011C118*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F31C 0011C11C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F320 0011C120*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F324 0011C124*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F328 0011C128*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F32C 0011C12C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F330 0011C130*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F334 0011C134*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F338 0011C138*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F33C 0011C13C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F340 0011C140*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F344 0011C144*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F348 0011C148*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F34C 0011C14C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F350 0011C150*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F354 0011C154*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F358 0011C158*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F35C 0011C15C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F360 0011C160*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F364, 0x8011F364) //this is a jump label
/*8011F364 0011C164*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F368 0011C168*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F36C 0011C16C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F370 0011C170*/ PPC::Runtime::ASM::bne(.L_8011F3C8);
/*8011F374 0011C174*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F378 0011C178*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F37C 0011C17C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F380 0011C180*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F384 0011C184*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F388 0011C188*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F38C 0011C18C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F390 0011C190*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F394 0011C194*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F398 0011C198*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F39C 0011C19C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F3A0 0011C1A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F3A4 0011C1A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F3A8 0011C1A8*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F3AC 0011C1AC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F3B0 0011C1B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F3B4 0011C1B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F3B8 0011C1B8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F3BC 0011C1BC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F3C0 0011C1C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F3C4 0011C1C4*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F3C8, 0x8011F3C8) //this is a jump label
/*8011F3C8 0011C1C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F3CC 0011C1CC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F3D0 0011C1D0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F3D4 0011C1D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F3D8 0011C1D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F3DC 0011C1DC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F3E0 0011C1E0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F3E4 0011C1E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F3E8 0011C1E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F3EC 0011C1EC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F3F0 0011C1F0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F3F4 0011C1F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F3F8 0011C1F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F3FC 0011C1FC*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F400 0011C200*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F404 0011C204*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F408 0011C208*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F40C 0011C20C*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F410 0011C210*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F414 0011C214*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F418 0011C218*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F41C, 0x8011F41C) //this is a jump label
/*8011F41C 0011C21C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011F420 0011C220*/ PPC::Runtime::ASM::bl(fn_800094C4);
/*8011F424 0011C224*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F428 0011C228*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F42C 0011C22C*/ PPC::Runtime::ASM::bne(.L_8011F54C);
/*8011F430 0011C230*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F434 0011C234*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F438 0011C238*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F43C 0011C23C*/ PPC::Runtime::ASM::bgt(.L_8011F494);
/*8011F440 0011C240*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F444 0011C244*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F448 0011C248*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F44C 0011C24C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F450 0011C250*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F454 0011C254*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F458 0011C258*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F45C 0011C25C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F460 0011C260*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F464 0011C264*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F468 0011C268*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F46C 0011C26C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F470 0011C270*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F474 0011C274*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F478 0011C278*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F47C 0011C27C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F480 0011C280*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F484 0011C284*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F488 0011C288*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F48C 0011C28C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F490 0011C290*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F494, 0x8011F494) //this is a jump label
/*8011F494 0011C294*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F498 0011C298*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F49C 0011C29C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F4A0 0011C2A0*/ PPC::Runtime::ASM::bne(.L_8011F4F8);
/*8011F4A4 0011C2A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F4A8 0011C2A8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F4AC 0011C2AC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F4B0 0011C2B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F4B4 0011C2B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F4B8 0011C2B8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F4BC 0011C2BC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F4C0 0011C2C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F4C4 0011C2C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F4C8 0011C2C8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F4CC 0011C2CC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F4D0 0011C2D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F4D4 0011C2D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F4D8 0011C2D8*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F4DC 0011C2DC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F4E0 0011C2E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F4E4 0011C2E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F4E8 0011C2E8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F4EC 0011C2EC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F4F0 0011C2F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F4F4 0011C2F4*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F4F8, 0x8011F4F8) //this is a jump label
/*8011F4F8 0011C2F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F4FC 0011C2FC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F500 0011C300*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F504 0011C304*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F508 0011C308*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F50C 0011C30C*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F510 0011C310*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F514 0011C314*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F518 0011C318*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F51C 0011C31C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F520 0011C320*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F524 0011C324*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F528 0011C328*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F52C 0011C32C*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F530 0011C330*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F534 0011C334*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F538 0011C338*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F53C 0011C33C*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F540 0011C340*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F544 0011C344*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F548 0011C348*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F54C, 0x8011F54C) //this is a jump label
/*8011F54C 0011C34C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F550 0011C350*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F554 0011C354*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011F558 0011C358*/ PPC::Runtime::ASM::bgt(.L_8011F5B0);
/*8011F55C 0011C35C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F560 0011C360*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F564 0011C364*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F568 0011C368*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F56C 0011C36C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F570 0011C370*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F574 0011C374*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F578 0011C378*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F57C 0011C37C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F580 0011C380*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F584 0011C384*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F588 0011C388*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F58C 0011C38C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F590 0011C390*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F594 0011C394*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F598 0011C398*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F59C 0011C39C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F5A0 0011C3A0*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F5A4 0011C3A4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F5A8 0011C3A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F5AC 0011C3AC*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F5B0, 0x8011F5B0) //this is a jump label
/*8011F5B0 0011C3B0*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8011F5B4 0011C3B4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8011F5B8 0011C3B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8011F5BC 0011C3BC*/ PPC::Runtime::ASM::bne(.L_8011F614);
/*8011F5C0 0011C3C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F5C4 0011C3C4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F5C8 0011C3C8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F5CC 0011C3CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F5D0 0011C3D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F5D4 0011C3D4*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F5D8 0011C3D8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F5DC 0011C3DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F5E0 0011C3E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F5E4 0011C3E4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F5E8 0011C3E8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F5EC 0011C3EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F5F0 0011C3F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F5F4 0011C3F4*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F5F8 0011C3F8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F5FC 0011C3FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F600 0011C400*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F604 0011C404*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F608 0011C408*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F60C 0011C40C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
/*8011F610 0011C410*/ PPC::Runtime::ASM::b(.L_8011F664);
RUNTIME_PPC_JUMP_LABEL(.L_8011F614, 0x8011F614) //this is a jump label
/*8011F614 0011C414*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F618 0011C418*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011F61C 0011C41C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F620 0011C420*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*8011F624 0011C424*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F628 0011C428*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011F62C 0011C42C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F630 0011C430*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*8011F634 0011C434*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F638 0011C438*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011F63C 0011C43C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F640 0011C440*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8011F644 0011C444*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F648 0011C448*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8011F64C 0011C44C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F650 0011C450*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*8011F654 0011C454*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8011F658 0011C458*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011F65C 0011C45C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011F660 0011C460*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8011F664, 0x8011F664) //this is a jump label
/*8011F664 0011C464*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*8011F668 0011C468*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8011F66C 0011C46C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8011F670 0011C470*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8011F674 0011C474*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8011F678 0011C478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011F67C 0011C47C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011F680 0011C480*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011F684 0011C484*/ PPC::Runtime::ASM::blr();
}