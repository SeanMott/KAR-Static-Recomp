//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801221C8.hpp"



void fn_80114584(PPC::Runtime::GCContext* context)
{
/*80114584 00111384*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80114588 00111388*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011458C 0011138C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80114590 00111390*/ PPC::Runtime::ASM::bl(fn_801221C8);
/*80114594 00111394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80114598 00111398*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011459C 0011139C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801145A0 001113A0*/ PPC::Runtime::ASM::blr();
}