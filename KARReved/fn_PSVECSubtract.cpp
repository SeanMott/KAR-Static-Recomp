//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_PSVECSubtract(PPC::Runtime::GCContext* context)
{
/*803D20BC 003CEEBC*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/*803D20C0 003CEEC0*/ PPC::Runtime::ASM::psq_l(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/* 803D20C4 003CEEC4  10 C2 20 28 */ ps_sub context->f6 , context->f2 , context->f4
/*803D20C8 003CEEC8*/ PPC::Runtime::ASM::psq_st(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5)0, context->qr0);
/*803D20CC 003CEECC*/ PPC::Runtime::ASM::psq_l(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3)1, context->qr0);
/*803D20D0 003CEED0*/ PPC::Runtime::ASM::psq_l(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4)1, context->qr0);
/* 803D20D4 003CEED4  10 E3 28 28 */ ps_sub context->f7 , context->f3 , context->f5
/*803D20D8 003CEED8*/ PPC::Runtime::ASM::psq_st(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5)1, context->qr0);
/*803D20DC 003CEEDC*/ PPC::Runtime::ASM::blr();
}