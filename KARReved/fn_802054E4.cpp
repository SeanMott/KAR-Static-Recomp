//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"



void fn_802054E4(PPC::Runtime::GCContext* context)
{
/*802054E4 002022E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802054E8 002022E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802054EC 002022EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802054F0 002022F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802054F4 002022F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802054F8 002022F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2f8);
/*802054FC 002022FC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x5c8);
/*80205500 00202300*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*80205504 00202304*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r31));
/*80205508 00202308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020550C 0020230C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80205510 00202310*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80205514 00202314*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80205518 00202318*/ PPC::Runtime::ASM::blr();
}