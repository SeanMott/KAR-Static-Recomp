//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191758.hpp"
#include "fn_AS_DeadCrawl.hpp"



void fn_801A561C(PPC::Runtime::GCContext* context)
{
/*801A561C 001A241C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801A5620 001A2420*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A5624 001A2424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A5628 001A2428*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A562C 001A242C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A5630 001A2430*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A5634 001A2434*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801A5638 001A2438*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A563C 001A243C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A5640 001A2440*/ PPC::Runtime::ASM::bl(fn_80191758);
/*801A5644 001A2444*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A5648 001A2448*/ PPC::Runtime::ASM::bne(.L_801A56C8);
/*801A564C 001A244C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa38, context->r31));
/*801A5650 001A2450*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2dc);
/*801A5654 001A2454*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa3c, context->r31));
/*801A5658 001A2458*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801A565C 001A245C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e4, context->r31));
/*801A5660 001A2460*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801A5664 001A2464*/ PPC::Runtime::ASM::bne(.L_801A56B8);
/*801A5668 001A2468*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A566C 001A246C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801A5670 001A2470*/ PPC::Runtime::ASM::bge(.L_801A567C);
/*801A5674 001A2474*/ PPC::Runtime::ASM::fneg(context->f0, context->f31);
/*801A5678 001A2478*/ PPC::Runtime::ASM::b(.L_801A5680);
RUNTIME_PPC_JUMP_LABEL(.L_801A567C, 0x801A567C) //this is a jump label
/*801A567C 001A247C*/ PPC::Runtime::ASM::fmr(context->f0, context->f31);
RUNTIME_PPC_JUMP_LABEL(.L_801A5680, 0x801A5680) //this is a jump label
/*801A5680 001A2480*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A5684 001A2484*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x250, context->r3));
/*801A5688 001A2488*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801A568C 001A248C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801A5690 001A2490*/ PPC::Runtime::ASM::beq(.L_801A56B8);
/*801A5694 001A2494*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A5698 001A2498*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*801A569C 001A249C*/ PPC::Runtime::ASM::bge(.L_801A56A8);
/*801A56A0 001A24A0*/ PPC::Runtime::ASM::fneg(context->f0, context->f30);
/*801A56A4 001A24A4*/ PPC::Runtime::ASM::b(.L_801A56AC);
RUNTIME_PPC_JUMP_LABEL(.L_801A56A8, 0x801A56A8) //this is a jump label
/*801A56A8 001A24A8*/ PPC::Runtime::ASM::fmr(context->f0, context->f30);
RUNTIME_PPC_JUMP_LABEL(.L_801A56AC, 0x801A56AC) //this is a jump label
/*801A56AC 001A24AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801A56B0 001A24B0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801A56B4 001A24B4*/ PPC::Runtime::ASM::bne(.L_801A56C8);
RUNTIME_PPC_JUMP_LABEL(.L_801A56B8, 0x801A56B8) //this is a jump label
/*801A56B8 001A24B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A56BC 001A24BC*/ PPC::Runtime::ASM::bl(fn_AS_DeadCrawl);
/*801A56C0 001A24C0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A56C4 001A24C4*/ PPC::Runtime::ASM::b(.L_801A56CC);
RUNTIME_PPC_JUMP_LABEL(.L_801A56C8, 0x801A56C8) //this is a jump label
/*801A56C8 001A24C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A56CC, 0x801A56CC) //this is a jump label
/*801A56CC 001A24CC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801A56D0 001A24D0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801A56D4 001A24D4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801A56D8 001A24D8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801A56DC 001A24DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801A56E0 001A24E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A56E4 001A24E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A56E8 001A24E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801A56EC 001A24EC*/ PPC::Runtime::ASM::blr();
}