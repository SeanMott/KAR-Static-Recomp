//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF04.hpp"
#include "fn_801C40FC.hpp"
#include "fn_801C297C.hpp"



void fn_801C3334(PPC::Runtime::GCContext* context)
{
/*801C3334 001C0134*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3338 001C0138*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C333C 001C013C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3340 001C0140*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3344 001C0144*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3348 001C0148*/ PPC::Runtime::ASM::bl(fn_8019FF04);
/*801C334C 001C014C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3350 001C0150*/ PPC::Runtime::ASM::bl(fn_801C40FC);
/*801C3354 001C0154*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3358 001C0158*/ PPC::Runtime::ASM::bne(.L_801C3368);
/*801C335C 001C015C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3360 001C0160*/ PPC::Runtime::ASM::bl(fn_801C297C);
/*801C3364 001C0164*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C3368, 0x801C3368) //this is a jump label
/*801C3368 001C0168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C336C 001C016C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3370 001C0170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3374 001C0174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3378 001C0178*/ PPC::Runtime::ASM::blr();
}