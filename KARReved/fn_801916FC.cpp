//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"



void fn_801916FC(PPC::Runtime::GCContext* context)
{
/*801916FC 0018E4FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191700 0018E500*/ PPC::Runtime::ASM::mflr(context->r0);
/*80191704 0018E504*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191708 0018E508*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019170C 0018E50C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80191710 0018E510*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x300);
/*80191714 0018E514*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x484);
/*80191718 0018E518*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*8019171C 0018E51C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x480, context->r31));
/*80191720 0018E520*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x484, context->r31));
/*80191724 0018E524*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80191728 0018E528*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x490, context->r31));
/*8019172C 0018E52C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x488, context->r31));
/*80191730 0018E530*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80191734 0018E534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x494, context->r31));
/*80191738 0018E538*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48c, context->r31));
/*8019173C 0018E53C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80191740 0018E540*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x498, context->r31));
/*80191744 0018E544*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80191748 0018E548*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019174C 0018E54C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80191750 0018E550*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80191754 0018E554*/ PPC::Runtime::ASM::blr();
}