//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801539B8.hpp"
#include "fn_80153840.hpp"



void fn_801342E4(PPC::Runtime::GCContext* context)
{
/*801342E4 001310E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801342E8 001310E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801342EC 001310EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801342F0 001310F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801342F4 001310F4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*801342F8 001310F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801342FC 001310FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80134300 00131100*/ PPC::Runtime::ASM::bl(fn_801539B8);
/*80134304 00131104*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80134308 00131108*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8013430C 0013110C*/ PPC::Runtime::ASM::bl(fn_80153840);
/*80134310 00131110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134314 00131114*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80134318 00131118*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013431C 0013111C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134320 00131120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134324 00131124*/ PPC::Runtime::ASM::blr();
}