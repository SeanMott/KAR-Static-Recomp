//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801DD9BC(PPC::Runtime::GCContext* context)
{
/*801DD9BC 001DA7BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x85c, context->r3));
/*801DD9C0 001DA7C0*/ PPC::Runtime::ASM::blr();
}