//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80385F18.hpp"



void fn_803888BC(PPC::Runtime::GCContext* context)
{
/*803888BC 003856BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803888C0 003856C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803888C4 003856C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803888C8 003856C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803888CC 003856CC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*803888D0 003856D0*/ PPC::Runtime::ASM::bl(fn_80385F18);
/*803888D4 003856D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803888D8 003856D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803888DC 003856DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803888E0 003856E0*/ PPC::Runtime::ASM::blr();
}