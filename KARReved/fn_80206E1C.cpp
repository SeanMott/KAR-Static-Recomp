//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80206E1C(PPC::Runtime::GCContext* context)
{
/*80206E1C 00203C1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r3));
/*80206E20 00203C20*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*80206E24 00203C24*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r3));
/*80206E28 00203C28*/ PPC::Runtime::ASM::blr();
}