//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80191680(PPC::Runtime::GCContext* context)
{
/*80191680 0018E480*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80191684 0018E484*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80191688 0018E488*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8019168C 0018E48C*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80191690 0018E490*/ PPC::Runtime::ASM::blr();
}