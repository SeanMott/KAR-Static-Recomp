//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B4C98.hpp"



void fn_801B5294(PPC::Runtime::GCContext* context)
{
/*801B5294 001B2094*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B5298 001B2098*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B529C 001B209C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B52A0 001B20A0*/ PPC::Runtime::ASM::bl(fn_801B4C98);
/*801B52A4 001B20A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B52A8 001B20A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B52AC 001B20AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B52B0 001B20B0*/ PPC::Runtime::ASM::blr();
}