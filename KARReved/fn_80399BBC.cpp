//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB78.hpp"



void fn_80399BBC(PPC::Runtime::GCContext* context)
{
/*80399BBC 003969BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80399BC0 003969C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80399BC4 003969C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399BC8 003969C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80399BCC 003969CC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80399BD0 003969D0*/ PPC::Runtime::ASM::beq(.L_80399C00);
/*80399BD4 003969D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5BA8 @ Get_MemoryOffset_HighBit);
/*80399BD8 003969D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5BA8 @ Get_MemoryOffset_LowBit);
/*80399BDC 003969DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80399BE0 003969E0*/ PPC::Runtime::ASM::beq(.L_80399BF0);
/*80399BE4 003969E4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399BE8 003969E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399BEC 003969EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80399BF0, 0x80399BF0) //this is a jump label
/*80399BF0 003969F0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80399BF4 003969F4*/ PPC::Runtime::ASM::ble(.L_80399C00);
/*80399BF8 003969F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399BFC 003969FC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80399C00, 0x80399C00) //this is a jump label
/*80399C00 00396A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399C04 00396A04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80399C08 00396A08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80399C0C 00396A0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80399C10 00396A10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80399C14 00396A14*/ PPC::Runtime::ASM::blr();
}