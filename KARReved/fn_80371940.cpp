//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80371940(PPC::Runtime::GCContext* context)
{
/*80371940 0036E740*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*80371944 0036E744*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x38);
/*80371948 0036E748*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*8037194C 0036E74C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80371950 0036E750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*80371954 0036E754*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r3));
/*80371958 0036E758*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8037195C 0036E75C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r3));
/*80371960 0036E760*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80371964 0036E764*/ PPC::Runtime::ASM::blr();
}