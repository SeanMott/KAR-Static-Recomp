//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D1860.hpp"
#include "fn_801D0424.hpp"



void fn_801D04D8(PPC::Runtime::GCContext* context)
{
/*801D04D8 001CD2D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801D04DC 001CD2DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D04E0 001CD2E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801D04E4 001CD2E4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801D04E8 001CD2E8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801D04EC 001CD2EC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801D04F0 001CD2F0*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801D04F4 001CD2F4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*801D04F8 001CD2F8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801D04FC 001CD2FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r3));
/*801D0500 001CD300*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*801D0504 001CD304*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D0508 001CD308*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*801D050C 001CD30C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*801D0510 001CD310*/ PPC::Runtime::ASM::b(.L_801D05D0);
RUNTIME_PPC_JUMP_LABEL(.L_801D0514, 0x801D0514) //this is a jump label
/*801D0514 001CD314*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r28));
/*801D0518 001CD318*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x148);
/*801D051C 001CD31C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*801D0520 001CD320*/ PPC::Runtime::ASM::lwzx(context->r27, context->r3, context->r0);
/*801D0524 001CD324*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
/*801D0528 001CD328*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*801D052C 001CD32C*/ PPC::Runtime::ASM::bne(.L_801D0544);
/*801D0530 001CD330*/ PPC::Runtime::ASM::lis(context->r4, String_ "cgf_allPtr_coll_info_AND_GrCFK_Wal" Get_MemoryOffset_HighBit);
/*801D0534 001CD334*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 3 @ Get_MemoryOffset_SDA21);
/*801D0538 001CD338*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_ "cgf_allPtr_coll_info_AND_GrCFK_Wal" Get_MemoryOffset_LowBit);
/*801D053C 001CD33C*/ PPC::Runtime::ASM::li(context->r4, 0x15b);
/*801D0540 001CD340*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801D0544, 0x801D0544) //this is a jump label
/*801D0544 001CD344*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*801D0548 001CD348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801D054C 001CD34C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801D0550 001CD350*/ PPC::Runtime::ASM::bne(.L_801D0560);
/*801D0554 001CD354*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x710, context->r28));
/*801D0558 001CD358*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801D055C 001CD35C*/ PPC::Runtime::ASM::b(.L_801D05DC);
RUNTIME_PPC_JUMP_LABEL(.L_801D0560, 0x801D0560) //this is a jump label
/*801D0560 001CD360*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r27));
/*801D0564 001CD364*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*801D0568 001CD368*/ PPC::Runtime::ASM::bne(.L_801D0580);
/*801D056C 001CD36C*/ PPC::Runtime::ASM::lis(context->r4, String_ "cgf_allPtr_coll_info_AND_GrCFK_Wal" Get_MemoryOffset_HighBit);
/*801D0570 001CD370*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 3 @ Get_MemoryOffset_SDA21);
/*801D0574 001CD374*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_ "cgf_allPtr_coll_info_AND_GrCFK_Wal" Get_MemoryOffset_LowBit);
/*801D0578 001CD378*/ PPC::Runtime::ASM::li(context->r4, 0x107);
/*801D057C 001CD37C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801D0580, 0x801D0580) //this is a jump label
/*801D0580 001CD380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*801D0584 001CD384*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801D0588 001CD388*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801D058C 001CD38C*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*801D0590 001CD390*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D0594 001CD394*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x708, context->r28));
/*801D0598 001CD398*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D059C 001CD39C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801D05A0 001CD3A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x704, context->r28));
/*801D05A4 001CD3A4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D05A8 001CD3A8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70c, context->r28));
/*801D05AC 001CD3AC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*801D05B0 001CD3B0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f0);
/*801D05B4 001CD3B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*801D05B8 001CD3B8*/ PPC::Runtime::ASM::bge(.L_801D05C8);
/*801D05BC 001CD3BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x710, context->r28));
/*801D05C0 001CD3C0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801D05C4 001CD3C4*/ PPC::Runtime::ASM::b(.L_801D05DC);
RUNTIME_PPC_JUMP_LABEL(.L_801D05C8, 0x801D05C8) //this is a jump label
/*801D05C8 001CD3C8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*801D05CC 001CD3CC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801D05D0, 0x801D05D0) //this is a jump label
/*801D05D0 001CD3D0*/ PPC::Runtime::ASM::cmpw(context->r31, context->r30);
/*801D05D4 001CD3D4*/ PPC::Runtime::ASM::blt(.L_801D0514);
/*801D05D8 001CD3D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801D05DC, 0x801D05DC) //this is a jump label
/*801D05DC 001CD3DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801D05E0 001CD3E0*/ PPC::Runtime::ASM::beq(.L_801D05F0);
/*801D05E4 001CD3E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r28));
/*801D05E8 001CD3E8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*801D05EC 001CD3EC*/ PPC::Runtime::ASM::bl(fn_801D0424);
RUNTIME_PPC_JUMP_LABEL(.L_801D05F0, 0x801D05F0) //this is a jump label
/*801D05F0 001CD3F0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801D05F4 001CD3F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801D05F8 001CD3F8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801D05FC 001CD3FC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*801D0600 001CD400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801D0604 001CD404*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D0608 001CD408*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801D060C 001CD40C*/ PPC::Runtime::ASM::blr();
}