//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B9664.hpp"



void fn_801BCE28(PPC::Runtime::GCContext* context)
{
/*801BCE28 001B9C28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BCE2C 001B9C2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BCE30 001B9C30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BCE34 001B9C34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BCE38 001B9C38*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BCE3C 001B9C3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e8, context->r3));
/*801BCE40 001B9C40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801BCE44 001B9C44*/ PPC::Runtime::ASM::bgt(.L_801BCE58);
/*801BCE48 001B9C48*/ PPC::Runtime::ASM::bl(fn_801B9664);
/*801BCE4C 001B9C4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801BCE50 001B9C50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*801BCE54 001B9C54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801BCE58, 0x801BCE58) //this is a jump label
/*801BCE58 001B9C58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e8, context->r31));
/*801BCE5C 001B9C5C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801BCE60 001B9C60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e8, context->r31));
/*801BCE64 001B9C64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BCE68 001B9C68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BCE6C 001B9C6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BCE70 001B9C70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BCE74 001B9C74*/ PPC::Runtime::ASM::blr();
}