//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80305098(PPC::Runtime::GCContext* context)
{
/*80305098 00301E98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8030509C 00301E9C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*803050A0 00301EA0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*803050A4 00301EA4*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*803050A8 00301EA8*/ PPC::Runtime::ASM::blr();
}