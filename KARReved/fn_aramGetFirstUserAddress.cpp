//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_aramGetFirstUserAddress(PPC::Runtime::GCContext* context)
{
/*8004640C 0004320C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80046410 00043210*/ PPC::Runtime::ASM::mflr(context->r0);
/*80046414 00043214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80046418 00043218*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004641C 0004321C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80046420 00043220*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x484);
/*80046424 00043224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80046428 00043228*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004642C 0004322C*/ PPC::Runtime::ASM::blr();
}