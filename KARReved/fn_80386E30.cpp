//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803878E4.hpp"



void fn_80386E30(PPC::Runtime::GCContext* context)
{
/*80386E30 00383C30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80386E34 00383C34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80386E38 00383C38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80386E3C 00383C3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80386E40 00383C40*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80386E44 00383C44*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80386E48 00383C48  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80386E4C 00383C4C*/ PPC::Runtime::ASM::beq(.L_80386E88);
/*80386E50 00383C50*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4BD4 @ Get_MemoryOffset_HighBit);
/*80386E54 00383C54*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80386E58 00383C58*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F4BD4 @ Get_MemoryOffset_LowBit);
/*80386E5C 00383C5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80386E60 00383C60*/ PPC::Runtime::ASM::beq(.L_80386E78);
/*80386E64 00383C64*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*80386E68 00383C68*/ PPC::Runtime::ASM::beq(.L_80386E78);
/*80386E6C 00383C6C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*80386E70 00383C70*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80386E74 00383C74*/ PPC::Runtime::ASM::bl(fn_803878E4);
RUNTIME_PPC_JUMP_LABEL(.L_80386E78, 0x80386E78) //this is a jump label
/*80386E78 00383C78*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80386E7C 00383C7C*/ PPC::Runtime::ASM::ble(.L_80386E88);
/*80386E80 00383C80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80386E84 00383C84*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80386E88, 0x80386E88) //this is a jump label
/*80386E88 00383C88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80386E8C 00383C8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80386E90 00383C90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80386E94 00383C94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80386E98 00383C98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80386E9C 00383C9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80386EA0 00383CA0*/ PPC::Runtime::ASM::blr();
}