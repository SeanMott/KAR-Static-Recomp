//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FFDC.hpp"



void fn_801BFCBC(PPC::Runtime::GCContext* context)
{
/*801BFCBC 001BCABC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BFCC0 001BCAC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BFCC4 001BCAC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFCC8 001BCAC8*/ PPC::Runtime::ASM::bl(fn_8019FFDC);
/*801BFCCC 001BCACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BFCD0 001BCAD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BFCD4 001BCAD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BFCD8 001BCAD8*/ PPC::Runtime::ASM::blr();
}