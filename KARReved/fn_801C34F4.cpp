//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0000.hpp"
#include "fn_801C40FC.hpp"
#include "fn_801C297C.hpp"
#include "fn_80194168.hpp"
#include "fn_801C3578.hpp"



void fn_801C34F4(PPC::Runtime::GCContext* context)
{
/*801C34F4 001C02F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C34F8 001C02F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C34FC 001C02FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3500 001C0300*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3504 001C0304*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3508 001C0308*/ PPC::Runtime::ASM::bl(fn_801A0000);
/*801C350C 001C030C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3510 001C0310*/ PPC::Runtime::ASM::bl(fn_801C40FC);
/*801C3514 001C0314*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3518 001C0318*/ PPC::Runtime::ASM::bne(.L_801C3544);
/*801C351C 001C031C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3520 001C0320*/ PPC::Runtime::ASM::bl(fn_801C297C);
/*801C3524 001C0324*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3528 001C0328*/ PPC::Runtime::ASM::bne(.L_801C3544);
/*801C352C 001C032C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3530 001C0330*/ PPC::Runtime::ASM::bl(fn_80194168);
/*801C3534 001C0334*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3538 001C0338*/ PPC::Runtime::ASM::bne(.L_801C3544);
/*801C353C 001C033C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3540 001C0340*/ PPC::Runtime::ASM::bl(fn_801C3578);
RUNTIME_PPC_JUMP_LABEL(.L_801C3544, 0x801C3544) //this is a jump label
/*801C3544 001C0344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3548 001C0348*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C354C 001C034C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3550 001C0350*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3554 001C0354*/ PPC::Runtime::ASM::blr();
}