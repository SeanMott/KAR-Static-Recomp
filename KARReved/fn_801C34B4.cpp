//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FFDC.hpp"



void fn_801C34B4(PPC::Runtime::GCContext* context)
{
/*801C34B4 001C02B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C34B8 001C02B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C34BC 001C02BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C34C0 001C02C0*/ PPC::Runtime::ASM::bl(fn_8019FFDC);
/*801C34C4 001C02C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C34C8 001C02C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C34CC 001C02CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C34D0 001C02D0*/ PPC::Runtime::ASM::blr();
}