//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80193ECC(PPC::Runtime::GCContext* context)
{
/*80193ECC 00190CCC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*80193ED0 00190CD0*/ PPC::Runtime::ASM::blr();
}