//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000BF04(PPC::Runtime::GCContext* context)
{
/*8000BF04 00008D04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000BF08 00008D08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000BF0C 00008D0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000BF10 00008D10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000BF14 00008D14*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8000BF18 00008D18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8000BF1C 00008D1C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8000BF20 00008D20*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000BF24 00008D24*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8000BF28 00008D28*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x9);
/*8000BF2C 00008D2C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xd23);
/*8000BF30 00008D30*/ PPC::Runtime::ASM::stbx(context->r31, context->r3, context->r0);
/*8000BF34 00008D34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000BF38 00008D38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8000BF3C 00008D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000BF40 00008D40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000BF44 00008D44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000BF48 00008D48*/ PPC::Runtime::ASM::blr();
}