//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FAE68.hpp"



void fn_801FAE30(PPC::Runtime::GCContext* context)
{
/*801FAE30 001F7C30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FAE34 001F7C34*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FAE38 001F7C38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FAE3C 001F7C3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/* 801FAE40 001F7C40  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*801FAE44 001F7C44*/ PPC::Runtime::ASM::beq(.L_801FAE54);
/*801FAE48 001F7C48*/ PPC::Runtime::ASM::bl(fn_801FAE68);
/*801FAE4C 001F7C4C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801FAE50 001F7C50*/ PPC::Runtime::ASM::b(.L_801FAE58);
RUNTIME_PPC_JUMP_LABEL(.L_801FAE54, 0x801FAE54) //this is a jump label
/*801FAE54 001F7C54*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801FAE58, 0x801FAE58) //this is a jump label
/*801FAE58 001F7C58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FAE5C 001F7C5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FAE60 001F7C60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FAE64 001F7C64*/ PPC::Runtime::ASM::blr();
}