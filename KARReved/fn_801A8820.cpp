//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_AS_JumpOnStarIntro.hpp"



void fn_801A8820(PPC::Runtime::GCContext* context)
{
/*801A8820 001A5620*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A8824 001A5624*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A8828 001A5628*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x3);
/*801A882C 001A562C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A8830 001A5630*/ PPC::Runtime::ASM::bne(.L_801A8838);
/*801A8834 001A5634*/ PPC::Runtime::ASM::bl(fn_AS_JumpOnStarIntro);
RUNTIME_PPC_JUMP_LABEL(.L_801A8838, 0x801A8838) //this is a jump label
/*801A8838 001A5638*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A883C 001A563C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A8840 001A5640*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A8844 001A5644*/ PPC::Runtime::ASM::blr();
}