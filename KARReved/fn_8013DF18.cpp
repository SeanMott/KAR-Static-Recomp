//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013639C.hpp"



void fn_8013DF18(PPC::Runtime::GCContext* context)
{
/*8013DF18 0013AD18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8013DF1C 0013AD1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013DF20 0013AD20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013DF24 0013AD24*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8013DF28 0013AD28*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8013DF2C 0013AD2C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8013DF30 0013AD30*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013DF34 0013AD34*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8013DF38 0013AD38*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E02A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DF3C 0013AD3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8013DF40 0013AD40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013DF44 0013AD44*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013DF48 0013AD48*/ PPC::Runtime::ASM::beq(.L_8013DF58);
/*8013DF4C 0013AD4C*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013DF50 0013AD50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013DF54 0013AD54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8013DF58, 0x8013DF58) //this is a jump label
/*8013DF58 0013AD58*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DF5C 0013AD5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013DF60 0013AD60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013DF64 0013AD64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013DF68 0013AD68*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*8013DF6C 0013AD6C*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*8013DF70 0013AD70*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8013DF74 0013AD74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DF78 0013AD78*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8013DF7C 0013AD7C*/ PPC::Runtime::ASM::mr(context->r26, context->r27);
/*8013DF80 0013AD80*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DF84 0013AD84*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8013DF88 0013AD88*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8013DF8C 0013AD8C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8013DF90 0013AD90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013DF94 0013AD94*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*8013DF98 0013AD98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8013DF9C 0013AD9C*/ PPC::Runtime::ASM::li(context->r29, 0x2);
/*8013DFA0 0013ADA0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013DFA4 0013ADA4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013DFA8 0013ADA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8013DFAC 0013ADAC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8013DFB0 0013ADB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8013DFB4 0013ADB4*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r3));
/*8013DFB8 0013ADB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8013DFBC, 0x8013DFBC) //this is a jump label
/*8013DFBC 0013ADBC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8013DFC0 0013ADC0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8013DFC4 0013ADC4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8013DFC8 0013ADC8*/ PPC::Runtime::ASM::beq(.L_8013E0F0);
/*8013DFCC 0013ADCC*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*8013DFD0 0013ADD0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8013DFD4 0013ADD4*/ PPC::Runtime::ASM::bl(fn_8013639C);
/*8013DFD8 0013ADD8*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E02B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DFDC 0013ADDC*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013DFE0 0013ADE0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013DFE4 0013ADE4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x6667);
/*8013DFE8 0013ADE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E02B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DFEC 0013ADEC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8013DFF0 0013ADF0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E02B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DFF4 0013ADF4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DFF8 0013ADF8*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f2, context->f1);
/*8013DFFC 0013ADFC*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E000 0013AE00*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013E004 0013AE04*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E02AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E008 0013AE08*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8013E00C 0013AE0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E010 0013AE10*/ PPC::Runtime::ASM::fmadds(context->f1, context->f5, context->f4, context->f3);
/*8013E014 0013AE14*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f0);
/*8013E018 0013AE18*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013E01C 0013AE1C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013E020 0013AE20*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8013E024 0013AE24*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/* 8013E028 0013AE28  7C 05 00 96 */ mulhw context->r0 , context->r5 , context->r0
/*8013E02C 0013AE2C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013E030 0013AE30*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013E034 0013AE34*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 8013E038 0013AE38  4C C6 32 42 */ crset context->cr1eq
/*8013E03C 0013AE3C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013E040 0013AE40*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8013E044 0013AE44*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013E048 0013AE48*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013E04C 0013AE4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E02BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E050 0013AE50*/ PPC::Runtime::ASM::extsb(context->r6, context->r4);
/*8013E054 0013AE54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8013E058 0013AE58  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*8013E05C 0013AE5C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013E060 0013AE60*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f0);
/*8013E064 0013AE64*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8013E068 0013AE68*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013E06C 0013AE6C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013E070 0013AE70*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013E074 0013AE74*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8013E078 0013AE78*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8013E07C 0013AE7C*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r6);
/* 8013E080 0013AE80  4C C6 32 42 */ crset context->cr1eq
/*8013E084 0013AE84*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013E088 0013AE88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E02C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E08C 0013AE8C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8013E090 0013AE90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013E094 0013AE94*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6648 @ Get_MemoryOffset_SDA21);
/*8013E098 0013AE98*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013E09C 0013AE9C*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f0);
/* 8013E0A0 0013AEA0  4C C6 32 42 */ crset context->cr1eq
/*8013E0A4 0013AEA4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013E0A8 0013AEA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E0AC 0013AEAC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8013E0B0 0013AEB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E0B4 0013AEB4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8013E0B8 0013AEB8*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013E0BC 0013AEBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E0C0 0013AEC0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8013E0C4 0013AEC4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E0C8 0013AEC8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8013E0CC 0013AECC*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013E0D0 0013AED0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E0D4 0013AED4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8013E0D8 0013AED8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E02C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013E0DC 0013AEDC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8013E0E0 0013AEE0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013E0E4 0013AEE4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x3);
/*8013E0E8 0013AEE8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x3);
/*8013E0EC 0013AEEC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_8013E0F0, 0x8013E0F0) //this is a jump label
/*8013E0F0 0013AEF0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8013E0F4 0013AEF4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*8013E0F8 0013AEF8*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x8);
/*8013E0FC 0013AEFC*/ PPC::Runtime::ASM::blt(.L_8013DFBC);
/*8013E100 0013AF00*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8013E104 0013AF04*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8013E108 0013AF08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013E10C 0013AF0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013E110 0013AF10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8013E114 0013AF14*/ PPC::Runtime::ASM::blr();
}