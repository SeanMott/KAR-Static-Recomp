//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_GXPixModeSync.hpp"
#include "fn_GXSetTevKColor.hpp"
#include "fn_GXSetTevColor.hpp"
#include "fn_HSD_StateInvalidate.hpp"
#include "fn_GXPixModeSync.hpp"



void fn_HSD_TExpSetReg(PPC::Runtime::GCContext* context)
{
/*80424128 00420F28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*8042412C 00420F2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80424130 00420F30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80424134 00420F34*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*80424138 00420F38*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8042413C 00420F3C*/ PPC::Runtime::ASM::lis(context->r4, lbl_80504950 @ Get_MemoryOffset_HighBit);
/*80424140 00420F40*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80424144 00420F44*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_80504950 @ Get_MemoryOffset_LowBit);
/*80424148 00420F48*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8042414C 00420F4C*/ PPC::Runtime::ASM::b(.L_80424560);
RUNTIME_PPC_JUMP_LABEL(.L_80424150, 0x80424150) //this is a jump label
/*80424150 00420F50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80424154 00420F54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80424158 00420F58*/ PPC::Runtime::ASM::beq(.L_8042416C);
/*8042415C 00420F5C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x34c);
/*80424160 00420F60*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_480 @ Get_MemoryOffset_SDA21);
/*80424164 00420F64*/ PPC::Runtime::ASM::li(context->r4, 0x593);
/*80424168 00420F68*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042416C, 0x8042416C) //this is a jump label
/*8042416C 00420F6C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*80424170 00420F70*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x8);
/*80424174 00420F74*/ PPC::Runtime::ASM::bge(.L_8042455C);
/*80424178 00420F78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8042417C 00420F7C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80424180 00420F80*/ PPC::Runtime::ASM::slw(context->r3, context->r3, context->r6);
/*80424184 00420F84*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80424188 00420F88*/ PPC::Runtime::ASM::or(context->r30, context->r30, context->r3);
/*8042418C 00420F8C*/ PPC::Runtime::ASM::bne(.L_804243A0);
/*80424190 00420F90*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r29));
/*80424194 00420F94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80424198 00420F98*/ PPC::Runtime::ASM::beq(.L_8042425C);
/*8042419C 00420F9C*/ PPC::Runtime::ASM::bge(.L_804241AC);
/*804241A0 00420FA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804241A4 00420FA4*/ PPC::Runtime::ASM::bge(.L_804241B8);
/*804241A8 00420FA8*/ PPC::Runtime::ASM::b(.L_8042425C);
RUNTIME_PPC_JUMP_LABEL(.L_804241AC, 0x804241AC) //this is a jump label
/*804241AC 00420FAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*804241B0 00420FB0*/ PPC::Runtime::ASM::bge(.L_8042425C);
/*804241B4 00420FB4*/ PPC::Runtime::ASM::b(.L_804241E4);
RUNTIME_PPC_JUMP_LABEL(.L_804241B8, 0x804241B8) //this is a jump label
/*804241B8 00420FB8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804241BC 00420FBC*/ PPC::Runtime::ASM::slwi(context->r4, context->r6, 2);
/*804241C0 00420FC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*804241C4 00420FC4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804241C8 00420FC8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x3);
/*804241CC 00420FCC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*804241D0 00420FD0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804241D4 00420FD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r1));
/*804241D8 00420FD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804241DC 00420FDC*/ PPC::Runtime::ASM::stwx(context->r0, context->r3, context->r4);
/*804241E0 00420FE0*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_804241E4, 0x804241E4) //this is a jump label
/*804241E4 00420FE4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804241E8 00420FE8*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*804241EC 00420FEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*804241F0 00420FF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x100);
/*804241F4 00420FF4*/ PPC::Runtime::ASM::bge(.L_804241FC);
/*804241F8 00420FF8*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804241FC, 0x804241FC) //this is a jump label
/*804241FC 00420FFC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80424200 00421000*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r6, 24, 2);
/*80424204 00421004*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80424208 00421008*/ PPC::Runtime::ASM::li(context->r6, 0xff);
/*8042420C 0042100C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x100);
/*80424210 00421010*/ PPC::Runtime::ASM::stbx(context->r4, context->r3, context->r0);
/*80424214 00421014*/ PPC::Runtime::ASM::bge(.L_8042421C);
/*80424218 00421018*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_8042421C, 0x8042421C) //this is a jump label
/*8042421C 0042101C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*80424220 00421020*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80424224 00421024*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80424228 00421028*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8042422C 0042102C*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 2);
/*80424230 00421030*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80424234 00421034*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x100);
/*80424238 00421038*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
/*8042423C 0042103C*/ PPC::Runtime::ASM::bge(.L_80424244);
/*80424240 00421040*/ PPC::Runtime::ASM::mr(context->r5, context->r7);
RUNTIME_PPC_JUMP_LABEL(.L_80424244, 0x80424244) //this is a jump label
/*80424244 00421044*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*80424248 00421048*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8042424C 0042104C*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 2);
/*80424250 00421050*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*80424254 00421054*/ PPC::Runtime::ASM::stbx(context->r5, context->r3, context->r0);
/*80424258 00421058*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_8042425C, 0x8042425C) //this is a jump label
/*8042425C 0042105C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80424260 00421060*/ PPC::Runtime::ASM::beq(.L_804242DC);
/*80424264 00421064*/ PPC::Runtime::ASM::bge(.L_80424274);
/*80424268 00421068*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8042426C 0042106C*/ PPC::Runtime::ASM::bge(.L_80424280);
/*80424270 00421070*/ PPC::Runtime::ASM::b(.L_804242DC);
RUNTIME_PPC_JUMP_LABEL(.L_80424274, 0x80424274) //this is a jump label
/*80424274 00421074*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80424278 00421078*/ PPC::Runtime::ASM::bge(.L_804242DC);
/*8042427C 0042107C*/ PPC::Runtime::ASM::b(.L_80424294);
RUNTIME_PPC_JUMP_LABEL(.L_80424280, 0x80424280) //this is a jump label
/*80424280 00421080*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80424284 00421084*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80424288 00421088*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8042428C 0042108C*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80424290 00421090*/ PPC::Runtime::ASM::b(.L_80424320);
RUNTIME_PPC_JUMP_LABEL(.L_80424294, 0x80424294) //this is a jump label
/*80424294 00421094*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80424298 00421098*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E5E70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042429C 0042109C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804242A0 004210A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*804242A4 004210A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*804242A8 004210A8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f2);
/*804242AC 004210AC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*804242B0 004210B0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*804242B4 004210B4*/ PPC::Runtime::ASM::fctiwz(context->f2, context->f2);
/*804242B8 004210B8*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*804242BC 004210BC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*804242C0 004210C0*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*804242C4 004210C4*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*804242C8 004210C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*804242CC 004210CC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*804242D0 004210D0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*804242D4 004210D4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*804242D8 004210D8*/ PPC::Runtime::ASM::b(.L_80424320);
RUNTIME_PPC_JUMP_LABEL(.L_804242DC, 0x804242DC) //this is a jump label
/*804242DC 004210DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804242E0 004210E0*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E5E78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804242E4 004210E4*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804242E8 004210E8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*804242EC 004210EC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*804242F0 004210F0*/ PPC::Runtime::ASM::fmul(context->f2, context->f3, context->f2);
/*804242F4 004210F4*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*804242F8 004210F8*/ PPC::Runtime::ASM::fmul(context->f0, context->f3, context->f0);
/*804242FC 004210FC*/ PPC::Runtime::ASM::fctiwz(context->f2, context->f2);
/*80424300 00421100*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*80424304 00421104*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80424308 00421108*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8042430C 0042110C*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80424310 00421110*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80424314 00421114*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80424318 00421118*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8042431C 0042111C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80424320, 0x80424320) //this is a jump label
/*80424320 00421120*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xff);
/*80424324 00421124*/ PPC::Runtime::ASM::ble(.L_80424330);
/*80424328 00421128*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*8042432C 0042112C*/ PPC::Runtime::ASM::b(.L_80424338);
RUNTIME_PPC_JUMP_LABEL(.L_80424330, 0x80424330) //this is a jump label
/*80424330 00421130*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 31);
/*80424334 00421134*/ PPC::Runtime::ASM::andc(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80424338, 0x80424338) //this is a jump label
/*80424338 00421138*/ PPC::Runtime::ASM::cmpwi(context->r5, 0xff);
/*8042433C 0042113C*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r6, 24, 2);
/*80424340 00421140*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80424344 00421144*/ PPC::Runtime::ASM::stbx(context->r4, context->r3, context->r0);
/*80424348 00421148*/ PPC::Runtime::ASM::ble(.L_80424354);
/*8042434C 0042114C*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*80424350 00421150*/ PPC::Runtime::ASM::b(.L_8042435C);
RUNTIME_PPC_JUMP_LABEL(.L_80424354, 0x80424354) //this is a jump label
/*80424354 00421154*/ PPC::Runtime::ASM::srawi(context->r0, context->r5, 31);
/*80424358 00421158*/ PPC::Runtime::ASM::andc(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042435C, 0x8042435C) //this is a jump label
/*8042435C 0042115C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*80424360 00421160*/ PPC::Runtime::ASM::cmpwi(context->r7, 0xff);
/*80424364 00421164*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80424368 00421168*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 2);
/*8042436C 0042116C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80424370 00421170*/ PPC::Runtime::ASM::stbx(context->r5, context->r3, context->r0);
/*80424374 00421174*/ PPC::Runtime::ASM::ble(.L_80424380);
/*80424378 00421178*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*8042437C 0042117C*/ PPC::Runtime::ASM::b(.L_80424388);
RUNTIME_PPC_JUMP_LABEL(.L_80424380, 0x80424380) //this is a jump label
/*80424380 00421180*/ PPC::Runtime::ASM::srawi(context->r0, context->r7, 31);
/*80424384 00421184*/ PPC::Runtime::ASM::andc(context->r5, context->r7, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80424388, 0x80424388) //this is a jump label
/*80424388 00421188*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*8042438C 0042118C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80424390 00421190*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 2);
/*80424394 00421194*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*80424398 00421198*/ PPC::Runtime::ASM::stbx(context->r5, context->r3, context->r0);
/*8042439C 0042119C*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_804243A0, 0x804243A0) //this is a jump label
/*804243A0 004211A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r29));
/*804243A4 004211A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*804243A8 004211A8*/ PPC::Runtime::ASM::beq(.L_80424400);
/*804243AC 004211AC*/ PPC::Runtime::ASM::bge(.L_804243C0);
/*804243B0 004211B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804243B4 004211B4*/ PPC::Runtime::ASM::beq(.L_804243CC);
/*804243B8 004211B8*/ PPC::Runtime::ASM::bge(.L_804243D8);
/*804243BC 004211BC*/ PPC::Runtime::ASM::b(.L_80424464);
RUNTIME_PPC_JUMP_LABEL(.L_804243C0, 0x804243C0) //this is a jump label
/*804243C0 004211C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804243C4 004211C4*/ PPC::Runtime::ASM::bge(.L_80424464);
/*804243C8 004211C8*/ PPC::Runtime::ASM::b(.L_80424428);
RUNTIME_PPC_JUMP_LABEL(.L_804243CC, 0x804243CC) //this is a jump label
/*804243CC 004211CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804243D0 004211D0*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804243D4 004211D4*/ PPC::Runtime::ASM::b(.L_8042449C);
RUNTIME_PPC_JUMP_LABEL(.L_804243D8, 0x804243D8) //this is a jump label
/*804243D8 004211D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*804243DC 004211DC*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804243E0 004211E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xff);
/*804243E4 004211E4*/ PPC::Runtime::ASM::ble(.L_804243F0);
/*804243E8 004211E8*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*804243EC 004211EC*/ PPC::Runtime::ASM::b(.L_804243F8);
RUNTIME_PPC_JUMP_LABEL(.L_804243F0, 0x804243F0) //this is a jump label
/*804243F0 004211F0*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 31);
/*804243F4 004211F4*/ PPC::Runtime::ASM::andc(context->r0, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804243F8, 0x804243F8) //this is a jump label
/*804243F8 004211F8*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r0, 24);
/*804243FC 004211FC*/ PPC::Runtime::ASM::b(.L_8042449C);
RUNTIME_PPC_JUMP_LABEL(.L_80424400, 0x80424400) //this is a jump label
/*80424400 00421200*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80424404 00421204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80424408 00421208*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xff);
/*8042440C 0042120C*/ PPC::Runtime::ASM::ble(.L_80424418);
/*80424410 00421210*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80424414 00421214*/ PPC::Runtime::ASM::b(.L_80424420);
RUNTIME_PPC_JUMP_LABEL(.L_80424418, 0x80424418) //this is a jump label
/*80424418 00421218*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 31);
/*8042441C 0042121C*/ PPC::Runtime::ASM::andc(context->r0, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80424420, 0x80424420) //this is a jump label
/*80424420 00421220*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r0, 24);
/*80424424 00421224*/ PPC::Runtime::ASM::b(.L_8042449C);
RUNTIME_PPC_JUMP_LABEL(.L_80424428, 0x80424428) //this is a jump label
/*80424428 00421228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8042442C 0042122C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5E70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80424430 00421230*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80424434 00421234*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80424438 00421238*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8042443C 0042123C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80424440 00421240*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80424444 00421244*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xff);
/*80424448 00421248*/ PPC::Runtime::ASM::ble(.L_80424454);
/*8042444C 0042124C*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80424450 00421250*/ PPC::Runtime::ASM::b(.L_8042445C);
RUNTIME_PPC_JUMP_LABEL(.L_80424454, 0x80424454) //this is a jump label
/*80424454 00421254*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 31);
/*80424458 00421258*/ PPC::Runtime::ASM::andc(context->r0, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042445C, 0x8042445C) //this is a jump label
/*8042445C 0042125C*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r0, 24);
/*80424460 00421260*/ PPC::Runtime::ASM::b(.L_8042449C);
RUNTIME_PPC_JUMP_LABEL(.L_80424464, 0x80424464) //this is a jump label
/*80424464 00421264*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80424468 00421268*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5E78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042446C 0042126C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80424470 00421270*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80424474 00421274*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80424478 00421278*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8042447C 0042127C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80424480 00421280*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xff);
/*80424484 00421284*/ PPC::Runtime::ASM::ble(.L_80424490);
/*80424488 00421288*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8042448C 0042128C*/ PPC::Runtime::ASM::b(.L_80424498);
RUNTIME_PPC_JUMP_LABEL(.L_80424490, 0x80424490) //this is a jump label
/*80424490 00421290*/ PPC::Runtime::ASM::srawi(context->r0, context->r3, 31);
/*80424494 00421294*/ PPC::Runtime::ASM::andc(context->r0, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80424498, 0x80424498) //this is a jump label
/*80424498 00421298*/ PPC::Runtime::ASM::clrlwi(context->r7, context->r0, 24);
RUNTIME_PPC_JUMP_LABEL(.L_8042449C, 0x8042449C) //this is a jump label
/*8042449C 0042129C*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x4);
/*804244A0 004212A0*/ PPC::Runtime::ASM::bge(.L_80424518);
/*804244A4 004212A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r29));
/*804244A8 004212A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804244AC 004212AC*/ PPC::Runtime::ASM::beq(.L_804244DC);
/*804244B0 004212B0*/ PPC::Runtime::ASM::bge(.L_804244C0);
/*804244B4 004212B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804244B8 004212B8*/ PPC::Runtime::ASM::bge(.L_804244CC);
/*804244BC 004212BC*/ PPC::Runtime::ASM::b(.L_80424504);
RUNTIME_PPC_JUMP_LABEL(.L_804244C0, 0x804244C0) //this is a jump label
/*804244C0 004212C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*804244C4 004212C4*/ PPC::Runtime::ASM::bge(.L_80424504);
/*804244C8 004212C8*/ PPC::Runtime::ASM::b(.L_804244F0);
RUNTIME_PPC_JUMP_LABEL(.L_804244CC, 0x804244CC) //this is a jump label
/*804244CC 004212CC*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r6, 24, 2);
/*804244D0 004212D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*804244D4 004212D4*/ PPC::Runtime::ASM::stbx(context->r7, context->r3, context->r0);
/*804244D8 004212D8*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_804244DC, 0x804244DC) //this is a jump label
/*804244DC 004212DC*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r6, 24, 2);
/*804244E0 004212E0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*804244E4 004212E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*804244E8 004212E8*/ PPC::Runtime::ASM::stbx(context->r7, context->r3, context->r0);
/*804244EC 004212EC*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_804244F0, 0x804244F0) //this is a jump label
/*804244F0 004212F0*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r6, 24, 2);
/*804244F4 004212F4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*804244F8 004212F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*804244FC 004212FC*/ PPC::Runtime::ASM::stbx(context->r7, context->r3, context->r0);
/*80424500 00421300*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_80424504, 0x80424504) //this is a jump label
/*80424504 00421304*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r6, 24, 2);
/*80424508 00421308*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8042450C 0042130C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x3);
/*80424510 00421310*/ PPC::Runtime::ASM::stbx(context->r7, context->r3, context->r0);
/*80424514 00421314*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_80424518, 0x80424518) //this is a jump label
/*80424518 00421318*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r29));
/*8042451C 0042131C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x3);
/*80424520 00421320*/ PPC::Runtime::ASM::bne(.L_80424538);
/*80424524 00421324*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r6, 24, 2);
/*80424528 00421328*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8042452C 0042132C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x3);
/*80424530 00421330*/ PPC::Runtime::ASM::stbx(context->r7, context->r3, context->r0);
/*80424534 00421334*/ PPC::Runtime::ASM::b(.L_8042455C);
RUNTIME_PPC_JUMP_LABEL(.L_80424538, 0x80424538) //this is a jump label
/*80424538 00421338*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*8042453C 0042133C*/ PPC::Runtime::ASM::clrlslwi(context->r5, context->r6, 24, 2);
/*80424540 00421340*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80424544 00421344*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*80424548 00421348*/ PPC::Runtime::ASM::stbx(context->r7, context->r4, context->r5);
/*8042454C 0042134C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80424550 00421350*/ PPC::Runtime::ASM::stbx(context->r7, context->r4, context->r0);
/*80424554 00421354*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*80424558 00421358*/ PPC::Runtime::ASM::stbx(context->r7, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8042455C, 0x8042455C) //this is a jump label
/*8042455C 0042135C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80424560, 0x80424560) //this is a jump label
/*80424560 00421360*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80424564 00421364*/ PPC::Runtime::ASM::bne(.L_80424150);
/*80424568 00421368*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8042456C 0042136C*/ PPC::Runtime::ASM::beq(.L_8042460C);
/*80424570 00421370*/ PPC::Runtime::ASM::bl(fn_GXPixModeSync);
/*80424574 00421374*/ PPC::Runtime::ASM::addi(context->r28, context->r1, 0x14);
/*80424578 00421378*/ PPC::Runtime::ASM::addi(context->r27, context->r31, 0x330);
/*8042457C 0042137C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80424580 00421380*/ PPC::Runtime::ASM::li(context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80424584, 0x80424584) //this is a jump label
/*80424584 00421384*/ PPC::Runtime::ASM::slw(context->r0, context->r29, context->r26);
/*80424588 00421388*/ PPC::Runtime::ASM::and.(context->r0, context->r30, context->r0);
/*8042458C 0042138C*/ PPC::Runtime::ASM::beq(.L_804245A4);
/*80424590 00421390*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80424594 00421394*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*80424598 00421398*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8042459C 0042139C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804245A0 004213A0*/ PPC::Runtime::ASM::bl(fn_GXSetTevKColor);
RUNTIME_PPC_JUMP_LABEL(.L_804245A4, 0x804245A4) //this is a jump label
/*804245A4 004213A4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*804245A8 004213A8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*804245AC 004213AC*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x4);
/*804245B0 004213B0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*804245B4 004213B4*/ PPC::Runtime::ASM::blt(.L_80424584);
/*804245B8 004213B8*/ PPC::Runtime::ASM::addi(context->r28, context->r31, 0x340);
/*804245BC 004213BC*/ PPC::Runtime::ASM::addi(context->r27, context->r1, 0x24);
/*804245C0 004213C0*/ PPC::Runtime::ASM::li(context->r31, 0x4);
/*804245C4 004213C4*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*804245C8 004213C8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x10);
RUNTIME_PPC_JUMP_LABEL(.L_804245CC, 0x804245CC) //this is a jump label
/*804245CC 004213CC*/ PPC::Runtime::ASM::slw(context->r0, context->r29, context->r31);
/*804245D0 004213D0*/ PPC::Runtime::ASM::and.(context->r0, context->r30, context->r0);
/*804245D4 004213D4*/ PPC::Runtime::ASM::beq(.L_804245EC);
/*804245D8 004213D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*804245DC 004213DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*804245E0 004213E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804245E4 004213E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r28));
/*804245E8 004213E8*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
RUNTIME_PPC_JUMP_LABEL(.L_804245EC, 0x804245EC) //this is a jump label
/*804245EC 004213EC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*804245F0 004213F0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*804245F4 004213F4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x7);
/*804245F8 004213F8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*804245FC 004213FC*/ PPC::Runtime::ASM::blt(.L_804245CC);
/*80424600 00421400*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*80424604 00421404*/ PPC::Runtime::ASM::bl(fn_HSD_StateInvalidate);
/*80424608 00421408*/ PPC::Runtime::ASM::bl(fn_GXPixModeSync);
RUNTIME_PPC_JUMP_LABEL(.L_8042460C, 0x8042460C) //this is a jump label
/*8042460C 0042140C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x70);
/*80424610 00421410*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80424614 00421414*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80424618 00421418*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042461C 0042141C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*80424620 00421420*/ PPC::Runtime::ASM::blr();
}