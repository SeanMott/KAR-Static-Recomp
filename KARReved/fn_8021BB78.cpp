//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_8020D608.hpp"
#include "fn_8020D608.hpp"
#include "fn_8021C3BC.hpp"
#include "fn_8021C194.hpp"
#include "fn_8021C8EC.hpp"



void fn_8021BB78(PPC::Runtime::GCContext* context)
{
/*8021BB78 00218978*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8021BB7C 0021897C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021BB80 00218980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021BB84 00218984*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021BB88 00218988*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021BB8C 0021898C*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*8021BB90 00218990*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021BB94 00218994*/ PPC::Runtime::ASM::beq(.L_8021BC84);
/*8021BB98 00218998*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r31));
/*8021BB9C 0021899C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021BBA0 002189A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8021BBA4 002189A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8021BBA8 002189A8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8021BBAC 002189AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021BBB0 002189B0*/ PPC::Runtime::ASM::blt(.L_8021BBBC);
/*8021BBB4 002189B4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021BBB8 002189B8*/ PPC::Runtime::ASM::b(.L_8021BC4C);
RUNTIME_PPC_JUMP_LABEL(.L_8021BBBC, 0x8021BBBC) //this is a jump label
/*8021BBBC 002189BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8021BBC0 002189C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021BBC4 002189C4*/ PPC::Runtime::ASM::bgt(.L_8021BC28);
/*8021BBC8 002189C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r31));
/*8021BBCC 002189CC*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8021BBD0 002189D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r31));
/*8021BBD4 002189D4*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8021BBD8 002189D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021BBDC 002189DC*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021BBE0 002189E0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E26F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021BBE4 002189E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021BBE8 002189E8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8021BBEC 002189EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021BBF0 002189F0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8021BBF4 002189F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021BBF8 002189F8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021BBFC 002189FC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8021BC00 00218A00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021BC04 00218A04*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8021BC08 00218A08*/ PPC::Runtime::ASM::bne(.L_8021BC4C);
/*8021BC0C 00218A0C*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021BC10 00218A10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021BC14 00218A14*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9f);
/*8021BC18 00218A18*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021BC1C 00218A1C*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021BC20 00218A20*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021BC24 00218A24*/ PPC::Runtime::ASM::b(.L_8021BC4C);
RUNTIME_PPC_JUMP_LABEL(.L_8021BC28, 0x8021BC28) //this is a jump label
/*8021BC28 00218A28*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*8021BC2C 00218A2C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8021BC30 00218A30*/ PPC::Runtime::ASM::blt(.L_8021BC4C);
/*8021BC34 00218A34*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*8021BC38 00218A38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021BC3C 00218A3C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9f);
/*8021BC40 00218A40*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021BC44 00218A44*/ PPC::Runtime::ASM::bl(fn_8020D608);
/*8021BC48 00218A48*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8021BC4C, 0x8021BC4C) //this is a jump label
/*8021BC4C 00218A4C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021BC50 00218A50*/ PPC::Runtime::ASM::beq(.L_8021BC60);
/*8021BC54 00218A54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021BC58 00218A58*/ PPC::Runtime::ASM::bl(fn_8021C3BC);
/*8021BC5C 00218A5C*/ PPC::Runtime::ASM::b(.L_8021BC84);
RUNTIME_PPC_JUMP_LABEL(.L_8021BC60, 0x8021BC60) //this is a jump label
/*8021BC60 00218A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8021BC64 00218A64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8021BC68 00218A68*/ PPC::Runtime::ASM::bne(.L_8021BC84);
/*8021BC6C 00218A6C*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8021BC70 00218A70*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021BC74 00218A74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*8021BC78 00218A78*/ PPC::Runtime::ASM::bne(.L_8021BC84);
/*8021BC7C 00218A7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021BC80 00218A80*/ PPC::Runtime::ASM::bl(fn_8021C194);
RUNTIME_PPC_JUMP_LABEL(.L_8021BC84, 0x8021BC84) //this is a jump label
/*8021BC84 00218A84*/ PPC::Runtime::ASM::lis(context->r3, 0x8889);
/*8021BC88 00218A88*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb62, context->r31));
/*8021BC8C 00218A8C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7777);
/* 8021BC90 00218A90  7C 00 20 96 */ mulhw context->r0 , context->r0 , context->r4
/*8021BC94 00218A94*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8021BC98 00218A98*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*8021BC9C 00218A9C*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8021BCA0 00218AA0*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8021BCA4 00218AA4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3c);
/*8021BCA8 00218AA8*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*8021BCAC 00218AAC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1e);
/*8021BCB0 00218AB0*/ PPC::Runtime::ASM::bne(.L_8021BCD0);
/*8021BCB4 00218AB4*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8021BCB8 00218AB8*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021BCBC 00218ABC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021BCC0 00218AC0*/ PPC::Runtime::ASM::bne(.L_8021BCD0);
/*8021BCC4 00218AC4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021BCC8 00218AC8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8021BCCC 00218ACC*/ PPC::Runtime::ASM::bl(fn_8021C8EC);
RUNTIME_PPC_JUMP_LABEL(.L_8021BCD0, 0x8021BCD0) //this is a jump label
/*8021BCD0 00218AD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021BCD4 00218AD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021BCD8 00218AD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021BCDC 00218ADC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8021BCE0 00218AE0*/ PPC::Runtime::ASM::blr();
}