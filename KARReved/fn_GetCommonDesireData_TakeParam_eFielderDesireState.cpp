//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GetCommonDesireData_TakeParam_eFielderDesireState(PPC::Runtime::GCContext* context)
{
/*8007116C 0006DF6C*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0xc);
/*80071170 0006DF70*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_237 @ Get_MemoryOffset_HighBit);
/*80071174 0006DF74*/ PPC::Runtime::ASM::addi(context->r0, context->r3, MemoryOffset_237 @ Get_MemoryOffset_LowBit);
/*80071178 0006DF78*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8007117C 0006DF7C*/ PPC::Runtime::ASM::blr();
}