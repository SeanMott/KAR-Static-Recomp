//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802F858C.hpp"



void fn_802D5BE4(PPC::Runtime::GCContext* context)
{
/*802D5BE4 002D29E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D5BE8 002D29E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D5BEC 002D29EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5BF0 002D29F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D5BF4 002D29F4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802D5BF8 002D29F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D5BFC 002D29FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D5C00 002D2A00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*802D5C04 002D2A04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5C08 002D2A08*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802D5C0C 002D2A0C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5C10 002D2A10*/ PPC::Runtime::ASM::bctrl();
/*802D5C14 002D2A14*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xd);
/*802D5C18 002D2A18*/ PPC::Runtime::ASM::beq(.L_802D5C4C);
/*802D5C1C 002D2A1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*802D5C20 002D2A20*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802D5C24 002D2A24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5C28 002D2A28*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D5C2C 002D2A2C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5C30 002D2A30*/ PPC::Runtime::ASM::bctrl();
/*802D5C34 002D2A34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*802D5C38 002D2A38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D5C3C 002D2A3C*/ PPC::Runtime::ASM::beq(.L_802D5C4C);
/*802D5C40 002D2A40*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*802D5C44 002D2A44*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x80);
/*802D5C48 002D2A48*/ PPC::Runtime::ASM::bl(fn_802F858C);
RUNTIME_PPC_JUMP_LABEL(.L_802D5C4C, 0x802D5C4C) //this is a jump label
/*802D5C4C 002D2A4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5C50 002D2A50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D5C54 002D2A54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D5C58 002D2A58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D5C5C 002D2A5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D5C60 002D2A60*/ PPC::Runtime::ASM::blr();
}