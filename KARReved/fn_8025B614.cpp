//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E54.hpp"



void fn_8025B614(PPC::Runtime::GCContext* context)
{
/*8025B614 00258414*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B618 00258418*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B61C 0025841C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B620 00258420*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025B624 00258424*/ PPC::Runtime::ASM::bl(fn_80250E54);
/*8025B628 00258428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B62C 0025842C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B630 00258430*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B634 00258434*/ PPC::Runtime::ASM::blr();
}