//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_gmSet_region1(PPC::Runtime::GCContext* context)
{
/*80007670 00004470*/ PPC::Runtime::ASM::lis(context->r4, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80007674 00004474*/ PPC::Runtime::ASM::addi(context->r4, context->r4, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80007678 00004478*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd48, context->r4));
/*8000767C 0000447C*/ PPC::Runtime::ASM::blr();
}