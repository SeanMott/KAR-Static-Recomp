//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_PSVECDotProduct(PPC::Runtime::GCContext* context)
{
/*803D219C 003CEF9C*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3)0, context->qr0);
/*803D21A0 003CEFA0*/ PPC::Runtime::ASM::psq_l(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4)0, context->qr0);
/* 803D21A4 003CEFA4  10 42 00 F2 */ ps_mul context->f2 , context->f2 , context->f3
/*803D21A8 003CEFA8*/ PPC::Runtime::ASM::psq_l(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/*803D21AC 003CEFAC*/ PPC::Runtime::ASM::psq_l(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/* 803D21B0 003CEFB0  10 65 11 3A */ ps_madd context->f3 , context->f5 , context->f4 , context->f2
/* 803D21B4 003CEFB4  10 23 10 94 */ ps_sum0 context->f1 , context->f3 , context->f2 , context->f2
/*803D21B8 003CEFB8*/ PPC::Runtime::ASM::blr();
}