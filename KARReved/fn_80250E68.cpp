//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80250E68(PPC::Runtime::GCContext* context)
{
/*80250E68 0024DC68*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*80250E6C 0024DC6C*/ PPC::Runtime::ASM::blr();
}