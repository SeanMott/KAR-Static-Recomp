//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_80296368.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8028E058.hpp"
#include "fn_8028E058.hpp"
#include "fn_803792B8.hpp"
#include "fn_8028DFC8.hpp"
#include "fn_8028DFC8.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8028D0B0.hpp"



void fn_8028CBF8(PPC::Runtime::GCContext* context)
{
/*8028CBF8 002899F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8028CBFC 002899FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028CC00 00289A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028CC04 00289A04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028CC08 00289A08*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028CC0C 00289A0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/* 8028CC10 00289A10  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028CC14 00289A14*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028CC18 00289A18*/ PPC::Runtime::ASM::beq(.L_8028D090);
/*8028CC1C 00289A1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D2304 @ Get_MemoryOffset_HighBit);
/*8028CC20 00289A20*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028CC24 00289A24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D2304 @ Get_MemoryOffset_LowBit);
/*8028CC28 00289A28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028CC2C 00289A2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*8028CC30 00289A30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028CC34 00289A34*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028CC38 00289A38*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CC3C 00289A3C*/ PPC::Runtime::ASM::bctrl();
/*8028CC40 00289A40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*8028CC44 00289A44*/ PPC::Runtime::ASM::bl(fn_8038CB78);
/*8028CC48 00289A48*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x139c);
/*8028CC4C 00289A4C*/ PPC::Runtime::ASM::beq(.L_8028CC98);
/*8028CC50 00289A50*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028CC54 00289A54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028CC58 00289A58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x139c, context->r30));
/*8028CC5C 00289A5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13ac, context->r30));
/*8028CC60 00289A60*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028CC64 00289A64*/ PPC::Runtime::ASM::beq(.L_8028CC70);
/*8028CC68 00289A68*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028CC6C 00289A6C*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028CC70, 0x8028CC70) //this is a jump label
/*8028CC70 00289A70*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x139c);
/*8028CC74 00289A74*/ PPC::Runtime::ASM::beq(.L_8028CC98);
/*8028CC78 00289A78*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028CC7C 00289A7C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x139c);
/*8028CC80 00289A80*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028CC84 00289A84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x139c, context->r30));
/*8028CC88 00289A88*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x139c, context->r30));
/*8028CC8C 00289A8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CC90 00289A90*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CC94 00289A94*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CC98, 0x8028CC98) //this is a jump label
/*8028CC98 00289A98*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1300);
/*8028CC9C 00289A9C*/ PPC::Runtime::ASM::beq(.L_8028CCEC);
/*8028CCA0 00289AA0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDE78 @ Get_MemoryOffset_HighBit);
/*8028CCA4 00289AA4*/ PPC::Runtime::ASM::addic.(context->r3, context->r30, 0x130c);
/*8028CCA8 00289AA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDE78 @ Get_MemoryOffset_LowBit);
/*8028CCAC 00289AAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1300, context->r30));
/*8028CCB0 00289AB0*/ PPC::Runtime::ASM::beq(.L_8028CCC4);
/*8028CCB4 00289AB4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028CCB8 00289AB8*/ PPC::Runtime::ASM::beq(.L_8028CCC4);
/*8028CCBC 00289ABC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028CCC0 00289AC0*/ PPC::Runtime::ASM::bl(fn_80296368);
RUNTIME_PPC_JUMP_LABEL(.L_8028CCC4, 0x8028CCC4) //this is a jump label
/*8028CCC4 00289AC4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1300);
/*8028CCC8 00289AC8*/ PPC::Runtime::ASM::beq(.L_8028CCEC);
/*8028CCCC 00289ACC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDE38 @ Get_MemoryOffset_HighBit);
/*8028CCD0 00289AD0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1300);
/*8028CCD4 00289AD4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDE38 @ Get_MemoryOffset_LowBit);
/*8028CCD8 00289AD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1300, context->r30));
/*8028CCDC 00289ADC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1300, context->r30));
/*8028CCE0 00289AE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CCE4 00289AE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CCE8 00289AE8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CCEC, 0x8028CCEC) //this is a jump label
/*8028CCEC 00289AEC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x12b4);
/*8028CCF0 00289AF0*/ PPC::Runtime::ASM::beq(.L_8028CD34);
/*8028CCF4 00289AF4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8028CCF8 00289AF8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12b4);
/*8028CCFC 00289AFC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8028CD00 00289B00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028CD04 00289B04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12b4, context->r30));
/*8028CD08 00289B08*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8028CD0C 00289B0C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x12b4);
/*8028CD10 00289B10*/ PPC::Runtime::ASM::beq(.L_8028CD34);
/*8028CD14 00289B14*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8028CD18 00289B18*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x12b4);
/*8028CD1C 00289B1C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8028CD20 00289B20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12b4, context->r30));
/*8028CD24 00289B24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12b4, context->r30));
/*8028CD28 00289B28*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CD2C 00289B2C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CD30 00289B30*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CD34, 0x8028CD34) //this is a jump label
/*8028CD34 00289B34*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd9c);
/*8028CD38 00289B38*/ PPC::Runtime::ASM::beq(.L_8028CF30);
/*8028CD3C 00289B3C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDE14 @ Get_MemoryOffset_HighBit);
/*8028CD40 00289B40*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xfa4);
/*8028CD44 00289B44*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDE14 @ Get_MemoryOffset_LowBit);
/*8028CD48 00289B48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12b0, context->r30));
/*8028CD4C 00289B4C*/ PPC::Runtime::ASM::beq(.L_8028CD68);
/*8028CD50 00289B50*/ PPC::Runtime::ASM::lis(context->r4, fn_8028E058 @ Get_MemoryOffset_HighBit);
/*8028CD54 00289B54*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfb8);
/*8028CD58 00289B58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028E058 @ Get_MemoryOffset_LowBit);
/*8028CD5C 00289B5C*/ PPC::Runtime::ASM::li(context->r5, 0x4c);
/*8028CD60 00289B60*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*8028CD64 00289B64*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
RUNTIME_PPC_JUMP_LABEL(.L_8028CD68, 0x8028CD68) //this is a jump label
/*8028CD68 00289B68*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xf60);
/*8028CD6C 00289B6C*/ PPC::Runtime::ASM::beq(.L_8028CDB8);
/*8028CD70 00289B70*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028CD74 00289B74*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028CD78 00289B78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf60, context->r30));
/*8028CD7C 00289B7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf70, context->r30));
/*8028CD80 00289B80*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028CD84 00289B84*/ PPC::Runtime::ASM::beq(.L_8028CD90);
/*8028CD88 00289B88*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028CD8C 00289B8C*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028CD90, 0x8028CD90) //this is a jump label
/*8028CD90 00289B90*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CD94 00289B94*/ PPC::Runtime::ASM::beq(.L_8028CDB8);
/*8028CD98 00289B98*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028CD9C 00289B9C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CDA0 00289BA0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028CDA4 00289BA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf60, context->r30));
/*8028CDA8 00289BA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CDAC 00289BAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CDB0 00289BB0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CDB4 00289BB4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CDB8, 0x8028CDB8) //this is a jump label
/*8028CDB8 00289BB8*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xf48);
/*8028CDBC 00289BBC*/ PPC::Runtime::ASM::beq(.L_8028CE04);
/*8028CDC0 00289BC0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDDD8 @ Get_MemoryOffset_HighBit);
/*8028CDC4 00289BC4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDDD8 @ Get_MemoryOffset_LowBit);
/*8028CDC8 00289BC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf48, context->r30));
/*8028CDCC 00289BCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf54, context->r30));
/*8028CDD0 00289BD0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*8028CDD4 00289BD4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028CDD8 00289BD8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CDDC 00289BDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf54, context->r30));
/*8028CDE0 00289BE0*/ PPC::Runtime::ASM::beq(.L_8028CE04);
/*8028CDE4 00289BE4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD98 @ Get_MemoryOffset_HighBit);
/*8028CDE8 00289BE8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CDEC 00289BEC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD98 @ Get_MemoryOffset_LowBit);
/*8028CDF0 00289BF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf48, context->r30));
/*8028CDF4 00289BF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CDF8 00289BF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CDFC 00289BFC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CE00 00289C00*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CE04, 0x8028CE04) //this is a jump label
/*8028CE04 00289C04*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xe8c);
/*8028CE08 00289C08*/ PPC::Runtime::ASM::beq(.L_8028CE58);
/*8028CE0C 00289C0C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD58 @ Get_MemoryOffset_HighBit);
/*8028CE10 00289C10*/ PPC::Runtime::ASM::lis(context->r4, fn_8028DFC8 @ Get_MemoryOffset_HighBit);
/*8028CE14 00289C14*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD58 @ Get_MemoryOffset_LowBit);
/*8028CE18 00289C18*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8028CE1C 00289C1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8c, context->r30));
/*8028CE20 00289C20*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe98);
/*8028CE24 00289C24*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028DFC8 @ Get_MemoryOffset_LowBit);
/*8028CE28 00289C28*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*8028CE2C 00289C2C*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*8028CE30 00289C30*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CE34 00289C34*/ PPC::Runtime::ASM::beq(.L_8028CE58);
/*8028CE38 00289C38*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD30 @ Get_MemoryOffset_HighBit);
/*8028CE3C 00289C3C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CE40 00289C40*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD30 @ Get_MemoryOffset_LowBit);
/*8028CE44 00289C44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8c, context->r30));
/*8028CE48 00289C48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CE4C 00289C4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CE50 00289C50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CE54 00289C54*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CE58, 0x8028CE58) //this is a jump label
/*8028CE58 00289C58*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xe38);
/*8028CE5C 00289C5C*/ PPC::Runtime::ASM::beq(.L_8028CEA0);
/*8028CE60 00289C60*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8028CE64 00289C64*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CE68 00289C68*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8028CE6C 00289C6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028CE70 00289C70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe38, context->r30));
/*8028CE74 00289C74*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8028CE78 00289C78*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CE7C 00289C7C*/ PPC::Runtime::ASM::beq(.L_8028CEA0);
/*8028CE80 00289C80*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8028CE84 00289C84*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CE88 00289C88*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8028CE8C 00289C8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe38, context->r30));
/*8028CE90 00289C90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CE94 00289C94*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CE98 00289C98*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CE9C 00289C9C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CEA0, 0x8028CEA0) //this is a jump label
/*8028CEA0 00289CA0*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xdec);
/*8028CEA4 00289CA4*/ PPC::Runtime::ASM::beq(.L_8028CEE8);
/*8028CEA8 00289CA8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8028CEAC 00289CAC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CEB0 00289CB0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8028CEB4 00289CB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028CEB8 00289CB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdec, context->r30));
/*8028CEBC 00289CBC*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8028CEC0 00289CC0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CEC4 00289CC4*/ PPC::Runtime::ASM::beq(.L_8028CEE8);
/*8028CEC8 00289CC8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8028CECC 00289CCC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CED0 00289CD0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8028CED4 00289CD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdec, context->r30));
/*8028CED8 00289CD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CEDC 00289CDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CEE0 00289CE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CEE4 00289CE4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CEE8, 0x8028CEE8) //this is a jump label
/*8028CEE8 00289CE8*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xda0);
/*8028CEEC 00289CEC*/ PPC::Runtime::ASM::beq(.L_8028CF30);
/*8028CEF0 00289CF0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8028CEF4 00289CF4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CEF8 00289CF8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8028CEFC 00289CFC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8028CF00 00289D00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xda0, context->r30));
/*8028CF04 00289D04*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8028CF08 00289D08*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CF0C 00289D0C*/ PPC::Runtime::ASM::beq(.L_8028CF30);
/*8028CF10 00289D10*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8028CF14 00289D14*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8028CF18 00289D18*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8028CF1C 00289D1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xda0, context->r30));
/*8028CF20 00289D20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8028CF24 00289D24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CF28 00289D28*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CF2C 00289D2C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CF30, 0x8028CF30) //this is a jump label
/*8028CF30 00289D30*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd6c);
/*8028CF34 00289D34*/ PPC::Runtime::ASM::beq(.L_8028CF6C);
/*8028CF38 00289D38*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD08 @ Get_MemoryOffset_HighBit);
/*8028CF3C 00289D3C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd6c);
/*8028CF40 00289D40*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD08 @ Get_MemoryOffset_LowBit);
/*8028CF44 00289D44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd6c, context->r30));
/*8028CF48 00289D48*/ PPC::Runtime::ASM::beq(.L_8028CF6C);
/*8028CF4C 00289D4C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDCBC @ Get_MemoryOffset_HighBit);
/*8028CF50 00289D50*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd6c);
/*8028CF54 00289D54*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDCBC @ Get_MemoryOffset_LowBit);
/*8028CF58 00289D58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd6c, context->r30));
/*8028CF5C 00289D5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd6c, context->r30));
/*8028CF60 00289D60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CF64 00289D64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CF68 00289D68*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CF6C, 0x8028CF6C) //this is a jump label
/*8028CF6C 00289D6C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd00);
/*8028CF70 00289D70*/ PPC::Runtime::ASM::beq(.L_8028D000);
/*8028CF74 00289D74*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDC70 @ Get_MemoryOffset_HighBit);
/*8028CF78 00289D78*/ PPC::Runtime::ASM::addic.(context->r29, context->r30, 0xd18);
/*8028CF7C 00289D7C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDC70 @ Get_MemoryOffset_LowBit);
/*8028CF80 00289D80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd00, context->r30));
/*8028CF84 00289D84*/ PPC::Runtime::ASM::beq(.L_8028CFD8);
/*8028CF88 00289D88*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDBE8 @ Get_MemoryOffset_HighBit);
/*8028CF8C 00289D8C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd2c);
/*8028CF90 00289D90*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDBE8 @ Get_MemoryOffset_LowBit);
/*8028CF94 00289D94*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd18, context->r30));
/*8028CF98 00289D98*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*8028CF9C 00289D9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd2c, context->r30));
/*8028CFA0 00289DA0*/ PPC::Runtime::ASM::beq(.L_8028CFC4);
/*8028CFA4 00289DA4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDBC0 @ Get_MemoryOffset_HighBit);
/*8028CFA8 00289DA8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x14);
/*8028CFAC 00289DAC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDBC0 @ Get_MemoryOffset_LowBit);
/*8028CFB0 00289DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd2c, context->r30));
/*8028CFB4 00289DB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8028CFB8 00289DB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CFBC 00289DBC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CFC0 00289DC0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CFC4, 0x8028CFC4) //this is a jump label
/*8028CFC4 00289DC4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028CFC8 00289DC8*/ PPC::Runtime::ASM::beq(.L_8028CFD8);
/*8028CFCC 00289DCC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*8028CFD0 00289DD0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*8028CFD4 00289DD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8028CFD8, 0x8028CFD8) //this is a jump label
/*8028CFD8 00289DD8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd00);
/*8028CFDC 00289DDC*/ PPC::Runtime::ASM::beq(.L_8028D000);
/*8028CFE0 00289DE0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDB4C @ Get_MemoryOffset_HighBit);
/*8028CFE4 00289DE4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd00);
/*8028CFE8 00289DE8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDB4C @ Get_MemoryOffset_LowBit);
/*8028CFEC 00289DEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd00, context->r30));
/*8028CFF0 00289DF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd00, context->r30));
/*8028CFF4 00289DF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028CFF8 00289DF8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CFFC 00289DFC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028D000, 0x8028D000) //this is a jump label
/*8028D000 00289E00*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xcd0);
/*8028D004 00289E04*/ PPC::Runtime::ASM::beq(.L_8028D03C);
/*8028D008 00289E08*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB04 @ Get_MemoryOffset_HighBit);
/*8028D00C 00289E0C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xcd0);
/*8028D010 00289E10*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB04 @ Get_MemoryOffset_LowBit);
/*8028D014 00289E14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd0, context->r30));
/*8028D018 00289E18*/ PPC::Runtime::ASM::beq(.L_8028D03C);
/*8028D01C 00289E1C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDABC @ Get_MemoryOffset_HighBit);
/*8028D020 00289E20*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd0);
/*8028D024 00289E24*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDABC @ Get_MemoryOffset_LowBit);
/*8028D028 00289E28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd0, context->r30));
/*8028D02C 00289E2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd0, context->r30));
/*8028D030 00289E30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028D034 00289E34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028D038 00289E38*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028D03C, 0x8028D03C) //this is a jump label
/*8028D03C 00289E3C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x80);
/*8028D040 00289E40*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028D044 00289E44*/ PPC::Runtime::ASM::bl(fn_8028D0B0);
/*8028D048 00289E48*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028D04C 00289E4C*/ PPC::Runtime::ASM::beq(.L_8028D080);
/*8028D050 00289E50*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD95C @ Get_MemoryOffset_HighBit);
/*8028D054 00289E54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD95C @ Get_MemoryOffset_LowBit);
/*8028D058 00289E58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028D05C 00289E5C*/ PPC::Runtime::ASM::beq(.L_8028D080);
/*8028D060 00289E60*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD934 @ Get_MemoryOffset_HighBit);
/*8028D064 00289E64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028D068 00289E68*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD934 @ Get_MemoryOffset_LowBit);
/*8028D06C 00289E6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028D070 00289E70*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028D074 00289E74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028D078 00289E78*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028D07C 00289E7C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028D080, 0x8028D080) //this is a jump label
/*8028D080 00289E80*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028D084 00289E84*/ PPC::Runtime::ASM::ble(.L_8028D090);
/*8028D088 00289E88*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028D08C 00289E8C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028D090, 0x8028D090) //this is a jump label
/*8028D090 00289E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028D094 00289E94*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028D098 00289E98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8028D09C 00289E9C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8028D0A0 00289EA0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028D0A4 00289EA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028D0A8 00289EA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8028D0AC 00289EAC*/ PPC::Runtime::ASM::blr();
}