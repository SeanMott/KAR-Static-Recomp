//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_OSGetCurrentContext(PPC::Runtime::GCContext* context)
{
/*803D9AE8 003D68E8*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803D9AEC 003D68EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r3));
/*803D9AF0 003D68F0*/ PPC::Runtime::ASM::blr();
}