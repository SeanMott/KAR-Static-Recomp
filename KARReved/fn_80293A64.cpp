//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028E058.hpp"
#include "fn_8028E058.hpp"
#include "fn_803792B8.hpp"
#include "fn_8028DFC8.hpp"
#include "fn_8028DFC8.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8037B33C.hpp"



void fn_80293A64(PPC::Runtime::GCContext* context)
{
/*80293A64 00290864*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80293A68 00290868*/ PPC::Runtime::ASM::mflr(context->r0);
/*80293A6C 0029086C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80293A70 00290870*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80293A74 00290874*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80293A78 00290878*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80293A7C 0029087C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80293A80 00290880*/ PPC::Runtime::ASM::beq(.L_80293C88);
/*80293A84 00290884*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDE14 @ Get_MemoryOffset_HighBit);
/*80293A88 00290888*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x208);
/*80293A8C 0029088C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDE14 @ Get_MemoryOffset_LowBit);
/*80293A90 00290890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x514, context->r30));
/*80293A94 00290894*/ PPC::Runtime::ASM::beq(.L_80293AB0);
/*80293A98 00290898*/ PPC::Runtime::ASM::lis(context->r4, fn_8028E058 @ Get_MemoryOffset_HighBit);
/*80293A9C 0029089C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x21c);
/*80293AA0 002908A0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028E058 @ Get_MemoryOffset_LowBit);
/*80293AA4 002908A4*/ PPC::Runtime::ASM::li(context->r5, 0x4c);
/*80293AA8 002908A8*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*80293AAC 002908AC*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
RUNTIME_PPC_JUMP_LABEL(.L_80293AB0, 0x80293AB0) //this is a jump label
/*80293AB0 002908B0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c4);
/*80293AB4 002908B4*/ PPC::Runtime::ASM::beq(.L_80293B00);
/*80293AB8 002908B8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*80293ABC 002908BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*80293AC0 002908C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r30));
/*80293AC4 002908C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r30));
/*80293AC8 002908C8*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*80293ACC 002908CC*/ PPC::Runtime::ASM::beq(.L_80293AD8);
/*80293AD0 002908D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80293AD4 002908D4*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_80293AD8, 0x80293AD8) //this is a jump label
/*80293AD8 002908D8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c4);
/*80293ADC 002908DC*/ PPC::Runtime::ASM::beq(.L_80293B00);
/*80293AE0 002908E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*80293AE4 002908E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c4);
/*80293AE8 002908E8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*80293AEC 002908EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r30));
/*80293AF0 002908F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r30));
/*80293AF4 002908F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80293AF8 002908F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293AFC 002908FC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293B00, 0x80293B00) //this is a jump label
/*80293B00 00290900*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1ac);
/*80293B04 00290904*/ PPC::Runtime::ASM::beq(.L_80293B4C);
/*80293B08 00290908*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDDD8 @ Get_MemoryOffset_HighBit);
/*80293B0C 0029090C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDDD8 @ Get_MemoryOffset_LowBit);
/*80293B10 00290910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r30));
/*80293B14 00290914*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r30));
/*80293B18 00290918*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*80293B1C 0029091C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80293B20 00290920*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1ac);
/*80293B24 00290924*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r30));
/*80293B28 00290928*/ PPC::Runtime::ASM::beq(.L_80293B4C);
/*80293B2C 0029092C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD98 @ Get_MemoryOffset_HighBit);
/*80293B30 00290930*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*80293B34 00290934*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD98 @ Get_MemoryOffset_LowBit);
/*80293B38 00290938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r30));
/*80293B3C 0029093C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r30));
/*80293B40 00290940*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80293B44 00290944*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293B48 00290948*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293B4C, 0x80293B4C) //this is a jump label
/*80293B4C 0029094C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf0);
/*80293B50 00290950*/ PPC::Runtime::ASM::beq(.L_80293BA0);
/*80293B54 00290954*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDD58 @ Get_MemoryOffset_HighBit);
/*80293B58 00290958*/ PPC::Runtime::ASM::lis(context->r4, fn_8028DFC8 @ Get_MemoryOffset_HighBit);
/*80293B5C 0029095C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDD58 @ Get_MemoryOffset_LowBit);
/*80293B60 00290960*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80293B64 00290964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r30));
/*80293B68 00290968*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfc);
/*80293B6C 0029096C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028DFC8 @ Get_MemoryOffset_LowBit);
/*80293B70 00290970*/ PPC::Runtime::ASM::li(context->r6, 0x6);
/*80293B74 00290974*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*80293B78 00290978*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf0);
/*80293B7C 0029097C*/ PPC::Runtime::ASM::beq(.L_80293BA0);
/*80293B80 00290980*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD30 @ Get_MemoryOffset_HighBit);
/*80293B84 00290984*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xf0);
/*80293B88 00290988*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD30 @ Get_MemoryOffset_LowBit);
/*80293B8C 0029098C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r30));
/*80293B90 00290990*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r30));
/*80293B94 00290994*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80293B98 00290998*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293B9C 0029099C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293BA0, 0x80293BA0) //this is a jump label
/*80293BA0 002909A0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x9c);
/*80293BA4 002909A4*/ PPC::Runtime::ASM::beq(.L_80293BE8);
/*80293BA8 002909A8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80293BAC 002909AC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9c);
/*80293BB0 002909B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80293BB4 002909B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80293BB8 002909B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80293BBC 002909BC*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80293BC0 002909C0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x9c);
/*80293BC4 002909C4*/ PPC::Runtime::ASM::beq(.L_80293BE8);
/*80293BC8 002909C8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80293BCC 002909CC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9c);
/*80293BD0 002909D0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80293BD4 002909D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80293BD8 002909D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80293BDC 002909DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80293BE0 002909E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293BE4 002909E4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293BE8, 0x80293BE8) //this is a jump label
/*80293BE8 002909E8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x50);
/*80293BEC 002909EC*/ PPC::Runtime::ASM::beq(.L_80293C30);
/*80293BF0 002909F0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80293BF4 002909F4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x50);
/*80293BF8 002909F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80293BFC 002909FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80293C00 00290A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*80293C04 00290A04*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80293C08 00290A08*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x50);
/*80293C0C 00290A0C*/ PPC::Runtime::ASM::beq(.L_80293C30);
/*80293C10 00290A10*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80293C14 00290A14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x50);
/*80293C18 00290A18*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80293C1C 00290A1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*80293C20 00290A20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*80293C24 00290A24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80293C28 00290A28*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293C2C 00290A2C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293C30, 0x80293C30) //this is a jump label
/*80293C30 00290A30*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*80293C34 00290A34*/ PPC::Runtime::ASM::beq(.L_80293C78);
/*80293C38 00290A38*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80293C3C 00290A3C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*80293C40 00290A40*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*80293C44 00290A44*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80293C48 00290A48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80293C4C 00290A4C*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80293C50 00290A50*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*80293C54 00290A54*/ PPC::Runtime::ASM::beq(.L_80293C78);
/*80293C58 00290A58*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80293C5C 00290A5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*80293C60 00290A60*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*80293C64 00290A64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80293C68 00290A68*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80293C6C 00290A6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80293C70 00290A70*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293C74 00290A74*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293C78, 0x80293C78) //this is a jump label
/*80293C78 00290A78*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80293C7C 00290A7C*/ PPC::Runtime::ASM::ble(.L_80293C88);
/*80293C80 00290A80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80293C84 00290A84*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80293C88, 0x80293C88) //this is a jump label
/*80293C88 00290A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80293C8C 00290A8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80293C90 00290A90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80293C94 00290A94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80293C98 00290A98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80293C9C 00290A9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80293CA0 00290AA0*/ PPC::Runtime::ASM::blr();
}