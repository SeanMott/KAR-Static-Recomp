//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007D524(PPC::Runtime::GCContext* context)
{
/*8007D524 0007A324*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D528 0007A328*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0xa);
/*8007D52C 0007A32C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8007D530 0007A330*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*8007D534 0007A334*/ PPC::Runtime::ASM::blr();
}