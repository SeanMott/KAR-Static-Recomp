//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801602B0(PPC::Runtime::GCContext* context)
{
/*801602B0 0015D0B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801602B4 0015D0B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801602B8 0015D0B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801602BC 0015D0BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801602C0 0015D0C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801602C4 0015D0C4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801602C8 0015D0C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3));
/*801602CC 0015D0CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*801602D0 0015D0D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801602D4 0015D0D4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801602D8 0015D0D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801602DC 0015D0DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801602E0 0015D0E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801602E4 0015D0E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801602E8 0015D0E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801602EC 0015D0EC*/ PPC::Runtime::ASM::blr();
}