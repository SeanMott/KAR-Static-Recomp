//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CF84.hpp"
#include "fn_8000B024.hpp"
#include "fn_8000A138.hpp"
#include "fn_8000A160.hpp"
#include "fn_8000B108.hpp"
#include "fn_801C8660.hpp"
#include "fn_8018D284.hpp"



void fn_80196324(PPC::Runtime::GCContext* context)
{
/*80196324 00193124*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80196328 00193128*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019632C 0019312C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80196330 00193130*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80196334 00193134*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80196338 00193138*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8019633C 0019313C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80196340 00193140*/ PPC::Runtime::ASM::bl(fn_8018CF84);
/*80196344 00193144*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80196348 00193148*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8019634C 0019314C*/ PPC::Runtime::ASM::b(.L_801963A8);
RUNTIME_PPC_JUMP_LABEL(.L_80196350, 0x80196350) //this is a jump label
/*80196350 00193150*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80196354 00193154*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80196358 00193158*/ PPC::Runtime::ASM::bl(fn_8000B024);
/*8019635C 0019315C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80196360 00193160*/ PPC::Runtime::ASM::bne(.L_801963A4);
/*80196364 00193164*/ PPC::Runtime::ASM::bl(fn_8000A138);
/*80196368 00193168*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019636C 0019316C*/ PPC::Runtime::ASM::beq(.L_80196390);
/*80196370 00193170*/ PPC::Runtime::ASM::bl(fn_8000A160);
/*80196374 00193174*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80196378 00193178*/ PPC::Runtime::ASM::bne(.L_80196390);
/*8019637C 0019317C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80196380 00193180*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80196384 00193184*/ PPC::Runtime::ASM::bl(fn_8000B108);
/*80196388 00193188*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019638C 0019318C*/ PPC::Runtime::ASM::bne(.L_801963A4);
RUNTIME_PPC_JUMP_LABEL(.L_80196390, 0x80196390) //this is a jump label
/*80196390 00193190*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80196394 00193194*/ PPC::Runtime::ASM::bl(fn_801C8660);
/*80196398 00193198*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8019639C 0019319C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r30));
/*801963A0 001931A0*/ PPC::Runtime::ASM::bl(fn_8018D284);
RUNTIME_PPC_JUMP_LABEL(.L_801963A4, 0x801963A4) //this is a jump label
/*801963A4 001931A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801963A8, 0x801963A8) //this is a jump label
/*801963A8 001931A8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801963AC 001931AC*/ PPC::Runtime::ASM::bne(.L_80196350);
/*801963B0 001931B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801963B4 001931B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801963B8 001931B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801963BC 001931BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801963C0 001931C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801963C4 001931C4*/ PPC::Runtime::ASM::blr();
}