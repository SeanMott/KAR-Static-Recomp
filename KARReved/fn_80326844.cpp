//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80326844(PPC::Runtime::GCContext* context)
{
/*80326844 00323644*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*80326848 00323648*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8032684C 0032364C*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80326850 00323650*/ PPC::Runtime::ASM::blr();
}