//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190BC4.hpp"



void fn_801920EC(PPC::Runtime::GCContext* context)
{
/*801920EC 0018EEEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801920F0 0018EEF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801920F4 0018EEF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801920F8 0018EEF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801920FC 0018EEFC*/ PPC::Runtime::ASM::bl(fn_80190BC4);
/*80192100 0018EF00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192104 0018EF04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80192108 0018EF08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019210C 0018EF0C*/ PPC::Runtime::ASM::blr();
}