//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D7D70.hpp"



void fn_800F632C(PPC::Runtime::GCContext* context)
{
/*800F632C 000F312C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F6330 000F3130*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F6334 000F3134*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6338 000F3138*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800F633C 000F313C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800F6340 000F3140*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F6344 000F3144*/ PPC::Runtime::ASM::beq(.L_800F6350);
/*800F6348 000F3148*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1c);
/*800F634C 000F314C*/ PPC::Runtime::ASM::bl(fn_800D7D70);
RUNTIME_PPC_JUMP_LABEL(.L_800F6350, 0x800F6350) //this is a jump label
/*800F6350 000F3150*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6354 000F3154*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F6358 000F3158*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F635C 000F315C*/ PPC::Runtime::ASM::blr();
}