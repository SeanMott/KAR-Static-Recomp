//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_cPoseNode___ct_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*802C40E4 002C0EE4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F52A8 @ Get_MemoryOffset_HighBit);
/*802C40E8 002C0EE8*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*802C40EC 002C0EEC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F52A8 @ Get_MemoryOffset_LowBit);
/*802C40F0 002C0EF0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802C40F4 002C0EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802C40F8 002C0EF8*/ PPC::Runtime::ASM::blr();
}