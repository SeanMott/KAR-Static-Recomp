//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_cFielder_IsStriker_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*8037102C 0036DE2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80371030 0036DE30*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*80371034 0036DE34*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*80371038 0036DE38*/ PPC::Runtime::ASM::blr();
}