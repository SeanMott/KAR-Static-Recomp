//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038BC80(PPC::Runtime::GCContext* context)
{
/*8038BC80 00388A80*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*8038BC84 00388A84*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*8038BC88 00388A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8038BC8C 00388A8C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8038BC90 00388A90*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*8038BC94 00388A94*/ PPC::Runtime::ASM::blr();
}