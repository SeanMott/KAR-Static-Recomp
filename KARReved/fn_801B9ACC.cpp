//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A4610.hpp"



void fn_801B9ACC(PPC::Runtime::GCContext* context)
{
/*801B9ACC 001B68CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B9AD0 001B68D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B9AD4 001B68D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B9AD8 001B68D8*/ PPC::Runtime::ASM::bl(fn_801A4610);
/*801B9ADC 001B68DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B9AE0 001B68E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B9AE4 001B68E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B9AE8 001B68E8*/ PPC::Runtime::ASM::blr();
}