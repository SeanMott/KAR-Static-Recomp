//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"



void fn_80121A4C(PPC::Runtime::GCContext* context)
{
/*80121A4C 0011E84C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80121A50 0011E850*/ PPC::Runtime::ASM::mflr(context->r0);
/*80121A54 0011E854*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121A58 0011E858*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121A5C 0011E85C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80121A60 0011E860*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80121A64 0011E864*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80121A68 0011E868*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80121A6C 0011E86C*/ PPC::Runtime::ASM::slwi(context->r4, context->r30, 7);
/*80121A70 0011E870*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80121A74 0011E874*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*80121A78 0011E878*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80121A7C 0011E87C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x728, context->r3));
/*80121A80 0011E880*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80121A84 0011E884*/ PPC::Runtime::ASM::beq(.L_80121A8C);
/*80121A88 0011E888*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_80121A8C, 0x80121A8C) //this is a jump label
/*80121A8C 0011E88C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121A90 0011E890*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121A94 0011E894*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80121A98 0011E898*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80121A9C 0011E89C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80121AA0 0011E8A0*/ PPC::Runtime::ASM::blr();
}