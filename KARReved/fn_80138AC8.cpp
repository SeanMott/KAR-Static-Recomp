//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80138AC8(PPC::Runtime::GCContext* context)
{
/*80138AC8 001358C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80138ACC 001358CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80138AD0 001358D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80138AD4 001358D4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80138AD8 001358D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80138ADC 001358DC*/ PPC::Runtime::ASM::blr();
}