//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB78.hpp"



void fn_cHeadTrack___dt_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*80395ABC 003928BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80395AC0 003928C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80395AC4 003928C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80395AC8 003928C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80395ACC 003928CC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80395AD0 003928D0*/ PPC::Runtime::ASM::beq(.L_80395AEC);
/*80395AD4 003928D4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5598 @ Get_MemoryOffset_HighBit);
/*80395AD8 003928D8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80395ADC 003928DC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5598 @ Get_MemoryOffset_LowBit);
/*80395AE0 003928E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80395AE4 003928E4*/ PPC::Runtime::ASM::ble(.L_80395AEC);
/*80395AE8 003928E8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80395AEC, 0x80395AEC) //this is a jump label
/*80395AEC 003928EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80395AF0 003928F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80395AF4 003928F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80395AF8 003928F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80395AFC 003928FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80395B00 00392900*/ PPC::Runtime::ASM::blr();
}