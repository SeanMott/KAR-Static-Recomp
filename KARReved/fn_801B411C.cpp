//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC60.hpp"
#include "fn_802368D0.hpp"
#include "fn_80195734.hpp"



void fn_801B411C(PPC::Runtime::GCContext* context)
{
/*801B411C 001B0F1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4120 001B0F20*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4124 001B0F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4128 001B0F28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B412C 001B0F2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B4130 001B0F30*/ PPC::Runtime::ASM::bl(fn_8019FC60);
/*801B4134 001B0F34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B4138 001B0F38*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801B413C 001B0F3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f4, context->r31));
/*801B4140 001B0F40*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*801B4144 001B0F44*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*801B4148 001B0F48*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*801B414C 001B0F4C*/ PPC::Runtime::ASM::beq(.L_801B4158);
/*801B4150 001B0F50*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x300);
/*801B4154 001B0F54*/ PPC::Runtime::ASM::bl(fn_802368D0);
RUNTIME_PPC_JUMP_LABEL(.L_801B4158, 0x801B4158) //this is a jump label
/*801B4158 001B0F58*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B415C 001B0F5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B4160 001B0F60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9fc, context->r31));
/*801B4164 001B0F64*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r5));
/*801B4168 001B0F68*/ PPC::Runtime::ASM::bl(fn_80195734);
/*801B416C 001B0F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4170 001B0F70*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4174 001B0F74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B4178 001B0F78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B417C 001B0F7C*/ PPC::Runtime::ASM::blr();
}