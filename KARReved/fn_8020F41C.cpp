//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD6B0.hpp"
#include "fn_80207DEC.hpp"
#include "fn_80204FAC.hpp"
#include "fn_801FED40.hpp"
#include "fn_80209CE4.hpp"
#include "fn_801FC398.hpp"



void fn_8020F41C(PPC::Runtime::GCContext* context)
{
/*8020F41C 0020C21C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F420 0020C220*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F424 0020C224*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F428 0020C228*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F42C 0020C22C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020F430 0020C230*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8020F434 0020C234*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F438 0020C238*/ PPC::Runtime::ASM::bl(fn_80207DEC);
/*8020F43C 0020C23C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8020F440 0020C240*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8020F444 0020C244*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*8020F448 0020C248*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*8020F44C 0020C24C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*8020F450 0020C250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8020F454 0020C254*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8020F458 0020C258*/ PPC::Runtime::ASM::beq(.L_8020F474);
/*8020F45C 0020C25C*/ PPC::Runtime::ASM::bge(.L_8020F498);
/*8020F460 0020C260*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8020F464 0020C264*/ PPC::Runtime::ASM::bge(.L_8020F46C);
/*8020F468 0020C268*/ PPC::Runtime::ASM::b(.L_8020F498);
RUNTIME_PPC_JUMP_LABEL(.L_8020F46C, 0x8020F46C) //this is a jump label
/*8020F46C 0020C26C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8020F470 0020C270*/ PPC::Runtime::ASM::b(.L_8020F498);
RUNTIME_PPC_JUMP_LABEL(.L_8020F474, 0x8020F474) //this is a jump label
/*8020F474 0020C274*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/* 8020F478 0020C278  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*8020F47C 0020C27C*/ PPC::Runtime::ASM::bne(.L_8020F498);
/*8020F480 0020C280*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8020F484 0020C284*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F488 0020C288*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2518 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F48C 0020C28C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*8020F490 0020C290*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*8020F494 0020C294*/ PPC::Runtime::ASM::bl(fn_80204FAC);
RUNTIME_PPC_JUMP_LABEL(.L_8020F498, 0x8020F498) //this is a jump label
/*8020F498 0020C298*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F49C 0020C29C*/ PPC::Runtime::ASM::bl(fn_801FED40);
/*8020F4A0 0020C2A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F4A4 0020C2A4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8020F4A8 0020C2A8*/ PPC::Runtime::ASM::bl(fn_80209CE4);
/*8020F4AC 0020C2AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E251C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F4B0 0020C2B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F4B4 0020C2B4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2520 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F4B8 0020C2B8*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8020F4BC 0020C2BC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020F4C0 0020C2C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020F4C4 0020C2C4*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8020F4C8 0020C2C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F4CC 0020C2CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F4D0 0020C2D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F4D4 0020C2D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F4D8 0020C2D8*/ PPC::Runtime::ASM::blr();
}