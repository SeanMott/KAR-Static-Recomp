//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80043B30.hpp"



void fn_800444D8(PPC::Runtime::GCContext* context)
{
/*800444D8 000412D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800444DC 000412DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800444E0 000412E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800444E4 000412E4*/ PPC::Runtime::ASM::bl(fn_80043B30);
/*800444E8 000412E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800444EC 000412EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800444F0 000412F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800444F4 000412F4*/ PPC::Runtime::ASM::blr();
}