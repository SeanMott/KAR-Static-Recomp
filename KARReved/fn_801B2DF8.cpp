//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B2FA8.hpp"



void fn_801B2DF8(PPC::Runtime::GCContext* context)
{
/*801B2DF8 001AFBF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B2DFC 001AFBFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2E00 001AFC00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2E04 001AFC04*/ PPC::Runtime::ASM::bl(fn_801B2FA8);
/*801B2E08 001AFC08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2E0C 001AFC0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2E10 001AFC10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B2E14 001AFC14*/ PPC::Runtime::ASM::blr();
}