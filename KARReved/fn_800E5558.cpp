//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8024A608.hpp"



void fn_800E5558(PPC::Runtime::GCContext* context)
{
/*800E5558 000E2358*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800E555C 000E235C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E5560 000E2360*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800E5564 000E2364*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800E5568 000E2368*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800E556C 000E236C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800E5570 000E2370*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800E5574 000E2374*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E5578 000E2378*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800E557C 000E237C*/ PPC::Runtime::ASM::bne(.L_800E5590);
/*800E5580 000E2380*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6138 @ Get_MemoryOffset_SDA21);
/*800E5584 000E2384*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*800E5588 000E2388*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6140 @ Get_MemoryOffset_SDA21);
/*800E558C 000E238C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E5590, 0x800E5590) //this is a jump label
/*800E5590 000E2390*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800E5594 000E2394*/ PPC::Runtime::ASM::beq(.L_800E55D8);
/*800E5598 000E2398*/ PPC::Runtime::ASM::bne(.L_800E55AC);
/*800E559C 000E239C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6138 @ Get_MemoryOffset_SDA21);
/*800E55A0 000E23A0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800E55A4 000E23A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6140 @ Get_MemoryOffset_SDA21);
/*800E55A8 000E23A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E55AC, 0x800E55AC) //this is a jump label
/*800E55AC 000E23AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800E55B0 000E23B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800E55B4 000E23B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800E55B8 000E23B8*/ PPC::Runtime::ASM::bne(.L_800E55C8);
/*800E55BC 000E23BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800E55C0 000E23C0*/ PPC::Runtime::ASM::beq(.L_800E55C8);
/*800E55C4 000E23C4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E55C8, 0x800E55C8) //this is a jump label
/*800E55C8 000E23C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E55CC 000E23CC*/ PPC::Runtime::ASM::beq(.L_800E55D8);
/*800E55D0 000E23D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E55D4 000E23D4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_800E55D8, 0x800E55D8) //this is a jump label
/*800E55D8 000E23D8*/ PPC::Runtime::ASM::lis(context->r3, StructValues_82 @ Get_MemoryOffset_HighBit);
/*800E55DC 000E23DC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x44);
/*800E55E0 000E23E0*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_82 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*800E55E4 000E23E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E55E8 000E23E8*/ PPC::Runtime::ASM::bne(.L_800E55F4);
/*800E55EC 000E23EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800E55F0 000E23F0*/ PPC::Runtime::ASM::b(.L_800E55F8);
RUNTIME_PPC_JUMP_LABEL(.L_800E55F4, 0x800E55F4) //this is a jump label
/*800E55F4 000E23F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800E55F8, 0x800E55F8) //this is a jump label
/*800E55F8 000E23F8*/ PPC::Runtime::ASM::lis(context->r3, StructValues_82 @ Get_MemoryOffset_HighBit);
/*800E55FC 000E23FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E5600 000E2400*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructValues_82 @ Get_MemoryOffset_LowBit);
/*800E5604 000E2404*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E5608 000E2408*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E560C 000E240C*/ PPC::Runtime::ASM::bne(.L_800E5618);
/*800E5610 000E2410*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800E5614 000E2414*/ PPC::Runtime::ASM::b(.L_800E561C);
RUNTIME_PPC_JUMP_LABEL(.L_800E5618, 0x800E5618) //this is a jump label
/*800E5618 000E2418*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800E561C, 0x800E561C) //this is a jump label
/*800E561C 000E241C*/ PPC::Runtime::ASM::lis(context->r3, StructValues_82 @ Get_MemoryOffset_HighBit);
/*800E5620 000E2420*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E5624 000E2424*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructValues_82 @ Get_MemoryOffset_LowBit);
/*800E5628 000E2428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E562C 000E242C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E5630 000E2430*/ PPC::Runtime::ASM::bne(.L_800E563C);
/*800E5634 000E2434*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800E5638 000E2438*/ PPC::Runtime::ASM::b(.L_800E5640);
RUNTIME_PPC_JUMP_LABEL(.L_800E563C, 0x800E563C) //this is a jump label
/*800E563C 000E243C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800E5640, 0x800E5640) //this is a jump label
/*800E5640 000E2440*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E5644 000E2444*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E5648 000E2448*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800E564C 000E244C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x4);
/*800E5650 000E2450*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*800E5654 000E2454*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800E5658 000E2458*/ PPC::Runtime::ASM::lis(context->r3, StructValues_82 @ Get_MemoryOffset_HighBit);
/*800E565C 000E245C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800E5660 000E2460*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructValues_82 @ Get_MemoryOffset_LowBit);
/*800E5664 000E2464*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0xc);
/*800E5668 000E2468*/ PPC::Runtime::ASM::li(context->r27, 0x1);
/*800E566C 000E246C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800E5670 000E2470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800E5674 000E2474*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800E5678 000E2478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800E567C, 0x800E567C) //this is a jump label
/*800E567C 000E247C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E5680 000E2480*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E5684 000E2484*/ PPC::Runtime::ASM::bne(.L_800E5690);
/*800E5688 000E2488*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800E568C 000E248C*/ PPC::Runtime::ASM::b(.L_800E5694);
RUNTIME_PPC_JUMP_LABEL(.L_800E5690, 0x800E5690) //this is a jump label
/*800E5690 000E2490*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800E5694, 0x800E5694) //this is a jump label
/*800E5694 000E2494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800E5698 000E2498*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E569C 000E249C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E56A0 000E24A0*/ PPC::Runtime::ASM::bne(.L_800E56AC);
/*800E56A4 000E24A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*800E56A8 000E24A8*/ PPC::Runtime::ASM::b(.L_800E56B0);
RUNTIME_PPC_JUMP_LABEL(.L_800E56AC, 0x800E56AC) //this is a jump label
/*800E56AC 000E24AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800E56B0, 0x800E56B0) //this is a jump label
/*800E56B0 000E24B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800E56B4 000E24B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E56B8 000E24B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E56BC 000E24BC*/ PPC::Runtime::ASM::bne(.L_800E56C8);
/*800E56C0 000E24C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*800E56C4 000E24C4*/ PPC::Runtime::ASM::b(.L_800E56CC);
RUNTIME_PPC_JUMP_LABEL(.L_800E56C8, 0x800E56C8) //this is a jump label
/*800E56C8 000E24C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800E56CC, 0x800E56CC) //this is a jump label
/*800E56CC 000E24CC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800E56D0 000E24D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E56D4 000E24D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E56D8 000E24D8*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*800E56DC 000E24DC*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*800E56E0 000E24E0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4);
/*800E56E4 000E24E4*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10);
/*800E56E8 000E24E8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*800E56EC 000E24EC*/ PPC::Runtime::ASM::bl(fn_8024A608);
/*800E56F0 000E24F0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*800E56F4 000E24F4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0xc);
/*800E56F8 000E24F8*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x8);
/*800E56FC 000E24FC*/ PPC::Runtime::ASM::blt(.L_800E567C);
/*800E5700 000E2500*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800E5704 000E2504*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800E5708 000E2508*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800E570C 000E250C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF720 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E5710 000E2510*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f5);
/*800E5714 000E2514*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E5718 000E2518*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f3);
/*800E571C 000E251C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800E5720 000E2520*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800E5724 000E2524*/ PPC::Runtime::ASM::fadds(context->f0, context->f5, context->f2);
/*800E5728 000E2528*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f1);
/*800E572C 000E252C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E5730 000E2530*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f3);
/*800E5734 000E2534*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*800E5738 000E2538*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800E573C 000E253C*/ PPC::Runtime::ASM::fsubs(context->f4, context->f5, context->f4);
/*800E5740 000E2540*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E5744 000E2544*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E5748 000E2548*/ PPC::Runtime::ASM::fmuls(context->f1, context->f4, context->f3);
/*800E574C 000E254C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E5750 000E2550*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E5754 000E2554*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*800E5758 000E2558*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800E575C 000E255C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E5760 000E2560*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800E5764 000E2564*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*800E5768 000E2568*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800E576C 000E256C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800E5770 000E2570*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800E5774 000E2574*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*800E5778 000E2578*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800E577C 000E257C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E5780 000E2580*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800E5784 000E2584*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800E5788 000E2588*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800E578C 000E258C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E5790 000E2590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800E5794 000E2594*/ PPC::Runtime::ASM::blr();
}