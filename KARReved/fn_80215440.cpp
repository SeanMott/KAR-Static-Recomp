//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"



void fn_80215440(PPC::Runtime::GCContext* context)
{
/*80215440 00212240*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215444 00212244*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215448 00212248*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021544C 0021224C*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80215450 00212250*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215454 00212254*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80215458 00212258*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8021545C 0021225C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215460 00212260*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80215464 00212264*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215468 00212268*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021546C 0021226C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215470 00212270*/ PPC::Runtime::ASM::blr();
}