//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FFFC.hpp"



void fn_801BFCDC(PPC::Runtime::GCContext* context)
{
/*801BFCDC 001BCADC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BFCE0 001BCAE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BFCE4 001BCAE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFCE8 001BCAE8*/ PPC::Runtime::ASM::bl(fn_8019FFFC);
/*801BFCEC 001BCAEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFCF0 001BCAF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BFCF4 001BCAF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BFCF8 001BCAF8*/ PPC::Runtime::ASM::blr();
}