//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8022372C(PPC::Runtime::GCContext* context)
{
/*8022372C 0022052C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80223730 00220530*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*80223734 00220534*/ PPC::Runtime::ASM::blr();
}