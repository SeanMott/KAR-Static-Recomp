//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80173394.hpp"



void fn_80137B90(PPC::Runtime::GCContext* context)
{
/*80137B90 00134990*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137B94 00134994*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137B98 00134998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137B9C 0013499C*/ PPC::Runtime::ASM::bl(fn_80173394);
/*80137BA0 001349A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137BA4 001349A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137BA8 001349A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137BAC 001349AC*/ PPC::Runtime::ASM::blr();
}