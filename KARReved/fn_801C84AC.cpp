//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C84AC(PPC::Runtime::GCContext* context)
{
/*801C84AC 001C52AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C84B0 001C52B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc37, context->r3));
/*801C84B4 001C52B4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 30);
/*801C84B8 001C52B8*/ PPC::Runtime::ASM::blr();
}