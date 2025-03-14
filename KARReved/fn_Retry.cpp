//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "EXISelect.hpp"
#include "EXIUnlock.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_TimeoutHandler.hpp"
#include "fn_TimeoutHandler.hpp"
#include "OSSetAlarm.hpp"
#include "fn_TimeoutHandler.hpp"
#include "fn_TimeoutHandler.hpp"
#include "OSSetAlarm.hpp"
#include "fn_EXIImmEx.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"
#include "fn_EXIImmEx.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"
#include "fn___CARDTxHandler.hpp"
#include "fn___CARDTxHandler.hpp"
#include "EXIDma.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"



void fn_Retry(PPC::Runtime::GCContext* context)
{
/*803E247C 003DF27C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E2480 003DF280*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*803E2484 003DF284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E2488 003DF288*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E248C 003DF28C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E2490 003DF290*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E2494 003DF294*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803E2498 003DF298*/ PPC::Runtime::ASM::mulli(context->r4, context->r30, 0x110);
/*803E249C 003DF29C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E24A0 003DF2A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E24A4 003DF2A4*/ PPC::Runtime::ASM::add(context->r31, context->r0, context->r4);
/*803E24A8 003DF2A8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E24AC 003DF2AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E24B0 003DF2B0*/ PPC::Runtime::ASM::bl(EXISelect);
/*803E24B4 003DF2B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E24B8 003DF2B8*/ PPC::Runtime::ASM::bne(.L_803E24CC);
/*803E24BC 003DF2BC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E24C0 003DF2C0*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803E24C4 003DF2C4*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E24C8 003DF2C8*/ PPC::Runtime::ASM::b(.L_803E2690);
RUNTIME_PPC_JUMP_LABEL(.L_803E24CC, 0x803E24CC) //this is a jump label
/*803E24CC 003DF2CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xe0);
/*803E24D0 003DF2D0*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*803E24D4 003DF2D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*803E24D8 003DF2D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf3);
/*803E24DC 003DF2DC*/ PPC::Runtime::ASM::beq(.L_803E259C);
/*803E24E0 003DF2E0*/ PPC::Runtime::ASM::bge(.L_803E24F4);
/*803E24E4 003DF2E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf1);
/*803E24E8 003DF2E8*/ PPC::Runtime::ASM::beq(.L_803E2538);
/*803E24EC 003DF2EC*/ PPC::Runtime::ASM::bge(.L_803E2500);
/*803E24F0 003DF2F0*/ PPC::Runtime::ASM::b(.L_803E259C);
RUNTIME_PPC_JUMP_LABEL(.L_803E24F4, 0x803E24F4) //this is a jump label
/*803E24F4 003DF2F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf5);
/*803E24F8 003DF2F8*/ PPC::Runtime::ASM::bge(.L_803E259C);
/*803E24FC 003DF2FC*/ PPC::Runtime::ASM::b(.L_803E2538);
RUNTIME_PPC_JUMP_LABEL(.L_803E2500, 0x803E2500) //this is a jump label
/*803E2500 003DF300*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803E2504 003DF304*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803E2508 003DF308*/ PPC::Runtime::ASM::lis(context->r4, 0x1062);
/*803E250C 003DF30C*/ PPC::Runtime::ASM::lis(context->r3, fn_TimeoutHandler @ Get_MemoryOffset_HighBit);
/*803E2510 003DF310*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*803E2514 003DF314*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4dd3);
/*803E2518 003DF318*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r4, context->r0);
/*803E251C 003DF31C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 6);
/*803E2520 003DF320*/ PPC::Runtime::ASM::mulli(context->r6, context->r0, 0x64);
/*803E2524 003DF324*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_TimeoutHandler @ Get_MemoryOffset_LowBit);
/*803E2528 003DF328*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xe0);
/*803E252C 003DF32C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803E2530 003DF330*/ PPC::Runtime::ASM::bl(OSSetAlarm);
/*803E2534 003DF334*/ PPC::Runtime::ASM::b(.L_803E259C);
RUNTIME_PPC_JUMP_LABEL(.L_803E2538, 0x803E2538) //this is a jump label
/*803E2538 003DF338*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803E253C 003DF33C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803E2540 003DF340*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803E2544 003DF344*/ PPC::Runtime::ASM::lis(context->r3, fn_TimeoutHandler @ Get_MemoryOffset_HighBit);
/*803E2548 003DF348*/ PPC::Runtime::ASM::srawi(context->r9, context->r4, 13);
/*803E254C 003DF34C*/ PPC::Runtime::ASM::srwi(context->r7, context->r0, 2);
/*803E2550 003DF350*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803E2554 003DF354*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E2558 003DF358*/ PPC::Runtime::ASM::mullw(context->r8, context->r4, context->r0);
/*803E255C 003DF35C*/ PPC::Runtime::ASM::mulhwu(context->r6, context->r7, context->r0);
/*803E2560 003DF360*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r6);
/*803E2564 003DF364*/ PPC::Runtime::ASM::mullw(context->r5, context->r7, context->r0);
/*803E2568 003DF368*/ PPC::Runtime::ASM::addze(context->r9, context->r9);
/*803E256C 003DF36C*/ PPC::Runtime::ASM::mullw(context->r6, context->r7, context->r4);
/*803E2570 003DF370*/ PPC::Runtime::ASM::srawi(context->r0, context->r9, 31);
/*803E2574 003DF374*/ PPC::Runtime::ASM::mullw(context->r4, context->r0, context->r5);
/*803E2578 003DF378*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r9, context->r5);
/*803E257C 003DF37C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_TimeoutHandler @ Get_MemoryOffset_LowBit);
/*803E2580 003DF380*/ PPC::Runtime::ASM::add(context->r3, context->r8, context->r6);
/*803E2584 003DF384*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803E2588 003DF388*/ PPC::Runtime::ASM::mullw(context->r0, context->r9, context->r3);
/*803E258C 003DF38C*/ PPC::Runtime::ASM::mullw(context->r6, context->r9, context->r5);
/*803E2590 003DF390*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xe0);
/*803E2594 003DF394*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*803E2598 003DF398*/ PPC::Runtime::ASM::bl(OSSetAlarm);
RUNTIME_PPC_JUMP_LABEL(.L_803E259C, 0x803E259C) //this is a jump label
/*803E259C 003DF39C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*803E25A0 003DF3A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E25A4 003DF3A4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x94);
/*803E25A8 003DF3A8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803E25AC 003DF3AC*/ PPC::Runtime::ASM::bl(fn_EXIImmEx);
/*803E25B0 003DF3B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E25B4 003DF3B4*/ PPC::Runtime::ASM::bne(.L_803E25D0);
/*803E25B8 003DF3B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E25BC 003DF3BC*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803E25C0 003DF3C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E25C4 003DF3C4*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803E25C8 003DF3C8*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E25CC 003DF3CC*/ PPC::Runtime::ASM::b(.L_803E2690);
RUNTIME_PPC_JUMP_LABEL(.L_803E25D0, 0x803E25D0) //this is a jump label
/*803E25D0 003DF3D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*803E25D4 003DF3D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x52);
/*803E25D8 003DF3D8*/ PPC::Runtime::ASM::bne(.L_803E2614);
/*803E25DC 003DF3DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*803E25E0 003DF3E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E25E4 003DF3E4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*803E25E8 003DF3E8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*803E25EC 003DF3EC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x200);
/*803E25F0 003DF3F0*/ PPC::Runtime::ASM::bl(fn_EXIImmEx);
/*803E25F4 003DF3F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E25F8 003DF3F8*/ PPC::Runtime::ASM::bne(.L_803E2614);
/*803E25FC 003DF3FC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2600 003DF400*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803E2604 003DF404*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2608 003DF408*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803E260C 003DF40C*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E2610 003DF410*/ PPC::Runtime::ASM::b(.L_803E2690);
RUNTIME_PPC_JUMP_LABEL(.L_803E2614, 0x803E2614) //this is a jump label
/*803E2614 003DF414*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*803E2618 003DF418*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*803E261C 003DF41C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*803E2620 003DF420*/ PPC::Runtime::ASM::bne(.L_803E263C);
/*803E2624 003DF424*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2628 003DF428*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803E262C 003DF42C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2630 003DF430*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803E2634 003DF434*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E2638 003DF438*/ PPC::Runtime::ASM::b(.L_803E2690);
RUNTIME_PPC_JUMP_LABEL(.L_803E263C, 0x803E263C) //this is a jump label
/*803E263C 003DF43C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*803E2640 003DF440*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x52);
/*803E2644 003DF444*/ PPC::Runtime::ASM::bne(.L_803E2650);
/*803E2648 003DF448*/ PPC::Runtime::ASM::li(context->r5, 0x200);
/*803E264C 003DF44C*/ PPC::Runtime::ASM::b(.L_803E2654);
RUNTIME_PPC_JUMP_LABEL(.L_803E2650, 0x803E2650) //this is a jump label
/*803E2650 003DF450*/ PPC::Runtime::ASM::li(context->r5, 0x80);
RUNTIME_PPC_JUMP_LABEL(.L_803E2654, 0x803E2654) //this is a jump label
/*803E2654 003DF454*/ PPC::Runtime::ASM::lis(context->r3, fn___CARDTxHandler @ Get_MemoryOffset_HighBit);
/*803E2658 003DF458*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*803E265C 003DF45C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn___CARDTxHandler @ Get_MemoryOffset_LowBit);
/*803E2660 003DF460*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*803E2664 003DF464*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2668 003DF468*/ PPC::Runtime::ASM::bl(EXIDma);
/*803E266C 003DF46C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E2670 003DF470*/ PPC::Runtime::ASM::bne(.L_803E268C);
/*803E2674 003DF474*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2678 003DF478*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*803E267C 003DF47C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803E2680 003DF480*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*803E2684 003DF484*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/*803E2688 003DF488*/ PPC::Runtime::ASM::b(.L_803E2690);
RUNTIME_PPC_JUMP_LABEL(.L_803E268C, 0x803E268C) //this is a jump label
/*803E268C 003DF48C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E2690, 0x803E2690) //this is a jump label
/*803E2690 003DF490*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E2694 003DF494*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E2698 003DF498*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E269C 003DF49C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E26A0 003DF4A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E26A4 003DF4A4*/ PPC::Runtime::ASM::blr();
}