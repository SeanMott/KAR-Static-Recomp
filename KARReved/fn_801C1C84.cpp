//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C1DB8.hpp"



void fn_801C1C84(PPC::Runtime::GCContext* context)
{
/*801C1C84 001BEA84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1C88 001BEA88*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1C8C 001BEA8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1C90 001BEA90*/ PPC::Runtime::ASM::bl(fn_801C1DB8);
/*801C1C94 001BEA94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1C98 001BEA98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1C9C 001BEA9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1CA0 001BEAA0*/ PPC::Runtime::ASM::blr();
}