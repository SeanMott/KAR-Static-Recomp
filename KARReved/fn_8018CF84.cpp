//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8018CF84(PPC::Runtime::GCContext* context)
{
/*8018CF84 00189D84*/ PPC::Runtime::ASM::lis(context->r4, lbl_80559BF4 @ Get_MemoryOffset_HighBit);
/*8018CF88 00189D88*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80559BF4 @ Get_MemoryOffset_LowBit);
/*8018CF8C 00189D8C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8018CF90 00189D90*/ PPC::Runtime::ASM::blr();
}