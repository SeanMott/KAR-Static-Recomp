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
#include "fn_80285130.hpp"



void fn_802A9E84(PPC::Runtime::GCContext* context)
{
/*802A9E84 002A6C84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A9E88 002A6C88*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A9E8C 002A6C8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A9E90 002A6C90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A9E94 002A6C94*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A9E98 002A6C98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A9E9C 002A6C9C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A9EA0 002A6CA0*/ PPC::Runtime::ASM::beq(.L_802A9F3C);
/*802A9EA4 002A6CA4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C17CC @ Get_MemoryOffset_HighBit);
/*802A9EA8 002A6CA8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A9EAC 002A6CAC*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C17CC @ Get_MemoryOffset_LowBit);
/*802A9EB0 002A6CB0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9EB4 002A6CB4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A9EB8 002A6CB8*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A9EBC 002A6CBC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A9EC0 002A6CC0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9EC4 002A6CC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A9EC8 002A6CC8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9ECC 002A6CCC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A9ED0 002A6CD0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9ED4 002A6CD4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9ED8 002A6CD8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A9EDC 002A6CDC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9EE0 002A6CE0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9EE4 002A6CE4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A9EE8 002A6CE8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9EEC 002A6CEC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9EF0 002A6CF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A9EF4 002A6CF4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9EF8 002A6CF8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9EFC 002A6CFC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A9F00 002A6D00*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9F04 002A6D04*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9F08 002A6D08*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A9F0C 002A6D0C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9F10 002A6D10*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9F14 002A6D14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A9F18 002A6D18*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9F1C 002A6D1C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9F20 002A6D20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A9F24 002A6D24*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A9F28 002A6D28*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A9F2C 002A6D2C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A9F30 002A6D30*/ PPC::Runtime::ASM::ble(.L_802A9F3C);
/*802A9F34 002A6D34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A9F38 002A6D38*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A9F3C, 0x802A9F3C) //this is a jump label
/*802A9F3C 002A6D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A9F40 002A6D40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A9F44 002A6D44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A9F48 002A6D48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A9F4C 002A6D4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A9F50 002A6D50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A9F54 002A6D54*/ PPC::Runtime::ASM::blr();
}