//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FE98.hpp"
#include "fn_startCharge.hpp"
#include "fn_ground_chargeAnimation.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_groundSpin2?.hpp"
#include "fn_doQuickSpin.hpp"



void fn_801AC514(PPC::Runtime::GCContext* context)
{
/*801AC514 001A9314*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC518 001A9318*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC51C 001A931C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC520 001A9320*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC524 001A9324*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AC528 001A9328*/ PPC::Runtime::ASM::bl(fn_8019FE98);
/*801AC52C 001A932C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC530 001A9330*/ PPC::Runtime::ASM::bl(fn_startCharge);
/*801AC534 001A9334*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC538 001A9338*/ PPC::Runtime::ASM::bne(.L_801AC570);
/*801AC53C 001A933C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC540 001A9340*/ PPC::Runtime::ASM::bl(fn_ground_chargeAnimation);
/*801AC544 001A9344*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC548 001A9348*/ PPC::Runtime::ASM::bne(.L_801AC570);
/*801AC54C 001A934C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC550 001A9350*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801AC554 001A9354*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC558 001A9358*/ PPC::Runtime::ASM::bl(fn_groundSpin2?);
/*801AC55C 001A935C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC560 001A9360*/ PPC::Runtime::ASM::bne(.L_801AC570);
/*801AC564 001A9364*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC568 001A9368*/ PPC::Runtime::ASM::bl(fn_doQuickSpin);
/*801AC56C 001A936C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AC570, 0x801AC570) //this is a jump label
/*801AC570 001A9370*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC574 001A9374*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC578 001A9378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC57C 001A937C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC580 001A9380*/ PPC::Runtime::ASM::blr();
}