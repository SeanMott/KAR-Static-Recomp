//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_renderPauseHUD_renderStatChart.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"



void fn_801120AC(PPC::Runtime::GCContext* context)
{
/*801120AC 0010EEAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801120B0 0010EEB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801120B4 0010EEB4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1045 @ Get_MemoryOffset_HighBit);
/*801120B8 0010EEB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801120BC 0010EEBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801120C0 0010EEC0*/ PPC::Runtime::ASM::addi(context->r31, context->r5, MemoryOffset_1045 @ Get_MemoryOffset_LowBit);
/*801120C4 0010EEC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801120C8 0010EEC8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801120CC 0010EECC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801120D0 0010EED0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801120D4 0010EED4*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*801120D8 0010EED8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*801120DC 0010EEDC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*801120E0 0010EEE0*/ PPC::Runtime::ASM::bne(.L_801121A4);
/*801120E4 0010EEE4*/ PPC::Runtime::ASM::bl(fn_renderPauseHUD_renderStatChart);
/*801120E8 0010EEE8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*801120EC 0010EEEC*/ PPC::Runtime::ASM::bne(.L_801121A4);
/*801120F0 0010EEF0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*801120F4 0010EEF4*/ PPC::Runtime::ASM::beq(.L_80112144);
/*801120F8 0010EEF8*/ PPC::Runtime::ASM::bge(.L_80112108);
/*801120FC 0010EEFC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*80112100 0010EF00*/ PPC::Runtime::ASM::bge(.L_80112114);
/*80112104 0010EF04*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_80112108, 0x80112108) //this is a jump label
/*80112108 0010EF08*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*8011210C 0010EF0C*/ PPC::Runtime::ASM::bge(.L_80112254);
/*80112110 0010EF10*/ PPC::Runtime::ASM::b(.L_80112174);
RUNTIME_PPC_JUMP_LABEL(.L_80112114, 0x80112114) //this is a jump label
/*80112114 0010EF14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112118 0010EF18*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*8011211C 0010EF1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112120 0010EF20*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80112124 0010EF24*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112128 0010EF28*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8011212C 0010EF2C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112130 0010EF30*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80112134 0010EF34*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112138 0010EF38*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*8011213C 0010EF3C*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112140 0010EF40*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_80112144, 0x80112144) //this is a jump label
/*80112144 0010EF44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112148 0010EF48*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x18);
/*8011214C 0010EF4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112150 0010EF50*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80112154 0010EF54*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112158 0010EF58*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8011215C 0010EF5C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112160 0010EF60*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80112164 0010EF64*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112168 0010EF68*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*8011216C 0010EF6C*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112170 0010EF70*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_80112174, 0x80112174) //this is a jump label
/*80112174 0010EF74*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112178 0010EF78*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8011217C 0010EF7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112180 0010EF80*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80112184 0010EF84*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112188 0010EF88*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*8011218C 0010EF8C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112190 0010EF90*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80112194 0010EF94*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112198 0010EF98*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*8011219C 0010EF9C*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*801121A0 0010EFA0*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_801121A4, 0x801121A4) //this is a jump label
/*801121A4 0010EFA4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*801121A8 0010EFA8*/ PPC::Runtime::ASM::beq(.L_801121F8);
/*801121AC 0010EFAC*/ PPC::Runtime::ASM::bge(.L_801121BC);
/*801121B0 0010EFB0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*801121B4 0010EFB4*/ PPC::Runtime::ASM::bge(.L_801121C8);
/*801121B8 0010EFB8*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_801121BC, 0x801121BC) //this is a jump label
/*801121BC 0010EFBC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*801121C0 0010EFC0*/ PPC::Runtime::ASM::bge(.L_80112254);
/*801121C4 0010EFC4*/ PPC::Runtime::ASM::b(.L_80112228);
RUNTIME_PPC_JUMP_LABEL(.L_801121C8, 0x801121C8) //this is a jump label
/*801121C8 0010EFC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801121CC 0010EFCC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x30);
/*801121D0 0010EFD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801121D4 0010EFD4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801121D8 0010EFD8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801121DC 0010EFDC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801121E0 0010EFE0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801121E4 0010EFE4*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*801121E8 0010EFE8*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*801121EC 0010EFEC*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*801121F0 0010EFF0*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*801121F4 0010EFF4*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_801121F8, 0x801121F8) //this is a jump label
/*801121F8 0010EFF8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801121FC 0010EFFC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3c);
/*80112200 0010F000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112204 0010F004*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80112208 0010F008*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8011220C 0010F00C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112210 0010F010*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112214 0010F014*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80112218 0010F018*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*8011221C 0010F01C*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112220 0010F020*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112224 0010F024*/ PPC::Runtime::ASM::b(.L_80112254);
RUNTIME_PPC_JUMP_LABEL(.L_80112228, 0x80112228) //this is a jump label
/*80112228 0010F028*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011222C 0010F02C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x48);
/*80112230 0010F030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112234 0010F034*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80112238 0010F038*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8011223C 0010F03C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112240 0010F040*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112244 0010F044*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*80112248 0010F048*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*8011224C 0010F04C*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112250 0010F050*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_80112254, 0x80112254) //this is a jump label
/*80112254 0010F054*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*80112258 0010F058*/ PPC::Runtime::ASM::beq(.L_8011234C);
/*8011225C 0010F05C*/ PPC::Runtime::ASM::bge(.L_80112428);
/*80112260 0010F060*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*80112264 0010F064*/ PPC::Runtime::ASM::bge(.L_8011226C);
/*80112268 0010F068*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_8011226C, 0x8011226C) //this is a jump label
/*8011226C 0010F06C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112270 0010F070*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x54);
/*80112274 0010F074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112278 0010F078*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8011227C 0010F07C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112280 0010F080*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112284 0010F084*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112288 0010F088*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8011228C 0010F08C*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112290 0010F090*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112294 0010F094*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112298 0010F098*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8011229C 0010F09C*/ PPC::Runtime::ASM::beq(.L_801122EC);
/*801122A0 0010F0A0*/ PPC::Runtime::ASM::bge(.L_801122B0);
/*801122A4 0010F0A4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*801122A8 0010F0A8*/ PPC::Runtime::ASM::bge(.L_801122BC);
/*801122AC 0010F0AC*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_801122B0, 0x801122B0) //this is a jump label
/*801122B0 0010F0B0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*801122B4 0010F0B4*/ PPC::Runtime::ASM::bge(.L_80112428);
/*801122B8 0010F0B8*/ PPC::Runtime::ASM::b(.L_8011231C);
RUNTIME_PPC_JUMP_LABEL(.L_801122BC, 0x801122BC) //this is a jump label
/*801122BC 0010F0BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801122C0 0010F0C0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x60);
/*801122C4 0010F0C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801122C8 0010F0C8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801122CC 0010F0CC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801122D0 0010F0D0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801122D4 0010F0D4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801122D8 0010F0D8*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*801122DC 0010F0DC*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*801122E0 0010F0E0*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*801122E4 0010F0E4*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*801122E8 0010F0E8*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_801122EC, 0x801122EC) //this is a jump label
/*801122EC 0010F0EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801122F0 0010F0F0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x6c);
/*801122F4 0010F0F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801122F8 0010F0F8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801122FC 0010F0FC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112300 0010F100*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112304 0010F104*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112308 0010F108*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8011230C 0010F10C*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112310 0010F110*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112314 0010F114*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112318 0010F118*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_8011231C, 0x8011231C) //this is a jump label
/*8011231C 0010F11C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112320 0010F120*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x78);
/*80112324 0010F124*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112328 0010F128*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8011232C 0010F12C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112330 0010F130*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112334 0010F134*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112338 0010F138*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8011233C 0010F13C*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112340 0010F140*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112344 0010F144*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112348 0010F148*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_8011234C, 0x8011234C) //this is a jump label
/*8011234C 0010F14C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112350 0010F150*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x84);
/*80112354 0010F154*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112358 0010F158*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8011235C 0010F15C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112360 0010F160*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112364 0010F164*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112368 0010F168*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8011236C 0010F16C*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112370 0010F170*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112374 0010F174*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*80112378 0010F178*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8011237C 0010F17C*/ PPC::Runtime::ASM::beq(.L_801123CC);
/*80112380 0010F180*/ PPC::Runtime::ASM::bge(.L_80112390);
/*80112384 0010F184*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x1);
/*80112388 0010F188*/ PPC::Runtime::ASM::bge(.L_8011239C);
/*8011238C 0010F18C*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_80112390, 0x80112390) //this is a jump label
/*80112390 0010F190*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*80112394 0010F194*/ PPC::Runtime::ASM::bge(.L_80112428);
/*80112398 0010F198*/ PPC::Runtime::ASM::b(.L_801123FC);
RUNTIME_PPC_JUMP_LABEL(.L_8011239C, 0x8011239C) //this is a jump label
/*8011239C 0010F19C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801123A0 0010F1A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x90);
/*801123A4 0010F1A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801123A8 0010F1A8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801123AC 0010F1AC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801123B0 0010F1B0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801123B4 0010F1B4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801123B8 0010F1B8*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*801123BC 0010F1BC*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*801123C0 0010F1C0*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*801123C4 0010F1C4*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*801123C8 0010F1C8*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_801123CC, 0x801123CC) //this is a jump label
/*801123CC 0010F1CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801123D0 0010F1D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x9c);
/*801123D4 0010F1D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801123D8 0010F1D8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801123DC 0010F1DC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801123E0 0010F1E0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801123E4 0010F1E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801123E8 0010F1E8*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*801123EC 0010F1EC*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*801123F0 0010F1F0*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*801123F4 0010F1F4*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*801123F8 0010F1F8*/ PPC::Runtime::ASM::b(.L_80112428);
RUNTIME_PPC_JUMP_LABEL(.L_801123FC, 0x801123FC) //this is a jump label
/*801123FC 0010F1FC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80112400 0010F200*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa8);
/*80112404 0010F204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80112408 0010F208*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8011240C 0010F20C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80112410 0010F210*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80112414 0010F214*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80112418 0010F218*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8011241C 0010F21C*/ PPC::Runtime::ASM::li(context->r9, 0x3);
/*80112420 0010F220*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*80112424 0010F224*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_80112428, 0x80112428) //this is a jump label
/*80112428 0010F228*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011242C 0010F22C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80112430 0010F230*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80112434 0010F234*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80112438 0010F238*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011243C 0010F23C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80112440 0010F240*/ PPC::Runtime::ASM::blr();
}