//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028BF4C(PPC::Runtime::GCContext* context)
{
/*8028BF4C 00288D4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028BF50 00288D50*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028BF54 00288D54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028BF58 00288D58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028BF5C 00288D5C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028BF60 00288D60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028BF64 00288D64  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028BF68 00288D68*/ PPC::Runtime::ASM::beq(.L_8028BF94);
/*8028BF6C 00288D6C*/ PPC::Runtime::ASM::beq(.L_8028BF84);
/*8028BF70 00288D70*/ PPC::Runtime::ASM::beq(.L_8028BF84);
/*8028BF74 00288D74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8028BF78 00288D78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BF7C 00288D7C*/ PPC::Runtime::ASM::beq(.L_8028BF84);
/*8028BF80 00288D80*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028BF84, 0x8028BF84) //this is a jump label
/*8028BF84 00288D84*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028BF88 00288D88*/ PPC::Runtime::ASM::ble(.L_8028BF94);
/*8028BF8C 00288D8C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028BF90 00288D90*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028BF94, 0x8028BF94) //this is a jump label
/*8028BF94 00288D94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028BF98 00288D98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028BF9C 00288D9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028BFA0 00288DA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028BFA4 00288DA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028BFA8 00288DA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028BFAC 00288DAC*/ PPC::Runtime::ASM::blr();
}