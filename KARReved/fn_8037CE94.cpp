//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8037CE94(PPC::Runtime::GCContext* context)
{
/*8037CE94 00379C94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b4, context->r3));
/*8037CE98 00379C98*/ PPC::Runtime::ASM::blr();
}