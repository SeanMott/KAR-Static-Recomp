//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199C14.hpp"



void fn_801A013C(PPC::Runtime::GCContext* context)
{
/*801A013C 0019CF3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A0140 0019CF40*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A0144 0019CF44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A0148 0019CF48*/ PPC::Runtime::ASM::bl(fn_80199C14);
/*801A014C 0019CF4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A0150 0019CF50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A0154 0019CF54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A0158 0019CF58*/ PPC::Runtime::ASM::blr();
}