//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8018CF64(PPC::Runtime::GCContext* context)
{
/*8018CF64 00189D64*/ PPC::Runtime::ASM::lis(context->r4, lbl_80559BF4 @ Get_MemoryOffset_HighBit);
/*8018CF68 00189D68*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8018CF6C 00189D6C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80559BF4 @ Get_MemoryOffset_LowBit);
/*8018CF70 00189D70*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8018CF74 00189D74*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r4));
/*8018CF78 00189D78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r4));
/*8018CF7C 00189D7C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8018CF80 00189D80*/ PPC::Runtime::ASM::blr();
}