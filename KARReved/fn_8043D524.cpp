//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8043D524(PPC::Runtime::GCContext* context)
{
/*8043D524 0043A324*/ PPC::Runtime::ASM::lis(context->r3, lbl_805085FC @ Get_MemoryOffset_HighBit);
/*8043D528 0043A328*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805085FC @ Get_MemoryOffset_LowBit);
/*8043D52C 0043A32C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8043D530 0043A330*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 4, 27);
/*8043D534 0043A334*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x8000);
/*8043D538 0043A338*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8043D53C 0043A33C*/ PPC::Runtime::ASM::blr();
}