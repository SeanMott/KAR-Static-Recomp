//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8036E8D4(PPC::Runtime::GCContext* context)
{
/*8036E8D4 0036B6D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8036E8D8 0036B6D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036E8DC 0036B6DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036E8E0 0036B6E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036E8E4 0036B6E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036E8E8 0036B6E8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x10);
/*8036E8EC 0036B6EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8036E8F0 0036B6F0*/ PPC::Runtime::ASM::b(.L_8036E90C);
RUNTIME_PPC_JUMP_LABEL(.L_8036E8F4, 0x8036E8F4) //this is a jump label
/*8036E8F4 0036B6F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x94);
/*8036E8F8 0036B6F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*8036E8FC 0036B6FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036E900 0036B700*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036E904 0036B704*/ PPC::Runtime::ASM::bctrl();
/*8036E908 0036B708*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036E90C, 0x8036E90C) //this is a jump label
/*8036E90C 0036B70C*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*8036E910 0036B710*/ PPC::Runtime::ASM::bne(.L_8036E8F4);
/*8036E914 0036B714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036E918 0036B718*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036E91C 0036B71C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036E920 0036B720*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036E924 0036B724*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8036E928 0036B728*/ PPC::Runtime::ASM::blr();
}