//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0664.hpp"



void fn_801AD2A4(PPC::Runtime::GCContext* context)
{
/*801AD2A4 001AA0A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AD2A8 001AA0A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AD2AC 001AA0AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AD2B0 001AA0B0*/ PPC::Runtime::ASM::bl(fn_801A0664);
/*801AD2B4 001AA0B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AD2B8 001AA0B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AD2BC 001AA0BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AD2C0 001AA0C0*/ PPC::Runtime::ASM::blr();
}