//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80128FE8(PPC::Runtime::GCContext* context)
{
/*80128FE8 00125DE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80128FEC 00125DEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80128FF0 00125DF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80128FF4 00125DF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80128FF8 00125DF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80128FFC 00125DFC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80129000 00125E00*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80129004 00125E04*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*80129008 00125E08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x63c, context->r31));
/*8012900C 00125E0C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80129010 00125E10*/ PPC::Runtime::ASM::beq(.L_80129020);
/*80129014 00125E14*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*80129018 00125E18*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8012901C 00125E1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x63c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80129020, 0x80129020) //this is a jump label
/*80129020 00125E20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80129024 00125E24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80129028 00125E28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012902C 00125E2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80129030 00125E30*/ PPC::Runtime::ASM::blr();
}