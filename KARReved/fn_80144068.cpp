//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800644AC.hpp"



void fn_80144068(PPC::Runtime::GCContext* context)
{
/*80144068 00140E68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8014406C 00140E6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80144070 00140E70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80144074 00140E74*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80144078 00140E78*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*8014407C 00140E7C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80144080 00140E80*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80144084 00140E84*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80144088 00140E88*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*8014408C 00140E8C*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*80144090 00140E90*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*80144094 00140E94*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*80144098 00140E98*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014409C 00140E9C*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*801440A0 00140EA0*/ PPC::Runtime::ASM::extsb(context->r5, context->r30);
/*801440A4 00140EA4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x28);
/*801440A8 00140EA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805E6350 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801440AC 00140EAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801440B0 00140EB0*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1175 @ Get_MemoryOffset_HighBit);
/*801440B4 00140EB4*/ PPC::Runtime::ASM::add(context->r26, context->r31, context->r0);
/*801440B8 00140EB8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801440BC 00140EBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*801440C0 00140EC0*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0x2c);
/*801440C4 00140EC4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, MemoryOffset_1175 @ Get_MemoryOffset_LowBit);
/*801440C8 00140EC8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801440CC 00140ECC*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r5);
/*801440D0 00140ED0*/ PPC::Runtime::ASM::beq(.L_801440E0);
/*801440D4 00140ED4*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*801440D8 00140ED8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801440DC 00140EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_801440E0, 0x801440E0) //this is a jump label
/*801440E0 00140EE0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801440E4 00140EE4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801440E8 00140EE8*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*801440EC 00140EEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801440F0 00140EF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801440F4 00140EF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*801440F8 00140EF8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801440FC 00140EFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80144100 00140F00*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80144104 00140F04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80144108 00140F08*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8014410C 00140F0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80144110 00140F10*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80144114 00140F14*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80144118 00140F18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8014411C 00140F1C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*80144120 00140F20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80144124 00140F24*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80144128 00140F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8014412C 00140F2C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80144130 00140F30*/ PPC::Runtime::ASM::beq(.L_80144148);
/*80144134 00140F34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80144138 00140F38*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8014413C 00140F3C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80144140 00140F40*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80144144 00140F44*/ PPC::Runtime::ASM::bl(fn_800644AC);
RUNTIME_PPC_JUMP_LABEL(.L_80144148, 0x80144148) //this is a jump label
/*80144148 00140F48*/ PPC::Runtime::ASM::extsb(context->r4, context->r29);
/*8014414C 00140F4C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80144150 00140F50*/ PPC::Runtime::ASM::subfic(context->r3, context->r4, 0x4);
/*80144154 00140F54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80144158 00140F58*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*8014415C 00140F5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80144160 00140F60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80144164 00140F64*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x4);
/*80144168 00140F68*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8014416C 00140F6C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80144170 00140F70*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80144174 00140F74*/ PPC::Runtime::ASM::fadds(context->f5, context->f1, context->f0);
/*80144178 00140F78*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E01B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014417C 00140F7C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80144180 00140F80*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f2);
/*80144184 00140F84*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80144188 00140F88*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014418C 00140F8C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80144190 00140F90*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80144194 00140F94*/ PPC::Runtime::ASM::fadds(context->f2, context->f4, context->f2);
/*80144198 00140F98*/ PPC::Runtime::ASM::fmadds(context->f31, context->f3, context->f0, context->f5);
/*8014419C 00140F9C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801441A0 00140FA0*/ PPC::Runtime::ASM::blt(.L_80144220);
/*801441A4 00140FA4*/ PPC::Runtime::ASM::extsh(context->r7, context->r28);
/*801441A8 00140FA8*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x3e8);
/*801441AC 00140FAC*/ PPC::Runtime::ASM::blt(.L_80144200);
/*801441B0 00140FB0*/ PPC::Runtime::ASM::lis(context->r4, 0x68dc);
/*801441B4 00140FB4*/ PPC::Runtime::ASM::lis(context->r3, 0x1062);
/*801441B8 00140FB8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7453);
/*801441BC 00140FBC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 801441C0 00140FC0  7C 00 38 96 */ mulhw context->r0 , context->r0 , context->r7
/*801441C4 00140FC4*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x4dd3);
/*801441C8 00140FC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801441CC 00140FCC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*801441D0 00140FD0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 12);
/*801441D4 00140FD4*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801441D8 00140FD8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*801441DC 00140FDC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x2710);
/*801441E0 00140FE0*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 801441E4 00140FE4  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*801441E8 00140FE8*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*801441EC 00140FEC*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801441F0 00140FF0*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 801441F4 00140FF4  4C C6 32 42 */ crset context->cr1eq
/*801441F8 00140FF8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801441FC 00140FFC*/ PPC::Runtime::ASM::b(.L_80144214);
RUNTIME_PPC_JUMP_LABEL(.L_80144200, 0x80144200) //this is a jump label
/*80144200 00141000*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80144204 00141004*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144208 00141008*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 8014420C 0014100C  4C C6 32 42 */ crset context->cr1eq
/*80144210 00141010*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80144214, 0x80144214) //this is a jump label
/*80144214 00141014*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80144218 00141018*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*8014421C 0014101C*/ PPC::Runtime::ASM::b(.L_80144234);
RUNTIME_PPC_JUMP_LABEL(.L_80144220, 0x80144220) //this is a jump label
/*80144220 00141020*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80144224 00141024*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144228 00141028*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 8014422C 0014102C  4C C6 32 42 */ crset context->cr1eq
/*80144230 00141030*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80144234, 0x80144234) //this is a jump label
/*80144234 00141034*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80144238 00141038*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8014423C 0014103C*/ PPC::Runtime::ASM::blt(.L_801442C4);
/*80144240 00141040*/ PPC::Runtime::ASM::extsh(context->r7, context->r28);
/*80144244 00141044*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x64);
/*80144248 00141048*/ PPC::Runtime::ASM::blt(.L_801442A0);
/*8014424C 0014104C*/ PPC::Runtime::ASM::lis(context->r4, 0x1062);
/*80144250 00141050*/ PPC::Runtime::ASM::lis(context->r3, 0x51ec);
/*80144254 00141054*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x4dd3);
/*80144258 00141058*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 8014425C 0014105C  7C 00 38 96 */ mulhw context->r0 , context->r0 , context->r7
/*80144260 00141060*/ PPC::Runtime::ASM::subi(context->r6, context->r3, 0x7ae1);
/*80144264 00141064*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80144268 00141068*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014426C 0014106C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80144270 00141070*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 6);
/*80144274 00141074*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80144278 00141078*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8014427C 0014107C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3e8);
/*80144280 00141080*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 80144284 00141084  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*80144288 00141088*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*8014428C 0014108C*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80144290 00141090*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 80144294 00141094  4C C6 32 42 */ crset context->cr1eq
/*80144298 00141098*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8014429C 0014109C*/ PPC::Runtime::ASM::b(.L_801442B8);
RUNTIME_PPC_JUMP_LABEL(.L_801442A0, 0x801442A0) //this is a jump label
/*801442A0 001410A0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801442A4 001410A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801442A8 001410A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801442AC 001410AC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 801442B0 001410B0  4C C6 32 42 */ crset context->cr1eq
/*801442B4 001410B4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_801442B8, 0x801442B8) //this is a jump label
/*801442B8 001410B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801442BC 001410BC*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*801442C0 001410C0*/ PPC::Runtime::ASM::b(.L_801442DC);
RUNTIME_PPC_JUMP_LABEL(.L_801442C4, 0x801442C4) //this is a jump label
/*801442C4 001410C4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801442C8 001410C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801442CC 001410CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801442D0 001410D0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 801442D4 001410D4  4C C6 32 42 */ crset context->cr1eq
/*801442D8 001410D8*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_801442DC, 0x801442DC) //this is a jump label
/*801442DC 001410DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*801442E0 001410E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801442E4 001410E4*/ PPC::Runtime::ASM::blt(.L_8014436C);
/*801442E8 001410E8*/ PPC::Runtime::ASM::extsh(context->r7, context->r28);
/*801442EC 001410EC*/ PPC::Runtime::ASM::cmpwi(context->r7, 0xa);
/*801442F0 001410F0*/ PPC::Runtime::ASM::blt(.L_80144348);
/*801442F4 001410F4*/ PPC::Runtime::ASM::lis(context->r4, 0x51ec);
/*801442F8 001410F8*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*801442FC 001410FC*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7ae1);
/*80144300 00141100*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80144304 00141104  7C 00 38 96 */ mulhw context->r0 , context->r0 , context->r7
/*80144308 00141108*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x6667);
/*8014430C 0014110C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80144310 00141110*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144314 00141114*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*80144318 00141118*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*8014431C 0014111C*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80144320 00141120*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*80144324 00141124*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x64);
/*80144328 00141128*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/* 8014432C 0014112C  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*80144330 00141130*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*80144334 00141134*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*80144338 00141138*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 8014433C 0014113C  4C C6 32 42 */ crset context->cr1eq
/*80144340 00141140*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80144344 00141144*/ PPC::Runtime::ASM::b(.L_80144360);
RUNTIME_PPC_JUMP_LABEL(.L_80144348, 0x80144348) //this is a jump label
/*80144348 00141148*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8014434C 0014114C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80144350 00141150*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144354 00141154*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 80144358 00141158  4C C6 32 42 */ crset context->cr1eq
/*8014435C 0014115C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80144360, 0x80144360) //this is a jump label
/*80144360 00141160*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80144364 00141164*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80144368 00141168*/ PPC::Runtime::ASM::b(.L_80144384);
RUNTIME_PPC_JUMP_LABEL(.L_8014436C, 0x8014436C) //this is a jump label
/*8014436C 0014116C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80144370 00141170*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80144374 00141174*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144378 00141178*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6644 @ Get_MemoryOffset_SDA21);
/* 8014437C 0014117C  4C C6 32 42 */ crset context->cr1eq
/*80144380 00141180*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_80144384, 0x80144384) //this is a jump label
/*80144384 00141184*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*80144388 00141188*/ PPC::Runtime::ASM::extsh(context->r6, context->r28);
/*8014438C 0014118C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*80144390 00141190*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80144394 00141194  7C 00 30 96 */ mulhw context->r0 , context->r0 , context->r6
/*80144398 00141198*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014439C 0014119C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801443A0 001411A0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*801443A4 001411A4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*801443A8 001411A8*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*801443AC 001411AC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*801443B0 001411B0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*801443B4 001411B4*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r6);
/* 801443B8 001411B8  4C C6 32 42 */ crset context->cr1eq
/*801443BC 001411BC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801443C0 001411C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*801443C4 001411C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801443C8 001411C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801443CC 001411CC*/ PPC::Runtime::ASM::li(context->r4, MemoryOffset_19 @ Get_MemoryOffset_SDA21);
/*801443D0 001411D0*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*801443D4 001411D4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 801443D8 001411D8  4C C6 32 42 */ crset context->cr1eq
/*801443DC 001411DC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*801443E0 001411E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801443E4 001411E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801443E8 001411E8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801443EC 001411EC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6650 @ Get_MemoryOffset_SDA21);
/*801443F0 001411F0*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*801443F4 001411F4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 801443F8 001411F8  4C C6 32 42 */ crset context->cr1eq
/*801443FC 001411FC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80144400 00141200*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80144404 00141204*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144408 00141208*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014440C 0014120C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6658 @ Get_MemoryOffset_SDA21);
/*80144410 00141210*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80144414 00141214*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80144418 00141218  4C C6 32 42 */ crset context->cr1eq
/*8014441C 0014121C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80144420 00141220*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80144424 00141224*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144428 00141228*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014442C 0014122C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6648 @ Get_MemoryOffset_SDA21);
/*80144430 00141230*/ PPC::Runtime::ASM::fadds(context->f31, context->f31, context->f0);
/*80144434 00141234*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/* 80144438 00141238  4C C6 32 42 */ crset context->cr1eq
/*8014443C 0014123C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*80144440 00141240*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80144444 00141244*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144448 00141248*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8014444C 0014124C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80144450 00141250*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80144454 00141254*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80144458 00141258*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014445C 0014125C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80144460 00141260*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80144464 00141264*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80144468 00141268*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8014446C 0014126C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144470 00141270*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80144474 00141274*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80144478 00141278*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8014447C 0014127C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80144480 00141280*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144484 00141284*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80144488 00141288*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8014448C 0014128C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*80144490 00141290*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80144494 00141294*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80144498 00141298*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8014449C 0014129C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801444A0 001412A0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801444A4 001412A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801444A8 001412A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801444AC 001412AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801444B0 001412B0*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801444B4 001412B4*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801444B8 001412B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801444BC 001412BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801444C0 001412C0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801444C4 001412C4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*801444C8 001412C8*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801444CC 001412CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801444D0 001412D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801444D4 001412D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801444D8 001412D8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*801444DC 001412DC*/ PPC::Runtime::ASM::bl(fn_80450774);
/*801444E0 001412E0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801444E4 001412E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*801444E8 001412E8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801444EC 001412EC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*801444F0 001412F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801444F4 001412F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801444F8 001412F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801444FC 001412FC*/ PPC::Runtime::ASM::blr();
}