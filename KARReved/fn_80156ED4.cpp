//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_80156ED4(PPC::Runtime::GCContext* context)
{
/*80156ED4 00153CD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80156ED8 00153CD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80156EDC 00153CDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80156EE0 00153CE0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80156EE4 00153CE4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80156EE8 00153CE8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80156EEC 00153CEC*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80156EF0 00153CF0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80156EF4 00153CF4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80156EF8 00153CF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d4, context->r3));
/*80156EFC 00153CFC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80156F00 00153D00*/ PPC::Runtime::ASM::beq(.L_80156F08);
/*80156F04 00153D04*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_80156F08, 0x80156F08) //this is a jump label
/*80156F08 00153D08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80156F0C 00153D0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80156F10 00153D10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80156F14 00153D14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80156F18 00153D18*/ PPC::Runtime::ASM::blr();
}