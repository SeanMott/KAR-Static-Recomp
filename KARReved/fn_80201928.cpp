//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802011BC.hpp"



void fn_80201928(PPC::Runtime::GCContext* context)
{
/*80201928 001FE728*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020192C 001FE72C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80201930 001FE730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80201934 001FE734*/ PPC::Runtime::ASM::bl(fn_802011BC);
/*80201938 001FE738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020193C 001FE73C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80201940 001FE740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80201944 001FE744*/ PPC::Runtime::ASM::blr();
}