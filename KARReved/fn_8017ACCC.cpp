//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017ACCC(PPC::Runtime::GCContext* context)
{
/*8017ACCC 00177ACC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017ACD0 00177AD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017ACD4 00177AD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017ACD8 00177AD8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017ACDC 00177ADC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea4, context->r3));
/*8017ACE0 00177AE0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017ACE4 00177AE4*/ PPC::Runtime::ASM::beq(.L_8017ACF8);
/*8017ACE8 00177AE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8017ACEC 00177AEC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8017ACF0 00177AF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8017ACF4 00177AF4*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_8017ACF8, 0x8017ACF8) //this is a jump label
/*8017ACF8 00177AF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017ACFC 00177AFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017AD00 00177B00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017AD04 00177B04*/ PPC::Runtime::ASM::blr();
}