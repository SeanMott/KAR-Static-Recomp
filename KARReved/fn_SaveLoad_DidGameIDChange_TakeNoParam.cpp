//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_SaveLoad_DidGameIDChange_TakeNoParam(PPC::Runtime::GCContext* context)
{
/*803C27A0 003BF5A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056BDF8 @ Get_MemoryOffset_HighBit);
/*803C27A4 003BF5A4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8056BDF8 @ Get_MemoryOffset_LowBit);
/*803C27A8 003BF5A8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803C27AC 003BF5AC*/ PPC::Runtime::ASM::blr();
}