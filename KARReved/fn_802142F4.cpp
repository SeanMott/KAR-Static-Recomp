//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"



void fn_802142F4(PPC::Runtime::GCContext* context)
{
/*802142F4 002110F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802142F8 002110F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802142FC 002110FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80214300 00211100*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80214304 00211104*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214308 00211108*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021430C 0021110C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80214310 00211110*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80214314 00211114*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80214318 00211118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021431C 0021111C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80214320 00211120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80214324 00211124*/ PPC::Runtime::ASM::blr();
}