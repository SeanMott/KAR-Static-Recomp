//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054CD4.hpp"
#include "fn_80112008.hpp"
#include "fn_800EA180.hpp"
#include "fn_killWhispy.hpp"



void fn_8010D4D8(PPC::Runtime::GCContext* context)
{
/*8010D4D8 0010A2D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8010D4DC 0010A2DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010D4E0 0010A2E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010D4E4 0010A2E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8010D4E8 0010A2E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010D4EC 0010A2EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010D4F0 0010A2F0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8010D4F4 0010A2F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010D4F8 0010A2F8*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010D4FC 0010A2FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r3));
/*8010D500 0010A300*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 8010D504 0010A304  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*8010D508 0010A308*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010D50C 0010A30C*/ PPC::Runtime::ASM::beq(.L_8010D5D0);
/*8010D510 0010A310*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010D514 0010A314*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r4));
/*8010D518 0010A318*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010D51C 0010A31C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8010D520 0010A320*/ PPC::Runtime::ASM::bl(fn_80054CD4);
/*8010D524 0010A324*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010D528 0010A328*/ PPC::Runtime::ASM::beq(.L_8010D5D0);
/*8010D52C 0010A32C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8010D530 0010A330*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010D534 0010A334*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8010D538 0010A338*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r29));
/*8010D53C 0010A33C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010D540 0010A340*/ PPC::Runtime::ASM::bl(fn_80112008);
/*8010D544 0010A344*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8010D548 0010A348*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r29));
/*8010D54C 0010A34C*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*8010D550 0010A350*/ PPC::Runtime::ASM::mr(context->r7, context->r5);
/*8010D554 0010A354*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*8010D558 0010A358*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 6, 25, 25);
/*8010D55C 0010A35C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*8010D560 0010A360*/ PPC::Runtime::ASM::b(.L_8010D58C);
RUNTIME_PPC_JUMP_LABEL(.L_8010D564, 0x8010D564) //this is a jump label
/*8010D564 0010A364*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8010D568 0010A368*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8010D56C 0010A36C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8010D570 0010A370*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r7);
/*8010D574 0010A374*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x4);
/*8010D578 0010A378*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x140);
/*8010D57C 0010A37C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x13c);
/*8010D580 0010A380*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r3);
/*8010D584 0010A384*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*8010D588 0010A388*/ PPC::Runtime::ASM::stbx(context->r0, context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8010D58C, 0x8010D58C) //this is a jump label
/*8010D58C 0010A38C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8010D590 0010A390*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8010D594 0010A394*/ PPC::Runtime::ASM::blt(.L_8010D564);
/*8010D598 0010A398*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*8010D59C 0010A39C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010D5A0 0010A3A0*/ PPC::Runtime::ASM::ble(.L_8010D5AC);
/*8010D5A4 0010A3A4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*8010D5A8 0010A3A8*/ PPC::Runtime::ASM::bl(fn_800EA180);
RUNTIME_PPC_JUMP_LABEL(.L_8010D5AC, 0x8010D5AC) //this is a jump label
/*8010D5AC 0010A3AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010D5B0 0010A3B0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010D5B4 0010A3B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8010D5B8 0010A3B8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8010D5BC 0010A3BC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8010D5C0 0010A3C0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8010D5C4 0010A3C4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFADC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010D5C8 0010A3C8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8010D5CC 0010A3CC*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_8010D5D0, 0x8010D5D0) //this is a jump label
/*8010D5D0 0010A3D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8010D5D4 0010A3D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8010D5D8 0010A3D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8010D5DC 0010A3DC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010D5E0 0010A3E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010D5E4 0010A3E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8010D5E8 0010A3E8*/ PPC::Runtime::ASM::blr();
}