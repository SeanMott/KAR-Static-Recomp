//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_804881C0(PPC::Runtime::GCContext* context)
{
/*804881C0 00484FC0*/ PPC::Runtime::ASM::lis(context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*804881C4 00484FC4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*804881C8 00484FC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*804881CC 00484FCC*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x1);
/*804881D0 00484FD0*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*804881D4 00484FD4*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*804881D8 00484FD8*/ PPC::Runtime::ASM::blr();
}