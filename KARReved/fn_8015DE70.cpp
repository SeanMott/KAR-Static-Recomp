//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8015DE00.hpp"
#include "fn_8015DE00.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"
#include "fn_8015AA5C.hpp"
#include "fn_8015AA5C.hpp"



void fn_8015DE70(PPC::Runtime::GCContext* context)
{
/*8015DE70 0015AC70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8015DE74 0015AC74*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015DE78 0015AC78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8015DE7C 0015AC7C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8015DE80 0015AC80*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8015DE84 0015AC84*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8015DE88 0015AC88*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*8015DE8C 0015AC8C*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*8015DE90 0015AC90*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015DE94 0015AC94*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x8a8);
/*8015DE98 0015AC98*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8015DE9C 0015AC9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8a8, context->r3));
/*8015DEA0 0015ACA0*/ PPC::Runtime::ASM::li(context->r5, 0x28);
/*8015DEA4 0015ACA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015DEA8 0015ACA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015DEAC 0015ACAC*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8015DEB0 0015ACB0*/ PPC::Runtime::ASM::lis(context->r4, fn_8015DE00 @ Get_MemoryOffset_HighBit);
/*8015DEB4 0015ACB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8015DEB8 0015ACB8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8015DEBC 0015ACBC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8015DEC0 0015ACC0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8015DE00 @ Get_MemoryOffset_LowBit);
/*8015DEC4 0015ACC4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8015DEC8 0015ACC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015DECC 0015ACCC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015DED0 0015ACD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8015DED4 0015ACD4*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8015DED8 0015ACD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8015DEDC 0015ACDC*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8015DEE0 0015ACE0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015DEE4 0015ACE4*/ PPC::Runtime::ASM::li(context->r4, 0x5d);
/*8015DEE8 0015ACE8*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8015DEEC 0015ACEC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8015DEF0 0015ACF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015DEF4 0015ACF4*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8015DEF8 0015ACF8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8015DEFC 0015ACFC*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r27));
/*8015DF00 0015AD00*/ PPC::Runtime::ASM::stb(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r27));
/*8015DF04 0015AD04*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015DF08 0015AD08*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8015DF0C 0015AD0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015DF10 0015AD10*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8015DF14 0015AD14*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015DF18 0015AD18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8015DF1C 0015AD1C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015DF20 0015AD20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015DF24 0015AD24*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8015DF28 0015AD28*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8015DF2C 0015AD2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E08DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015DF30 0015AD30*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8015DF34 0015AD34*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*8015DF38 0015AD38*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*8015DF3C 0015AD3C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015DF40 0015AD40*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*8015DF44 0015AD44*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*8015DF48 0015AD48*/ PPC::Runtime::ASM::extsb.(context->r0, context->r25);
/*8015DF4C 0015AD4C*/ PPC::Runtime::ASM::bne(.L_8015DF64);
/*8015DF50 0015AD50*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8015DF54 0015AD54*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8015DF58 0015AD58*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8015DF5C 0015AD5C*/ PPC::Runtime::ASM::bl(fn_8015AA5C);
/*8015DF60 0015AD60*/ PPC::Runtime::ASM::b(.L_8015DF74);
RUNTIME_PPC_JUMP_LABEL(.L_8015DF64, 0x8015DF64) //this is a jump label
/*8015DF64 0015AD64*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8015DF68 0015AD68*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8015DF6C 0015AD6C*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8015DF70 0015AD70*/ PPC::Runtime::ASM::bl(fn_8015AA5C);
RUNTIME_PPC_JUMP_LABEL(.L_8015DF74, 0x8015DF74) //this is a jump label
/*8015DF74 0015AD74*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8015DF78 0015AD78*/ PPC::Runtime::ASM::bne(.L_8015DF8C);
/*8015DF7C 0015AD7C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D69A0 @ Get_MemoryOffset_SDA21);
/*8015DF80 0015AD80*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8015DF84 0015AD84*/ PPC::Runtime::ASM::li(context->r5, lbl_805D69A8 @ Get_MemoryOffset_SDA21);
/*8015DF88 0015AD88*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015DF8C, 0x8015DF8C) //this is a jump label
/*8015DF8C 0015AD8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015DF90 0015AD90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015DF94 0015AD94*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8015DF98 0015AD98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8015DF9C 0015AD9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8015DFA0 0015ADA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8015DFA4 0015ADA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8015DFA8 0015ADA8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8015DFAC 0015ADAC*/ PPC::Runtime::ASM::bne(.L_8015DFF8);
/*8015DFB0 0015ADB0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8015DFB4 0015ADB4*/ PPC::Runtime::ASM::beq(.L_8015DFF8);
/*8015DFB8 0015ADB8*/ PPC::Runtime::ASM::bne(.L_8015DFCC);
/*8015DFBC 0015ADBC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D69A0 @ Get_MemoryOffset_SDA21);
/*8015DFC0 0015ADC0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8015DFC4 0015ADC4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D69A8 @ Get_MemoryOffset_SDA21);
/*8015DFC8 0015ADC8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015DFCC, 0x8015DFCC) //this is a jump label
/*8015DFCC 0015ADCC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8015DFD0 0015ADD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8015DFD4 0015ADD4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8015DFD8 0015ADD8*/ PPC::Runtime::ASM::bne(.L_8015DFE8);
/*8015DFDC 0015ADDC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8015DFE0 0015ADE0*/ PPC::Runtime::ASM::beq(.L_8015DFE8);
/*8015DFE4 0015ADE4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8015DFE8, 0x8015DFE8) //this is a jump label
/*8015DFE8 0015ADE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8015DFEC 0015ADEC*/ PPC::Runtime::ASM::bne(.L_8015DFF8);
/*8015DFF0 0015ADF0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015DFF4 0015ADF4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8015DFF8, 0x8015DFF8) //this is a jump label
/*8015DFF8 0015ADF8*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8015DFFC 0015ADFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015E000 0015AE00*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8015E004 0015AE04*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8015E008 0015AE08*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8015E00C 0015AE0C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8015E010 0015AE10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8015E014 0015AE14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015E018 0015AE18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8015E01C 0015AE1C*/ PPC::Runtime::ASM::blr();
}