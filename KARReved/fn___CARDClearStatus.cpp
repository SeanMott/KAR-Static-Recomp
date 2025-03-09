//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "EXISelect.hpp"
#include "EXIImm.hpp"
#include "EXISync.hpp"
#include "EXIDeselect.hpp"



void fn___CARDClearStatus(PPC::Runtime::GCContext* context)
{
/*803E232C 003DF12C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E2330 003DF130*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E2334 003DF134*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E2338 003DF138*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803E233C 003DF13C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E2340 003DF140*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E2344 003DF144*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E2348 003DF148*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803E234C 003DF14C*/ PPC::Runtime::ASM::bl(EXISelect);
/*803E2350 003DF150*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E2354 003DF154*/ PPC::Runtime::ASM::bne(.L_803E2360);
/*803E2358 003DF158*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E235C 003DF15C*/ PPC::Runtime::ASM::b(.L_803E23C0);
RUNTIME_PPC_JUMP_LABEL(.L_803E2360, 0x803E2360) //this is a jump label
/*803E2360 003DF160*/ PPC::Runtime::ASM::lis(context->r0, 0x8900);
/*803E2364 003DF164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E2368 003DF168*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E236C 003DF16C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803E2370 003DF170*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803E2374 003DF174*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803E2378 003DF178*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803E237C 003DF17C*/ PPC::Runtime::ASM::bl(EXIImm);
/*803E2380 003DF180*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803E2384 003DF184*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E2388 003DF188*/ PPC::Runtime::ASM::srwi(context->r31, context->r0, 5);
/*803E238C 003DF18C*/ PPC::Runtime::ASM::bl(EXISync);
/*803E2390 003DF190*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803E2394 003DF194*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803E2398 003DF198*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E239C 003DF19C*/ PPC::Runtime::ASM::or(context->r31, context->r31, context->r0);
/*803E23A0 003DF1A0*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803E23A4 003DF1A4*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803E23A8 003DF1A8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803E23AC 003DF1AC*/ PPC::Runtime::ASM::or.(context->r31, context->r31, context->r0);
/*803E23B0 003DF1B0*/ PPC::Runtime::ASM::beq(.L_803E23BC);
/*803E23B4 003DF1B4*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E23B8 003DF1B8*/ PPC::Runtime::ASM::b(.L_803E23C0);
RUNTIME_PPC_JUMP_LABEL(.L_803E23BC, 0x803E23BC) //this is a jump label
/*803E23BC 003DF1BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E23C0, 0x803E23C0) //this is a jump label
/*803E23C0 003DF1C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E23C4 003DF1C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E23C8 003DF1C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E23CC 003DF1CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E23D0 003DF1D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E23D4 003DF1D4*/ PPC::Runtime::ASM::blr();
}