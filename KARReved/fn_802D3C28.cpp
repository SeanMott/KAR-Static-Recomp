//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D3C28(PPC::Runtime::GCContext* context)
{
/*802D3C28 002D0A28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D3C2C 002D0A2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D3C30 002D0A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D3C34 002D0A34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D3C38 002D0A38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802D3C3C 002D0A3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3C40 002D0A40*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D3C44 002D0A44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3C48 002D0A48*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*802D3C4C 002D0A4C*/ PPC::Runtime::ASM::beq(.L_802D3C70);
/*802D3C50 002D0A50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D3C54 002D0A54*/ PPC::Runtime::ASM::beq(.L_802D3C6C);
/*802D3C58 002D0A58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3C5C 002D0A5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3C60 002D0A60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D3C64 002D0A64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3C68 002D0A68*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3C6C, 0x802D3C6C) //this is a jump label
/*802D3C6C 002D0A6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802D3C70, 0x802D3C70) //this is a jump label
/*802D3C70 002D0A70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D3C74 002D0A74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D3C78 002D0A78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D3C7C 002D0A7C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3C80 002D0A80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D3C84 002D0A84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D3C88 002D0A88*/ PPC::Runtime::ASM::blr();
}