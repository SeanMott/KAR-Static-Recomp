//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193004.hpp"



void fn_801AAC60(PPC::Runtime::GCContext* context)
{
/*801AAC60 001A7A60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AAC64 001A7A64*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AAC68 001A7A68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAC6C 001A7A6C*/ PPC::Runtime::ASM::bl(fn_80193004);
/*801AAC70 001A7A70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAC74 001A7A74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AAC78 001A7A78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AAC7C 001A7A7C*/ PPC::Runtime::ASM::blr();
}