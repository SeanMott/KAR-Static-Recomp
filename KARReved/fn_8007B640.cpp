//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B640(PPC::Runtime::GCContext* context)
{
/*8007B640 00078440*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552A30 @ Get_MemoryOffset_HighBit);
/*8007B644 00078444*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552A30 @ Get_MemoryOffset_LowBit);
/*8007B648 00078448*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8007B64C 0007844C*/ PPC::Runtime::ASM::blr();
}