//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF24.hpp"



void fn_801BF9C0(PPC::Runtime::GCContext* context)
{
/*801BF9C0 001BC7C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF9C4 001BC7C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF9C8 001BC7C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF9CC 001BC7CC*/ PPC::Runtime::ASM::bl(fn_8019FF24);
/*801BF9D0 001BC7D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF9D4 001BC7D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF9D8 001BC7D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF9DC 001BC7DC*/ PPC::Runtime::ASM::blr();
}