//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230E10(PPC::Runtime::GCContext* context)
{
/*80230E10 0022DC10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230E14 0022DC14*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230E18 0022DC18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*80230E1C 0022DC1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230E20 0022DC20*/ PPC::Runtime::ASM::beq(.L_80230E34);
/*80230E24 0022DC24*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230E28 0022DC28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e0, context->r3));
/*80230E2C 0022DC2C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80230E30 0022DC30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80230E34, 0x80230E34) //this is a jump label
/*80230E34 0022DC34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230E38 0022DC38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230E3C 0022DC3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230E40 0022DC40*/ PPC::Runtime::ASM::blr();
}