//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80304E74(PPC::Runtime::GCContext* context)
{
/*80304E74 00301C74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80304E78 00301C78*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80304E7C 00301C7C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80304E80 00301C80*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80304E84 00301C84*/ PPC::Runtime::ASM::blr();
}