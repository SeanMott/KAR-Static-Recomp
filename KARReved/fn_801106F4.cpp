//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE73C.hpp"



void fn_801106F4(PPC::Runtime::GCContext* context)
{
/*801106F4 0010D4F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801106F8 0010D4F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801106FC 0010D4FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80110700 0010D500*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80110704 0010D504*/ PPC::Runtime::ASM::bl(_savegpr_14);
/*80110708 0010D508*/ PPC::Runtime::ASM::bl(fn_800EE73C);
/*8011070C 0010D50C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110710 0010D510*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80110714 0010D514*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80110718 0010D518*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8011071C 0010D51C*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80110720 0010D520*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*80110724 0010D524*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*80110728 0010D528*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8011072C 0010D52C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110730 0010D530*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80110734 0010D534*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110738 0010D538*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8011073C 0010D53C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110740 0010D540*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*80110744 0010D544*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110748 0010D548*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*8011074C 0010D54C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110750 0010D550*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r3));
/*80110754 0010D554*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80110758, 0x80110758) //this is a jump label
/*80110758 0010D558*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011075C 0010D55C*/ PPC::Runtime::ASM::addi(context->r6, context->r10, 0x8);
/*80110760 0010D560*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80110764 0010D564*/ PPC::Runtime::ASM::addi(context->r5, context->r10, 0x38);
/*80110768 0010D568*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r6);
/*8011076C 0010D56C*/ PPC::Runtime::ASM::addi(context->r4, context->r10, 0x68);
/*80110770 0010D570*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x98);
/*80110774 0010D574*/ PPC::Runtime::ASM::addi(context->r15, context->r7, 0xf8);
/*80110778 0010D578*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011077C 0010D57C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80110780 0010D580*/ PPC::Runtime::ASM::addi(context->r16, context->r8, 0x158);
/*80110784 0010D584*/ PPC::Runtime::ASM::addi(context->r17, context->r6, 0x1);
/*80110788 0010D588*/ PPC::Runtime::ASM::stbx(context->r0, context->r11, context->r5);
/*8011078C 0010D58C*/ PPC::Runtime::ASM::addi(context->r18, context->r5, 0x1);
/*80110790 0010D590*/ PPC::Runtime::ASM::addi(context->r19, context->r7, 0x9a);
/*80110794 0010D594*/ PPC::Runtime::ASM::addi(context->r20, context->r4, 0x1);
/*80110798 0010D598*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011079C 0010D59C*/ PPC::Runtime::ASM::addi(context->r21, context->r7, 0xfa);
/*801107A0 0010D5A0*/ PPC::Runtime::ASM::addi(context->r22, context->r8, 0x15c);
/*801107A4 0010D5A4*/ PPC::Runtime::ASM::addi(context->r23, context->r6, 0x2);
/*801107A8 0010D5A8*/ PPC::Runtime::ASM::sthx(context->r0, context->r11, context->r3);
/*801107AC 0010D5AC*/ PPC::Runtime::ASM::addi(context->r24, context->r5, 0x2);
/*801107B0 0010D5B0*/ PPC::Runtime::ASM::addi(context->r25, context->r7, 0x9c);
/*801107B4 0010D5B4*/ PPC::Runtime::ASM::addi(context->r26, context->r4, 0x2);
/*801107B8 0010D5B8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801107BC 0010D5BC*/ PPC::Runtime::ASM::addi(context->r27, context->r7, 0xfc);
/*801107C0 0010D5C0*/ PPC::Runtime::ASM::addi(context->r28, context->r8, 0x160);
/*801107C4 0010D5C4*/ PPC::Runtime::ASM::addi(context->r29, context->r6, 0x3);
/*801107C8 0010D5C8*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r4);
/*801107CC 0010D5CC*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x3);
/*801107D0 0010D5D0*/ PPC::Runtime::ASM::addi(context->r12, context->r7, 0x9e);
/*801107D4 0010D5D4*/ PPC::Runtime::ASM::addi(context->r11, context->r4, 0x3);
/*801107D8 0010D5D8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801107DC 0010D5DC*/ PPC::Runtime::ASM::addi(context->r14, context->r7, 0xfe);
/*801107E0 0010D5E0*/ PPC::Runtime::ASM::sthx(context->r9, context->r3, context->r15);
/*801107E4 0010D5E4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801107E8 0010D5E8*/ PPC::Runtime::ASM::stwx(context->r9, context->r3, context->r16);
/*801107EC 0010D5EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801107F0 0010D5F0*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r17);
/*801107F4 0010D5F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801107F8 0010D5F8*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r18);
/*801107FC 0010D5FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110800 0010D600*/ PPC::Runtime::ASM::sthx(context->r0, context->r3, context->r19);
/*80110804 0010D604*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110808 0010D608*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r20);
/*8011080C 0010D60C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110810 0010D610*/ PPC::Runtime::ASM::sthx(context->r9, context->r3, context->r21);
/*80110814 0010D614*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110818 0010D618*/ PPC::Runtime::ASM::stwx(context->r9, context->r3, context->r22);
/*8011081C 0010D61C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110820 0010D620*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r23);
/*80110824 0010D624*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110828 0010D628*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r24);
/*8011082C 0010D62C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110830 0010D630*/ PPC::Runtime::ASM::sthx(context->r0, context->r3, context->r25);
/*80110834 0010D634*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110838 0010D638*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r26);
/*8011083C 0010D63C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110840 0010D640*/ PPC::Runtime::ASM::sthx(context->r9, context->r3, context->r27);
/*80110844 0010D644*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110848 0010D648*/ PPC::Runtime::ASM::stwx(context->r9, context->r3, context->r28);
/*8011084C 0010D64C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110850 0010D650*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r29);
/*80110854 0010D654*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110858 0010D658*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r30);
/*8011085C 0010D65C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110860 0010D660*/ PPC::Runtime::ASM::sthx(context->r0, context->r3, context->r12);
/*80110864 0010D664*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110868 0010D668*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r11);
/*8011086C 0010D66C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110870 0010D670*/ PPC::Runtime::ASM::sthx(context->r9, context->r3, context->r14);
/*80110874 0010D674*/ PPC::Runtime::ASM::lwz(context->r14, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110878 0010D678*/ PPC::Runtime::ASM::addi(context->r12, context->r8, 0x164);
/*8011087C 0010D67C*/ PPC::Runtime::ASM::addi(context->r11, context->r6, 0x4);
/*80110880 0010D680*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x4);
/*80110884 0010D684*/ PPC::Runtime::ASM::stwx(context->r9, context->r14, context->r12);
/*80110888 0010D688*/ PPC::Runtime::ASM::addi(context->r29, context->r7, 0xa0);
/*8011088C 0010D68C*/ PPC::Runtime::ASM::addi(context->r27, context->r4, 0x4);
/*80110890 0010D690*/ PPC::Runtime::ASM::addi(context->r26, context->r7, 0x100);
/*80110894 0010D694*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110898 0010D698*/ PPC::Runtime::ASM::addi(context->r25, context->r8, 0x168);
/*8011089C 0010D69C*/ PPC::Runtime::ASM::addi(context->r24, context->r6, 0x5);
/*801108A0 0010D6A0*/ PPC::Runtime::ASM::addi(context->r23, context->r5, 0x5);
/*801108A4 0010D6A4*/ PPC::Runtime::ASM::stbx(context->r0, context->r12, context->r11);
/*801108A8 0010D6A8*/ PPC::Runtime::ASM::addi(context->r22, context->r7, 0xa2);
/*801108AC 0010D6AC*/ PPC::Runtime::ASM::addi(context->r21, context->r4, 0x5);
/*801108B0 0010D6B0*/ PPC::Runtime::ASM::addi(context->r15, context->r4, 0x6);
/*801108B4 0010D6B4*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801108B8 0010D6B8*/ PPC::Runtime::ASM::addi(context->r20, context->r7, 0x102);
/*801108BC 0010D6BC*/ PPC::Runtime::ASM::addi(context->r19, context->r8, 0x16c);
/*801108C0 0010D6C0*/ PPC::Runtime::ASM::addi(context->r18, context->r6, 0x6);
/*801108C4 0010D6C4*/ PPC::Runtime::ASM::stbx(context->r0, context->r11, context->r3);
/*801108C8 0010D6C8*/ PPC::Runtime::ASM::addi(context->r11, context->r6, 0x7);
/*801108CC 0010D6CC*/ PPC::Runtime::ASM::addi(context->r17, context->r5, 0x6);
/*801108D0 0010D6D0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x7);
/*801108D4 0010D6D4*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801108D8 0010D6D8*/ PPC::Runtime::ASM::addi(context->r16, context->r7, 0xa4);
/*801108DC 0010D6DC*/ PPC::Runtime::ASM::addi(context->r14, context->r7, 0x104);
/*801108E0 0010D6E0*/ PPC::Runtime::ASM::addi(context->r12, context->r8, 0x170);
/*801108E4 0010D6E4*/ PPC::Runtime::ASM::sthx(context->r0, context->r28, context->r29);
/*801108E8 0010D6E8*/ PPC::Runtime::ASM::addi(context->r3, context->r8, 0x174);
/*801108EC 0010D6EC*/ PPC::Runtime::ASM::addi(context->r5, context->r7, 0xa6);
/*801108F0 0010D6F0*/ PPC::Runtime::ASM::addi(context->r29, context->r7, 0x106);
/*801108F4 0010D6F4*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801108F8 0010D6F8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x7);
/*801108FC 0010D6FC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x10);
/*80110900 0010D700*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x20);
/*80110904 0010D704*/ PPC::Runtime::ASM::stbx(context->r0, context->r28, context->r27);
/*80110908 0010D708*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x8);
/*8011090C 0010D70C*/ PPC::Runtime::ASM::lwz(context->r27, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110910 0010D710*/ PPC::Runtime::ASM::sthx(context->r9, context->r27, context->r26);
/*80110914 0010D714*/ PPC::Runtime::ASM::lwz(context->r26, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110918 0010D718*/ PPC::Runtime::ASM::stwx(context->r9, context->r26, context->r25);
/*8011091C 0010D71C*/ PPC::Runtime::ASM::lwz(context->r25, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110920 0010D720*/ PPC::Runtime::ASM::stbx(context->r0, context->r25, context->r24);
/*80110924 0010D724*/ PPC::Runtime::ASM::lwz(context->r24, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110928 0010D728*/ PPC::Runtime::ASM::stbx(context->r0, context->r24, context->r23);
/*8011092C 0010D72C*/ PPC::Runtime::ASM::lwz(context->r23, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110930 0010D730*/ PPC::Runtime::ASM::sthx(context->r0, context->r23, context->r22);
/*80110934 0010D734*/ PPC::Runtime::ASM::lwz(context->r22, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110938 0010D738*/ PPC::Runtime::ASM::stbx(context->r0, context->r22, context->r21);
/*8011093C 0010D73C*/ PPC::Runtime::ASM::lwz(context->r21, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110940 0010D740*/ PPC::Runtime::ASM::sthx(context->r9, context->r21, context->r20);
/*80110944 0010D744*/ PPC::Runtime::ASM::lwz(context->r20, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110948 0010D748*/ PPC::Runtime::ASM::stwx(context->r9, context->r20, context->r19);
/*8011094C 0010D74C*/ PPC::Runtime::ASM::lwz(context->r19, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110950 0010D750*/ PPC::Runtime::ASM::stbx(context->r0, context->r19, context->r18);
/*80110954 0010D754*/ PPC::Runtime::ASM::lwz(context->r18, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110958 0010D758*/ PPC::Runtime::ASM::stbx(context->r0, context->r18, context->r17);
/*8011095C 0010D75C*/ PPC::Runtime::ASM::lwz(context->r17, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110960 0010D760*/ PPC::Runtime::ASM::sthx(context->r0, context->r17, context->r16);
/*80110964 0010D764*/ PPC::Runtime::ASM::lwz(context->r16, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110968 0010D768*/ PPC::Runtime::ASM::stbx(context->r0, context->r16, context->r15);
/*8011096C 0010D76C*/ PPC::Runtime::ASM::lwz(context->r15, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110970 0010D770*/ PPC::Runtime::ASM::sthx(context->r9, context->r15, context->r14);
/*80110974 0010D774*/ PPC::Runtime::ASM::lwz(context->r14, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110978 0010D778*/ PPC::Runtime::ASM::stwx(context->r9, context->r14, context->r12);
/*8011097C 0010D77C*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110980 0010D780*/ PPC::Runtime::ASM::stbx(context->r0, context->r12, context->r11);
/*80110984 0010D784*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110988 0010D788*/ PPC::Runtime::ASM::stbx(context->r0, context->r11, context->r6);
/*8011098C 0010D78C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110990 0010D790*/ PPC::Runtime::ASM::sthx(context->r0, context->r6, context->r5);
/*80110994 0010D794*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110998 0010D798*/ PPC::Runtime::ASM::stbx(context->r0, context->r5, context->r4);
/*8011099C 0010D79C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801109A0 0010D7A0*/ PPC::Runtime::ASM::sthx(context->r9, context->r4, context->r29);
/*801109A4 0010D7A4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801109A8 0010D7A8*/ PPC::Runtime::ASM::stwx(context->r9, context->r4, context->r3);
/*801109AC 0010D7AC*/ PPC::Runtime::ASM::bdnz(.L_80110758);
/*801109B0 0010D7B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801109B4 0010D7B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801109B8 0010D7B8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801109BC 0010D7BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801109C0 0010D7C0*/ PPC::Runtime::ASM::ble(.L_801109E4);
RUNTIME_PPC_JUMP_LABEL(.L_801109C4, 0x801109C4) //this is a jump label
/*801109C4 0010D7C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801109C8 0010D7C8*/ PPC::Runtime::ASM::addi(context->r0, context->r9, 0x2);
/*801109CC 0010D7CC*/ PPC::Runtime::ASM::lhax(context->r4, context->r4, context->r0);
/*801109D0 0010D7D0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*801109D4 0010D7D4*/ PPC::Runtime::ASM::ble(.L_801109DC);
/*801109D8 0010D7D8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_801109DC, 0x801109DC) //this is a jump label
/*801109DC 0010D7DC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x4);
/*801109E0 0010D7E0*/ PPC::Runtime::ASM::bdnz(.L_801109C4);
RUNTIME_PPC_JUMP_LABEL(.L_801109E4, 0x801109E4) //this is a jump label
/*801109E4 0010D7E4*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801109E8 0010D7E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801109EC 0010D7EC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801109F0 0010D7F0*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*801109F4 0010D7F4*/ PPC::Runtime::ASM::mr(context->r4, context->r7);
/*801109F8 0010D7F8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801109FC 0010D7FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80110A00 0010D800*/ PPC::Runtime::ASM::ble(.L_80110A44);
RUNTIME_PPC_JUMP_LABEL(.L_80110A04, 0x80110A04) //this is a jump label
/*80110A04 0010D804*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80110A08 0010D808*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*80110A0C 0010D80C*/ PPC::Runtime::ASM::lhax(context->r5, context->r6, context->r0);
/*80110A10 0010D810*/ PPC::Runtime::ASM::extsh.(context->r0, context->r5);
/*80110A14 0010D814*/ PPC::Runtime::ASM::ble(.L_80110A38);
/*80110A18 0010D818*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r5);
/*80110A1C 0010D81C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r8);
/*80110A20 0010D820*/ PPC::Runtime::ASM::bge(.L_80110A38);
/*80110A24 0010D824*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*80110A28 0010D828*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110A2C 0010D82C*/ PPC::Runtime::ASM::lhax(context->r0, context->r6, context->r0);
/*80110A30 0010D830*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80110A34 0010D834*/ PPC::Runtime::ASM::b(.L_80110A44);
RUNTIME_PPC_JUMP_LABEL(.L_80110A38, 0x80110A38) //this is a jump label
/*80110A38 0010D838*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80110A3C 0010D83C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80110A40 0010D840*/ PPC::Runtime::ASM::bdnz(.L_80110A04);
RUNTIME_PPC_JUMP_LABEL(.L_80110A44, 0x80110A44) //this is a jump label
/*80110A44 0010D844*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110A48 0010D848*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80110A4C 0010D84C*/ PPC::Runtime::ASM::li(context->r0, 0x30);
/*80110A50 0010D850*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80110A54 0010D854*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*80110A58 0010D858*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r6));
/*80110A5C 0010D85C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80110A60, 0x80110A60) //this is a jump label
/*80110A60 0010D860*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110A64 0010D864*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80110A68 0010D868*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80110A6C 0010D86C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80110A70 0010D870*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80110A74 0010D874*/ PPC::Runtime::ASM::lwzx(context->r0, context->r6, context->r0);
/*80110A78 0010D878*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r3);
/*80110A7C 0010D87C*/ PPC::Runtime::ASM::lha(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80110A80 0010D880*/ PPC::Runtime::ASM::cmpwi(context->r7, -0x1);
/*80110A84 0010D884*/ PPC::Runtime::ASM::bne(.L_80110A94);
/*80110A88 0010D888*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r6));
/*80110A8C 0010D88C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80110A90 0010D890*/ PPC::Runtime::ASM::beq(.L_80110B5C);
RUNTIME_PPC_JUMP_LABEL(.L_80110A94, 0x80110A94) //this is a jump label
/*80110A94 0010D894*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x8);
/*80110A98 0010D898*/ PPC::Runtime::ASM::addi(context->r12, context->r3, 0x2);
/*80110A9C 0010D89C*/ PPC::Runtime::ASM::stbx(context->r7, context->r8, context->r0);
/*80110AA0 0010D8A0*/ PPC::Runtime::ASM::addi(context->r11, context->r5, 0x38);
/*80110AA4 0010D8A4*/ PPC::Runtime::ASM::addi(context->r7, context->r5, 0x68);
/*80110AA8 0010D8A8*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x6);
/*80110AAC 0010D8AC*/ PPC::Runtime::ASM::lwz(context->r16, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110AB0 0010D8B0*/ PPC::Runtime::ASM::addi(context->r9, context->r4, 0x98);
/*80110AB4 0010D8B4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xf8);
/*80110AB8 0010D8B8*/ PPC::Runtime::ASM::lwz(context->r15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80110ABC 0010D8BC*/ PPC::Runtime::ASM::lbz(context->r14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r16));
/*80110AC0 0010D8C0*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0x4);
/*80110AC4 0010D8C4*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x8);
/*80110AC8 0010D8C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80110ACC 0010D8CC*/ PPC::Runtime::ASM::extsb(context->r14, context->r14);
/*80110AD0 0010D8D0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*80110AD4 0010D8D4*/ PPC::Runtime::ASM::slwi(context->r14, context->r14, 2);
/*80110AD8 0010D8D8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80110ADC 0010D8DC*/ PPC::Runtime::ASM::lwzx(context->r14, context->r15, context->r14);
/*80110AE0 0010D8E0*/ PPC::Runtime::ASM::lhax(context->r12, context->r14, context->r12);
/*80110AE4 0010D8E4*/ PPC::Runtime::ASM::stbx(context->r12, context->r16, context->r11);
/*80110AE8 0010D8E8*/ PPC::Runtime::ASM::lwz(context->r14, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110AEC 0010D8EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80110AF0 0010D8F0*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r14));
/*80110AF4 0010D8F4*/ PPC::Runtime::ASM::extsb(context->r11, context->r11);
/*80110AF8 0010D8F8*/ PPC::Runtime::ASM::slwi(context->r11, context->r11, 2);
/*80110AFC 0010D8FC*/ PPC::Runtime::ASM::lwzx(context->r11, context->r12, context->r11);
/*80110B00 0010D900*/ PPC::Runtime::ASM::lhax(context->r10, context->r11, context->r10);
/*80110B04 0010D904*/ PPC::Runtime::ASM::sthx(context->r10, context->r14, context->r9);
/*80110B08 0010D908*/ PPC::Runtime::ASM::lwz(context->r11, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110B0C 0010D90C*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80110B10 0010D910*/ PPC::Runtime::ASM::lbz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r11));
/*80110B14 0010D914*/ PPC::Runtime::ASM::extsb(context->r9, context->r9);
/*80110B18 0010D918*/ PPC::Runtime::ASM::slwi(context->r9, context->r9, 2);
/*80110B1C 0010D91C*/ PPC::Runtime::ASM::lwzx(context->r9, context->r10, context->r9);
/*80110B20 0010D920*/ PPC::Runtime::ASM::lhax(context->r8, context->r9, context->r8);
/*80110B24 0010D924*/ PPC::Runtime::ASM::stbx(context->r8, context->r11, context->r7);
/*80110B28 0010D928*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110B2C 0010D92C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80110B30 0010D930*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*80110B34 0010D934*/ PPC::Runtime::ASM::extsb(context->r7, context->r7);
/*80110B38 0010D938*/ PPC::Runtime::ASM::slwi(context->r7, context->r7, 2);
/*80110B3C 0010D93C*/ PPC::Runtime::ASM::lwzx(context->r7, context->r8, context->r7);
/*80110B40 0010D940*/ PPC::Runtime::ASM::lwzx(context->r6, context->r7, context->r6);
/*80110B44 0010D944*/ PPC::Runtime::ASM::sthx(context->r6, context->r9, context->r0);
/*80110B48 0010D948*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110B4C 0010D94C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r7));
/*80110B50 0010D950*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x1);
/*80110B54 0010D954*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r7));
/*80110B58 0010D958*/ PPC::Runtime::ASM::bdnz(.L_80110A60);
RUNTIME_PPC_JUMP_LABEL(.L_80110B5C, 0x80110B5C) //this is a jump label
/*80110B5C 0010D95C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80110B60 0010D960*/ PPC::Runtime::ASM::bl(_restgpr_14);
/*80110B64 0010D964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80110B68 0010D968*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80110B6C 0010D96C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80110B70 0010D970*/ PPC::Runtime::ASM::blr();
}