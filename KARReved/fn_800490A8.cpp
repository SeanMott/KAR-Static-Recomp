//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80047844.hpp"



void fn_800490A8(PPC::Runtime::GCContext* context)
{
/*800490A8 00045EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800490AC 00045EAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800490B0 00045EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800490B4 00045EB4*/ PPC::Runtime::ASM::bl(fn_80047844);
/*800490B8 00045EB8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*800490BC 00045EBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*800490C0 00045EC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800490C4 00045EC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800490C8 00045EC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800490CC 00045ECC*/ PPC::Runtime::ASM::blr();
}