//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007D4C0(PPC::Runtime::GCContext* context)
{
/*8007D4C0 0007A2C0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD640 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007D4C4 0007A2C4*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x5);
/*8007D4C8 0007A2C8*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8007D4CC 0007A2CC*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*8007D4D0 0007A2D0*/ PPC::Runtime::ASM::blr();
}