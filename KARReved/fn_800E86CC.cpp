//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E86CC(PPC::Runtime::GCContext* context)
{
/*800E86CC 000E54CC*/ PPC::Runtime::ASM::mulli(context->r0, context->r5, 0x48);
/*800E86D0 000E54D0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800E86D4 000E54D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*800E86D8 000E54D8*/ PPC::Runtime::ASM::blr();
}