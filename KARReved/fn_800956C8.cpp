//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800CF058.hpp"
#include "fn_800D1D3C.hpp"
#include "fn_800CF058.hpp"



void fn_800956C8(PPC::Runtime::GCContext* context)
{
/*800956C8 000924C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800956CC 000924CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800956D0 000924D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800956D4 000924D4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800956D8 000924D8*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*800956DC 000924DC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD674 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800956E0 000924E0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800956E4 000924E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_80553C00 @ Get_MemoryOffset_HighBit);
/*800956E8 000924E8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*800956EC 000924EC*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800956F0 000924F0*/ PPC::Runtime::ASM::mr(context->r23, context->r31);
/*800956F4 000924F4*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*800956F8 000924F8*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*800956FC 000924FC*/ PPC::Runtime::ASM::addi(context->r25, context->r5, 0x4);
/*80095700 00092500*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_80553C00 @ Get_MemoryOffset_LowBit);
/*80095704 00092504*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80095708, 0x80095708) //this is a jump label
/*80095708 00092508*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009570C 0009250C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r23);
/*80095710 00092510*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80095714 00092514*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80095718 00092518*/ PPC::Runtime::ASM::beq(.L_80095730);
/*8009571C 0009251C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80095720 00092520*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80095724 00092524*/ PPC::Runtime::ASM::bne(.L_80095730);
/*80095728 00092528*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8009572C 0009252C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80095730, 0x80095730) //this is a jump label
/*80095730 00092530*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095734 00092534*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80095738 00092538*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x100);
/*8009573C 0009253C*/ PPC::Runtime::ASM::addi(context->r0, context->r23, 0x4);
/*80095740 00092540*/ PPC::Runtime::ASM::stwx(context->r29, context->r3, context->r23);
/*80095744 00092544*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x8);
/*80095748 00092548*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009574C 0009254C*/ PPC::Runtime::ASM::stwx(context->r28, context->r3, context->r0);
/*80095750 00092550*/ PPC::Runtime::ASM::blt(.L_80095708);
/*80095754 00092554*/ PPC::Runtime::ASM::lis(context->r5, lbl_80553C00 @ Get_MemoryOffset_HighBit);
/*80095758 00092558*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180553C9C @ Get_MemoryOffset_HighBit);
/*8009575C 0009255C*/ PPC::Runtime::ASM::lis(context->r3, BLOCK_OF_NULL_2 @ Get_MemoryOffset_HighBit);
/*80095760 00092560*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*80095764 00092564*/ PPC::Runtime::ASM::addi(context->r30, context->r5, lbl_80553C00 @ Get_MemoryOffset_LowBit);
/*80095768 00092568*/ PPC::Runtime::ASM::addi(context->r28, context->r4, STRUCT_BYTE4_COUNT_180553C9C @ Get_MemoryOffset_LowBit);
/*8009576C 0009256C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, BLOCK_OF_NULL_2 @ Get_MemoryOffset_LowBit);
/*80095770 00092570*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*80095774 00092574*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80095778 00092578*/ PPC::Runtime::ASM::subi(context->r5, context->r28, 0x4);
/*8009577C 0009257C*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x4);
/*80095780 00092580*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80095784, 0x80095784) //this is a jump label
/*80095784 00092584*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80095788 00092588*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8009578C 0009258C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80095790 00092590*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80095794 00092594*/ PPC::Runtime::ASM::bdnz(.L_80095784);
/*80095798 00092598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8009579C 0009259C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800957A0 000925A0*/ PPC::Runtime::ASM::bl(fn_800CF058);
/*800957A4 000925A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800957A8 000925A8*/ PPC::Runtime::ASM::bgt(.L_800957B8);
/*800957AC 000925AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r28));
/*800957B0 000925B0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x3);
/*800957B4 000925B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800957B8, 0x800957B8) //this is a jump label
/*800957B8 000925B8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553C00 @ Get_MemoryOffset_HighBit);
/*800957BC 000925BC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800957C0 000925C0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80553C00 @ Get_MemoryOffset_LowBit);
/*800957C4 000925C4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800957C8 000925C8*/ PPC::Runtime::ASM::b(.L_800958C4);
RUNTIME_PPC_JUMP_LABEL(.L_800957CC, 0x800957CC) //this is a jump label
/*800957CC 000925CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800957D0 000925D0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800957D4 000925D4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800957D8 000925D8*/ PPC::Runtime::ASM::stwx(context->r3, context->r4, context->r29);
/*800957DC 000925DC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800957E0 000925E0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r29);
/*800957E4 000925E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800957E8 000925E8*/ PPC::Runtime::ASM::bne(.L_800957F4);
/*800957EC 000925EC*/ PPC::Runtime::ASM::li(context->r26, 0x8);
/*800957F0 000925F0*/ PPC::Runtime::ASM::b(.L_800958CC);
RUNTIME_PPC_JUMP_LABEL(.L_800957F4, 0x800957F4) //this is a jump label
/*800957F4 000925F4*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*800957F8 000925F8*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x4);
/*800957FC 000925FC*/ PPC::Runtime::ASM::subi(context->r4, context->r25, 0x4);
/*80095800 00092600*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80095804, 0x80095804) //this is a jump label
/*80095804 00092604*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80095808 00092608*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8009580C 0009260C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80095810 00092610*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80095814 00092614*/ PPC::Runtime::ASM::bdnz(.L_80095804);
/*80095818 00092618*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8009581C 0009261C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x4);
/*80095820 00092620*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80095824 00092624*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80095828 00092628*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009582C 0009262C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*80095830 00092630*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095834 00092634*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r29);
/*80095838 00092638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*8009583C 0009263C*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x100);
/*80095840 00092640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*80095844 00092644*/ PPC::Runtime::ASM::bl(fn_800D1D3C);
/*80095848 00092648*/ PPC::Runtime::ASM::cmpw(context->r24, context->r3);
/*8009584C 0009264C*/ PPC::Runtime::ASM::bne(.L_800958B8);
/*80095850 00092650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r25));
/* 80095854 00092654  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80095858 00092658*/ PPC::Runtime::ASM::bne(.L_80095884);
/*8009585C 0009265C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*80095860 00092660*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD67C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095864 00092664*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*80095868 00092668*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*8009586C 0009266C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80095870 00092670*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80095874 00092674*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80095878 00092678*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8009587C 0009267C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f2);
/*80095880 00092680*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_80095884, 0x80095884) //this is a jump label
/*80095884 00092684*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r25));
/*80095888 00092688*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*8009588C 0009268C*/ PPC::Runtime::ASM::bne(.L_800958B8);
/*80095890 00092690*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r25));
/*80095894 00092694*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD67C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80095898 00092698*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*8009589C 0009269C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r25));
/*800958A0 000926A0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800958A4 000926A4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800958A8 000926A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800958AC 000926AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*800958B0 000926B0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f0, context->f2);
/*800958B4 000926B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_800958B8, 0x800958B8) //this is a jump label
/*800958B8 000926B8*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x9c);
/*800958BC 000926BC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*800958C0 000926C0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800958C4, 0x800958C4) //this is a jump label
/*800958C4 000926C4*/ PPC::Runtime::ASM::cmpw(context->r28, context->r27);
/*800958C8 000926C8*/ PPC::Runtime::ASM::blt(.L_800957CC);
RUNTIME_PPC_JUMP_LABEL(.L_800958CC, 0x800958CC) //this is a jump label
/*800958CC 000926CC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800958D0 000926D0*/ PPC::Runtime::ASM::li(context->r0, 0x20);
/*800958D4 000926D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800958D8 000926D8*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*800958DC 000926DC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800958E0, 0x800958E0) //this is a jump label
/*800958E0 000926E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800958E4 000926E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800958E8 000926E8*/ PPC::Runtime::ASM::bne(.L_80095968);
/*800958EC 000926EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800958F0 000926F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*800958F4 000926F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800958F8 000926F8*/ PPC::Runtime::ASM::bne(.L_80095968);
/*800958FC 000926FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80095900 00092700*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095904 00092704*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095908 00092708*/ PPC::Runtime::ASM::bne(.L_80095968);
/*8009590C 0009270C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80095910 00092710*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095914 00092714*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095918 00092718*/ PPC::Runtime::ASM::bne(.L_80095968);
/*8009591C 0009271C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80095920 00092720*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095924 00092724*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095928 00092728*/ PPC::Runtime::ASM::bne(.L_80095968);
/*8009592C 0009272C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80095930 00092730*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095934 00092734*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095938 00092738*/ PPC::Runtime::ASM::bne(.L_80095968);
/*8009593C 0009273C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*80095940 00092740*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095944 00092744*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095948 00092748*/ PPC::Runtime::ASM::bne(.L_80095968);
/*8009594C 0009274C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80095950 00092750*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095954 00092754*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80095958 00092758*/ PPC::Runtime::ASM::bne(.L_80095968);
/*8009595C 0009275C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x40);
/*80095960 00092760*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80095964 00092764*/ PPC::Runtime::ASM::bdnz(.L_800958E0);
RUNTIME_PPC_JUMP_LABEL(.L_80095968, 0x80095968) //this is a jump label
/*80095968 00092768*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x100);
/*8009596C 0009276C*/ PPC::Runtime::ASM::bne(.L_800959D0);
/*80095970 00092770*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180553C9C @ Get_MemoryOffset_HighBit);
/*80095974 00092774*/ PPC::Runtime::ASM::lis(context->r3, BLOCK_OF_NULL_2 @ Get_MemoryOffset_HighBit);
/*80095978 00092778*/ PPC::Runtime::ASM::addi(context->r24, context->r4, STRUCT_BYTE4_COUNT_180553C9C @ Get_MemoryOffset_LowBit);
/*8009597C 0009277C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80095980 00092780*/ PPC::Runtime::ASM::addi(context->r3, context->r3, BLOCK_OF_NULL_2 @ Get_MemoryOffset_LowBit);
/*80095984 00092784*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*80095988 00092788*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*8009598C 0009278C*/ PPC::Runtime::ASM::subi(context->r5, context->r24, 0x4);
/*80095990 00092790*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x4);
/*80095994 00092794*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80095998, 0x80095998) //this is a jump label
/*80095998 00092798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8009599C 0009279C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800959A0 000927A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800959A4 000927A4*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800959A8 000927A8*/ PPC::Runtime::ASM::bdnz(.L_80095998);
/*800959AC 000927AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800959B0 000927B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800959B4 000927B4*/ PPC::Runtime::ASM::bl(fn_800CF058);
/*800959B8 000927B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800959BC 000927BC*/ PPC::Runtime::ASM::bgt(.L_80095A10);
/*800959C0 000927C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r24));
/*800959C4 000927C4*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x3);
/*800959C8 000927C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r24));
/*800959CC 000927CC*/ PPC::Runtime::ASM::b(.L_80095A10);
RUNTIME_PPC_JUMP_LABEL(.L_800959D0, 0x800959D0) //this is a jump label
/*800959D0 000927D0*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*800959D4 000927D4*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 3);
/*800959D8 000927D8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553C9C @ Get_MemoryOffset_HighBit);
/*800959DC 000927DC*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*800959E0 000927E0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r4);
/*800959E4 000927E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180553C9C @ Get_MemoryOffset_LowBit);
/*800959E8 000927E8*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x4);
/*800959EC 000927EC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4);
/*800959F0 000927F0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800959F4, 0x800959F4) //this is a jump label
/*800959F4 000927F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800959F8 000927F8*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800959FC 000927FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80095A00 00092800*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80095A04 00092804*/ PPC::Runtime::ASM::bdnz(.L_800959F4);
/*80095A08 00092808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80095A0C 0009280C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80095A10, 0x80095A10) //this is a jump label
/*80095A10 00092810*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80095A14 00092814*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80095A18 00092818*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*80095A1C 0009281C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80095A20 00092820*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80095A24 00092824*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80095A28 00092828*/ PPC::Runtime::ASM::blr();
}