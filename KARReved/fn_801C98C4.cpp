//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"



void fn_801C98C4(PPC::Runtime::GCContext* context)
{
/*801C98C4 001C66C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C98C8 001C66C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C98CC 001C66CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C98D0 001C66D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C98D4 001C66D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C98D8 001C66D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r3));
/* 801C98DC 001C66DC  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801C98E0 001C66E0*/ PPC::Runtime::ASM::bne(.L_801C9918);
/*801C98E4 001C66E4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3e8);
/*801C98E8 001C66E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x768);
/*801C98EC 001C66EC*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*801C98F0 001C66F0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x764, context->r31));
/*801C98F4 001C66F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x768, context->r31));
/*801C98F8 001C66F8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801C98FC 001C66FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x774, context->r31));
/*801C9900 001C6700*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x76c, context->r31));
/*801C9904 001C6704*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801C9908 001C6708*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r31));
/*801C990C 001C670C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x770, context->r31));
/*801C9910 001C6710*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801C9914 001C6714*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x77c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801C9918, 0x801C9918) //this is a jump label
/*801C9918 001C6718*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C991C 001C671C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C9920 001C6720*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C9924 001C6724*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C9928 001C6728*/ PPC::Runtime::ASM::blr();
}