//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205F60.hpp"



void fn_80213968(PPC::Runtime::GCContext* context)
{
/*80213968 00210768*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021396C 0021076C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80213970 00210770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213974 00210774*/ PPC::Runtime::ASM::bl(fn_80205F60);
/*80213978 00210778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021397C 0021077C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80213980 00210780*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80213984 00210784*/ PPC::Runtime::ASM::blr();
}