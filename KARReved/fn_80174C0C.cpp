//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80174C0C(PPC::Runtime::GCContext* context)
{
/*80174C0C 00171A0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80174C10 00171A10*/ PPC::Runtime::ASM::mflr(context->r0);
/*80174C14 00171A14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80174C18 00171A18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80174C1C 00171A1C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80174C20 00171A20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80174C24 00171A24*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80174C28 00171A28*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80174C2C 00171A2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd0, context->r3));
/*80174C30 00171A30*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80174C34 00171A34*/ PPC::Runtime::ASM::beq(.L_80174C60);
/*80174C38 00171A38*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80174C3C 00171A3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80174C40 00171A40*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x78);
/*80174C44 00171A44*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80174C48 00171A48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r4));
/*80174C4C 00171A4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r4));
/*80174C50 00171A50*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80174C54 00171A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80174C58 00171A58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r4));
/*80174C5C 00171A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80174C60, 0x80174C60) //this is a jump label
/*80174C60 00171A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80174C64 00171A64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80174C68 00171A68*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80174C6C 00171A6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80174C70 00171A70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80174C74 00171A74*/ PPC::Runtime::ASM::blr();
}