//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A16A8.hpp"



void fn_800A22BC(PPC::Runtime::GCContext* context)
{
/*800A22BC 0009F0BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800A22C0 0009F0C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A22C4 0009F0C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A22C8 0009F0C8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800A22CC 0009F0CC*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*800A22D0 0009F0D0*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800A22D4 0009F0D4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_640 @ Get_MemoryOffset_HighBit);
/*800A22D8 0009F0D8*/ PPC::Runtime::ASM::slwi(context->r28, context->r4, 2);
/*800A22DC 0009F0DC*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*800A22E0 0009F0E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r27));
/*800A22E4 0009F0E4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, MemoryOffset_640 @ Get_MemoryOffset_LowBit);
/*800A22E8 0009F0E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r27));
/*800A22EC 0009F0EC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*800A22F0 0009F0F0*/ PPC::Runtime::ASM::lhzx(context->r29, context->r3, context->r28);
/*800A22F4 0009F0F4*/ PPC::Runtime::ASM::bne(.L_800A2308);
/*800A22F8 0009F0F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x184);
/*800A22FC 0009F0FC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x190);
/*800A2300 0009F100*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*800A2304 0009F104*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A2308, 0x800A2308) //this is a jump label
/*800A2308 0009F108*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800A230C 0009F10C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A2310 0009F110*/ PPC::Runtime::ASM::blt(.L_800A2324);
/*800A2314 0009F114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800A2318 0009F118*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*800A231C 0009F11C*/ PPC::Runtime::ASM::bge(.L_800A2324);
/*800A2320 0009F120*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A2324, 0x800A2324) //this is a jump label
/*800A2324 0009F124*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800A2328 0009F128*/ PPC::Runtime::ASM::bne(.L_800A233C);
/*800A232C 0009F12C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x184);
/*800A2330 0009F130*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x19c);
/*800A2334 0009F134*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*800A2338 0009F138*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800A233C, 0x800A233C) //this is a jump label
/*800A233C 0009F13C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r27));
/*800A2340 0009F140*/ PPC::Runtime::ASM::mulli(context->r4, context->r29, 0x1c);
/*800A2344 0009F144*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r27));
/*800A2348 0009F148*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800A234C 0009F14C*/ PPC::Runtime::ASM::add(context->r6, context->r5, context->r28);
/*800A2350 0009F150*/ PPC::Runtime::ASM::lhzx(context->r5, context->r5, context->r28);
/*800A2354 0009F154*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x10);
/*800A2358 0009F158*/ PPC::Runtime::ASM::lhz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
/*800A235C 0009F15C*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*800A2360 0009F160*/ PPC::Runtime::ASM::lwzx(context->r9, context->r7, context->r0);
/*800A2364 0009F164*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*800A2368 0009F168*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r8, 16, 2);
/*800A236C 0009F16C*/ PPC::Runtime::ASM::add(context->r7, context->r9, context->r0);
/*800A2370 0009F170*/ PPC::Runtime::ASM::lfsx(context->f1, context->r9, context->r0);
/*800A2374 0009F174*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800A2378 0009F178*/ PPC::Runtime::ASM::bl(fn_800A16A8);
/*800A237C 0009F17C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800A2380 0009F180*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*800A2384 0009F184*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A2388 0009F188*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A238C 0009F18C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800A2390 0009F190*/ PPC::Runtime::ASM::blr();
}