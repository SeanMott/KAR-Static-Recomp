//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191680.hpp"
#include "fn_801C3C50.hpp"



void fn_801C17CC(PPC::Runtime::GCContext* context)
{
/*801C17CC 001BE5CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C17D0 001BE5D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C17D4 001BE5D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C17D8 001BE5D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C17DC 001BE5DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C17E0 001BE5E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x910, context->r3));
/*801C17E4 001BE5E4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801C17E8 001BE5E8*/ PPC::Runtime::ASM::beq(.L_801C17F4);
/*801C17EC 001BE5EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801C17F0 001BE5F0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801C17F4, 0x801C17F4) //this is a jump label
/*801C17F4 001BE5F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C17F8 001BE5F8*/ PPC::Runtime::ASM::bl(fn_80191680);
/*801C17FC 001BE5FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C1800 001BE600*/ PPC::Runtime::ASM::beq(.L_801C1810);
/*801C1804 001BE604*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C1808 001BE608*/ PPC::Runtime::ASM::bl(fn_801C3C50);
/*801C180C 001BE60C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C1810, 0x801C1810) //this is a jump label
/*801C1810 001BE610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1814 001BE614*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C1818 001BE618*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C181C 001BE61C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1820 001BE620*/ PPC::Runtime::ASM::blr();
}