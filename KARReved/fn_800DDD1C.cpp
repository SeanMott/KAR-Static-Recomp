//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800DDD1C(PPC::Runtime::GCContext* context)
{
/*800DDD1C 000DAB1C*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x140);
/*800DDD20 000DAB20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800DDD24 000DAB24*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x138);
/*800DDD28 000DAB28*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800DDD2C 000DAB2C*/ PPC::Runtime::ASM::blr();
}