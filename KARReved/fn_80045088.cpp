//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80137888.hpp"
#include "fn_801379C8.hpp"
#include "fn_80137A30.hpp"
#include "fn_80137A54.hpp"
#include "fn_8000BB78.hpp"
#include "fn_80137D5C.hpp"
#include "fn_80137D24.hpp"
#include "fn_8000B9F4.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80137CDC.hpp"
#include "fn_80137A74.hpp"
#include "fn_80138074.hpp"
#include "fn_80137D9C.hpp"
#include "fn_80137D9C.hpp"
#include "fn_80137D7C.hpp"
#include "fn_80137D7C.hpp"
#include "fn_80137DBC.hpp"
#include "fn_80137DDC.hpp"
#include "fn_80044B60.hpp"



void fn_80045088(PPC::Runtime::GCContext* context)
{
/*80045088 00041E88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8004508C 00041E8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80045090 00041E90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80045094 00041E94*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80045098 00041E98*/ PPC::Runtime::ASM::bl(_savegpr_20);
/*8004509C 00041E9C*/ PPC::Runtime::ASM::mr(context->r21, context->r3);
/*800450A0 00041EA0*/ PPC::Runtime::ASM::mr(context->r20, context->r4);
/*800450A4 00041EA4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800450A8 00041EA8*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*800450AC 00041EAC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800450B0 00041EB0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x2d8);
/*800450B4 00041EB4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800450B8 00041EB8*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x394);
/*800450BC 00041EBC*/ PPC::Runtime::ASM::bl(fn_80137888);
/*800450C0 00041EC0*/ PPC::Runtime::ASM::bl(fn_801379C8);
/*800450C4 00041EC4*/ PPC::Runtime::ASM::bl(fn_80137A30);
/*800450C8 00041EC8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800450CC 00041ECC*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*800450D0 00041ED0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*800450D4 00041ED4*/ PPC::Runtime::ASM::bl(fn_80137A54);
/*800450D8 00041ED8*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*800450DC 00041EDC*/ PPC::Runtime::ASM::bl(fn_8000BB78);
/*800450E0 00041EE0*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*800450E4 00041EE4*/ PPC::Runtime::ASM::bl(fn_80137D5C);
/*800450E8 00041EE8*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*800450EC 00041EEC*/ PPC::Runtime::ASM::addi(context->r30, context->r22, 0xac8);
/*800450F0 00041EF0*/ PPC::Runtime::ASM::extsb(context->r28, context->r24);
/*800450F4 00041EF4*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*800450F8 00041EF8*/ PPC::Runtime::ASM::li(context->r22, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800450FC, 0x800450FC) //this is a jump label
/*800450FC 00041EFC*/ PPC::Runtime::ASM::add(context->r27, context->r31, context->r23);
/*80045100 00041F00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80045104 00041F04*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80045108 00041F08*/ PPC::Runtime::ASM::bne(.L_80045314);
/*8004510C 00041F0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r27));
/*80045110 00041F10*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80045114 00041F14*/ PPC::Runtime::ASM::beq(.L_80045124);
/*80045118 00041F18*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*8004511C 00041F1C*/ PPC::Runtime::ASM::bl(fn_80137D24);
/*80045120 00041F20*/ PPC::Runtime::ASM::b(.L_80045304);
RUNTIME_PPC_JUMP_LABEL(.L_80045124, 0x80045124) //this is a jump label
/*80045124 00041F24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80045128 00041F28*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8004512C 00041F2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80045130 00041F30*/ PPC::Runtime::ASM::beq(.L_80045168);
/*80045134 00041F34*/ PPC::Runtime::ASM::bge(.L_80045144);
/*80045138 00041F38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004513C 00041F3C*/ PPC::Runtime::ASM::bge(.L_80045150);
/*80045140 00041F40*/ PPC::Runtime::ASM::b(.L_80045174);
RUNTIME_PPC_JUMP_LABEL(.L_80045144, 0x80045144) //this is a jump label
/*80045144 00041F44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80045148 00041F48*/ PPC::Runtime::ASM::bge(.L_80045174);
/*8004514C 00041F4C*/ PPC::Runtime::ASM::b(.L_80045170);
RUNTIME_PPC_JUMP_LABEL(.L_80045150, 0x80045150) //this is a jump label
/*80045150 00041F50*/ PPC::Runtime::ASM::add(context->r4, context->r26, context->r23);
/*80045154 00041F54*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r4));
/*80045158 00041F58*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5, context->r4));
/*8004515C 00041F5C*/ PPC::Runtime::ASM::bl(fn_8000B9F4);
/*80045160 00041F60*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*80045164 00041F64*/ PPC::Runtime::ASM::b(.L_80045174);
RUNTIME_PPC_JUMP_LABEL(.L_80045168, 0x80045168) //this is a jump label
/*80045168 00041F68*/ PPC::Runtime::ASM::li(context->r25, 0x12);
/*8004516C 00041F6C*/ PPC::Runtime::ASM::b(.L_80045174);
RUNTIME_PPC_JUMP_LABEL(.L_80045170, 0x80045170) //this is a jump label
/*80045170 00041F70*/ PPC::Runtime::ASM::li(context->r25, 0x13);
RUNTIME_PPC_JUMP_LABEL(.L_80045174, 0x80045174) //this is a jump label
/*80045174 00041F74*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80045178 00041F78*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*8004517C 00041F7C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80045180 00041F80*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*80045184 00041F84*/ PPC::Runtime::ASM::mr(context->r20, context->r0);
/*80045188 00041F88*/ PPC::Runtime::ASM::extsb(context->r4, context->r23);
/*8004518C 00041F8C*/ PPC::Runtime::ASM::mr(context->r5, context->r20);
/*80045190 00041F90*/ PPC::Runtime::ASM::bl(fn_80137CDC);
/*80045194 00041F94*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*80045198 00041F98*/ PPC::Runtime::ASM::mr(context->r5, context->r20);
/*8004519C 00041F9C*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*800451A0 00041FA0*/ PPC::Runtime::ASM::mr(context->r7, context->r25);
/*800451A4 00041FA4*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*800451A8 00041FA8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800451AC 00041FAC*/ PPC::Runtime::ASM::bl(fn_80137A74);
/*800451B0 00041FB0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*800451B4 00041FB4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800451B8 00041FB8*/ PPC::Runtime::ASM::bne(.L_800451C8);
/*800451BC 00041FBC*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*800451C0 00041FC0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800451C4 00041FC4*/ PPC::Runtime::ASM::bl(fn_80138074);
RUNTIME_PPC_JUMP_LABEL(.L_800451C8, 0x800451C8) //this is a jump label
/*800451C8 00041FC8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*800451CC 00041FCC*/ PPC::Runtime::ASM::bge(.L_800451E0);
/*800451D0 00041FD0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800451D4 00041FD4*/ PPC::Runtime::ASM::beq(.L_800451EC);
/*800451D8 00041FD8*/ PPC::Runtime::ASM::bge(.L_800452D4);
/*800451DC 00041FDC*/ PPC::Runtime::ASM::b(.L_800452F8);
RUNTIME_PPC_JUMP_LABEL(.L_800451E0, 0x800451E0) //this is a jump label
/*800451E0 00041FE0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x9);
/*800451E4 00041FE4*/ PPC::Runtime::ASM::bge(.L_800452F8);
/*800451E8 00041FE8*/ PPC::Runtime::ASM::b(.L_800452E8);
RUNTIME_PPC_JUMP_LABEL(.L_800451EC, 0x800451EC) //this is a jump label
/*800451EC 00041FEC*/ PPC::Runtime::ASM::lis(context->r3, 0x91a3);
/*800451F0 00041FF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*800451F4 00041FF4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4c3b);
/* 800451F8 00041FF8  7C 63 00 96 */ mulhw context->r3 , context->r3 , context->r0
/*800451FC 00041FFC*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80045200 00042000*/ PPC::Runtime::ASM::srawi(context->r3, context->r4, 11);
/*80045204 00042004*/ PPC::Runtime::ASM::srwi(context->r5, context->r3, 31);
/*80045208 00042008*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r5);
/*8004520C 0004200C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x63);
/*80045210 00042010*/ PPC::Runtime::ASM::ble(.L_8004522C);
/*80045214 00042014*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*80045218 00042018*/ PPC::Runtime::ASM::li(context->r4, 0x63);
/*8004521C 0004201C*/ PPC::Runtime::ASM::li(context->r5, 0x3b);
/*80045220 00042020*/ PPC::Runtime::ASM::li(context->r6, 0x63);
/*80045224 00042024*/ PPC::Runtime::ASM::bl(fn_80137D9C);
/*80045228 00042028*/ PPC::Runtime::ASM::b(.L_800452F8);
RUNTIME_PPC_JUMP_LABEL(.L_8004522C, 0x8004522C) //this is a jump label
/*8004522C 0004202C*/ PPC::Runtime::ASM::lis(context->r3, 0x8889);
/*80045230 00042030*/ PPC::Runtime::ASM::srawi(context->r5, context->r4, 11);
/*80045234 00042034*/ PPC::Runtime::ASM::subi(context->r8, context->r3, 0x7777);
/*80045238 00042038*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/* 8004523C 0004203C  7C 88 00 96 */ mulhw context->r4 , context->r8 , context->r0
/*80045240 00042040*/ PPC::Runtime::ASM::srwi(context->r6, context->r5, 31);
/*80045244 00042044*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80045248 00042048*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*8004524C 0004204C*/ PPC::Runtime::ASM::add(context->r9, context->r5, context->r6);
/*80045250 00042050*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE8D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80045254 00042054*/ PPC::Runtime::ASM::add(context->r6, context->r4, context->r0);
/*80045258 00042058*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DE8C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004525C 0004205C*/ PPC::Runtime::ASM::srawi(context->r5, context->r6, 5);
/*80045260 00042060*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE8C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80045264 00042064*/ PPC::Runtime::ASM::srwi(context->r7, context->r5, 31);
/*80045268 00042068*/ PPC::Runtime::ASM::extsb(context->r4, context->r9);
/*8004526C 0004206C*/ PPC::Runtime::ASM::add(context->r9, context->r5, context->r7);
/* 80045270 00042070  7C A8 48 96 */ mulhw context->r5 , context->r8 , context->r9
/*80045274 00042074*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r9);
/*80045278 00042078*/ PPC::Runtime::ASM::srawi(context->r7, context->r5, 5);
/*8004527C 0004207C*/ PPC::Runtime::ASM::srawi(context->r5, context->r6, 5);
/*80045280 00042080*/ PPC::Runtime::ASM::srwi(context->r6, context->r5, 31);
/*80045284 00042084*/ PPC::Runtime::ASM::srwi(context->r8, context->r7, 31);
/*80045288 00042088*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r6);
/*8004528C 0004208C*/ PPC::Runtime::ASM::mulli(context->r5, context->r5, 0x3c);
/*80045290 00042090*/ PPC::Runtime::ASM::add(context->r6, context->r7, context->r8);
/*80045294 00042094*/ PPC::Runtime::ASM::subf(context->r0, context->r5, context->r0);
/*80045298 00042098*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8004529C 0004209C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800452A0 000420A0*/ PPC::Runtime::ASM::mulli(context->r0, context->r6, 0x3c);
/*800452A4 000420A4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800452A8 000420A8*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r9);
/*800452AC 000420AC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800452B0 000420B0*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*800452B4 000420B4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*800452B8 000420B8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*800452BC 000420BC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800452C0 000420C0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800452C4 000420C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800452C8 000420C8*/ PPC::Runtime::ASM::extsb(context->r6, context->r0);
/*800452CC 000420CC*/ PPC::Runtime::ASM::bl(fn_80137D9C);
/*800452D0 000420D0*/ PPC::Runtime::ASM::b(.L_800452F8);
RUNTIME_PPC_JUMP_LABEL(.L_800452D4, 0x800452D4) //this is a jump label
/*800452D4 000420D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800452D8 000420D8*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*800452DC 000420DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800452E0 000420E0*/ PPC::Runtime::ASM::bl(fn_80137D7C);
/*800452E4 000420E4*/ PPC::Runtime::ASM::b(.L_800452F8);
RUNTIME_PPC_JUMP_LABEL(.L_800452E8, 0x800452E8) //this is a jump label
/*800452E8 000420E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*800452EC 000420EC*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*800452F0 000420F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE8C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800452F4 000420F4*/ PPC::Runtime::ASM::bl(fn_80137D7C);
RUNTIME_PPC_JUMP_LABEL(.L_800452F8, 0x800452F8) //this is a jump label
/*800452F8 000420F8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r27));
/*800452FC 000420FC*/ PPC::Runtime::ASM::extsb(context->r3, context->r22);
/*80045300 00042100*/ PPC::Runtime::ASM::bl(fn_80137DBC);
RUNTIME_PPC_JUMP_LABEL(.L_80045304, 0x80045304) //this is a jump label
/*80045304 00042104*/ PPC::Runtime::ASM::stb(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*80045308 00042108*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x1);
/*8004530C 0004210C*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x2);
/*80045310 00042110*/ PPC::Runtime::ASM::bge(.L_80045328);
RUNTIME_PPC_JUMP_LABEL(.L_80045314, 0x80045314) //this is a jump label
/*80045314 00042114*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*80045318 00042118*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8004531C 0004211C*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x4);
/*80045320 00042120*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x30);
/*80045324 00042124*/ PPC::Runtime::ASM::blt(.L_800450FC);
RUNTIME_PPC_JUMP_LABEL(.L_80045328, 0x80045328) //this is a jump label
/*80045328 00042128*/ PPC::Runtime::ASM::bl(fn_80137DDC);
/*8004532C 0004212C*/ PPC::Runtime::ASM::mr(context->r3, context->r21);
/*80045330 00042130*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*80045334 00042134*/ PPC::Runtime::ASM::bl(fn_80044B60);
/*80045338 00042138*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8004533C 0004213C*/ PPC::Runtime::ASM::bl(_restgpr_20);
/*80045340 00042140*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80045344 00042144*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80045348 00042148*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8004534C 0004214C*/ PPC::Runtime::ASM::blr();
}