//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A5C0C(PPC::Runtime::GCContext* context)
{
/*802A5C0C 002A2A0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A5C10 002A2A10*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A5C14 002A2A14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A5C18 002A2A18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A5C1C 002A2A1C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A5C20 002A2A20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A5C24 002A2A24  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A5C28 002A2A28*/ PPC::Runtime::ASM::beq(.L_802A5D18);
/*802A5C2C 002A2A2C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C3508 @ Get_MemoryOffset_HighBit);
/*802A5C30 002A2A30*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfe4);
/*802A5C34 002A2A34*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C3508 @ Get_MemoryOffset_LowBit);
/*802A5C38 002A2A38*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C3C 002A2A3C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A5C40 002A2A40*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A5C44 002A2A44*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A5C48 002A2A48*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A5C4C 002A2A4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A5C50 002A2A50*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C54 002A2A54*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xee0);
/*802A5C58 002A2A58*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C5C 002A2A5C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C60 002A2A60*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A5C64 002A2A64*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C68 002A2A68*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C6C 002A2A6C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A5C70 002A2A70*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C74 002A2A74*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C78 002A2A78*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A5C7C 002A2A7C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C80 002A2A80*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C84 002A2A84*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A5C88 002A2A88*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C8C 002A2A8C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C90 002A2A90*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A5C94 002A2A94*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5C98 002A2A98*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5C9C 002A2A9C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A5CA0 002A2AA0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CA4 002A2AA4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CA8 002A2AA8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A5CAC 002A2AAC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CB0 002A2AB0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CB4 002A2AB4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A5CB8 002A2AB8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CBC 002A2ABC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CC0 002A2AC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A5CC4 002A2AC4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CC8 002A2AC8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CCC 002A2ACC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A5CD0 002A2AD0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CD4 002A2AD4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CD8 002A2AD8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A5CDC 002A2ADC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CE0 002A2AE0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CE4 002A2AE4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A5CE8 002A2AE8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CEC 002A2AEC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CF0 002A2AF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A5CF4 002A2AF4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A5CF8 002A2AF8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A5CFC 002A2AFC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A5D00 002A2B00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A5D04 002A2B04*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A5D08 002A2B08*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A5D0C 002A2B0C*/ PPC::Runtime::ASM::ble(.L_802A5D18);
/*802A5D10 002A2B10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A5D14 002A2B14*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A5D18, 0x802A5D18) //this is a jump label
/*802A5D18 002A2B18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A5D1C 002A2B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A5D20 002A2B20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A5D24 002A2B24*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A5D28 002A2B28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A5D2C 002A2B2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A5D30 002A2B30*/ PPC::Runtime::ASM::blr();
}