//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80070100(PPC::Runtime::GCContext* context)
{
/*80070100 0006CF00*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80070104 0006CF04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80070108 0006CF08*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8007010C 0006CF0C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f2);
/*80070110 0006CF10*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80070114 0006CF14*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80070118 0006CF18*/ PPC::Runtime::ASM::fadds(context->f3, context->f3, context->f2);
/*8007011C 0006CF1C*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80070120 0006CF20*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80070124 0006CF24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80070128 0006CF28*/ PPC::Runtime::ASM::fsubs(context->f1, context->f5, context->f4);
/*8007012C 0006CF2C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f7, context->f6);
/*80070130 0006CF30*/ PPC::Runtime::ASM::fadds(context->f4, context->f5, context->f4);
/*80070134 0006CF34*/ PPC::Runtime::ASM::fadds(context->f5, context->f7, context->f6);
/*80070138 0006CF38*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8007013C 0006CF3C*/ PPC::Runtime::ASM::bne(.L_80070198);
/*80070140 0006CF40*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80070144 0006CF44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*80070148 0006CF48*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8007014C 0006CF4C*/ PPC::Runtime::ASM::bne(.L_80070198);
/*80070150 0006CF50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80070154 0006CF54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80070158 0006CF58*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8007015C 0006CF5C*/ PPC::Runtime::ASM::bne(.L_80070198);
/*80070160 0006CF60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80070164 0006CF64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f3);
/*80070168 0006CF68*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8007016C 0006CF6C*/ PPC::Runtime::ASM::bne(.L_80070198);
/*80070170 0006CF70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80070174 0006CF74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f4);
/*80070178 0006CF78*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8007017C 0006CF7C*/ PPC::Runtime::ASM::bne(.L_80070198);
/*80070180 0006CF80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80070184 0006CF84*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f5);
/*80070188 0006CF88*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8007018C 0006CF8C*/ PPC::Runtime::ASM::bne(.L_80070198);
/*80070190 0006CF90*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80070194 0006CF94*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80070198, 0x80070198) //this is a jump label
/*80070198 0006CF98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007019C 0006CF9C*/ PPC::Runtime::ASM::blr();
}