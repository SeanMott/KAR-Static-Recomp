//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8020B740(PPC::Runtime::GCContext* context)
{
/*8020B740 00208540*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020B744 00208544*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8020B748 00208548*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8020B74C 0020854C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B750 00208550*/ PPC::Runtime::ASM::bge(.L_8020B75C);
/*8020B754 00208554*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8020B758 00208558*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8020B75C, 0x8020B75C) //this is a jump label
/*8020B75C 0020855C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8020B760 00208560*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B764 00208564*/ PPC::Runtime::ASM::bge(.L_8020B770);
/*8020B768 00208568*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8020B76C 0020856C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8020B770, 0x8020B770) //this is a jump label
/*8020B770 00208570*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8020B774 00208574*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020B778 00208578*/ PPC::Runtime::ASM::bgelr();
/*8020B77C 0020857C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8020B780 00208580*/ PPC::Runtime::ASM::blr();
}