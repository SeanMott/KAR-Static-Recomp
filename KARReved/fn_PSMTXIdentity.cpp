//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_PSMTXIdentity(PPC::Runtime::GCContext* context)
{
/*803D13FC 003CE1FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E58B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D1400 003CE200*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E58B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D1404 003CE204*/ PPC::Runtime::ASM::psq_st(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3)0, context->qr0);
/* 803D1408 003CE208  10 40 0C 60 */ ps_merge01 context->f2 , context->f0 , context->f1
/*803D140C 003CE20C*/ PPC::Runtime::ASM::psq_st(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3)0, context->qr0);
/* 803D1410 003CE210  10 21 04 A0 */ ps_merge10 context->f1 , context->f1 , context->f0
/*803D1414 003CE214*/ PPC::Runtime::ASM::psq_st(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3)0, context->qr0);
/*803D1418 003CE218*/ PPC::Runtime::ASM::psq_st(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3)0, context->qr0);
/*803D141C 003CE21C*/ PPC::Runtime::ASM::psq_st(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/*803D1420 003CE220*/ PPC::Runtime::ASM::psq_st(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3)0, context->qr0);
/*803D1424 003CE224*/ PPC::Runtime::ASM::blr();
}