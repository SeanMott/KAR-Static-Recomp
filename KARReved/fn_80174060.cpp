//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80173D08.hpp"
#include "fn_80173D08.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80174060(PPC::Runtime::GCContext* context)
{
/*80174060 00170E60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80174064 00170E64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80174068 00170E68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017406C 00170E6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80174070 00170E70*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80174074 00170E74*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80174078 00170E78*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017407C 00170E7C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80174080 00170E80*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80174084 00170E84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc4, context->r3));
/*80174088 00170E88*/ PPC::Runtime::ASM::li(context->r5, 0x1e);
/*8017408C 00170E8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80174090 00170E90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80174094 00170E94*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80174098 00170E98*/ PPC::Runtime::ASM::lis(context->r4, fn_80173D08 @ Get_MemoryOffset_HighBit);
/*8017409C 00170E9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801740A0 00170EA0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801740A4 00170EA4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801740A8 00170EA8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80173D08 @ Get_MemoryOffset_LowBit);
/*801740AC 00170EAC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801740B0 00170EB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801740B4 00170EB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801740B8 00170EB8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc4, context->r30));
/*801740BC 00170EBC*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801740C0 00170EC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801740C4 00170EC4*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*801740C8 00170EC8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801740CC 00170ECC*/ PPC::Runtime::ASM::li(context->r4, 0x94);
/*801740D0 00170ED0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801740D4 00170ED4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801740D8 00170ED8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801740DC 00170EDC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r3));
/*801740E0 00170EE0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801740E4 00170EE4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*801740E8 00170EE8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*801740EC 00170EEC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801740F0 00170EF0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801740F4 00170EF4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801740F8 00170EF8*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*801740FC 00170EFC*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174100 00170F00*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80174104 00170F04*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174108 00170F08*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8017410C 00170F0C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174110 00170F10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80174114 00170F14*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174118 00170F18*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8017411C 00170F1C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174120 00170F20*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80174124 00170F24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174128 00170F28*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8017412C 00170F2C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174130 00170F30*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80174134 00170F34*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174138 00170F38*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8017413C 00170F3C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174140 00170F40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80174144 00170F44*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174148 00170F48*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8017414C 00170F4C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174150 00170F50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80174154 00170F54*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174158 00170F58*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8017415C 00170F5C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174160 00170F60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80174164 00170F64*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80174168 00170F68*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8017416C 00170F6C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80174170 00170F70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80174174 00170F74*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80174178 00170F78*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc8, context->r30));
/*8017417C 00170F7C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80174180 00170F80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80174184 00170F84*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x40);
/*80174188 00170F88*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8017418C 00170F8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80174190 00170F90*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x4c);
/*80174194 00170F94*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80174198 00170F98*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8017419C 00170F9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801741A0 00170FA0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x34);
/*801741A4 00170FA4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801741A8 00170FA8*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801741AC 00170FAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801741B0 00170FB0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x58);
/*801741B4 00170FB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801741B8 00170FB8*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801741BC 00170FBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801741C0 00170FC0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x78);
/*801741C4 00170FC4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801741C8 00170FC8*/ PPC::Runtime::ASM::bne(.L_801741DC);
/*801741CC 00170FCC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CB0 @ Get_MemoryOffset_SDA21);
/*801741D0 00170FD0*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*801741D4 00170FD4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6CB8 @ Get_MemoryOffset_SDA21);
/*801741D8 00170FD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801741DC, 0x801741DC) //this is a jump label
/*801741DC 00170FDC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801741E0 00170FE0*/ PPC::Runtime::ASM::bne(.L_801741F4);
/*801741E4 00170FE4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6CB0 @ Get_MemoryOffset_SDA21);
/*801741E8 00170FE8*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*801741EC 00170FEC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6CC0 @ Get_MemoryOffset_SDA21);
/*801741F0 00170FF0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801741F4, 0x801741F4) //this is a jump label
/*801741F4 00170FF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801741F8 00170FF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*801741FC 00170FFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80174200 00171000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80174204 00171004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80174208 00171008*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8017420C 0017100C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80174210 00171010*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80174214 00171014*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80174218 00171018*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017421C 0017101C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80174220 00171020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80174224 00171024*/ PPC::Runtime::ASM::blr();
}