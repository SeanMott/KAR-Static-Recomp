//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80223168.hpp"



void fn_8019183C(PPC::Runtime::GCContext* context)
{
/*8019183C 0018E63C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191840 0018E640*/ PPC::Runtime::ASM::mflr(context->r0);
/*80191844 0018E644*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191848 0018E648*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r3));
/*8019184C 0018E64C*/ PPC::Runtime::ASM::bl(fn_80223168);
/*80191850 0018E650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191854 0018E654*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80191858 0018E658*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019185C 0018E65C*/ PPC::Runtime::ASM::blr();
}