//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB78.hpp"



void fn_80398C30(PPC::Runtime::GCContext* context)
{
/*80398C30 00395A30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80398C34 00395A34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80398C38 00395A38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398C3C 00395A3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80398C40 00395A40  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80398C44 00395A44*/ PPC::Runtime::ASM::beq(.L_80398C68);
/*80398C48 00395A48*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5A18 @ Get_MemoryOffset_HighBit);
/*80398C4C 00395A4C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80398C50 00395A50*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804F5A18 @ Get_MemoryOffset_LowBit);
/*80398C54 00395A54*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80398C58 00395A58*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80398C5C 00395A5C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80398C60 00395A60*/ PPC::Runtime::ASM::ble(.L_80398C68);
/*80398C64 00395A64*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80398C68, 0x80398C68) //this is a jump label
/*80398C68 00395A68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80398C6C 00395A6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80398C70 00395A70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80398C74 00395A74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80398C78 00395A78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80398C7C 00395A7C*/ PPC::Runtime::ASM::blr();
}