//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800BAF70.hpp"
#include "fn_8022C978.hpp"
#include "fn_8022C9A8.hpp"



void fn_80193484(PPC::Runtime::GCContext* context)
{
/*80193484 00190284*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80193488 00190288*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019348C 0019028C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80193490 00190290*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80193494 00190294*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80193498 00190298*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019349C 0019029C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801934A0 001902A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x450, context->r3));
/*801934A4 001902A4*/ PPC::Runtime::ASM::bl(fn_800BAF70);
/*801934A8 001902A8*/ PPC::Runtime::ASM::cmplw(context->r31, context->r3);
/*801934AC 001902AC*/ PPC::Runtime::ASM::bne(.L_801934BC);
/*801934B0 001902B0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801934B4 001902B4*/ PPC::Runtime::ASM::bl(fn_8022C978);
/*801934B8 001902B8*/ PPC::Runtime::ASM::b(.L_801934C4);
RUNTIME_PPC_JUMP_LABEL(.L_801934BC, 0x801934BC) //this is a jump label
/*801934BC 001902BC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*801934C0 001902C0*/ PPC::Runtime::ASM::bl(fn_8022C9A8);
RUNTIME_PPC_JUMP_LABEL(.L_801934C4, 0x801934C4) //this is a jump label
/*801934C4 001902C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801934C8 001902C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801934CC 001902CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801934D0 001902D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801934D4 001902D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801934D8 001902D8*/ PPC::Runtime::ASM::blr();
}