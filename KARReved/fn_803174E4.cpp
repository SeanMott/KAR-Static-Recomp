//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80317518.hpp"



void fn_803174E4(PPC::Runtime::GCContext* context)
{
/*803174E4 003142E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803174E8 003142E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803174EC 003142EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803174F0 003142F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*803174F4 003142F4*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*803174F8 003142F8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r4);
/* 803174FC 003142FC  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*80317500 00314300*/ PPC::Runtime::ASM::beq(.L_80317508);
/*80317504 00314304*/ PPC::Runtime::ASM::bl(fn_80317518);
RUNTIME_PPC_JUMP_LABEL(.L_80317508, 0x80317508) //this is a jump label
/*80317508 00314308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8031750C 0031430C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80317510 00314310*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80317514 00314314*/ PPC::Runtime::ASM::blr();
}