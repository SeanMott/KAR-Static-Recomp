//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038DE14(PPC::Runtime::GCContext* context)
{
/*8038DE14 0038AC14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*8038DE18 0038AC18*/ PPC::Runtime::ASM::mflr(context->r0);
/*8038DE1C 0038AC1C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4E30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE20 0038AC20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8038DE24 0038AC24*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x84);
/*8038DE28 0038AC28*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8038DE2C 0038AC2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE30 0038AC30*/ PPC::Runtime::ASM::fmr(context->f5, context->f1);
/*8038DE34 0038AC34*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4E38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE38 0038AC38*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E4E3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE3C 0038AC3C*/ PPC::Runtime::ASM::bl(fn_C_MTXOrtho);
/*8038DE40 0038AC40*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x84);
/*8038DE44 0038AC44*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8038DE48 0038AC48*/ PPC::Runtime::ASM::bl(fn_803D0568);
/*8038DE4C 0038AC4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4E30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE50 0038AC50*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x54);
/*8038DE54 0038AC54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE58 0038AC58*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x48);
/*8038DE5C 0038AC5C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8038DE60 0038AC60*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x3c);
/*8038DE64 0038AC64*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x30);
/*8038DE68 0038AC68*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8038DE6C 0038AC6C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8038DE70 0038AC70*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8038DE74 0038AC74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8038DE78 0038AC78*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8038DE7C 0038AC7C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8038DE80 0038AC80*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8038DE84 0038AC84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8038DE88 0038AC88*/ PPC::Runtime::ASM::bl(fn_C_MTXLookAt);
/*8038DE8C 0038AC8C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x54);
/*8038DE90 0038AC90*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038DE94 0038AC94*/ PPC::Runtime::ASM::bl(fn_GXLoadPosMtxImm);
/*8038DE98 0038AC98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4E30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DE9C 0038AC9C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4E38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DEA0 0038ACA0*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8038DEA4 0038ACA4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4E34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DEA8 0038ACA8*/ PPC::Runtime::ASM::fmr(context->f5, context->f1);
/*8038DEAC 0038ACAC*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E4E40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DEB0 0038ACB0*/ PPC::Runtime::ASM::bl(fn_GXSetViewport);
/*8038DEB4 0038ACB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DEB8 0038ACB8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038DEBC 0038ACBC*/ PPC::Runtime::ASM::li(context->r5, 0x280);
/*8038DEC0 0038ACC0*/ PPC::Runtime::ASM::li(context->r6, 0x1e0);
/*8038DEC4 0038ACC4*/ PPC::Runtime::ASM::bl(fn_GXSetScissor);
/*8038DEC8 0038ACC8*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8038DECC 0038ACCC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038DED0 0038ACD0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038DED4 0038ACD4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8038DED8 0038ACD8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8038DEDC 0038ACDC*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8038DEE0 0038ACE0*/ PPC::Runtime::ASM::li(context->r9, 0x2);
/*8038DEE4 0038ACE4*/ PPC::Runtime::ASM::bl(fn_GXSetChanCtrl);
/*8038DEE8 0038ACE8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038DEEC 0038ACEC*/ PPC::Runtime::ASM::bl(fn_GXSetNumChans);
/*8038DEF0 0038ACF0*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*8038DEF4 0038ACF4*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*8038DEF8 0038ACF8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DEFC 0038ACFC*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8038DF00 0038AD00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038DF04 0038AD04*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8038DF08 0038AD08*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8038DF0C 0038AD0C*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*8038DF10 0038AD10*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*8038DF14 0038AD14*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8038DF18 0038AD18*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*8038DF1C 0038AD1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DF20 0038AD20*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*8038DF24 0038AD24*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038DF28 0038AD28*/ PPC::Runtime::ASM::bl(fn_GXSetNumTevStages);
/*8038DF2C 0038AD2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DF30 0038AD30*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*8038DF34 0038AD34*/ PPC::Runtime::ASM::li(context->r5, 0x100);
/*8038DF38 0038AD38*/ PPC::Runtime::ASM::li(context->r6, 0xff);
/*8038DF3C 0038AD3C*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*8038DF40 0038AD40*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038DF44 0038AD44*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8038DF48 0038AD48*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8038DF4C 0038AD4C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8038DF50 0038AD50*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*8038DF54 0038AD54*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DF58 0038AD58*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8038DF5C 0038AD5C*/ PPC::Runtime::ASM::li(context->r5, 0xf);
/*8038DF60 0038AD60*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*8038DF64 0038AD64*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8038DF68 0038AD68*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorIn);
/*8038DF6C 0038AD6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DF70 0038AD70*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038DF74 0038AD74*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038DF78 0038AD78*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8038DF7C 0038AD7C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8038DF80 0038AD80*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8038DF84 0038AD84*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorOp);
/*8038DF88 0038AD88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DF8C 0038AD8C*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8038DF90 0038AD90*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*8038DF94 0038AD94*/ PPC::Runtime::ASM::li(context->r6, 0x7);
/*8038DF98 0038AD98*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8038DF9C 0038AD9C*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaIn);
/*8038DFA0 0038ADA0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038DFA4 0038ADA4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038DFA8 0038ADA8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038DFAC 0038ADAC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8038DFB0 0038ADB0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8038DFB4 0038ADB4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8038DFB8 0038ADB8*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaOp);
/*8038DFBC 0038ADBC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038DFC0 0038ADC0*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*8038DFC4 0038ADC4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8038DFC8 0038ADC8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*8038DFCC 0038ADCC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038DFD0 0038ADD0*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29, context->r1));
/*8038DFD4 0038ADD4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r1));
/*8038DFD8 0038ADD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r1));
/*8038DFDC 0038ADDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8038DFE0 0038ADE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8038DFE4 0038ADE4*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*8038DFE8 0038ADE8*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*8038DFEC 0038ADEC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038DFF0 0038ADF0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8038DFF4 0038ADF4*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8038DFF8 0038ADF8*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4E44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038DFFC 0038ADFC*/ PPC::Runtime::ASM::lis(context->r5, 0xcc01);
/*8038E000 0038AE00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E004 0038AE04*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*8038E008 0038AE08*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E00C 0038AE0C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E010 0038AE10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4E4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E014 0038AE14*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E018 0038AE18*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E01C 0038AE1C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E020 0038AE20*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E024 0038AE24*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E028 0038AE28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E02C 0038AE2C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E030 0038AE30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E034 0038AE34*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*8038E038 0038AE38*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8038E03C 0038AE3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038E040 0038AE40*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*8038E044 0038AE44*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8038E048 0038AE48*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*8038E04C 0038AE4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038E050 0038AE50*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r1));
/*8038E054 0038AE54*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r1));
/*8038E058 0038AE58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23, context->r1));
/*8038E05C 0038AE5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8038E060 0038AE60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8038E064 0038AE64*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*8038E068 0038AE68*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*8038E06C 0038AE6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E070 0038AE70*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8038E074 0038AE74*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8038E078 0038AE78*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E07C 0038AE7C*/ PPC::Runtime::ASM::lis(context->r6, 0xcc01);
/*8038E080 0038AE80*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504388 @ Get_MemoryOffset_HighBit);
/*8038E084 0038AE84*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8038E088 0038AE88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E08C 0038AE8C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_80504388 @ Get_MemoryOffset_LowBit);
/*8038E090 0038AE90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E094 0038AE94*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*8038E098 0038AE98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E09C 0038AE9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E0A0 0038AEA0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4E70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E0A4 0038AEA4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E0A8 0038AEA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8038E0AC 0038AEAC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8038E0B0 0038AEB0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E0B4 0038AEB4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8038E0B8 0038AEB8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*8038E0BC 0038AEBC*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0xf0);
/*8038E0C0 0038AEC0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x50);
/*8038E0C4 0038AEC4*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8038E0C8 0038AEC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8038E0CC 0038AECC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E0D0 0038AED0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8038E0D4 0038AED4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E0D8 0038AED8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E0DC 0038AEDC*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*8038E0E0 0038AEE0*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8038E0E4 0038AEE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8038E0E8 0038AEE8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038E0EC 0038AEEC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*8038E0F0 0038AEF0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038E0F4 0038AEF4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r1));
/*8038E0F8 0038AEF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r1));
/*8038E0FC 0038AEFC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r1));
/*8038E100 0038AF00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8038E104 0038AF04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8038E108 0038AF08*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*8038E10C 0038AF0C*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*8038E110 0038AF10*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E114 0038AF14*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8038E118 0038AF18*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8038E11C 0038AF1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038E120 0038AF20*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8038E124 0038AF24*/ PPC::Runtime::ASM::srwi(context->r6, context->r3, 1);
/*8038E128 0038AF28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E12C 0038AF2C*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x50);
/*8038E130 0038AF30*/ PPC::Runtime::ASM::li(context->r3, 0x1e0);
/*8038E134 0038AF34*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8038E138 0038AF38*/ PPC::Runtime::ASM::srwi(context->r6, context->r3, 1);
/*8038E13C 0038AF3C*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E4E78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E140 0038AF40*/ PPC::Runtime::ASM::lis(context->r5, 0xcc01);
/*8038E144 0038AF44*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E148 0038AF48*/ PPC::Runtime::ASM::li(context->r3, 0x3c0);
/*8038E14C 0038AF4C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8038E150 0038AF50*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x50);
/*8038E154 0038AF54*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f4);
/*8038E158 0038AF58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E15C 0038AF5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E160 0038AF60*/ PPC::Runtime::ASM::srwi(context->r6, context->r3, 1);
/*8038E164 0038AF64*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E168 0038AF68*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*8038E16C 0038AF6C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E170 0038AF70*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E174 0038AF74*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E178 0038AF78*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*8038E17C 0038AF7C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E180 0038AF80*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E184 0038AF84*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8038E188 0038AF88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E18C 0038AF8C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E190 0038AF90*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8038E194 0038AF94*/ PPC::Runtime::ASM::addi(context->r7, context->r6, 0x50);
/*8038E198 0038AF98*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f4);
/*8038E19C 0038AF9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E1A0 0038AFA0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E1A4 0038AFA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1A8 0038AFA8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*8038E1AC 0038AFAC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1B0 0038AFB0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1B4 0038AFB4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1B8 0038AFB8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8038E1BC 0038AFBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E1C0 0038AFC0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8038E1C4 0038AFC4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*8038E1C8 0038AFC8*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f4);
/*8038E1CC 0038AFCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E1D0 0038AFD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1D4 0038AFD4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*8038E1D8 0038AFD8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1DC 0038AFDC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*8038E1E0 0038AFE0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1E4 0038AFE4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1E8 0038AFE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E1EC 0038AFEC*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*8038E1F0 0038AFF0*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8038E1F4 0038AFF4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8038E1F8 0038AFF8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038E1FC 0038AFFC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8038E200 0038B000*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038E204 0038B004*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r1));
/*8038E208 0038B008*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r1));
/*8038E20C 0038B00C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r1));
/*8038E210 0038B010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8038E214 0038B014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8038E218 0038B018*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*8038E21C 0038B01C*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*8038E220 0038B020*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E224 0038B024*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8038E228 0038B028*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8038E22C 0038B02C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4E54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E230 0038B030*/ PPC::Runtime::ASM::lis(context->r6, 0xcc01);
/*8038E234 0038B034*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504388 @ Get_MemoryOffset_HighBit);
/*8038E238 0038B038*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4E64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E23C 0038B03C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E240 0038B040*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_80504388 @ Get_MemoryOffset_LowBit);
/*8038E244 0038B044*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E248 0038B048*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*8038E24C 0038B04C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E250 0038B050*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E254 0038B054*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E258 0038B058*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038E25C 0038B05C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8038E260 0038B060*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f4);
/*8038E264 0038B064*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E268 0038B068*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r6));
/*8038E26C 0038B06C*/ PPC::Runtime::ASM::bl(fn_GXSetLineWidth);
/*8038E270 0038B070*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8038E274 0038B074*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8038E278 0038B078*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038E27C 0038B07C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8038E280 0038B080*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038E284 0038B084*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8038E288 0038B088*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8038E28C 0038B08C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8038E290 0038B090*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8038E294 0038B094*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8038E298 0038B098*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*8038E29C 0038B09C*/ PPC::Runtime::ASM::li(context->r3, 0xa8);
/*8038E2A0 0038B0A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8038E2A4 0038B0A4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8038E2A8 0038B0A8*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*8038E2AC 0038B0AC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4E54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E2B0 0038B0B0*/ PPC::Runtime::ASM::lis(context->r5, 0xcc01);
/*8038E2B4 0038B0B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504388 @ Get_MemoryOffset_HighBit);
/*8038E2B8 0038B0B8*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4E6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E2BC 0038B0BC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E2C0 0038B0C0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80504388 @ Get_MemoryOffset_LowBit);
/*8038E2C4 0038B0C4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4E34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E2C8 0038B0C8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8038E2CC 0038B0CC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E2D0 0038B0D0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4E68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8038E2D4 0038B0D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038E2D8 0038B0D8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8038E2DC 0038B0DC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f4);
/*8038E2E0 0038B0E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E2E4 0038B0E4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r5));
/*8038E2E8 0038B0E8*/ PPC::Runtime::ASM::bl(fn_HSD_StateInvalidate);
/*8038E2EC 0038B0EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8038E2F0 0038B0F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8038E2F4 0038B0F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*8038E2F8 0038B0F8*/ PPC::Runtime::ASM::blr();
}