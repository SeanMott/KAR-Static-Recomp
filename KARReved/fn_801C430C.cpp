//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801C19C8.hpp"



void fn_801C430C(PPC::Runtime::GCContext* context)
{
/*801C430C 001C110C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4310 001C1110*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4314 001C1114*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4318 001C1118*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C431C 001C111C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C4320 001C1120*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801C4324 001C1124*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C4328 001C1128*/ PPC::Runtime::ASM::beq(.L_801C4334);
/*801C432C 001C112C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C4330 001C1130*/ PPC::Runtime::ASM::bl(fn_801C19C8);
RUNTIME_PPC_JUMP_LABEL(.L_801C4334, 0x801C4334) //this is a jump label
/*801C4334 001C1134*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4338 001C1138*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C433C 001C113C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4340 001C1140*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4344 001C1144*/ PPC::Runtime::ASM::blr();
}