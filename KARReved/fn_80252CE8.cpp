//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250840.hpp"



void fn_80252CE8(PPC::Runtime::GCContext* context)
{
/*80252CE8 0024FAE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80252CEC 0024FAEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80252CF0 0024FAF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252CF4 0024FAF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80252CF8 0024FAF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80252CFC 0024FAFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80252D00 0024FB00*/ PPC::Runtime::ASM::bl(fn_80250840);
/*80252D04 0024FB04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35b, context->r31));
/*80252D08 0024FB08*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80252D0C 0024FB0C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*80252D10 0024FB10*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35b, context->r31));
/*80252D14 0024FB14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80252D18 0024FB18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252D1C 0024FB1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80252D20 0024FB20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80252D24 0024FB24*/ PPC::Runtime::ASM::blr();
}