//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B340(PPC::Runtime::GCContext* context)
{
/*8029B340 00298140*/ PPC::Runtime::ASM::lis(context->r5, 0x410);
/*8029B344 00298144*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ec0, context->r3));
/*8029B348 00298148*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r4);
/*8029B34C 0029814C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4105);
/*8029B350 00298150*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8029B354 00298154*/ PPC::Runtime::ASM::mulhwu(context->r4, context->r5, context->r0);
/*8029B358 00298158*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8029B35C 0029815C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 1);
/*8029B360 00298160*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8029B364 00298164*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 7);
/*8029B368 00298168*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ec0, context->r3));
/*8029B36C 0029816C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ec4, context->r3));
/*8029B370 00298170*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8029B374 00298174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ec4, context->r3));
/*8029B378 00298178*/ PPC::Runtime::ASM::blr();
}