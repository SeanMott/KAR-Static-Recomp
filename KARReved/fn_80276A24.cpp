//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C85BC.hpp"
#include "fn_801C857C.hpp"



void fn_80276A24(PPC::Runtime::GCContext* context)
{
/*80276A24 00273824*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80276A28 00273828*/ PPC::Runtime::ASM::mflr(context->r0);
/*80276A2C 0027382C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80276A30 00273830*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80276A34 00273834*/ PPC::Runtime::ASM::bne(.L_80276A40);
/*80276A38 00273838*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80276A3C 0027383C*/ PPC::Runtime::ASM::b(.L_80276ABC);
RUNTIME_PPC_JUMP_LABEL(.L_80276A40, 0x80276A40) //this is a jump label
/*80276A40 00273840*/ PPC::Runtime::ASM::bl(fn_801C85BC);
/*80276A44 00273844*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*80276A48 00273848*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80276A4C 0027384C*/ PPC::Runtime::ASM::bl(fn_801C857C);
/*80276A50 00273850*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80276A54 00273854*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80276A58 00273858*/ PPC::Runtime::ASM::bne(.L_80276A74);
/*80276A5C 0027385C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80276A60 00273860*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B8854 @ Get_MemoryOffset_HighBit);
/*80276A64 00273864*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804B8854 @ Get_MemoryOffset_LowBit);
/*80276A68 00273868*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0x14);
/*80276A6C 0027386C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*80276A70 00273870*/ PPC::Runtime::ASM::b(.L_80276A98);
RUNTIME_PPC_JUMP_LABEL(.L_80276A74, 0x80276A74) //this is a jump label
/*80276A74 00273874*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80276A78 00273878*/ PPC::Runtime::ASM::bne(.L_80276A94);
/*80276A7C 0027387C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80276A80 00273880*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B89D0 @ Get_MemoryOffset_HighBit);
/*80276A84 00273884*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804B89D0 @ Get_MemoryOffset_LowBit);
/*80276A88 00273888*/ PPC::Runtime::ASM::mulli(context->r3, context->r4, 0x14);
/*80276A8C 0027388C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*80276A90 00273890*/ PPC::Runtime::ASM::b(.L_80276A98);
RUNTIME_PPC_JUMP_LABEL(.L_80276A94, 0x80276A94) //this is a jump label
/*80276A94 00273894*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80276A98, 0x80276A98) //this is a jump label
/*80276A98 00273898*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80276A9C 0027389C*/ PPC::Runtime::ASM::beq(.L_80276AB8);
/*80276AA0 002738A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80276AA4 002738A4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 24);
/*80276AA8 002738A8*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80276AAC 002738AC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80276AB0 002738B0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80276AB4 002738B4*/ PPC::Runtime::ASM::b(.L_80276ABC);
RUNTIME_PPC_JUMP_LABEL(.L_80276AB8, 0x80276AB8) //this is a jump label
/*80276AB8 002738B8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80276ABC, 0x80276ABC) //this is a jump label
/*80276ABC 002738BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80276AC0 002738C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80276AC4 002738C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80276AC8 002738C8*/ PPC::Runtime::ASM::blr();
}