//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80203458.hpp"



void fn_80216E50(PPC::Runtime::GCContext* context)
{
/*80216E50 00213C50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216E54 00213C54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216E58 00213C58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216E5C 00213C5C*/ PPC::Runtime::ASM::bl(fn_80203458);
/*80216E60 00213C60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216E64 00213C64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80216E68 00213C68*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80216E6C 00213C6C*/ PPC::Runtime::ASM::blr();
}