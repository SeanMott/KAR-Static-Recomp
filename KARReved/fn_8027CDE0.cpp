//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8027CDE0(PPC::Runtime::GCContext* context)
{
/*8027CDE0 00279BE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027CDE4 00279BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8027CDE8 00279BE8*/ PPC::Runtime::ASM::blr();
}