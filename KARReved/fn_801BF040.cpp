//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0348.hpp"



void fn_801BF040(PPC::Runtime::GCContext* context)
{
/*801BF040 001BBE40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF044 001BBE44*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF048 001BBE48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF04C 001BBE4C*/ PPC::Runtime::ASM::bl(fn_801A0348);
/*801BF050 001BBE50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF054 001BBE54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF058 001BBE58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF05C 001BBE5C*/ PPC::Runtime::ASM::blr();
}