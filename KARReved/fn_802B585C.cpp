//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"



void fn_802B585C(PPC::Runtime::GCContext* context)
{
/*802B585C 002B265C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802B5860 002B2660*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B5864 002B2664*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802B5868 002B2668*/ PPC::Runtime::ASM::lis(context->r6, lbl_804F6134 @ Get_MemoryOffset_HighBit);
/*802B586C 002B266C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B5870 002B2670*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802B5874 002B2674*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802B5878 002B2678*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802B587C 002B267C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802B5880 002B2680*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802B5884 002B2684*/ PPC::Runtime::ASM::addi(context->r6, context->r6, lbl_804F6134 @ Get_MemoryOffset_LowBit);
/*802B5888 002B2688*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802B588C 002B268C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B5890 002B2690*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802B5894 002B2694*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B5898 002B2698*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802B589C 002B269C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802B58A0 002B26A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802B58A4 002B26A4*/ PPC::Runtime::ASM::mr(context->r9, context->r29);
/*802B58A8 002B26A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802B58AC 002B26AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F60F0 @ Get_MemoryOffset_HighBit);
/*802B58B0 002B26B0*/ PPC::Runtime::ASM::li(context->r0, String_ "ba" Get_MemoryOffset_SDA21);
/*802B58B4 002B26B4*/ PPC::Runtime::ASM::mr(context->r31, context->r9);
/*802B58B8 002B26B8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802B58BC 002B26BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F60F0 @ Get_MemoryOffset_LowBit);
/*802B58C0 002B26C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B58C4 002B26C4*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x28);
/*802B58C8 002B26C8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802B58CC 002B26CC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*802B58D0 002B26D0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*802B58D4 002B26D4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*802B58D8 002B26D8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802B58DC 002B26DC*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*802B58E0 002B26E0*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r29));
/*802B58E4 002B26E4*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*802B58E8 002B26E8*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r29));
/*802B58EC 002B26EC*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*802B58F0 002B26F0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802B58F4 002B26F4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*802B58F8 002B26F8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r9));
/*802B58FC 002B26FC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r9));
/*802B5900 002B2700*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r9));
/*802B5904 002B2704*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r9));
/*802B5908 002B2708*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r9));
/*802B590C 002B270C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r9));
/*802B5910 002B2710*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802B5914 002B2714*/ PPC::Runtime::ASM::beq(.L_802B5940);
/*802B5918 002B2718*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B591C 002B271C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B5920 002B2720*/ PPC::Runtime::ASM::li(context->r5, lbl_805D84B0 @ Get_MemoryOffset_SDA21);
/*802B5924 002B2724*/ PPC::Runtime::ASM::li(context->r6, lbl_805D84A8 @ Get_MemoryOffset_SDA21);
/*802B5928 002B2728*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B592C 002B272C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B5930 002B2730*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802B5934 002B2734*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802B5938 002B2738*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802B593C 002B273C*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_802B5940, 0x802B5940) //this is a jump label
/*802B5940 002B2740*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802B5944 002B2744*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802B5948 002B2748*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802B594C 002B274C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802B5950 002B2750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802B5954 002B2754*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802B5958 002B2758*/ PPC::Runtime::ASM::li(context->r0, String_ "carve_" Get_MemoryOffset_SDA21);
/*802B595C 002B275C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*802B5960 002B2760*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B5964 002B2764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802B5968 002B2768*/ PPC::Runtime::ASM::beq(.L_802B5998);
/*802B596C 002B276C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B5970 002B2770*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B5974 002B2774*/ PPC::Runtime::ASM::li(context->r5, lbl_805D84B0 @ Get_MemoryOffset_SDA21);
/*802B5978 002B2778*/ PPC::Runtime::ASM::li(context->r6, lbl_805D84A8 @ Get_MemoryOffset_SDA21);
/*802B597C 002B277C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B5980 002B2780*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B5984 002B2784*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802B5988 002B2788*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802B598C 002B278C*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802B5990 002B2790*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802B5994 002B2794*/ PPC::Runtime::ASM::b(.L_802B599C);
RUNTIME_PPC_JUMP_LABEL(.L_802B5998, 0x802B5998) //this is a jump label
/*802B5998 002B2798*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802B599C, 0x802B599C) //this is a jump label
/*802B599C 002B279C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*802B59A0 002B27A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802B59A4 002B27A4*/ PPC::Runtime::ASM::li(context->r0, lbl_805D860C @ Get_MemoryOffset_SDA21);
/*802B59A8 002B27A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3470 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B59AC 002B27AC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*802B59B0 002B27B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B59B4 002B27B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3474 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B59B8 002B27B8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r30));
/*802B59BC 002B27BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*802B59C0 002B27C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*802B59C4 002B27C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802B59C8 002B27C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802B59CC 002B27CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B59D0 002B27D0*/ PPC::Runtime::ASM::beq(.L_802B59FC);
/*802B59D4 002B27D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B59D8 002B27D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B59DC 002B27DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D84B0 @ Get_MemoryOffset_SDA21);
/*802B59E0 002B27E0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D84A8 @ Get_MemoryOffset_SDA21);
/*802B59E4 002B27E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B59E8 002B27E8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B59EC 002B27EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802B59F0 002B27F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*802B59F4 002B27F4*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802B59F8 002B27F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_802B59FC, 0x802B59FC) //this is a jump label
/*802B59FC 002B27FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802B5A00 002B2800*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x28);
/*802B5A04 002B2804*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802B5A08 002B2808*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F6790 @ Get_MemoryOffset_HighBit);
/*802B5A0C 002B280C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F67D8 @ Get_MemoryOffset_HighBit);
/*802B5A10 002B2810*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*802B5A14 002B2814*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F67D8 @ Get_MemoryOffset_LowBit);
/*802B5A18 002B2818*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802B5A1C 002B281C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802B5A20 002B2820*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802B5A24 002B2824*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802B5A28 002B2828*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802B5A2C 002B282C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*802B5A30 002B2830*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B5A34 002B2834*/ PPC::Runtime::ASM::li(context->r0, String_ "arrow_" Get_MemoryOffset_SDA21);
/*802B5A38 002B2838*/ PPC::Runtime::ASM::addi(context->r6, context->r6, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802B5A3C 002B283C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r29));
/*802B5A40 002B2840*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F6790 @ Get_MemoryOffset_LowBit);
/*802B5A44 002B2844*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802B5A48 002B2848*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802B5A4C 002B284C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
/*802B5A50 002B2850*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B5A54 002B2854*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x54);
/*802B5A58 002B2858*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r29));
/*802B5A5C 002B285C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r29));
/*802B5A60 002B2860*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r29));
/*802B5A64 002B2864*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*802B5A68 002B2868*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/*802B5A6C 002B286C*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e, context->r29));
/*802B5A70 002B2870*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r29));
/*802B5A74 002B2874*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r29));
/*802B5A78 002B2878*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*802B5A7C 002B287C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r29));
/*802B5A80 002B2880*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*802B5A84 002B2884*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*802B5A88 002B2888*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r29));
/*802B5A8C 002B288C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B5A90 002B2890*/ PPC::Runtime::ASM::beq(.L_802B5ABC);
/*802B5A94 002B2894*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B5A98 002B2898*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B5A9C 002B289C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D84B0 @ Get_MemoryOffset_SDA21);
/*802B5AA0 002B28A0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D84A8 @ Get_MemoryOffset_SDA21);
/*802B5AA4 002B28A4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B5AA8 002B28A8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B5AAC 002B28AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802B5AB0 002B28B0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*802B5AB4 002B28B4*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802B5AB8 002B28B8*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_802B5ABC, 0x802B5ABC) //this is a jump label
/*802B5ABC 002B28BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802B5AC0 002B28C0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*802B5AC4 002B28C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802B5AC8 002B28C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802B5ACC 002B28CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802B5AD0 002B28D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802B5AD4 002B28D4*/ PPC::Runtime::ASM::li(context->r0, lbl_805D85F8 @ Get_MemoryOffset_SDA21);
/*802B5AD8 002B28D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802B5ADC 002B28DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802B5AE0 002B28E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B5AE4 002B28E4*/ PPC::Runtime::ASM::beq(.L_802B5B14);
/*802B5AE8 002B28E8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B5AEC 002B28EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802B5AF0 002B28F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D84B0 @ Get_MemoryOffset_SDA21);
/*802B5AF4 002B28F4*/ PPC::Runtime::ASM::li(context->r6, lbl_805D84A8 @ Get_MemoryOffset_SDA21);
/*802B5AF8 002B28F8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802B5AFC 002B28FC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802B5B00 002B2900*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*802B5B04 002B2904*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*802B5B08 002B2908*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*802B5B0C 002B290C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*802B5B10 002B2910*/ PPC::Runtime::ASM::b(.L_802B5B18);
RUNTIME_PPC_JUMP_LABEL(.L_802B5B14, 0x802B5B14) //this is a jump label
/*802B5B14 002B2914*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802B5B18, 0x802B5B18) //this is a jump label
/*802B5B18 002B2918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802B5B1C 002B291C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802B5B20 002B2920*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3470 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802B5B24 002B2924*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x54);
/*802B5B28 002B2928*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802B5B2C 002B292C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802B5B30 002B2930*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802B5B34 002B2934*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*802B5B38 002B2938*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802B5B3C 002B293C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802B5B40 002B2940*/ PPC::Runtime::ASM::bctrl();
/*802B5B44 002B2944*/ PPC::Runtime::ASM::li(context->r0, 0x64);
/*802B5B48 002B2948*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802B5B4C 002B294C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*802B5B50 002B2950*/ PPC::Runtime::ASM::li(context->r0, 0xc8);
/*802B5B54 002B2954*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802B5B58 002B2958*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*802B5B5C 002B295C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r29));
/*802B5B60 002B2960*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*802B5B64 002B2964*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802B5B68 002B2968*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802B5B6C 002B296C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B5B70 002B2970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802B5B74 002B2974*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B5B78 002B2978*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802B5B7C 002B297C*/ PPC::Runtime::ASM::blr();
}