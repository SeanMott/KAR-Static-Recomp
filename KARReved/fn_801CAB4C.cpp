//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CAB4C(PPC::Runtime::GCContext* context)
{
/*801CAB4C 001C794C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CAB50 001C7950*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801CAB54 001C7954*/ PPC::Runtime::ASM::beq(.L_801CAB8C);
/*801CAB58 001C7958*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CAB5C 001C795C*/ PPC::Runtime::ASM::ble(.L_801CAB74);
/*801CAB60 001C7960*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801CAB64 001C7964*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1A08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CAB68 001C7968*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801CAB6C 001C796C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f2);
/*801CAB70 001C7970*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801CAB74, 0x801CAB74) //this is a jump label
/*801CAB74 001C7974*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801CAB78 001C7978*/ PPC::Runtime::ASM::fneg(context->f2, context->f1);
/*801CAB7C 001C797C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CAB80 001C7980*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801CAB84 001C7984*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f0, context->f1);
/*801CAB88 001C7988*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801CAB8C, 0x801CAB8C) //this is a jump label
/*801CAB8C 001C798C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1A08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CAB90 001C7990*/ PPC::Runtime::ASM::blr();
}