//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8024A684(PPC::Runtime::GCContext* context)
{
/*8024A684 00247484*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024A688 00247488*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8024A68C 0024748C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8024A690 00247490*/ PPC::Runtime::ASM::ble(.L_8024A698);
/*8024A694 00247494*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8024A698, 0x8024A698) //this is a jump label
/*8024A698 00247498*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8024A69C 0024749C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8024A6A0 002474A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8024A6A4 002474A4*/ PPC::Runtime::ASM::ble(.L_8024A6AC);
/*8024A6A8 002474A8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8024A6AC, 0x8024A6AC) //this is a jump label
/*8024A6AC 002474AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8024A6B0 002474B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8024A6B4 002474B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/* 8024A6B8 002474B8  4C 81 00 20 */ blelr
/*8024A6BC 002474BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8024A6C0 002474C0*/ PPC::Runtime::ASM::blr();
}