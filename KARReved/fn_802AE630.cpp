//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802AE630(PPC::Runtime::GCContext* context)
{
/*802AE630 002AB430*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AE634 002AB434*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AE638 002AB438*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AE63C 002AB43C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 802AE640 002AB440  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802AE644 002AB444*/ PPC::Runtime::ASM::beq(.L_802AE660);
/*802AE648 002AB448*/ PPC::Runtime::ASM::lis(context->r5, lbl_804C0470 @ Get_MemoryOffset_HighBit);
/*802AE64C 002AB44C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*802AE650 002AB450*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804C0470 @ Get_MemoryOffset_LowBit);
/*802AE654 002AB454*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802AE658 002AB458*/ PPC::Runtime::ASM::ble(.L_802AE660);
/*802AE65C 002AB45C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AE660, 0x802AE660) //this is a jump label
/*802AE660 002AB460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AE664 002AB464*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802AE668 002AB468*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AE66C 002AB46C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AE670 002AB470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AE674 002AB474*/ PPC::Runtime::ASM::blr();
}