//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800A98FC(PPC::Runtime::GCContext* context)
{
/*800A98FC 000A66FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A9900 000A6700*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A9904 000A6704*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A9908 000A6708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f3c, context->r3));
/*800A990C 000A670C*/ PPC::Runtime::ASM::blr();
}