//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801920C8.hpp"



void fn_801DC548(PPC::Runtime::GCContext* context)
{
/*801DC548 001D9348*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801DC54C 001D934C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801DC550 001D9350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC554 001D9354*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801DC558 001D9358*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801DC55C 001D935C*/ PPC::Runtime::ASM::beq(.L_801DC564);
/*801DC560 001D9360*/ PPC::Runtime::ASM::bl(fn_801920C8);
RUNTIME_PPC_JUMP_LABEL(.L_801DC564, 0x801DC564) //this is a jump label
/*801DC564 001D9364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801DC568 001D9368*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801DC56C 001D936C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801DC570 001D9370*/ PPC::Runtime::ASM::blr();
}