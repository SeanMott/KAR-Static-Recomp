//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3FC.hpp"



void fn_801C4AF0(PPC::Runtime::GCContext* context)
{
/*801C4AF0 001C18F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4AF4 001C18F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4AF8 001C18F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4AFC 001C18FC*/ PPC::Runtime::ASM::bl(fn_8019F3FC);
/*801C4B00 001C1900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4B04 001C1904*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4B08 001C1908*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4B0C 001C190C*/ PPC::Runtime::ASM::blr();
}