//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801AAE40.hpp"
#include "fn_801AAF38.hpp"



void fn_801AAD4C(PPC::Runtime::GCContext* context)
{
/*801AAD4C 001A7B4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AAD50 001A7B50*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AAD54 001A7B54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAD58 001A7B58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AAD5C 001A7B5C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AAD60 001A7B60*/ PPC::Runtime::ASM::bl(fn_801AAE40);
/*801AAD64 001A7B64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AAD68 001A7B68*/ PPC::Runtime::ASM::bl(fn_801AAF38);
/*801AAD6C 001A7B6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AAD70 001A7B70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AAD74 001A7B74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AAD78 001A7B78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AAD7C 001A7B7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AAD80 001A7B80*/ PPC::Runtime::ASM::blr();
}