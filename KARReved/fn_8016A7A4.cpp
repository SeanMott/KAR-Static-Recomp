//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016A7A4(PPC::Runtime::GCContext* context)
{
/*8016A7A4 001675A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016A7A8 001675A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016A7AC 001675AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016A7B0 001675B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016A7B4 001675B4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8016A7B8 001675B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016A7BC 001675BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016A7C0 001675C0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016A7C4 001675C4*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8016A7C8 001675C8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016A7CC 001675CC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8016A7D0 001675D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r3));
/*8016A7D4 001675D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016A7D8 001675D8*/ PPC::Runtime::ASM::beq(.L_8016A7F8);
/*8016A7DC 001675DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016A7E0 001675E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r4));
/*8016A7E4 001675E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r4));
/*8016A7E8 001675E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8016A7EC 001675EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8016A7F0 001675F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*8016A7F4 001675F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016A7F8, 0x8016A7F8) //this is a jump label
/*8016A7F8 001675F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016A7FC 001675FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016A800 00167600*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016A804 00167604*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016A808 00167608*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016A80C 0016760C*/ PPC::Runtime::ASM::blr();
}