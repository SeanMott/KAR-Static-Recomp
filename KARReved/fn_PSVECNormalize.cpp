//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_PSVECNormalize(PPC::Runtime::GCContext* context)
{
/*803D20FC 003CEEFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E58E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D2100 003CEF00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E58EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D2104 003CEF04*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/* 803D2108 003CEF08  10 A2 00 B2 */ ps_mul context->f5 , context->f2 , context->f2
/*803D210C 003CEF0C*/ PPC::Runtime::ASM::psq_l(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3)1, context->qr0);
/* 803D2110 003CEF10  10 83 28 FA */ ps_madd context->f4 , context->f3 , context->f3 , context->f5
/* 803D2114 003CEF14  10 84 28 D4 */ ps_sum0 context->f4 , context->f4 , context->f3 , context->f5
/*803D2118 003CEF18*/ PPC::Runtime::ASM::frsqrte(context->f5, context->f4);
/*803D211C 003CEF1C*/ PPC::Runtime::ASM::fmuls(context->f6, context->f5, context->f5);
/*803D2120 003CEF20*/ PPC::Runtime::ASM::fmuls(context->f0, context->f5, context->f0);
/*803D2124 003CEF24*/ PPC::Runtime::ASM::fnmsubs(context->f6, context->f6, context->f4, context->f1);
/*803D2128 003CEF28*/ PPC::Runtime::ASM::fmuls(context->f5, context->f6, context->f0);
/* 803D212C 003CEF2C  10 42 01 58 */ ps_muls0 context->f2 , context->f2 , context->f5
/*803D2130 003CEF30*/ PPC::Runtime::ASM::psq_st(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/* 803D2134 003CEF34  10 63 01 58 */ ps_muls0 context->f3 , context->f3 , context->f5
/*803D2138 003CEF38*/ PPC::Runtime::ASM::psq_st(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4)1, context->qr0);
/*803D213C 003CEF3C*/ PPC::Runtime::ASM::blr();
}