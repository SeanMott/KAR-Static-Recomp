//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802442D0(PPC::Runtime::GCContext* context)
{
/*802442D0 002410D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802442D4 002410D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802442D8 002410D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802442DC 002410DC*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*802442E0 002410E0*/ PPC::Runtime::ASM::bne(.L_80244398);
/*802442E4 002410E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802442E8 002410E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802442EC 002410EC*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*802442F0 002410F0*/ PPC::Runtime::ASM::bne(.L_80244398);
/*802442F4 002410F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802442F8 002410F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802442FC 002410FC*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244300 00241100*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244304 00241104*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80244308 00241108*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8024430C 0024110C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244310 00241110*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244314 00241114*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80244318 00241118*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8024431C 0024111C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244320 00241120*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244324 00241124*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80244328 00241128*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8024432C 0024112C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244330 00241130*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244334 00241134*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80244338 00241138*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8024433C 0024113C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244340 00241140*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244344 00241144*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80244348 00241148*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8024434C 0024114C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244350 00241150*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244354 00241154*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80244358 00241158*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8024435C 0024115C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244360 00241160*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244364 00241164*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80244368 00241168*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8024436C 0024116C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244370 00241170*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244374 00241174*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80244378 00241178*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8024437C 0024117C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244380 00241180*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244384 00241184*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80244388 00241188*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8024438C 0024118C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80244390 00241190*/ PPC::Runtime::ASM::bne(.L_80244398);
/*80244394 00241194*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80244398, 0x80244398) //this is a jump label
/*80244398 00241198*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*8024439C 0024119C*/ PPC::Runtime::ASM::blr();
}