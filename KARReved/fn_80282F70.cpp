//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80282F70(PPC::Runtime::GCContext* context)
{
/*80282F70 0027FD70*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80282F74 0027FD74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*80282F78 0027FD78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r3));
/*80282F7C 0027FD7C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80282F80 0027FD80*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80282F84 0027FD84*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*80282F88 0027FD88*/ PPC::Runtime::ASM::blr();
}