//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8000BB78(PPC::Runtime::GCContext* context)
{
/*8000BB78 00008978*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_136 @ Get_MemoryOffset_HighBit);
/*8000BB7C 0000897C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8000BB80 00008980*/ PPC::Runtime::ASM::addi(context->r3, context->r4, MemoryOffset_136 @ Get_MemoryOffset_LowBit);
/*8000BB84 00008984*/ PPC::Runtime::ASM::lbzx(context->r3, context->r3, context->r0);
/*8000BB88 00008988*/ PPC::Runtime::ASM::blr();
}