//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hsdSearchClassInfo.hpp"
#include "fn_HSD_TObjAlloc.hpp"
#include "fn_hsdNew.hpp"
#include "fn___assert.hpp"



void fn_HSD_TObjLoadDesc(PPC::Runtime::GCContext* context)
{
/*803F552C 003F232C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F5530 003F2330*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F5534 003F2334*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F5538 003F2338*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F553C 003F233C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 803F5540 003F2340  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*803F5544 003F2344*/ PPC::Runtime::ASM::beq(.L_803F55A8);
/*803F5548 003F2348*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F554C 003F234C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803F5550 003F2350*/ PPC::Runtime::ASM::beq(.L_803F5560);
/*803F5554 003F2354*/ PPC::Runtime::ASM::bl(fn_hsdSearchClassInfo);
/*803F5558 003F2358*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803F555C 003F235C*/ PPC::Runtime::ASM::bne(.L_803F556C);
RUNTIME_PPC_JUMP_LABEL(.L_803F5560, 0x803F5560) //this is a jump label
/*803F5560 003F2360*/ PPC::Runtime::ASM::bl(fn_HSD_TObjAlloc);
/*803F5564 003F2364*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803F5568 003F2368*/ PPC::Runtime::ASM::b(.L_803F5588);
RUNTIME_PPC_JUMP_LABEL(.L_803F556C, 0x803F556C) //this is a jump label
/*803F556C 003F236C*/ PPC::Runtime::ASM::bl(fn_hsdNew);
/* 803F5570 003F2370  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803F5574 003F2374*/ PPC::Runtime::ASM::bne(.L_803F5588);
/*803F5578 003F2378*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F557C 003F237C*/ PPC::Runtime::ASM::li(context->r4, 0x22c);
/*803F5580 003F2380*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_1277 @ Get_MemoryOffset_SDA21);
/*803F5584 003F2384*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803F5588, 0x803F5588) //this is a jump label
/*803F5588 003F2388*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803F558C 003F238C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F5590 003F2390*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803F5594 003F2394*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r5));
/*803F5598 003F2398*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803F559C 003F239C*/ PPC::Runtime::ASM::bctrl();
/*803F55A0 003F23A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F55A4 003F23A4*/ PPC::Runtime::ASM::b(.L_803F55AC);
RUNTIME_PPC_JUMP_LABEL(.L_803F55A8, 0x803F55A8) //this is a jump label
/*803F55A8 003F23A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803F55AC, 0x803F55AC) //this is a jump label
/*803F55AC 003F23AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F55B0 003F23B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F55B4 003F23B4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803F55B8 003F23B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F55BC 003F23BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F55C0 003F23C0*/ PPC::Runtime::ASM::blr();
}