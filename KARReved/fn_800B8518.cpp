//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"



void fn_800B8518(PPC::Runtime::GCContext* context)
{
/*800B8518 000B5318*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800B851C 000B531C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B8520 000B5320*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8524 000B5324*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800B8528 000B5328*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B852C 000B532C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B8530 000B5330*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800B8534 000B5334*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800B8538 000B5338*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800B853C 000B533C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B8540 000B5340*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800B8544 000B5344*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800B8548 000B5348*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800B854C 000B534C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800B8550 000B5350*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*800B8554 000B5354*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B8558 000B5358*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800B855C 000B535C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*800B8560 000B5360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B8564 000B5364*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B8568 000B5368*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800B856C 000B536C*/ PPC::Runtime::ASM::blr();
}