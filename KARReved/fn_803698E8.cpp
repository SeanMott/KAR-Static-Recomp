//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80369B14.hpp"
#include "fn_80324560.hpp"
#include "fn_8037B028.hpp"
#include "fn_8029B280.hpp"



void fn_803698E8(PPC::Runtime::GCContext* context)
{
/*803698E8 003666E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803698EC 003666EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803698F0 003666F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803698F4 003666F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803698F8 003666F8*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*803698FC 003666FC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80369900 00366700*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD97C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80369904 00366704*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80369908 00366708*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8036990C 0036670C*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80369910 00366710*/ PPC::Runtime::ASM::bl(fn_80369B14);
/*80369914 00366714*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x8);
/*80369918 00366718*/ PPC::Runtime::ASM::addic.(context->r31, context->r3, 0x8);
/*8036991C 0036671C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80369920 00366720*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80369924 00366724*/ PPC::Runtime::ASM::beq(.L_80369ABC);
/*80369928 00366728*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8036992C 0036672C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80369930 00366730*/ PPC::Runtime::ASM::bl(fn_80324560);
/*80369934 00366734*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF2DC @ Get_MemoryOffset_HighBit);
/*80369938 00366738*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036993C 0036673C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BF2DC @ Get_MemoryOffset_LowBit);
/*80369940 00366740*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*80369944 00366744*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80369948 00366748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8036994C 0036674C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*80369950 00366750*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80369954 00366754*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80369958 00366758*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036995C 0036675C*/ PPC::Runtime::ASM::bctrl();
/*80369960 00366760*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF304 @ Get_MemoryOffset_HighBit);
/*80369964 00366764*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*80369968 00366768*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BF304 @ Get_MemoryOffset_LowBit);
/*8036996C 0036676C*/ PPC::Runtime::ASM::addi(context->r26, context->r31, 0x60);
/*80369970 00366770*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80369974 00366774*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x28);
/*80369978 00366778*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x68);
/*8036997C 0036677C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*80369980 00366780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80369984 00366784*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80369988 00366788*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8036998C 0036678C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80369990 00366790*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80369994 00366794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*80369998 00366798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8036999C 0036679C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803699A0 003667A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803699A4 003667A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803699A8 003667A8*/ PPC::Runtime::ASM::bctrl();
/*803699AC 003667AC*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*803699B0 003667B0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F51DC @ Get_MemoryOffset_HighBit);
/*803699B4 003667B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*803699B8 003667B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*803699BC 003667BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803699C0 003667C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D743C @ Get_MemoryOffset_HighBit);
/*803699C4 003667C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*803699C8 003667C8*/ PPC::Runtime::ASM::addi(context->r9, context->r3, lbl_804D743C @ Get_MemoryOffset_LowBit);
/*803699CC 003667CC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r30));
/*803699D0 003667D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*803699D4 003667D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803699D8 003667D8*/ PPC::Runtime::ASM::addi(context->r25, context->r31, 0xa4);
/*803699DC 003667DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r30));
/*803699E0 003667E0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F51DC @ Get_MemoryOffset_LowBit);
/*803699E4 003667E4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*803699E8 003667E8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*803699EC 003667EC*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*803699F0 003667F0*/ PPC::Runtime::ASM::addi(context->r8, context->r9, 0x38);
/*803699F4 003667F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*803699F8 003667F8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*803699FC 003667FC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*80369A00 00366800*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80369A04 00366804*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*80369A08 00366808*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80369A0C 0036680C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r30));
/*80369A10 00366810*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*80369A14 00366814*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r30));
/*80369A18 00366818*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*80369A1C 0036681C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*80369A20 00366820*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*80369A24 00366824*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r30));
/*80369A28 00366828*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*80369A2C 0036682C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*80369A30 00366830*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*80369A34 00366834*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r30));
/*80369A38 00366838*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*80369A3C 0036683C*/ PPC::Runtime::ASM::lha(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a, context->r30));
/*80369A40 00366840*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*80369A44 00366844*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80369A48 00366848*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*80369A4C 0036684C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r30));
/*80369A50 00366850*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80369A54 00366854*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*80369A58 00366858*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*80369A5C 0036685C*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r26));
/*80369A60 00366860*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r26));
/*80369A64 00366864*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r26));
/*80369A68 00366868*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*80369A6C 0036686C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*80369A70 00366870*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*80369A74 00366874*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*80369A78 00366878*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80369A7C 0036687C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80369A80 00366880*/ PPC::Runtime::ASM::bctrl();
/*80369A84 00366884*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80369A88 00366888*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80369A8C 0036688C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80369A90 00366890*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*80369A94 00366894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*80369A98 00366898*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80369A9C 0036689C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80369AA0 003668A0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80369AA4 003668A4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80369AA8 003668A8*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*80369AAC 003668AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r30));
/*80369AB0 003668B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r30));
/*80369AB4 003668B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*80369AB8 003668B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80369ABC, 0x80369ABC) //this is a jump label
/*80369ABC 003668BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80369AC0 003668C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80369AC4 003668C4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80369AC8 003668C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80369ACC 003668CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80369AD0 003668D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80369AD4 003668D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80369AD8 003668D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80369ADC 003668DC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80369AE0 003668E0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80369AE4 003668E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80369AE8 003668E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80369AEC 003668EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80369AF0 003668F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80369AF4 003668F4*/ PPC::Runtime::ASM::b(.L_80369AFC);
/*80369AF8 003668F8*/ PPC::Runtime::ASM::bl(fn_8029B280);
RUNTIME_PPC_JUMP_LABEL(.L_80369AFC, 0x80369AFC) //this is a jump label
/*80369AFC 003668FC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80369B00 00366900*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80369B04 00366904*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80369B08 00366908*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80369B0C 0036690C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80369B10 00366910*/ PPC::Runtime::ASM::blr();
}