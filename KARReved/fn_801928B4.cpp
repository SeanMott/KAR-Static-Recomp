//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801928B4(PPC::Runtime::GCContext* context)
{
/*801928B4 0018F6B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801928B8 0018F6B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x794);
/*801928BC 0018F6BC*/ PPC::Runtime::ASM::blr();
}