//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB78.hpp"



void fn_80399C18(PPC::Runtime::GCContext* context)
{
/*80399C18 00396A18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80399C1C 00396A1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80399C20 00396A20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399C24 00396A24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80399C28 00396A28  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80399C2C 00396A2C*/ PPC::Runtime::ASM::beq(.L_80399C5C);
/*80399C30 00396A30*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5BFC @ Get_MemoryOffset_HighBit);
/*80399C34 00396A34*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5BFC @ Get_MemoryOffset_LowBit);
/*80399C38 00396A38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80399C3C 00396A3C*/ PPC::Runtime::ASM::beq(.L_80399C4C);
/*80399C40 00396A40*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399C44 00396A44*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399C48 00396A48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80399C4C, 0x80399C4C) //this is a jump label
/*80399C4C 00396A4C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80399C50 00396A50*/ PPC::Runtime::ASM::ble(.L_80399C5C);
/*80399C54 00396A54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399C58 00396A58*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80399C5C, 0x80399C5C) //this is a jump label
/*80399C5C 00396A5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399C60 00396A60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399C64 00396A64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80399C68 00396A68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80399C6C 00396A6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80399C70 00396A70*/ PPC::Runtime::ASM::blr();
}