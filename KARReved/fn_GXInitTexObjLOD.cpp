//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXInitTexObjLOD(PPC::Runtime::GCContext* context)
{
/*803CDA90 003CA890*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803CDA94 003CA894*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDA98 003CA898*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803CDA9C 003CA89C*/ PPC::Runtime::ASM::bge(.L_803CDAA8);
/*803CDAA0 003CA8A0*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*803CDAA4 003CA8A4*/ PPC::Runtime::ASM::b(.L_803CDABC);
RUNTIME_PPC_JUMP_LABEL(.L_803CDAA8, 0x803CDAA8) //this is a jump label
/*803CDAA8 003CA8A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDAAC 003CA8AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*803CDAB0 003CA8B0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*803CDAB4 003CA8B4*/ PPC::Runtime::ASM::bne(.L_803CDABC);
/*803CDAB8 003CA8B8*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E57E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803CDABC, 0x803CDABC) //this is a jump label
/*803CDABC 003CA8BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDAC0 003CA8C0*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x1);
/*803CDAC4 003CA8C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDAC8 003CA8C8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*803CDACC 003CA8CC*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r0, 0, 23, 14);
/*803CDAD0 003CA8D0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*803CDAD4 003CA8D4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803CDAD8 003CA8D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803CDADC 003CA8DC*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 9, 15, 22);
/*803CDAE0 003CA8E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDAE4 003CA8E4*/ PPC::Runtime::ASM::bne(.L_803CDAF0);
/*803CDAE8 003CA8E8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803CDAEC 003CA8EC*/ PPC::Runtime::ASM::b(.L_803CDAF4);
RUNTIME_PPC_JUMP_LABEL(.L_803CDAF0, 0x803CDAF0) //this is a jump label
/*803CDAF0 003CA8F0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803CDAF4, 0x803CDAF4) //this is a jump label
/*803CDAF4 003CA8F4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 803CDAF8 003CA8F8  54 E0 06 3F */ clrlwi. context->r0 , context->r7 , 24
/*803CDAFC 003CA8FC*/ PPC::Runtime::ASM::slwi(context->r5, context->r5, 4);
/*803CDB00 003CA900*/ PPC::Runtime::ASM::rlwinm(context->r7, context->r9, 0, 28, 26);
/*803CDB04 003CA904*/ PPC::Runtime::ASM::or(context->r5, context->r7, context->r5);
/*803CDB08 003CA908*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB0C 003CA90C*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_1286 @ Get_MemoryOffset_SDA21);
/*803CDB10 003CA910*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r4);
/*803CDB14 003CA914*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB18 003CA918*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 5);
/*803CDB1C 003CA91C*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r7, 0, 27, 23);
/*803CDB20 003CA920*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CDB24 003CA924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB28 003CA928*/ PPC::Runtime::ASM::beq(.L_803CDB34);
/*803CDB2C 003CA92C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CDB30 003CA930*/ PPC::Runtime::ASM::b(.L_803CDB38);
RUNTIME_PPC_JUMP_LABEL(.L_803CDB34, 0x803CDB34) //this is a jump label
/*803CDB34 003CA934*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803CDB38, 0x803CDB38) //this is a jump label
/*803CDB38 003CA938*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB3C 003CA93C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 8);
/*803CDB40 003CA940*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 24, 22);
/*803CDB44 003CA944*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CDB48 003CA948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB4C 003CA94C*/ PPC::Runtime::ASM::slwi(context->r4, context->r8, 19);
/*803CDB50 003CA950*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r6, 24, 21);
/*803CDB54 003CA954*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB58 003CA958*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 15, 13);
/*803CDB5C 003CA95C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB60 003CA960*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB64 003CA964*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 14, 12);
/*803CDB68 003CA968*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB6C 003CA96C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB70 003CA970*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r5, 0, 13, 10);
/*803CDB74 003CA974*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*803CDB78 003CA978*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB7C 003CA97C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB80 003CA980*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 11, 9);
/*803CDB84 003CA984*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CDB88 003CA988*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CDB8C 003CA98C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDB90 003CA990*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803CDB94 003CA994*/ PPC::Runtime::ASM::bge(.L_803CDBA0);
/*803CDB98 003CA998*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*803CDB9C 003CA99C*/ PPC::Runtime::ASM::b(.L_803CDBB0);
RUNTIME_PPC_JUMP_LABEL(.L_803CDBA0, 0x803CDBA0) //this is a jump label
/*803CDBA0 003CA9A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDBA4 003CA9A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*803CDBA8 003CA9A8*/ PPC::Runtime::ASM::ble(.L_803CDBB0);
/*803CDBAC 003CA9AC*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_803CDBB0, 0x803CDBB0) //this is a jump label
/*803CDBB0 003CA9B0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E57D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDBB4 003CA9B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDBB8 003CA9B8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*803CDBBC 003CA9BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*803CDBC0 003CA9C0*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*803CDBC4 003CA9C4*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803CDBC8 003CA9C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803CDBCC 003CA9CC*/ PPC::Runtime::ASM::bge(.L_803CDBD8);
/*803CDBD0 003CA9D0*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
/*803CDBD4 003CA9D4*/ PPC::Runtime::ASM::b(.L_803CDBE8);
RUNTIME_PPC_JUMP_LABEL(.L_803CDBD8, 0x803CDBD8) //this is a jump label
/*803CDBD8 003CA9D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDBDC 003CA9DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*803CDBE0 003CA9E0*/ PPC::Runtime::ASM::ble(.L_803CDBE8);
/*803CDBE4 003CA9E4*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_803CDBE8, 0x803CDBE8) //this is a jump label
/*803CDBE8 003CA9E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803CDBEC 003CA9EC*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 8);
/*803CDBF0 003CA9F0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 24, 31);
/*803CDBF4 003CA9F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803CDBF8 003CA9F8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E57D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDBFC 003CA9FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803CDC00 003CAA00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*803CDC04 003CAA04*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r0, 0, 24, 15);
/*803CDC08 003CAA08*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*803CDC0C 003CAA0C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803CDC10 003CAA10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803CDC14 003CAA14*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 8, 16, 23);
/*803CDC18 003CAA18*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803CDC1C 003CAA1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803CDC20 003CAA20*/ PPC::Runtime::ASM::blr();
}