//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FED1C.hpp"



void fn_80212B28(PPC::Runtime::GCContext* context)
{
/*80212B28 0020F928*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80212B2C 0020F92C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80212B30 0020F930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212B34 0020F934*/ PPC::Runtime::ASM::bl(fn_801FED1C);
/*80212B38 0020F938*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212B3C 0020F93C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212B40 0020F940*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212B44 0020F944*/ PPC::Runtime::ASM::blr();
}