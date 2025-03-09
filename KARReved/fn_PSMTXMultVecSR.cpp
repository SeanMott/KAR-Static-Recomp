//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_PSMTXMultVecSR(PPC::Runtime::GCContext* context)
{
/*803D1E40 003CEC40*/ PPC::Runtime::ASM::psq_l(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/*803D1E44 003CEC44*/ PPC::Runtime::ASM::psq_l(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4)0, context->qr0);
/*803D1E48 003CEC48*/ PPC::Runtime::ASM::psq_l(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3)0, context->qr0);
/* 803D1E4C 003CEC4C  11 00 01 B2 */ ps_mul context->f8 , context->f0 , context->f6
/*803D1E50 003CEC50*/ PPC::Runtime::ASM::psq_l(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3)0, context->qr0);
/* 803D1E54 003CEC54  11 42 01 B2 */ ps_mul context->f10 , context->f2 , context->f6
/*803D1E58 003CEC58*/ PPC::Runtime::ASM::psq_l(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4)1, context->qr0);
/* 803D1E5C 003CEC5C  11 84 01 B2 */ ps_mul context->f12 , context->f4 , context->f6
/*803D1E60 003CEC60*/ PPC::Runtime::ASM::psq_l(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3)0, context->qr0);
/* 803D1E64 003CEC64  11 08 42 14 */ ps_sum0 context->f8 , context->f8 , context->f8 , context->f8
/*803D1E68 003CEC68*/ PPC::Runtime::ASM::psq_l(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3)0, context->qr0);
/* 803D1E6C 003CEC6C  11 4A 52 94 */ ps_sum0 context->f10 , context->f10 , context->f10 , context->f10
/*803D1E70 003CEC70*/ PPC::Runtime::ASM::psq_l(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3)0, context->qr0);
/* 803D1E74 003CEC74  11 8C 63 14 */ ps_sum0 context->f12 , context->f12 , context->f12 , context->f12
/* 803D1E78 003CEC78  11 21 41 FA */ ps_madd context->f9 , context->f1 , context->f7 , context->f8
/*803D1E7C 003CEC7C*/ PPC::Runtime::ASM::psq_st(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5)1, context->qr0);
/* 803D1E80 003CEC80  11 63 51 FA */ ps_madd context->f11 , context->f3 , context->f7 , context->f10
/*803D1E84 003CEC84*/ PPC::Runtime::ASM::psq_st(context->f11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5)1, context->qr0);
/* 803D1E88 003CEC88  11 A5 61 FA */ ps_madd context->f13 , context->f5 , context->f7 , context->f12
/*803D1E8C 003CEC8C*/ PPC::Runtime::ASM::psq_st(context->f13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5)1, context->qr0);
/*803D1E90 003CEC90*/ PPC::Runtime::ASM::blr();
}