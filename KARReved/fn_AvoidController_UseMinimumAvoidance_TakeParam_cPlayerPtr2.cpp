//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_AvoidController_UseMinimumAvoidance_TakeParam_cPlayerPtr2(PPC::Runtime::GCContext* context)
{
/*8037E374 0037B174*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8037E378 0037B178*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8037E37C 0037B17C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8037E380 0037B180*/ PPC::Runtime::ASM::blr();
}