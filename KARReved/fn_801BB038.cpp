//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2D58.hpp"



void fn_801BB038(PPC::Runtime::GCContext* context)
{
/*801BB038 001B7E38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BB03C 001B7E3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BB040 001B7E40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB044 001B7E44*/ PPC::Runtime::ASM::bl(fn_801A2D58);
/*801BB048 001B7E48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BB04C 001B7E4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BB050 001B7E50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BB054 001B7E54*/ PPC::Runtime::ASM::blr();
}