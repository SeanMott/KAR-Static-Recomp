//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80049D98.hpp"
#include "fn_80049D10.hpp"
#include "fn_80138C1C.hpp"



void fn_801820B4(PPC::Runtime::GCContext* context)
{
/*801820B4 0017EEB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801820B8 0017EEB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801820BC 0017EEBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801820C0 0017EEC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801820C4 0017EEC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801820C8 0017EEC8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801820CC 0017EECC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801820D0 0017EED0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801820D4 0017EED4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801820D8 0017EED8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110c, context->r3));
/*801820DC 0017EEDC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*801820E0 0017EEE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801820E4 0017EEE4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801820E8 0017EEE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xed0, context->r3));
/*801820EC 0017EEEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801820F0 0017EEF0*/ PPC::Runtime::ASM::beq(.L_801820FC);
/*801820F4 0017EEF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801820F8 0017EEF8*/ PPC::Runtime::ASM::b(.L_80182100);
RUNTIME_PPC_JUMP_LABEL(.L_801820FC, 0x801820FC) //this is a jump label
/*801820FC 0017EEFC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80182100, 0x80182100) //this is a jump label
/*80182100 0017EF00*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80182104 0017EF04*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80182108 0017EF08*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8018210C 0017EF0C*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80182110 0017EF10*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80182114 0017EF14*/ PPC::Runtime::ASM::beq(.L_8018218C);
/*80182118 0017EF18*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8018211C 0017EF1C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80182120 0017EF20*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*80182124 0017EF24*/ PPC::Runtime::ASM::bge(.L_80182138);
/*80182128 0017EF28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8018212C 0017EF2C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80182130 0017EF30*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80182134 0017EF34*/ PPC::Runtime::ASM::b(.L_8018218C);
RUNTIME_PPC_JUMP_LABEL(.L_80182138, 0x80182138) //this is a jump label
/*80182138 0017EF38*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8018213C 0017EF3C*/ PPC::Runtime::ASM::bl(fn_80049D98);
/* 80182140 0017EF40  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80182144 0017EF44*/ PPC::Runtime::ASM::beq(.L_80182158);
/*80182148 0017EF48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8018214C 0017EF4C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80182150 0017EF50*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?2);
/*80182154 0017EF54*/ PPC::Runtime::ASM::b(.L_80182164);
RUNTIME_PPC_JUMP_LABEL(.L_80182158, 0x80182158) //this is a jump label
/*80182158 0017EF58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8018215C 0017EF5C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80182160 0017EF60*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_80182164, 0x80182164) //this is a jump label
/*80182164 0017EF64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80182168 0017EF68*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8018216C 0017EF6C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?2);
/*80182170 0017EF70*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80182174 0017EF74*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80182178 0017EF78*/ PPC::Runtime::ASM::bl(fn_80049D10);
/*8018217C 0017EF7C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r3, 24);
/*80182180 0017EF80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80182184 0017EF84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80182188 0017EF88*/ PPC::Runtime::ASM::bl(fn_80138C1C);
RUNTIME_PPC_JUMP_LABEL(.L_8018218C, 0x8018218C) //this is a jump label
/*8018218C 0017EF8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80182190 0017EF90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80182194 0017EF94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80182198 0017EF98*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018219C 0017EF9C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801821A0 0017EFA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801821A4 0017EFA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801821A8 0017EFA8*/ PPC::Runtime::ASM::blr();
}