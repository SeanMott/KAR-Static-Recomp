//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7F24.hpp"
#include "fn_801C7648.hpp"
#include "fn_80276C84.hpp"
#include "fn_800D3F8C.hpp"
#include "fn_800D3870.hpp"
#include "fn_80276F00.hpp"
#include "fn_80275FCC.hpp"
#include "fn_80275FCC.hpp"
#include "fn_80276F00.hpp"
#include "fn_80275FCC.hpp"
#include "fn_80275FCC.hpp"
#include "fn_80275FCC.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"



void fn_8026FE7C(PPC::Runtime::GCContext* context)
{
/*8026FE7C 0026CC7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8026FE80 0026CC80*/ PPC::Runtime::ASM::mflr(context->r0);
/*8026FE84 0026CC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8026FE88 0026CC88*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8026FE8C 0026CC8C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8026FE90 0026CC90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8026FE94 0026CC94*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8026FE98 0026CC98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8026FE9C 0026CC9C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8026FEA0 0026CCA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*8026FEA4 0026CCA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*8026FEA8 0026CCA8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026FEAC 0026CCAC*/ PPC::Runtime::ASM::beq(.L_8026FEB8);
/*8026FEB0 0026CCB0*/ PPC::Runtime::ASM::bl(fn_801C7F24);
/*8026FEB4 0026CCB4*/ PPC::Runtime::ASM::b(.L_8026FEBC);
RUNTIME_PPC_JUMP_LABEL(.L_8026FEB8, 0x8026FEB8) //this is a jump label
/*8026FEB8 0026CCB8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8026FEBC, 0x8026FEBC) //this is a jump label
/*8026FEBC 0026CCBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8026FEC0 0026CCC0*/ PPC::Runtime::ASM::bne(.L_8026FED0);
/*8026FEC4 0026CCC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8026FEC8 0026CCC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8026FECC 0026CCCC*/ PPC::Runtime::ASM::b(.L_80270130);
RUNTIME_PPC_JUMP_LABEL(.L_8026FED0, 0x8026FED0) //this is a jump label
/*8026FED0 0026CCD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026FED4 0026CCD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026FED8 0026CCD8*/ PPC::Runtime::ASM::beq(.L_8026FEFC);
/*8026FEDC 0026CCDC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8026FEE0 0026CCE0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43c, context->r6));
/*8026FEE4 0026CCE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r6));
/*8026FEE8 0026CCE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r6));
/*8026FEEC 0026CCEC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026FEF0 0026CCF0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026FEF4 0026CCF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8026FEF8 0026CCF8*/ PPC::Runtime::ASM::b(.L_8026FF14);
RUNTIME_PPC_JUMP_LABEL(.L_8026FEFC, 0x8026FEFC) //this is a jump label
/*8026FEFC 0026CCFC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*8026FF00 0026CD00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r30));
/*8026FF04 0026CD04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r30));
/*8026FF08 0026CD08*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026FF0C 0026CD0C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026FF10 0026CD10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026FF14, 0x8026FF14) //this is a jump label
/*8026FF14 0026CD14*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8026FF18 0026CD18*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8026FF1C 0026CD1C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8026FF20 0026CD20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8026FF24 0026CD24*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026FF28 0026CD28*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8026FF2C 0026CD2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8026FF30 0026CD30*/ PPC::Runtime::ASM::beq(.L_8026FF40);
/*8026FF34 0026CD34*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*8026FF38 0026CD38*/ PPC::Runtime::ASM::bl(fn_801C7648);
/*8026FF3C 0026CD3C*/ PPC::Runtime::ASM::b(.L_8026FF58);
RUNTIME_PPC_JUMP_LABEL(.L_8026FF40, 0x8026FF40) //this is a jump label
/*8026FF40 0026CD40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*8026FF44 0026CD44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r30));
/*8026FF48 0026CD48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8026FF4C 0026CD4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8026FF50 0026CD50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r30));
/*8026FF54 0026CD54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026FF58, 0x8026FF58) //this is a jump label
/*8026FF58 0026CD58*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*8026FF5C 0026CD5C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8026FF60 0026CD60*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8026FF64 0026CD64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026FF68 0026CD68*/ PPC::Runtime::ASM::bl(fn_80276C84);
/*8026FF6C 0026CD6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8026FF70 0026CD70*/ PPC::Runtime::ASM::beq(.L_80270110);
/*8026FF74 0026CD74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026FF78 0026CD78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8026FF7C 0026CD7C*/ PPC::Runtime::ASM::ble(.L_80270090);
/*8026FF80 0026CD80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*8026FF84 0026CD84*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8026FF88 0026CD88*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x10);
/*8026FF8C 0026CD8C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8026FF90 0026CD90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8026FF94 0026CD94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r29));
/*8026FF98 0026CD98*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r29));
/*8026FF9C 0026CD9C*/ PPC::Runtime::ASM::bl(fn_800D3F8C);
/*8026FFA0 0026CDA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8026FFA4 0026CDA4*/ PPC::Runtime::ASM::bne(.L_8026FFB8);
/*8026FFA8 0026CDA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026FFAC 0026CDAC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8026FFB0 0026CDB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026FFB4 0026CDB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8026FFB8, 0x8026FFB8) //this is a jump label
/*8026FFB8 0026CDB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r29));
/*8026FFBC 0026CDBC*/ PPC::Runtime::ASM::bl(fn_800D3870);
/*8026FFC0 0026CDC0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8026FFC4 0026CDC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4c, context->r29));
/*8026FFC8 0026CDC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8026FFCC 0026CDCC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8026FFD0 0026CDD0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8026FFD4 0026CDD4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8026FFD8 0026CDD8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f31);
/*8026FFDC 0026CDDC*/ PPC::Runtime::ASM::bne(.L_8026FFF8);
/*8026FFE0 0026CDE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8026FFE4 0026CDE4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8026FFE8 0026CDE8*/ PPC::Runtime::ASM::beq(.L_80270044);
/*8026FFEC 0026CDEC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E30B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8026FFF0 0026CDF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8026FFF4 0026CDF4*/ PPC::Runtime::ASM::bge(.L_80270044);
RUNTIME_PPC_JUMP_LABEL(.L_8026FFF8, 0x8026FFF8) //this is a jump label
/*8026FFF8 0026CDF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8026FFFC 0026CDFC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*80270000 0026CE00*/ PPC::Runtime::ASM::bne(.L_80270034);
/*80270004 0026CE04*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270008 0026CE08*/ PPC::Runtime::ASM::bl(fn_80276F00);
/*8027000C 0026CE0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3098 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270010 0026CE10*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3008 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270014 0026CE14*/ PPC::Runtime::ASM::fmadds(context->f31, context->f2, context->f1, context->f0);
/*80270018 0026CE18*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8027001C 0026CE1C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*80270020 0026CE20*/ PPC::Runtime::ASM::bge(.L_8027009C);
/*80270024 0026CE24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270028 0026CE28*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8027002C 0026CE2C*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*80270030 0026CE30*/ PPC::Runtime::ASM::b(.L_8027009C);
RUNTIME_PPC_JUMP_LABEL(.L_80270034, 0x80270034) //this is a jump label
/*80270034 0026CE34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270038 0026CE38*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8027003C 0026CE3C*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*80270040 0026CE40*/ PPC::Runtime::ASM::b(.L_8027009C);
RUNTIME_PPC_JUMP_LABEL(.L_80270044, 0x80270044) //this is a jump label
/*80270044 0026CE44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80270048 0026CE48*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*8027004C 0026CE4C*/ PPC::Runtime::ASM::beq(.L_80270080);
/*80270050 0026CE50*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270054 0026CE54*/ PPC::Runtime::ASM::bl(fn_80276F00);
/*80270058 0026CE58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3098 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027005C 0026CE5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3008 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270060 0026CE60*/ PPC::Runtime::ASM::fmadds(context->f31, context->f2, context->f1, context->f0);
/*80270064 0026CE64*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*80270068 0026CE68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*8027006C 0026CE6C*/ PPC::Runtime::ASM::bge(.L_8027009C);
/*80270070 0026CE70*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270074 0026CE74*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80270078 0026CE78*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*8027007C 0026CE7C*/ PPC::Runtime::ASM::b(.L_8027009C);
RUNTIME_PPC_JUMP_LABEL(.L_80270080, 0x80270080) //this is a jump label
/*80270080 0026CE80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270084 0026CE84*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80270088 0026CE88*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*8027008C 0026CE8C*/ PPC::Runtime::ASM::b(.L_8027009C);
RUNTIME_PPC_JUMP_LABEL(.L_80270090, 0x80270090) //this is a jump label
/*80270090 0026CE90*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270094 0026CE94*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80270098 0026CE98*/ PPC::Runtime::ASM::bl(fn_80275FCC);
RUNTIME_PPC_JUMP_LABEL(.L_8027009C, 0x8027009C) //this is a jump label
/*8027009C 0026CE9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802700A0 0026CEA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802700A4 0026CEA4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802700A8 0026CEA8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802700AC 0026CEAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802700B0 0026CEB0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802700B4 0026CEB4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802700B8 0026CEB8*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f1, context->f0);
/*802700BC 0026CEBC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3034 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802700C0 0026CEC0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*802700C4 0026CEC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802700C8 0026CEC8*/ PPC::Runtime::ASM::bge(.L_80270110);
/*802700CC 0026CECC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802700D0 0026CED0*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*802700D4 0026CED4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802700D8 0026CED8*/ PPC::Runtime::ASM::bl(fn_80276050);
/*802700DC 0026CEDC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802700E0 0026CEE0*/ PPC::Runtime::ASM::li(context->r4, 0x81);
/*802700E4 0026CEE4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802700E8 0026CEE8*/ PPC::Runtime::ASM::bl(fn_80276050);
/*802700EC 0026CEEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802700F0 0026CEF0*/ PPC::Runtime::ASM::li(context->r4, 0x96);
/*802700F4 0026CEF4*/ PPC::Runtime::ASM::li(context->r5, 0x3c);
/*802700F8 0026CEF8*/ PPC::Runtime::ASM::bl(fn_80276050);
/*802700FC 0026CEFC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270100 0026CF00*/ PPC::Runtime::ASM::li(context->r4, 0x97);
/*80270104 0026CF04*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80270108 0026CF08*/ PPC::Runtime::ASM::bl(fn_80276050);
/*8027010C 0026CF0C*/ PPC::Runtime::ASM::b(.L_80270130);
RUNTIME_PPC_JUMP_LABEL(.L_80270110, 0x80270110) //this is a jump label
/*80270110 0026CF10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270114 0026CF14*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*80270118 0026CF18*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027011C 0026CF1C*/ PPC::Runtime::ASM::bl(fn_80276050);
/*80270120 0026CF20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270124 0026CF24*/ PPC::Runtime::ASM::li(context->r4, 0x81);
/*80270128 0026CF28*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027012C 0026CF2C*/ PPC::Runtime::ASM::bl(fn_80276050);
RUNTIME_PPC_JUMP_LABEL(.L_80270130, 0x80270130) //this is a jump label
/*80270130 0026CF30*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80270134 0026CF34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80270138 0026CF38*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8027013C 0026CF3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80270140 0026CF40*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80270144 0026CF44*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80270148 0026CF48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027014C 0026CF4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80270150 0026CF50*/ PPC::Runtime::ASM::blr();
}