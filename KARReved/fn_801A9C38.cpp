//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802284A0.hpp"
#include "fn_8019BFB4.hpp"



void fn_801A9C38(PPC::Runtime::GCContext* context)
{
/*801A9C38 001A6A38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A9C3C 001A6A3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A9C40 001A6A40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9C44 001A6A44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9C48 001A6A48*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A9C4C 001A6A4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r3));
/*801A9C50 001A6A50*/ PPC::Runtime::ASM::bl(fn_802284A0);
/*801A9C54 001A6A54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A9C58 001A6A58*/ PPC::Runtime::ASM::li(context->r4, 0x29);
/*801A9C5C 001A6A5C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A9C60 001A6A60*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*801A9C64 001A6A64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A9C68 001A6A68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A9C6C 001A6A6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A9C70 001A6A70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A9C74 001A6A74*/ PPC::Runtime::ASM::blr();
}