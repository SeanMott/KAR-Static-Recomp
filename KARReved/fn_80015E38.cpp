//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80015E38(PPC::Runtime::GCContext* context)
{
/*80015E38 00012C38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80015E3C 00012C3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80015E40 00012C40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80015E44 00012C44*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80015E48 00012C48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80015E4C 00012C4C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39, context->r3));
/*80015E50 00012C50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80015E54 00012C54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80015E58 00012C58*/ PPC::Runtime::ASM::blr();
}