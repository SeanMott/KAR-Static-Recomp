//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802889EC.hpp"



void fn_802B563C(PPC::Runtime::GCContext* context)
{
/*802B563C 002B243C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802B5640 002B2440*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B5644 002B2444*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B5648 002B2448*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*802B564C 002B244C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*802B5650 002B2450*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802B5654 002B2454*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802B5658 002B2458*/ PPC::Runtime::ASM::addi(context->r0, context->r6, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802B565C 002B245C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*802B5660 002B2460*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B5664 002B2464*/ PPC::Runtime::ASM::lis(context->r29, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802B5668 002B2468*/ PPC::Runtime::ASM::addi(context->r0, context->r29, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802B566C 002B246C*/ PPC::Runtime::ASM::lis(context->r12, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802B5670 002B2470*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802B5674 002B2474*/ PPC::Runtime::ASM::addi(context->r29, context->r12, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802B5678 002B2478*/ PPC::Runtime::ASM::lis(context->r11, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802B567C 002B247C*/ PPC::Runtime::ASM::lis(context->r10, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802B5680 002B2480*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802B5684 002B2484*/ PPC::Runtime::ASM::addi(context->r12, context->r11, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802B5688 002B2488*/ PPC::Runtime::ASM::addi(context->r11, context->r10, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802B568C 002B248C*/ PPC::Runtime::ASM::lis(context->r9, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802B5690 002B2490*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802B5694 002B2494*/ PPC::Runtime::ASM::addi(context->r27, context->r30, 0x28);
/*802B5698 002B2498*/ PPC::Runtime::ASM::addi(context->r10, context->r9, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802B569C 002B249C*/ PPC::Runtime::ASM::lis(context->r8, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802B56A0 002B24A0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802B56A4 002B24A4*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802B56A8 002B24A8*/ PPC::Runtime::ASM::lis(context->r7, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802B56AC 002B24AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3474 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B56B0 002B24B0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802B56B4 002B24B4*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802B56B8 002B24B8*/ PPC::Runtime::ASM::li(context->r7, 0xff);
/*802B56BC 002B24BC*/ PPC::Runtime::ASM::lis(context->r6, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802B56C0 002B24C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B56C4 002B24C4*/ PPC::Runtime::ASM::addi(context->r0, context->r6, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802B56C8 002B24C8*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*802B56CC 002B24CC*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*802B56D0 002B24D0*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*802B56D4 002B24D4*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802B56D8 002B24D8*/ PPC::Runtime::ASM::sth(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*802B56DC 002B24DC*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802B56E0 002B24E0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802B56E4 002B24E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B56E8 002B24E8*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802B56EC 002B24EC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*802B56F0 002B24F0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802B56F4 002B24F4*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802B56F8 002B24F8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B56FC 002B24FC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802B5700 002B2500*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802B5704 002B2504*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802B5708 002B2508*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35, context->r30));
/*802B570C 002B250C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r30));
/*802B5710 002B2510*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x37, context->r30));
/*802B5714 002B2514*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802B5718 002B2518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802B571C 002B251C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802B5720 002B2520*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802B5724 002B2524*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35, context->r30));
/*802B5728 002B2528*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r30));
/*802B572C 002B252C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x37, context->r30));
/*802B5730 002B2530*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*802B5734 002B2534*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B5738 002B2538*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r12));
/*802B573C 002B253C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802B5740 002B2540*/ PPC::Runtime::ASM::bctrl();
/*802B5744 002B2544*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802B5748 002B2548*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802B574C 002B254C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802B5750 002B2550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802B5754 002B2554*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802B5758 002B2558*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C6674 @ Get_MemoryOffset_HighBit);
/*802B575C 002B255C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802B5760 002B2560*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*802B5764 002B2564*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x48);
/*802B5768 002B2568*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C6674 @ Get_MemoryOffset_LowBit);
/*802B576C 002B256C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802B5770 002B2570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*802B5774 002B2574*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*802B5778 002B2578*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*802B577C 002B257C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*802B5780 002B2580*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B5784 002B2584*/ PPC::Runtime::ASM::beq(.L_802B5790);
/*802B5788 002B2588*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C6668 @ Get_MemoryOffset_HighBit);
/*802B578C 002B258C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C6668 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_802B5790, 0x802B5790) //this is a jump label
/*802B5790 002B2590*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802B5794 002B2594*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B5798 002B2598*/ PPC::Runtime::ASM::beq(.L_802B57C8);
/*802B579C 002B259C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B57A0 002B25A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B57A4 002B25A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D84B0 @ Get_MemoryOffset_SDA21);
/*802B57A8 002B25A8*/ PPC::Runtime::ASM::li(context->r6, lbl_805D84A8 @ Get_MemoryOffset_SDA21);
/*802B57AC 002B25AC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B57B0 002B25B0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B57B4 002B25B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802B57B8 002B25B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802B57BC 002B25BC*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802B57C0 002B25C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802B57C4 002B25C4*/ PPC::Runtime::ASM::b(.L_802B57CC);
RUNTIME_PPC_JUMP_LABEL(.L_802B57C8, 0x802B57C8) //this is a jump label
/*802B57C8 002B25C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802B57CC, 0x802B57CC) //this is a jump label
/*802B57CC 002B25CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*802B57D0 002B25D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802B57D4 002B25D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3478 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B57D8 002B25D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802B57DC 002B25DC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*802B57E0 002B25E0*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*802B57E4 002B25E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B57E8 002B25E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B57EC 002B25EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802B57F0 002B25F0*/ PPC::Runtime::ASM::blr();
}