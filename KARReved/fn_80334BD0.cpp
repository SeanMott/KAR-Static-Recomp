//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80334BD0(PPC::Runtime::GCContext* context)
{
/*80334BD0 003319D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a80, context->r3));
/*80334BD4 003319D4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x1d4);
/*80334BD8 003319D8*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*80334BDC 003319DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80334BE0 003319E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a80, context->r3));
/*80334BE4 003319E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a84, context->r3));
/*80334BE8 003319E8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80334BEC 003319EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a84, context->r3));
/*80334BF0 003319F0*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80334BF4 003319F4*/ PPC::Runtime::ASM::blr();
}