//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80148D50.hpp"



void fn_80132214(PPC::Runtime::GCContext* context)
{
/*80132214 0012F014*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80132218 0012F018*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013221C 0012F01C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132220 0012F020*/ PPC::Runtime::ASM::bl(fn_80148D50);
/*80132224 0012F024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132228 0012F028*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013222C 0012F02C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80132230 0012F030*/ PPC::Runtime::ASM::blr();
}