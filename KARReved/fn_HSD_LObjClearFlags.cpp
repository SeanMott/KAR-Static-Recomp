//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_LObjClearFlags(PPC::Runtime::GCContext* context)
{
/*803FDAFC 003FA8FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FDB00 003FA900*/ PPC::Runtime::ASM::beqlr();
/*803FDB04 003FA904*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803FDB08 003FA908*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r4);
/*803FDB0C 003FA90C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803FDB10 003FA910*/ PPC::Runtime::ASM::blr();
}