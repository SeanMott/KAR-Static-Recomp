//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802322C0(PPC::Runtime::GCContext* context)
{
/*802322C0 0022F0C0*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0xc);
/*802322C4 0022F0C4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9);
/*802322C8 0022F0C8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r4);
/*802322CC 0022F0CC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*802322D0 0022F0D0*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r4);
/*802322D4 0022F0D4*/ PPC::Runtime::ASM::blr();
}