//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FAA88.hpp"
#include "fn_800D7AD0.hpp"
#include "fn_800EA084.hpp"
#include "fn_killWhispy.hpp"



void fn_80106A20(PPC::Runtime::GCContext* context)
{
/*80106A20 00103820*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80106A24 00103824*/ PPC::Runtime::ASM::mflr(context->r0);
/*80106A28 00103828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80106A2C 0010382C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80106A30 00103830*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80106A34 00103834*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106A38 00103838*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80106A3C 0010383C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80106A40 00103840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r4));
/*80106A44 00103844*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80106A48 00103848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r4));
/*80106A4C 0010384C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r4));
/*80106A50 00103850*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80106A54 00103854*/ PPC::Runtime::ASM::bgt(.L_80106AF4);
/*80106A58 00103858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*80106A5C 0010385C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80106A60 00103860*/ PPC::Runtime::ASM::beq(.L_80106AF4);
/*80106A64 00103864*/ PPC::Runtime::ASM::bl(fn_800FAA88);
/*80106A68 00103868*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80106A6C 0010386C*/ PPC::Runtime::ASM::bne(.L_80106AF4);
/*80106A70 00103870*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80106A74 00103874*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80106A78 00103878*/ PPC::Runtime::ASM::lwz(context->r29, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106A7C 0010387C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80106A80 00103880*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*80106A84 00103884*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80106A88 00103888*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*80106A8C 0010388C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80106A90 00103890*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80106A94 00103894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r29));
/*80106A98 00103898*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80106A9C 0010389C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*80106AA0 001038A0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*80106AA4 001038A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*80106AA8 001038A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80106AAC 001038AC*/ PPC::Runtime::ASM::ble(.L_80106ABC);
/*80106AB0 001038B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*80106AB4 001038B4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80106AB8 001038B8*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80106ABC, 0x80106ABC) //this is a jump label
/*80106ABC 001038BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80106AC0 001038C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106AC4 001038C4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r30));
/*80106AC8 001038C8*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80106ACC 001038CC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80106AD0 001038D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80106AD4 001038D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r30));
/*80106AD8 001038D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80106ADC 001038DC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80106AE0 001038E0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80106AE4 001038E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*80106AE8 001038E8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80106AEC 001038EC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80106AF0 001038F0*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80106AF4, 0x80106AF4) //this is a jump label
/*80106AF4 001038F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80106AF8 001038F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80106AFC 001038FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80106B00 00103900*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80106B04 00103904*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80106B08 00103908*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80106B0C 0010390C*/ PPC::Runtime::ASM::blr();
}