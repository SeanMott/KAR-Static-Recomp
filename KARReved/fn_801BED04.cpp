//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BED3C.hpp"



void fn_801BED04(PPC::Runtime::GCContext* context)
{
/*801BED04 001BBB04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BED08 001BBB08*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BED0C 001BBB0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BED10 001BBB10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3d8, context->r3));
/*801BED14 001BBB14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801BED18 001BBB18*/ PPC::Runtime::ASM::beq(.L_801BED28);
/*801BED1C 001BBB1C*/ PPC::Runtime::ASM::bl(fn_801BED3C);
/*801BED20 001BBB20*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BED24 001BBB24*/ PPC::Runtime::ASM::b(.L_801BED2C);
RUNTIME_PPC_JUMP_LABEL(.L_801BED28, 0x801BED28) //this is a jump label
/*801BED28 001BBB28*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BED2C, 0x801BED2C) //this is a jump label
/*801BED2C 001BBB2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BED30 001BBB30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BED34 001BBB34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BED38 001BBB38*/ PPC::Runtime::ASM::blr();
}