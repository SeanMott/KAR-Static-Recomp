//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801F5C14(PPC::Runtime::GCContext* context)
{
/*801F5C14 001F2A14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc48, context->r3));
/*801F5C18 001F2A18*/ PPC::Runtime::ASM::blr();
}