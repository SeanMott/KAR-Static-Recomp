//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801FA064(PPC::Runtime::GCContext* context)
{
/*801FA064 001F6E64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66c, context->r3));
/*801FA068 001F6E68*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*801FA06C 001F6E6C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*801FA070 001F6E70*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*801FA074 001F6E74*/ PPC::Runtime::ASM::blr();
}