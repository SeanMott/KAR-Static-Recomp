//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void OSCreateAlarm(PPC::Runtime::GCContext* context)
{
/*803D2E80 003CFC80*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D2E84 003CFC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803D2E88 003CFC88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D2E8C 003CFC8C*/ PPC::Runtime::ASM::blr();
}