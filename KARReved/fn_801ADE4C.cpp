//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A7E68.hpp"



void fn_801ADE4C(PPC::Runtime::GCContext* context)
{
/*801ADE4C 001AAC4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801ADE50 001AAC50*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ADE54 001AAC54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADE58 001AAC58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ADE5C 001AAC5C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801ADE60 001AAC60*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801ADE64 001AAC64*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r3));
/*801ADE68 001AAC68*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*801ADE6C 001AAC6C*/ PPC::Runtime::ASM::slwi(context->r7, context->r5, 2);
/*801ADE70 001AAC70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r6));
/*801ADE74 001AAC74*/ PPC::Runtime::ASM::add(context->r7, context->r31, context->r7);
/*801ADE78 001AAC78*/ PPC::Runtime::ASM::mulli(context->r6, context->r5, 0xc);
/*801ADE7C 001AAC7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x93c, context->r7));
/*801ADE80 001AAC80*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f0, context->r7));
/*801ADE84 001AAC84*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x948);
/*801ADE88 001AAC88*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*801ADE8C 001AAC8C*/ PPC::Runtime::ASM::bl(fn_801A7E68);
/*801ADE90 001AAC90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801ADE94 001AAC94*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*801ADE98 001AAC98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r31));
/*801ADE9C 001AAC9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ADEA0 001AACA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADEA4 001AACA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ADEA8 001AACA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801ADEAC 001AACAC*/ PPC::Runtime::ASM::blr();
}