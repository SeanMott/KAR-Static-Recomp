//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007A94C.hpp"
#include "fn_8007A940.hpp"
#include "fn_8007A94C.hpp"
#include "fn_802361A0.hpp"
#include "fn_8007A62C.hpp"
#include "fn_8023687C.hpp"



void fn_80226160(PPC::Runtime::GCContext* context)
{
/*80226160 00222F60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80226164 00222F64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80226168 00222F68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022616C 00222F6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80226170 00222F70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80226174 00222F74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r3));
/*80226178 00222F78*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022617C 00222F7C*/ PPC::Runtime::ASM::ble(.L_80226188);
/*80226180 00222F80*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80226184 00222F84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80226188, 0x80226188) //this is a jump label
/*80226188 00222F88*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/* 8022618C 00222F8C  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*80226190 00222F90*/ PPC::Runtime::ASM::bne(.L_802261AC);
/*80226194 00222F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80226198 00222F98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8022619C 00222F9C*/ PPC::Runtime::ASM::bgt(.L_802261AC);
/*802261A0 00222FA0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802261A4 00222FA4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 0, 31, 31);
/*802261A8 00222FA8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802261AC, 0x802261AC) //this is a jump label
/*802261AC 00222FAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*802261B0 00222FB0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802261B4 00222FB4*/ PPC::Runtime::ASM::ble(.L_80226290);
/*802261B8 00222FB8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802261BC 00222FBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*802261C0 00222FC0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802261C4 00222FC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*802261C8 00222FC8*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802261CC 00222FCC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802261D0 00222FD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*802261D4 00222FD4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802261D8 00222FD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802261DC 00222FDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802261E0 00222FE0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*802261E4 00222FE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802261E8 00222FE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*802261EC 00222FEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*802261F0 00222FF0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*802261F4 00222FF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802261F8 00222FF8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r3));
/*802261FC 00222FFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80226200 00223000*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80226204 00223004*/ PPC::Runtime::ASM::beq(.L_80226290);
/*80226208 00223008*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*8022620C 0022300C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*80226210 00223010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*80226214 00223014*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80226218 00223018*/ PPC::Runtime::ASM::ble(.L_80226234);
/*8022621C 0022301C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r31));
/*80226220 00223020*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r5));
/*80226224 00223024*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80226228 00223028*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*8022622C 0022302C*/ PPC::Runtime::ASM::bl(fn_8007A94C);
/*80226230 00223030*/ PPC::Runtime::ASM::b(.L_80226290);
RUNTIME_PPC_JUMP_LABEL(.L_80226234, 0x80226234) //this is a jump label
/*80226234 00223034*/ PPC::Runtime::ASM::bl(fn_8007A940);
/*80226238 00223038*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*8022623C 0022303C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80226240 00223040*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80226244 00223044*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80226248 00223048*/ PPC::Runtime::ASM::bne(.L_80226280);
/*8022624C 0022304C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80226250 00223050*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80226254 00223054*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2970 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80226258 00223058*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8022625C 0022305C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80226260 00223060*/ PPC::Runtime::ASM::fmuls(context->f3, context->f0, context->f1);
/*80226264 00223064*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*80226268 00223068*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2968 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022626C 0022306C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80226270 00223070*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80226274 00223074*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80226278 00223078*/ PPC::Runtime::ASM::fdivs(context->f0, context->f3, context->f0);
/*8022627C 0022307C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80226280, 0x80226280) //this is a jump label
/*80226280 00223080*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*80226284 00223084*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*80226288 00223088*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*8022628C 0022308C*/ PPC::Runtime::ASM::bl(fn_8007A94C);
RUNTIME_PPC_JUMP_LABEL(.L_80226290, 0x80226290) //this is a jump label
/*80226290 00223090*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80226294 00223094*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r31));
/*80226298 00223098*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*8022629C 0022309C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802262A0 002230A0*/ PPC::Runtime::ASM::bne(.L_802262C8);
/*802262A4 002230A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*802262A8 002230A8*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*802262AC 002230AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r31));
/*802262B0 002230B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802262B4 002230B4*/ PPC::Runtime::ASM::beq(.L_802262BC);
/*802262B8 002230B8*/ PPC::Runtime::ASM::bl(fn_8007A62C);
RUNTIME_PPC_JUMP_LABEL(.L_802262BC, 0x802262BC) //this is a jump label
/*802262BC 002230BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802262C0 002230C0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*802262C4 002230C4*/ PPC::Runtime::ASM::b(.L_80226310);
RUNTIME_PPC_JUMP_LABEL(.L_802262C8, 0x802262C8) //this is a jump label
/*802262C8 002230C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*802262CC 002230CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802262D0 002230D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*802262D4 002230D4*/ PPC::Runtime::ASM::ble(.L_80226310);
/*802262D8 002230D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*802262DC 002230DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802262E0 002230E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*802262E4 002230E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*802262E8 002230E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*802262EC 002230EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*802262F0 002230F0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802262F4 002230F4*/ PPC::Runtime::ASM::bne(.L_802262FC);
/*802262F8 002230F8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802262FC, 0x802262FC) //this is a jump label
/*802262FC 002230FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*80226300 00223100*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*80226304 00223104*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2950 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80226308 00223108*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8022630C 0022310C*/ PPC::Runtime::ASM::bl(fn_8023687C);
RUNTIME_PPC_JUMP_LABEL(.L_80226310, 0x80226310) //this is a jump label
/*80226310 00223110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80226314 00223114*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80226318 00223118*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022631C 0022311C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80226320 00223120*/ PPC::Runtime::ASM::blr();
}