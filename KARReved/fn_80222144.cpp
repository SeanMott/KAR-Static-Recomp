//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80222144(PPC::Runtime::GCContext* context)
{
/*80222144 0021EF44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*80222148 0021EF48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8022214C 0021EF4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r3));
/*80222150 0021EF50*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80222154 0021EF54*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80222158 0021EF58*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8022215C 0021EF5C*/ PPC::Runtime::ASM::blr();
}