//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005DCEC(PPC::Runtime::GCContext* context)
{
/*8005DCEC 0005AAEC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005DCF0 0005AAF0*/ PPC::Runtime::ASM::beqlr();
/*8005DCF4 0005AAF4*/ PPC::Runtime::ASM::mulli(context->r5, context->r3, 0xb8);
/*8005DCF8 0005AAF8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005DCFC 0005AAFC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005DD00 0005AB00*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r5);
/*8005DD04 0005AB04*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*8005DD08 0005AB08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8005DD0C 0005AB0C*/ PPC::Runtime::ASM::bnelr();
/*8005DD10 0005AB10*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8005DD14 0005AB14*/ PPC::Runtime::ASM::blr();
}