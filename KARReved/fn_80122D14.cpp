//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80122D14(PPC::Runtime::GCContext* context)
{
/*80122D14 0011FB14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80122D18 0011FB18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80122D1C 0011FB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80122D20 0011FB20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80122D24 0011FB24*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80122D28 0011FB28*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80122D2C 0011FB2C*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80122D30 0011FB30*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80122D34 0011FB34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57c, context->r3));
/*80122D38 0011FB38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80122D3C 0011FB3C*/ PPC::Runtime::ASM::beq(.L_80122D44);
/*80122D40 0011FB40*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80122D44, 0x80122D44) //this is a jump label
/*80122D44 0011FB44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80122D48 0011FB48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80122D4C 0011FB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80122D50 0011FB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80122D54 0011FB54*/ PPC::Runtime::ASM::blr();
}