//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014D890(PPC::Runtime::GCContext* context)
{
/*8014D890 0014A690*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014D894 0014A694*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014D898 0014A698*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014D89C 0014A69C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014D8A0 0014A6A0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8014D8A4 0014A6A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014D8A8 0014A6A8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014D8AC 0014A6AC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014D8B0 0014A6B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r3));
/*8014D8B4 0014A6B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014D8B8 0014A6B8*/ PPC::Runtime::ASM::beq(.L_8014D8E4);
/*8014D8BC 0014A6BC*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8014D8C0 0014A6C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8014D8C4 0014A6C4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*8014D8C8 0014A6C8*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*8014D8CC 0014A6CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8014D8D0 0014A6D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8014D8D4 0014A6D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8014D8D8 0014A6D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8014D8DC 0014A6DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8014D8E0 0014A6E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8014D8E4, 0x8014D8E4) //this is a jump label
/*8014D8E4 0014A6E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014D8E8 0014A6E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014D8EC 0014A6EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014D8F0 0014A6F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014D8F4 0014A6F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014D8F8 0014A6F8*/ PPC::Runtime::ASM::blr();
}