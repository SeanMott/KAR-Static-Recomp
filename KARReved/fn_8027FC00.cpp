//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8027FC00(PPC::Runtime::GCContext* context)
{
/*8027FC00 0027CA00*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027FC04 0027CA04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8027FC08 0027CA08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8027FC0C 0027CA0C*/ PPC::Runtime::ASM::blr();
}