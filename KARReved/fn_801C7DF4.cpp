//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C7DF4(PPC::Runtime::GCContext* context)
{
/*801C7DF4 001C4BF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C7DF8 001C4BF8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r3));
/*801C7DFC 001C4BFC*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 30);
/*801C7E00 001C4C00*/ PPC::Runtime::ASM::blr();
}