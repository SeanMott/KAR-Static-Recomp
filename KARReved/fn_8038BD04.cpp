//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038BD04(PPC::Runtime::GCContext* context)
{
/*8038BD04 00388B04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8038BD08 00388B08*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8038BD0C 00388B0C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r3));
/*8038BD10 00388B10*/ PPC::Runtime::ASM::blr();
}