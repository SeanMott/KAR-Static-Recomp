//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80165AB0(PPC::Runtime::GCContext* context)
{
/*80165AB0 001628B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80165AB4 001628B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80165AB8 001628B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165ABC 001628BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165AC0 001628C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80165AC4 001628C4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80165AC8 001628C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e4, context->r3));
/*80165ACC 001628CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80165AD0 001628D0*/ PPC::Runtime::ASM::beq(.L_80165ADC);
/*80165AD4 001628D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80165AD8 001628D8*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80165ADC, 0x80165ADC) //this is a jump label
/*80165ADC 001628DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165AE0 001628E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165AE4 001628E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80165AE8 001628E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80165AEC 001628EC*/ PPC::Runtime::ASM::blr();
}