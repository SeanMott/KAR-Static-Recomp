//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_RObjUpdateFunc(PPC::Runtime::GCContext* context)
{
/*80418458 00415258*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041845C 0041525C*/ PPC::Runtime::ASM::beqlr();
/*80418460 00415260*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*80418464 00415264*/ PPC::Runtime::ASM::bnelr();
/*80418468 00415268*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8041846C 0041526C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5CB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80418470 00415270*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80418474 00415274*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80418478 00415278*/ PPC::Runtime::ASM::bne(.L_8041848C);
/*8041847C 0041527C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80418480 00415280*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x8000);
/*80418484 00415284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80418488 00415288*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041848C, 0x8041848C) //this is a jump label
/*8041848C 0041528C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80418490 00415290*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 1);
/*80418494 00415294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80418498 00415298*/ PPC::Runtime::ASM::blr();
}