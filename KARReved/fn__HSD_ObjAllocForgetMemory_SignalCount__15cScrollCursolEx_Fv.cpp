//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn__HSD_ObjAllocForgetMemory_SignalCount__15cScrollCursolEx_Fv(PPC::Runtime::GCContext* context)
{
/*8019A638 00197438*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019A63C 0019743C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*8019A640 00197440*/ PPC::Runtime::ASM::blr();
}