//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C852C(PPC::Runtime::GCContext* context)
{
/*801C852C 001C532C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C8530 001C5330*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r3));
/*801C8534 001C5334*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 30);
/*801C8538 001C5338*/ PPC::Runtime::ASM::blr();
}