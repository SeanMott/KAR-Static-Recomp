//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80292FF0(PPC::Runtime::GCContext* context)
{
/*80292FF0 0028FDF0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80292FF4 0028FDF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80292FF8 0028FDF8*/ PPC::Runtime::ASM::blr();
}