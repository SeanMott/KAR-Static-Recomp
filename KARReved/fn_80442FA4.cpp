//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80449DC0.hpp"
#include "fn_80449E98.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80442FA4(PPC::Runtime::GCContext* context)
{
/*80442FA4 0043FDA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80442FA8 0043FDA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80442FAC 0043FDAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80442FB0 0043FDB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80442FB4 0043FDB4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80442FB8 0043FDB8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80442FBC 0043FDBC*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80442FC0 0043FDC0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80442FC4 0043FDC4  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80442FC8 0043FDC8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE494 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442FCC 0043FDCC*/ PPC::Runtime::ASM::and(context->r30, context->r28, context->r0);
/*80442FD0 0043FDD0*/ PPC::Runtime::ASM::blt(.L_80442FE0);
/*80442FD4 0043FDD4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE49C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442FD8 0043FDD8*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*80442FDC 0043FDDC*/ PPC::Runtime::ASM::ble(.L_80442FE8);
RUNTIME_PPC_JUMP_LABEL(.L_80442FE0, 0x80442FE0) //this is a jump label
/*80442FE0 0043FDE0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80442FE4 0043FDE4*/ PPC::Runtime::ASM::b(.L_8044325C);
RUNTIME_PPC_JUMP_LABEL(.L_80442FE8, 0x80442FE8) //this is a jump label
/*80442FE8 0043FDE8*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80442FEC 0043FDEC*/ PPC::Runtime::ASM::mulli(context->r0, context->r30, 0x48);
/*80442FF0 0043FDF0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE48C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80442FF4 0043FDF4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80442FF8 0043FDF8*/ PPC::Runtime::ASM::add(context->r30, context->r4, context->r0);
/*80442FFC 0043FDFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80443000 0043FE00*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*80443004 0043FE04*/ PPC::Runtime::ASM::bne(.L_80443014);
/*80443008 0043FE08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/* 8044300C 0043FE0C  54 04 00 03 */ clrrwi. context->r4 , context->r0 , 30
/*80443010 0043FE10*/ PPC::Runtime::ASM::bne(.L_80443024);
RUNTIME_PPC_JUMP_LABEL(.L_80443014, 0x80443014) //this is a jump label
/*80443014 0043FE14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80443018 0043FE18*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8044301C 0043FE1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80443020 0043FE20*/ PPC::Runtime::ASM::b(.L_8044325C);
RUNTIME_PPC_JUMP_LABEL(.L_80443024, 0x80443024) //this is a jump label
/*80443024 0043FE24*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80443028 0043FE28*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8044302C 0043FE2C*/ PPC::Runtime::ASM::beq(.L_80443134);
/*80443030 0043FE30*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_46 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443034 0043FE34*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*80443038 0043FE38*/ PPC::Runtime::ASM::bge(.L_8044304C);
/*8044303C 0043FE3C*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x7f);
/*80443040 0043FE40*/ PPC::Runtime::ASM::divw(context->r4, context->r0, context->r4);
/*80443044 0043FE44*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7f);
/*80443048 0043FE48*/ PPC::Runtime::ASM::b(.L_804430A8);
RUNTIME_PPC_JUMP_LABEL(.L_8044304C, 0x8044304C) //this is a jump label
/*8044304C 0043FE4C*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_47 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443050 0043FE50*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80443054 0043FE54*/ PPC::Runtime::ASM::bgt(.L_80443060);
/*80443058 0043FE58*/ PPC::Runtime::ASM::li(context->r0, 0xfe);
/*8044305C 0043FE5C*/ PPC::Runtime::ASM::b(.L_804430A8);
RUNTIME_PPC_JUMP_LABEL(.L_80443060, 0x80443060) //this is a jump label
/*80443060 0043FE60*/ PPC::Runtime::ASM::lwz(context->r5, StructValues_48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443064 0043FE64*/ PPC::Runtime::ASM::cmpw(context->r29, context->r5);
/*80443068 0043FE68*/ PPC::Runtime::ASM::bge(.L_80443084);
/*8044306C 0043FE6C*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r29);
/*80443070 0043FE70*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/*80443074 0043FE74*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0xfe);
/*80443078 0043FE78*/ PPC::Runtime::ASM::divw(context->r0, context->r4, context->r0);
/*8044307C 0043FE7C*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0xfe);
/*80443080 0043FE80*/ PPC::Runtime::ASM::b(.L_804430A8);
RUNTIME_PPC_JUMP_LABEL(.L_80443084, 0x80443084) //this is a jump label
/*80443084 0043FE84*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_49 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443088 0043FE88*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8044308C 0043FE8C*/ PPC::Runtime::ASM::bgt(.L_80443098);
/*80443090 0043FE90*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80443094 0043FE94*/ PPC::Runtime::ASM::b(.L_804430A8);
RUNTIME_PPC_JUMP_LABEL(.L_80443098, 0x80443098) //this is a jump label
/*80443098 0043FE98*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r29);
/*8044309C 0043FE9C*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x168);
/*804430A0 0043FEA0*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x7f);
/*804430A4 0043FEA4*/ PPC::Runtime::ASM::divw(context->r0, context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804430A8, 0x804430A8) //this is a jump label
/*804430A8 0043FEA8*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*804430AC 0043FEAC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*804430B0 0043FEB0*/ PPC::Runtime::ASM::bl(fn_80449DC0);
/*804430B4 0043FEB4*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_46 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804430B8 0043FEB8*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*804430BC 0043FEBC*/ PPC::Runtime::ASM::bgt(.L_804430C8);
/*804430C0 0043FEC0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804430C4 0043FEC4*/ PPC::Runtime::ASM::b(.L_80443120);
RUNTIME_PPC_JUMP_LABEL(.L_804430C8, 0x804430C8) //this is a jump label
/*804430C8 0043FEC8*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_47 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804430CC 0043FECC*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*804430D0 0043FED0*/ PPC::Runtime::ASM::bge(.L_804430E8);
/*804430D4 0043FED4*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r29);
/*804430D8 0043FED8*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*804430DC 0043FEDC*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xff);
/*804430E0 0043FEE0*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
/*804430E4 0043FEE4*/ PPC::Runtime::ASM::b(.L_80443120);
RUNTIME_PPC_JUMP_LABEL(.L_804430E8, 0x804430E8) //this is a jump label
/*804430E8 0043FEE8*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804430EC 0043FEEC*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*804430F0 0043FEF0*/ PPC::Runtime::ASM::bgt(.L_804430FC);
/*804430F4 0043FEF4*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*804430F8 0043FEF8*/ PPC::Runtime::ASM::b(.L_80443120);
RUNTIME_PPC_JUMP_LABEL(.L_804430FC, 0x804430FC) //this is a jump label
/*804430FC 0043FEFC*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_49 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443100 0043FF00*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80443104 0043FF04*/ PPC::Runtime::ASM::bge(.L_8044311C);
/*80443108 0043FF08*/ PPC::Runtime::ASM::subf(context->r3, context->r29, context->r0);
/*8044310C 0043FF0C*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*80443110 0043FF10*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xff);
/*80443114 0043FF14*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
/*80443118 0043FF18*/ PPC::Runtime::ASM::b(.L_80443120);
RUNTIME_PPC_JUMP_LABEL(.L_8044311C, 0x8044311C) //this is a jump label
/*8044311C 0043FF1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80443120, 0x80443120) //this is a jump label
/*80443120 0043FF20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80443124 0043FF24*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*80443128 0043FF28*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8044312C 0043FF2C*/ PPC::Runtime::ASM::bl(fn_80449E98);
/*80443130 0043FF30*/ PPC::Runtime::ASM::b(.L_80443250);
RUNTIME_PPC_JUMP_LABEL(.L_80443134, 0x80443134) //this is a jump label
/*80443134 0043FF34*/ PPC::Runtime::ASM::subis(context->r0, context->r4, 0x4000);
/*80443138 0043FF38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8044313C 0043FF3C*/ PPC::Runtime::ASM::beq(.L_80443158);
/*80443140 0043FF40*/ PPC::Runtime::ASM::lis(context->r3, lbl_805089E8 @ Get_MemoryOffset_HighBit);
/*80443144 0043FF44*/ PPC::Runtime::ASM::lis(context->r5, lbl_80508B48 @ Get_MemoryOffset_HighBit);
/*80443148 0043FF48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805089E8 @ Get_MemoryOffset_LowBit);
/*8044314C 0043FF4C*/ PPC::Runtime::ASM::li(context->r4, 0x56d);
/*80443150 0043FF50*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80508B48 @ Get_MemoryOffset_LowBit);
/*80443154 0043FF54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80443158, 0x80443158) //this is a jump label
/*80443158 0043FF58*/ PPC::Runtime::ASM::lwz(context->r3, StructValues_46 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044315C 0043FF5C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r3);
/*80443160 0043FF60*/ PPC::Runtime::ASM::bge(.L_80443174);
/*80443164 0043FF64*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x7f);
/*80443168 0043FF68*/ PPC::Runtime::ASM::divw(context->r3, context->r0, context->r3);
/*8044316C 0043FF6C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x7f);
/*80443170 0043FF70*/ PPC::Runtime::ASM::b(.L_804431D0);
RUNTIME_PPC_JUMP_LABEL(.L_80443174, 0x80443174) //this is a jump label
/*80443174 0043FF74*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_47 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443178 0043FF78*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8044317C 0043FF7C*/ PPC::Runtime::ASM::bgt(.L_80443188);
/*80443180 0043FF80*/ PPC::Runtime::ASM::li(context->r0, 0xfe);
/*80443184 0043FF84*/ PPC::Runtime::ASM::b(.L_804431D0);
RUNTIME_PPC_JUMP_LABEL(.L_80443188, 0x80443188) //this is a jump label
/*80443188 0043FF88*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044318C 0043FF8C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*80443190 0043FF90*/ PPC::Runtime::ASM::bge(.L_804431AC);
/*80443194 0043FF94*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r29);
/*80443198 0043FF98*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*8044319C 0043FF9C*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xfe);
/*804431A0 0043FFA0*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
/*804431A4 0043FFA4*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0xfe);
/*804431A8 0043FFA8*/ PPC::Runtime::ASM::b(.L_804431D0);
RUNTIME_PPC_JUMP_LABEL(.L_804431AC, 0x804431AC) //this is a jump label
/*804431AC 0043FFAC*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_49 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804431B0 0043FFB0*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*804431B4 0043FFB4*/ PPC::Runtime::ASM::bgt(.L_804431C0);
/*804431B8 0043FFB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804431BC 0043FFBC*/ PPC::Runtime::ASM::b(.L_804431D0);
RUNTIME_PPC_JUMP_LABEL(.L_804431C0, 0x804431C0) //this is a jump label
/*804431C0 0043FFC0*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r29);
/*804431C4 0043FFC4*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x168);
/*804431C8 0043FFC8*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x7f);
/*804431CC 0043FFCC*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804431D0, 0x804431D0) //this is a jump label
/*804431D0 0043FFD0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29, context->r30));
/*804431D4 0043FFD4*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_46 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804431D8 0043FFD8*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*804431DC 0043FFDC*/ PPC::Runtime::ASM::bgt(.L_804431E8);
/*804431E0 0043FFE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804431E4 0043FFE4*/ PPC::Runtime::ASM::b(.L_80443240);
RUNTIME_PPC_JUMP_LABEL(.L_804431E8, 0x804431E8) //this is a jump label
/*804431E8 0043FFE8*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_47 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804431EC 0043FFEC*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*804431F0 0043FFF0*/ PPC::Runtime::ASM::bge(.L_80443208);
/*804431F4 0043FFF4*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r29);
/*804431F8 0043FFF8*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*804431FC 0043FFFC*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xff);
/*80443200 00440000*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
/*80443204 00440004*/ PPC::Runtime::ASM::b(.L_80443240);
RUNTIME_PPC_JUMP_LABEL(.L_80443208, 0x80443208) //this is a jump label
/*80443208 00440008*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044320C 0044000C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r4);
/*80443210 00440010*/ PPC::Runtime::ASM::bgt(.L_8044321C);
/*80443214 00440014*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*80443218 00440018*/ PPC::Runtime::ASM::b(.L_80443240);
RUNTIME_PPC_JUMP_LABEL(.L_8044321C, 0x8044321C) //this is a jump label
/*8044321C 0044001C*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_49 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80443220 00440020*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*80443224 00440024*/ PPC::Runtime::ASM::bge(.L_8044323C);
/*80443228 00440028*/ PPC::Runtime::ASM::subf(context->r3, context->r29, context->r0);
/*8044322C 0044002C*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*80443230 00440030*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0xff);
/*80443234 00440034*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r0);
/*80443238 00440038*/ PPC::Runtime::ASM::b(.L_80443240);
RUNTIME_PPC_JUMP_LABEL(.L_8044323C, 0x8044323C) //this is a jump label
/*8044323C 0044003C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80443240, 0x80443240) //this is a jump label
/*80443240 00440040*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r30));
/*80443244 00440044*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80443248 00440048*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x6);
/*8044324C 0044004C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80443250, 0x80443250) //this is a jump label
/*80443250 00440050*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80443254 00440054*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80443258 00440058*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044325C, 0x8044325C) //this is a jump label
/*8044325C 0044005C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80443260 00440060*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80443264 00440064*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80443268 00440068*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044326C 0044006C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80443270 00440070*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80443274 00440074*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80443278 00440078*/ PPC::Runtime::ASM::blr();
}