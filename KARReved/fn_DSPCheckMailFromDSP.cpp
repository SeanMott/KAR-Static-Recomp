//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_DSPCheckMailFromDSP(PPC::Runtime::GCContext* context)
{
/*803C3548 003C0348*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803C354C 003C034C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5004, context->r3));
/*803C3550 003C0350*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 16);
/*803C3554 003C0354*/ PPC::Runtime::ASM::blr();
}