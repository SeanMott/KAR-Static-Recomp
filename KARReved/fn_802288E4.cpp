//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"



void fn_802288E4(PPC::Runtime::GCContext* context)
{
/*802288E4 002256E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802288E8 002256E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802288EC 002256EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802288F0 002256F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802288F4 002256F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802288F8 002256F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802288FC 002256FC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xac);
/*80228900 00225700*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*80228904 00225704*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80228908 00225708*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022890C 0022570C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80228910 00225710*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80228914 00225714*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80228918 00225718*/ PPC::Runtime::ASM::fmuls(context->f4, context->f4, context->f1);
/*8022891C 0022571C*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*80228920 00225720*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*80228924 00225724*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80228928 00225728*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*8022892C 0022572C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f4);
/*80228930 00225730*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*80228934 00225734*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*80228938 00225738*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*8022893C 0022573C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*80228940 00225740*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80228944 00225744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80228948 00225748*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022894C 0022574C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80228950 00225750*/ PPC::Runtime::ASM::blr();
}