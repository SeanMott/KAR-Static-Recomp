//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80298D58(PPC::Runtime::GCContext* context)
{
/*80298D58 00295B58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80298D5C 00295B5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80298D60 00295B60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298D64 00295B64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80298D68 00295B68  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80298D6C 00295B6C*/ PPC::Runtime::ASM::beq(.L_80298D9C);
/*80298D70 00295B70*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE8E0 @ Get_MemoryOffset_HighBit);
/*80298D74 00295B74*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE8E0 @ Get_MemoryOffset_LowBit);
/*80298D78 00295B78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80298D7C 00295B7C*/ PPC::Runtime::ASM::beq(.L_80298D8C);
/*80298D80 00295B80*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*80298D84 00295B84*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*80298D88 00295B88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80298D8C, 0x80298D8C) //this is a jump label
/*80298D8C 00295B8C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80298D90 00295B90*/ PPC::Runtime::ASM::ble(.L_80298D9C);
/*80298D94 00295B94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80298D98 00295B98*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80298D9C, 0x80298D9C) //this is a jump label
/*80298D9C 00295B9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298DA0 00295BA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80298DA4 00295BA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80298DA8 00295BA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80298DAC 00295BAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80298DB0 00295BB0*/ PPC::Runtime::ASM::blr();
}