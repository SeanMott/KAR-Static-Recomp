//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B214(PPC::Runtime::GCContext* context)
{
/*8029B214 00298014*/ PPC::Runtime::ASM::lis(context->r5, 0xfe0);
/*8029B218 00298018*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x810, context->r3));
/*8029B21C 0029801C*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r4);
/*8029B220 00298020*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x3f81);
/*8029B224 00298024*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8029B228 00298028*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r5, context->r0);
/*8029B22C 0029802C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*8029B230 00298030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x810, context->r3));
/*8029B234 00298034*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x814, context->r3));
/*8029B238 00298038*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8029B23C 0029803C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x814, context->r3));
/*8029B240 00298040*/ PPC::Runtime::ASM::blr();
}