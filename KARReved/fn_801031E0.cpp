//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800FAA88.hpp"
#include "fn_800EA180.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800EA180.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F7870.hpp"



void fn_801031E0(PPC::Runtime::GCContext* context)
{
/*801031E0 000FFFE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801031E4 000FFFE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801031E8 000FFFE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801031EC 000FFFEC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801031F0 000FFFF0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801031F4 000FFFF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801031F8 000FFFF8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801031FC 000FFFFC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80103200 00100000*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80103204 00100004*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80103208 00100008*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8010320C 0010000C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/* 80103210 00100010  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80103214 00100014*/ PPC::Runtime::ASM::beq(.L_801032DC);
/*80103218 00100018*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8010321C 0010001C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80103220 00100020*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80103224 00100024*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103228 00100028*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010322C 0010002C*/ PPC::Runtime::ASM::bne(.L_80103238);
/*80103230 00100030*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103234 00100034*/ PPC::Runtime::ASM::b(.L_8010329C);
RUNTIME_PPC_JUMP_LABEL(.L_80103238, 0x80103238) //this is a jump label
/*80103238 00100038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010323C 0010003C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r4));
/*80103240 00100040*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80103244 00100044*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80103248 00100048*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8010324C 0010004C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80103250 00100050*/ PPC::Runtime::ASM::bne(.L_80103268);
/*80103254 00100054*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1016 @ Get_MemoryOffset_HighBit);
/*80103258 00100058*/ PPC::Runtime::ASM::li(context->r4, 0x8d);
/*8010325C 0010005C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1016 @ Get_MemoryOffset_LowBit);
/*80103260 00100060*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62C8 @ Get_MemoryOffset_SDA21);
/*80103264 00100064*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80103268, 0x80103268) //this is a jump label
/*80103268 00100068*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8010326C 0010006C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80103270 00100070*/ PPC::Runtime::ASM::bne(.L_8010327C);
/*80103274 00100074*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80103278 00100078*/ PPC::Runtime::ASM::b(.L_8010329C);
RUNTIME_PPC_JUMP_LABEL(.L_8010327C, 0x8010327C) //this is a jump label
/*8010327C 0010007C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80103280 00100080*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80103284 00100084*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103288 00100088*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8010328C 0010008C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*80103290 00100090*/ PPC::Runtime::ASM::bge(.L_80103298);
/*80103294 00100094*/ PPC::Runtime::ASM::b(.L_8010329C);
RUNTIME_PPC_JUMP_LABEL(.L_80103298, 0x80103298) //this is a jump label
/*80103298 00100098*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8010329C, 0x8010329C) //this is a jump label
/*8010329C 0010009C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*801032A0 001000A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801032A4 001000A4*/ PPC::Runtime::ASM::ble(.L_801032B4);
/*801032A8 001000A8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*801032AC 001000AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801032B0 001000B0*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_801032B4, 0x801032B4) //this is a jump label
/*801032B4 001000B4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801032B8 001000B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801032BC 001000BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801032C0 001000C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801032C4 001000C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*801032C8 001000C8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801032CC 001000CC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801032D0 001000D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801032D4 001000D4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*801032D8 001000D8*/ PPC::Runtime::ASM::b(.L_80103424);
RUNTIME_PPC_JUMP_LABEL(.L_801032DC, 0x801032DC) //this is a jump label
/*801032DC 001000DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*801032E0 001000E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801032E4 001000E4*/ PPC::Runtime::ASM::beq(.L_80103390);
/*801032E8 001000E8*/ PPC::Runtime::ASM::bl(fn_800FAA88);
/*801032EC 001000EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801032F0 001000F0*/ PPC::Runtime::ASM::bne(.L_80103424);
/*801032F4 001000F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*801032F8 001000F8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801032FC 001000FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80103300 00100100*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*80103304 00100104*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80103308 00100108*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010330C 0010010C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80103310 00100110*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80103314 00100114*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80103318 00100118*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8010331C 0010011C*/ PPC::Runtime::ASM::bne(.L_80103334);
/*80103320 00100120*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1016 @ Get_MemoryOffset_HighBit);
/*80103324 00100124*/ PPC::Runtime::ASM::li(context->r4, 0xd3);
/*80103328 00100128*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1016 @ Get_MemoryOffset_LowBit);
/*8010332C 0010012C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62C8 @ Get_MemoryOffset_SDA21);
/*80103330 00100130*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80103334, 0x80103334) //this is a jump label
/*80103334 00100134*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80103338 00100138*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8010333C 0010013C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103340 00100140*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80103344 00100144*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*80103348 00100148*/ PPC::Runtime::ASM::bge(.L_80103350);
/*8010334C 0010014C*/ PPC::Runtime::ASM::b(.L_80103354);
RUNTIME_PPC_JUMP_LABEL(.L_80103350, 0x80103350) //this is a jump label
/*80103350 00100150*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80103354, 0x80103354) //this is a jump label
/*80103354 00100154*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*80103358 00100158*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010335C 0010015C*/ PPC::Runtime::ASM::ble(.L_80103368);
/*80103360 00100160*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*80103364 00100164*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_80103368, 0x80103368) //this is a jump label
/*80103368 00100168*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8010336C 0010016C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80103370 00100170*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80103374 00100174*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80103378 00100178*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8010337C 0010017C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80103380 00100180*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103384 00100184*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80103388 00100188*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*8010338C 0010018C*/ PPC::Runtime::ASM::b(.L_80103424);
RUNTIME_PPC_JUMP_LABEL(.L_80103390, 0x80103390) //this is a jump label
/*80103390 00100190*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80103394 00100194*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80103398 00100198*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010339C 0010019C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*801033A0 001001A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801033A4 001001A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801033A8 001001A8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801033AC 001001AC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801033B0 001001B0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801033B4 001001B4*/ PPC::Runtime::ASM::bne(.L_801033CC);
/*801033B8 001001B8*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1016 @ Get_MemoryOffset_HighBit);
/*801033BC 001001BC*/ PPC::Runtime::ASM::li(context->r4, 0xd3);
/*801033C0 001001C0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1016 @ Get_MemoryOffset_LowBit);
/*801033C4 001001C4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D62C8 @ Get_MemoryOffset_SDA21);
/*801033C8 001001C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801033CC, 0x801033CC) //this is a jump label
/*801033CC 001001CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*801033D0 001001D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*801033D4 001001D4*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801033D8 001001D8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801033DC 001001DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*801033E0 001001E0*/ PPC::Runtime::ASM::bge(.L_801033E8);
/*801033E4 001001E4*/ PPC::Runtime::ASM::b(.L_801033EC);
RUNTIME_PPC_JUMP_LABEL(.L_801033E8, 0x801033E8) //this is a jump label
/*801033E8 001001E8*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801033EC, 0x801033EC) //this is a jump label
/*801033EC 001001EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*801033F0 001001F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801033F4 001001F4*/ PPC::Runtime::ASM::ble(.L_80103400);
/*801033F8 001001F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x118);
/*801033FC 001001FC*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_80103400, 0x80103400) //this is a jump label
/*80103400 00100200*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80103404 00100204*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80103408 00100208*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8010340C 0010020C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80103410 00100210*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80103414 00100214*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80103418 00100218*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010341C 0010021C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80103420 00100220*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80103424, 0x80103424) //this is a jump label
/*80103424 00100224*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80103428 00100228*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010342C 0010022C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80103430 00100230*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r5));
/*80103434 00100234*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80103438 00100238*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010343C 0010023C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r5));
/*80103440 00100240*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80103444 00100244*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80103448 00100248*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8010344C 0010024C*/ PPC::Runtime::ASM::beq(.L_80103460);
/*80103450 00100250*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80103454 00100254*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80103458 00100258*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010345C 0010025C*/ PPC::Runtime::ASM::bl(fn_800F7870);
RUNTIME_PPC_JUMP_LABEL(.L_80103460, 0x80103460) //this is a jump label
/*80103460 00100260*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80103464 00100264*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80103468 00100268*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8010346C 0010026C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80103470 00100270*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80103474 00100274*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80103478 00100278*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8010347C 0010027C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80103480 00100280*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80103484 00100284*/ PPC::Runtime::ASM::blr();
}