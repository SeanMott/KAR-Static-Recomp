//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193830.hpp"



void fn_8019FC60(PPC::Runtime::GCContext* context)
{
/*8019FC60 0019CA60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019FC64 0019CA64*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FC68 0019CA68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FC6C 0019CA6C*/ PPC::Runtime::ASM::bl(fn_80193830);
/*8019FC70 0019CA70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019FC74 0019CA74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FC78 0019CA78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019FC7C 0019CA7C*/ PPC::Runtime::ASM::blr();
}