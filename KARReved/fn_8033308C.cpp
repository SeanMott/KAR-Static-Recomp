//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802891C8.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8030D510.hpp"



void fn_8033308C(PPC::Runtime::GCContext* context)
{
/*8033308C 0032FE8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80333090 0032FE90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80333094 0032FE94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80333098 0032FE98*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8033309C 0032FE9C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*803330A0 0032FEA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803330A4 0032FEA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803330A8 0032FEA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803330AC 0032FEAC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803330B0 0032FEB0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803330B4 0032FEB4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E3808 @ Get_MemoryOffset_HighBit);
/*803330B8 0032FEB8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804E3808 @ Get_MemoryOffset_LowBit);
/*803330BC 0032FEBC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2c);
/*803330C0 0032FEC0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*803330C4 0032FEC4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803330C8 0032FEC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*803330CC 0032FECC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*803330D0 0032FED0*/ PPC::Runtime::ASM::beq(.L_80333184);
/*803330D4 0032FED4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803330D8 0032FED8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803330DC 0032FEDC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803330E0 0032FEE0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803330E4 0032FEE4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*803330E8 0032FEE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803330EC 0032FEEC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f0);
/*803330F0 0032FEF0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*803330F4 0032FEF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803330F8 0032FEF8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*803330FC 0032FEFC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f2);
/*80333100 0032FF00*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80333104 0032FF04*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*80333108 0032FF08*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f3);
/*8033310C 0032FF0C*/ PPC::Runtime::ASM::ble(.L_8033315C);
/*80333110 0032FF10*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f31);
/*80333114 0032FF14*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E4268 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333118 0032FF18*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E4270 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033311C 0032FF1C*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*80333120 0032FF20*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*80333124 0032FF24*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*80333128 0032FF28*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8033312C 0032FF2C*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*80333130 0032FF30*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*80333134 0032FF34*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*80333138 0032FF38*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8033313C 0032FF3C*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*80333140 0032FF40*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*80333144 0032FF44*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*80333148 0032FF48*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8033314C 0032FF4C*/ PPC::Runtime::ASM::fmul(context->f0, context->f31, context->f0);
/*80333150 0032FF50*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80333154 0032FF54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80333158 0032FF58*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8033315C, 0x8033315C) //this is a jump label
/*8033315C 0032FF5C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*80333160 0032FF60*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80333164 0032FF64*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*80333168 0032FF68*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x54);
/*8033316C 0032FF6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333170 0032FF70*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*80333174 0032FF74*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80333178 0032FF78*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*8033317C 0032FF7C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80333180 0032FF80*/ PPC::Runtime::ASM::bl(fn_802891C8);
RUNTIME_PPC_JUMP_LABEL(.L_80333184, 0x80333184) //this is a jump label
/*80333184 0032FF84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r30));
/*80333188 0032FF88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8033318C 0032FF8C*/ PPC::Runtime::ASM::beq(.L_80333218);
/*80333190 0032FF90*/ PPC::Runtime::ASM::bge(.L_803331A4);
/*80333194 0032FF94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80333198 0032FF98*/ PPC::Runtime::ASM::beq(.L_803331B0);
/*8033319C 0032FF9C*/ PPC::Runtime::ASM::bge(.L_803331F4);
/*803331A0 0032FFA0*/ PPC::Runtime::ASM::b(.L_80333270);
RUNTIME_PPC_JUMP_LABEL(.L_803331A4, 0x803331A4) //this is a jump label
/*803331A4 0032FFA4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*803331A8 0032FFA8*/ PPC::Runtime::ASM::bge(.L_80333270);
/*803331AC 0032FFAC*/ PPC::Runtime::ASM::b(.L_8033324C);
RUNTIME_PPC_JUMP_LABEL(.L_803331B0, 0x803331B0) //this is a jump label
/*803331B0 0032FFB0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x54);
/*803331B4 0032FFB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803331B8 0032FFB8*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*803331BC 0032FFBC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803331C0 0032FFC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe0);
/*803331C4 0032FFC4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803331C8 0032FFC8*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*803331CC 0032FFCC*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*803331D0 0032FFD0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe0);
/*803331D4 0032FFD4*/ PPC::Runtime::ASM::li(context->r4, 0x2774);
/*803331D8 0032FFD8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803331DC 0032FFDC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803331E0 0032FFE0*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803331E4 0032FFE4*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*803331E8 0032FFE8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803331EC 0032FFEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r30));
/*803331F0 0032FFF0*/ PPC::Runtime::ASM::b(.L_80333270);
RUNTIME_PPC_JUMP_LABEL(.L_803331F4, 0x803331F4) //this is a jump label
/*803331F4 0032FFF4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*803331F8 0032FFF8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803331FC 0032FFFC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80333200 00330000*/ PPC::Runtime::ASM::bge(.L_80333270);
/*80333204 00330004*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80333208 00330008*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8033320C 0033000C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80333210 00330010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r30));
/*80333214 00330014*/ PPC::Runtime::ASM::b(.L_80333270);
RUNTIME_PPC_JUMP_LABEL(.L_80333218, 0x80333218) //this is a jump label
/*80333218 00330018*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r30));
/*8033321C 0033001C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80333220 00330020*/ PPC::Runtime::ASM::bne(.L_80333270);
/*80333224 00330024*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80333228 00330028*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8033322C 0033002C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x50);
/*80333230 00330030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80333234 00330034*/ PPC::Runtime::ASM::bgt(.L_80333270);
/*80333238 00330038*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8033323C 0033003C*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80333240 00330040*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r30));
/*80333244 00330044*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r30));
/*80333248 00330048*/ PPC::Runtime::ASM::b(.L_80333270);
RUNTIME_PPC_JUMP_LABEL(.L_8033324C, 0x8033324C) //this is a jump label
/*8033324C 0033004C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r30));
/*80333250 00330050*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80333254 00330054*/ PPC::Runtime::ASM::bne(.L_80333270);
/*80333258 00330058*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/* 8033325C 0033005C  34 03 FF FF */ subic. context->r0 , context->r3 , 0x1
/*80333260 00330060*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*80333264 00330064*/ PPC::Runtime::ASM::bne(.L_80333270);
/*80333268 00330068*/ PPC::Runtime::ASM::li(context->r0, 0x63);
/*8033326C 0033006C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80333270, 0x80333270) //this is a jump label
/*80333270 00330070*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r30));
/*80333274 00330074*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80333278 00330078*/ PPC::Runtime::ASM::bne(.L_80333414);
/*8033327C 0033007C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333280 00330080*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333284 00330084*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA908 @ Get_MemoryOffset_SDA21);
/*80333288 00330088*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA900 @ Get_MemoryOffset_SDA21);
/*8033328C 0033008C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80333290 00330090*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80333294 00330094*/ PPC::Runtime::ASM::bl(fn_8030D510);
/*80333298 00330098*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8033329C 0033009C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803332A0 003300A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4168 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803332A4 003300A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4278 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803332A8 003300A8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*803332AC 003300AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*803332B0 003300B0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f2, context->f1, context->f0);
/*803332B4 003300B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*803332B8 003300B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803332BC 003300BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803332C0 003300C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803332C4 003300C4*/ PPC::Runtime::ASM::bctrl();
/*803332C8 003300C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803332CC 003300CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E427C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803332D0 003300D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803332D4 003300D4*/ PPC::Runtime::ASM::bge(.L_803332E0);
/*803332D8 003300D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803332DC 003300DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803332E0, 0x803332E0) //this is a jump label
/*803332E0 003300E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803332E4 003300E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803332E8 003300E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803332EC 003300EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803332F0 003300F0*/ PPC::Runtime::ASM::bctrl();
/*803332F4 003300F4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803332F8 003300F8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x54);
/*803332FC 003300FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333300 00330100*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 80333304 00330104  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80333308 00330108*/ PPC::Runtime::ASM::bne(.L_8033331C);
/*8033330C 0033010C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*80333310 00330110*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80333314 00330114*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAA04 @ Get_MemoryOffset_SDA21);
/*80333318 00330118*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033331C, 0x8033331C) //this is a jump label
/*8033331C 0033011C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80333320 00330120*/ PPC::Runtime::ASM::bne(.L_80333334);
/*80333324 00330124*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xda8);
/*80333328 00330128*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*8033332C 0033012C*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*80333330 00330130*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80333334, 0x80333334) //this is a jump label
/*80333334 00330134*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80333338 00330138*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8033333C 0033013C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80333340 00330140*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80333344 00330144*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80333348 00330148*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*8033334C 0033014C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80333350 00330150*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80333354 00330154*/ PPC::Runtime::ASM::bne(.L_803333A0);
/*80333358 00330158*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8033335C 0033015C*/ PPC::Runtime::ASM::beq(.L_803333A0);
/*80333360 00330160*/ PPC::Runtime::ASM::bne(.L_80333374);
/*80333364 00330164*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*80333368 00330168*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8033336C 0033016C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAA04 @ Get_MemoryOffset_SDA21);
/*80333370 00330170*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80333374, 0x80333374) //this is a jump label
/*80333374 00330174*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80333378 00330178*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8033337C 0033017C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80333380 00330180*/ PPC::Runtime::ASM::bne(.L_80333390);
/*80333384 00330184*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80333388 00330188*/ PPC::Runtime::ASM::beq(.L_80333390);
/*8033338C 0033018C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80333390, 0x80333390) //this is a jump label
/* 80333390 00330190  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80333394 00330194*/ PPC::Runtime::ASM::bne(.L_803333A0);
/*80333398 00330198*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8033339C 0033019C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_803333A0, 0x803333A0) //this is a jump label
/*803333A0 003301A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x54);
/*803333A4 003301A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*803333A8 003301A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803333AC 003301AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803333B0 003301B0*/ PPC::Runtime::ASM::bctrl();
/*803333B4 003301B4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803333B8 003301B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803333BC 003301BC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA9A8 @ Get_MemoryOffset_SDA21);
/*803333C0 003301C0*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA9A0 @ Get_MemoryOffset_SDA21);
/*803333C4 003301C4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803333C8 003301C8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803333CC 003301CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803333D0 003301D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x34c);
/*803333D4 003301D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803333D8 003301D8*/ PPC::Runtime::ASM::bne(.L_803333E0);
/*803333DC 003301DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x290);
RUNTIME_PPC_JUMP_LABEL(.L_803333E0, 0x803333E0) //this is a jump label
/*803333E0 003301E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803333E4 003301E4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r4));
/*803333E8 003301E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803333EC 003301EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803333F0 003301F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803333F4 003301F4*/ PPC::Runtime::ASM::bctrl();
/*803333F8 003301F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803333FC 003301FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r30));
/*80333400 00330200*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80333404 00330204*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*80333408 00330208*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8033340C 0033020C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*80333410 00330210*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80333414, 0x80333414) //this is a jump label
/*80333414 00330214*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80333418 00330218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8033341C 0033021C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80333420 00330220*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80333424 00330224*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80333428 00330228*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033342C 0033022C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80333430 00330230*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80333434 00330234*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80333438 00330238*/ PPC::Runtime::ASM::blr();
}