//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190ADC.hpp"



void fn_801920C8(PPC::Runtime::GCContext* context)
{
/*801920C8 0018EEC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801920CC 0018EECC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801920D0 0018EED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801920D4 0018EED4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801920D8 0018EED8*/ PPC::Runtime::ASM::bl(fn_80190ADC);
/*801920DC 0018EEDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801920E0 0018EEE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801920E4 0018EEE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801920E8 0018EEE8*/ PPC::Runtime::ASM::blr();
}