//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B470(PPC::Runtime::GCContext* context)
{
/*8007B470 00078270*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8007B474 00078274*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8007B478 00078278*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8007B47C 0007827C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*8007B480 00078280*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8007B484 00078284*/ PPC::Runtime::ASM::blr();
}