//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011487C.hpp"
#include "fn_80125920.hpp"
#include "fn_80125920.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_801259DC(PPC::Runtime::GCContext* context)
{
/*801259DC 001227DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801259E0 001227E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801259E4 001227E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801259E8 001227E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801259EC 001227EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801259F0 001227F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801259F4 001227F4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801259F8 001227F8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801259FC 001227FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80125A00 00122800*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80125A04 00122804*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80125A08 00122808*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80125A0C 0012280C*/ PPC::Runtime::ASM::beq(.L_80125D8C);
/*80125A10 00122810*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80125A14 00122814*/ PPC::Runtime::ASM::bne(.L_80125A20);
/*80125A18 00122818*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb40, context->r30));
/*80125A1C 0012281C*/ PPC::Runtime::ASM::b(.L_80125A24);
RUNTIME_PPC_JUMP_LABEL(.L_80125A20, 0x80125A20) //this is a jump label
/*80125A20 00122820*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb44, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80125A24, 0x80125A24) //this is a jump label
/*80125A24 00122824*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125A28 00122828*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80125A2C 0012282C*/ PPC::Runtime::ASM::bl(fn_8011487C);
/*80125A30 00122830*/ PPC::Runtime::ASM::lis(context->r4, fn_80125920 @ Get_MemoryOffset_HighBit);
/*80125A34 00122834*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80125A38 00122838*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80125A3C 0012283C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80125A40 00122840*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80125920 @ Get_MemoryOffset_LowBit);
/*80125A44 00122844*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80125A48 00122848*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80125A4C 0012284C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80125A50 00122850*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125A54 00122854*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80125A58 00122858*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*80125A5C 0012285C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125A60 00122860*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*80125A64 00122864*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80125A68 00122868*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125A6C 0012286C*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*80125A70 00122870*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80125A74 00122874*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80125A78 00122878*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80125A7C 0012287C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80125A80 00122880*/ PPC::Runtime::ASM::bne(.L_80125C08);
/*80125A84 00122884*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125A88 00122888*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80125A8C 0012288C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125A90 00122890*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80125A94 00122894*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125A98 00122898*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80125A9C 0012289C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125AA0 001228A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80125AA4 001228A4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125AA8 001228A8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80125AAC 001228AC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125AB0 001228B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80125AB4 001228B4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125AB8 001228B8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80125ABC 001228BC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125AC0 001228C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80125AC4 001228C4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80125AC8 001228C8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125ACC 001228CC*/ PPC::Runtime::ASM::bne(.L_80125AE0);
/*80125AD0 001228D0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125AD4 001228D4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125AD8 001228D8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125ADC 001228DC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125AE0, 0x80125AE0) //this is a jump label
/*80125AE0 001228E0*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x14);
/*80125AE4 001228E4*/ PPC::Runtime::ASM::bne(.L_80125AFC);
/*80125AE8 001228E8*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125AEC 001228EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125AF0 001228F0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125AF4 001228F4*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125AF8 001228F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125AFC, 0x80125AFC) //this is a jump label
/*80125AFC 001228FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125B00 00122900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125B04 00122904*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80125B08 00122908*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80125B0C 0012290C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125B10 00122910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80125B14 00122914*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80125B18 00122918*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125B1C 0012291C*/ PPC::Runtime::ASM::bne(.L_80125B30);
/*80125B20 00122920*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125B24 00122924*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125B28 00122928*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125B2C 0012292C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125B30, 0x80125B30) //this is a jump label
/*80125B30 00122930*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x20);
/*80125B34 00122934*/ PPC::Runtime::ASM::bne(.L_80125B4C);
/*80125B38 00122938*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125B3C 0012293C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125B40 00122940*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125B44 00122944*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125B48 00122948*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125B4C, 0x80125B4C) //this is a jump label
/*80125B4C 0012294C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125B50 00122950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125B54 00122954*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80125B58 00122958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80125B5C 0012295C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125B60 00122960*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80125B64 00122964*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80125B68 00122968*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125B6C 0012296C*/ PPC::Runtime::ASM::bne(.L_80125B80);
/*80125B70 00122970*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125B74 00122974*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125B78 00122978*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125B7C 0012297C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125B80, 0x80125B80) //this is a jump label
/*80125B80 00122980*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x2c);
/*80125B84 00122984*/ PPC::Runtime::ASM::bne(.L_80125B9C);
/*80125B88 00122988*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125B8C 0012298C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125B90 00122990*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125B94 00122994*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125B98 00122998*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125B9C, 0x80125B9C) //this is a jump label
/*80125B9C 0012299C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125BA0 001229A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125BA4 001229A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80125BA8 001229A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80125BAC 001229AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125BB0 001229B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80125BB4 001229B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80125BB8 001229B8*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125BBC 001229BC*/ PPC::Runtime::ASM::bne(.L_80125BD0);
/*80125BC0 001229C0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125BC4 001229C4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125BC8 001229C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125BCC 001229CC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125BD0, 0x80125BD0) //this is a jump label
/*80125BD0 001229D0*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x38);
/*80125BD4 001229D4*/ PPC::Runtime::ASM::bne(.L_80125BEC);
/*80125BD8 001229D8*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125BDC 001229DC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125BE0 001229E0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125BE4 001229E4*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125BE8 001229E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125BEC, 0x80125BEC) //this is a jump label
/*80125BEC 001229EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125BF0 001229F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125BF4 001229F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80125BF8 001229F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80125BFC 001229FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125C00 00122A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80125C04 00122A04*/ PPC::Runtime::ASM::b(.L_80125D88);
RUNTIME_PPC_JUMP_LABEL(.L_80125C08, 0x80125C08) //this is a jump label
/*80125C08 00122A08*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125C0C 00122A0C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80125C10 00122A10*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125C14 00122A14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80125C18 00122A18*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125C1C 00122A1C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80125C20 00122A20*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125C24 00122A24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80125C28 00122A28*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125C2C 00122A2C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80125C30 00122A30*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125C34 00122A34*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80125C38 00122A38*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80125C3C 00122A3C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80125C40 00122A40*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80125C44 00122A44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80125C48 00122A48*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*80125C4C 00122A4C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125C50 00122A50*/ PPC::Runtime::ASM::bne(.L_80125C64);
/*80125C54 00122A54*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125C58 00122A58*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125C5C 00122A5C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125C60 00122A60*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125C64, 0x80125C64) //this is a jump label
/*80125C64 00122A64*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x14);
/*80125C68 00122A68*/ PPC::Runtime::ASM::bne(.L_80125C80);
/*80125C6C 00122A6C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125C70 00122A70*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125C74 00122A74*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125C78 00122A78*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125C7C 00122A7C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125C80, 0x80125C80) //this is a jump label
/*80125C80 00122A80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125C84 00122A84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125C88 00122A88*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80125C8C 00122A8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80125C90 00122A90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125C94 00122A94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80125C98 00122A98*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80125C9C 00122A9C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125CA0 00122AA0*/ PPC::Runtime::ASM::bne(.L_80125CB4);
/*80125CA4 00122AA4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125CA8 00122AA8*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125CAC 00122AAC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125CB0 00122AB0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125CB4, 0x80125CB4) //this is a jump label
/*80125CB4 00122AB4*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x20);
/*80125CB8 00122AB8*/ PPC::Runtime::ASM::bne(.L_80125CD0);
/*80125CBC 00122ABC*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125CC0 00122AC0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125CC4 00122AC4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125CC8 00122AC8*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125CCC 00122ACC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125CD0, 0x80125CD0) //this is a jump label
/*80125CD0 00122AD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125CD4 00122AD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125CD8 00122AD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80125CDC 00122ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80125CE0 00122AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125CE4 00122AE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80125CE8 00122AE8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80125CEC 00122AEC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125CF0 00122AF0*/ PPC::Runtime::ASM::bne(.L_80125D04);
/*80125CF4 00122AF4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125CF8 00122AF8*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125CFC 00122AFC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125D00 00122B00*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125D04, 0x80125D04) //this is a jump label
/*80125D04 00122B04*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x2c);
/*80125D08 00122B08*/ PPC::Runtime::ASM::bne(.L_80125D20);
/*80125D0C 00122B0C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125D10 00122B10*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125D14 00122B14*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125D18 00122B18*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125D1C 00122B1C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125D20, 0x80125D20) //this is a jump label
/*80125D20 00122B20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125D24 00122B24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125D28 00122B28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80125D2C 00122B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80125D30 00122B30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125D34 00122B34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80125D38 00122B38*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80125D3C 00122B3C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80125D40 00122B40*/ PPC::Runtime::ASM::bne(.L_80125D54);
/*80125D44 00122B44*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125D48 00122B48*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80125D4C 00122B4C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64F0 @ Get_MemoryOffset_SDA21);
/*80125D50 00122B50*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125D54, 0x80125D54) //this is a jump label
/*80125D54 00122B54*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0x38);
/*80125D58 00122B58*/ PPC::Runtime::ASM::bne(.L_80125D70);
/*80125D5C 00122B5C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1090 @ Get_MemoryOffset_HighBit);
/*80125D60 00122B60*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64E8 @ Get_MemoryOffset_SDA21);
/*80125D64 00122B64*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1090 @ Get_MemoryOffset_LowBit);
/*80125D68 00122B68*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80125D6C 00122B6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80125D70, 0x80125D70) //this is a jump label
/*80125D70 00122B70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*80125D74 00122B74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80125D78 00122B78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80125D7C 00122B7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80125D80 00122B80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80125D84 00122B84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80125D88, 0x80125D88) //this is a jump label
/*80125D88 00122B88*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80125D8C, 0x80125D8C) //this is a jump label
/*80125D8C 00122B8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80125D90 00122B90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80125D94 00122B94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80125D98 00122B98*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125D9C 00122B9C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80125DA0 00122BA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80125DA4 00122BA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80125DA8 00122BA8*/ PPC::Runtime::ASM::blr();
}