//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801556B8(PPC::Runtime::GCContext* context)
{
/*801556B8 001524B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801556BC 001524BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801556C0 001524C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801556C4 001524C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801556C8 001524C8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801556CC 001524CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801556D0 001524D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r3));
/*801556D4 001524D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801556D8 001524D8*/ PPC::Runtime::ASM::beq(.L_801556E8);
/*801556DC 001524DC*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801556E0 001524E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801556E4 001524E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x668, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801556E8, 0x801556E8) //this is a jump label
/*801556E8 001524E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801556EC 001524EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801556F0 001524F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801556F4 001524F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801556F8 001524F8*/ PPC::Runtime::ASM::blr();
}