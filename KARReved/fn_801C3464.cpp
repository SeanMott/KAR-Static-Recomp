//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF94.hpp"
#include "fn_801C2268.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_801C3F40.hpp"



void fn_801C3464(PPC::Runtime::GCContext* context)
{
/*801C3464 001C0264*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3468 001C0268*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C346C 001C026C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3470 001C0270*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3474 001C0274*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3478 001C0278*/ PPC::Runtime::ASM::bl(fn_8019FF94);
/*801C347C 001C027C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3480 001C0280*/ PPC::Runtime::ASM::bl(fn_801C2268);
/*801C3484 001C0284*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3488 001C0288*/ PPC::Runtime::ASM::bne(.L_801C34A0);
/*801C348C 001C028C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3490 001C0290*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801C3494 001C0294*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3498 001C0298*/ PPC::Runtime::ASM::bl(fn_801C3F40);
/*801C349C 001C029C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C34A0, 0x801C34A0) //this is a jump label
/*801C34A0 001C02A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C34A4 001C02A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C34A8 001C02A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C34AC 001C02AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C34B0 001C02B0*/ PPC::Runtime::ASM::blr();
}