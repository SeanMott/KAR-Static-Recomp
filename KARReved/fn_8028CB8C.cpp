//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028CB8C(PPC::Runtime::GCContext* context)
{
/*8028CB8C 0028998C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028CB90 00289990*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028CB94 00289994*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028CB98 00289998*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028CB9C 0028999C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028CBA0 002899A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028CBA4 002899A4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028CBA8 002899A8*/ PPC::Runtime::ASM::beq(.L_8028CBDC);
/*8028CBAC 002899AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028CBB0 002899B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028CBB4 002899B4*/ PPC::Runtime::ASM::beq(.L_8028CBCC);
/*8028CBB8 002899B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028CBBC 002899BC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028CBC0 002899C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028CBC4 002899C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028CBC8 002899C8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028CBCC, 0x8028CBCC) //this is a jump label
/*8028CBCC 002899CC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028CBD0 002899D0*/ PPC::Runtime::ASM::ble(.L_8028CBDC);
/*8028CBD4 002899D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028CBD8 002899D8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028CBDC, 0x8028CBDC) //this is a jump label
/*8028CBDC 002899DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028CBE0 002899E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028CBE4 002899E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028CBE8 002899E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028CBEC 002899EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028CBF0 002899F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028CBF4 002899F4*/ PPC::Runtime::ASM::blr();
}