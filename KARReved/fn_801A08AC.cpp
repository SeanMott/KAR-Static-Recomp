//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801A08AC(PPC::Runtime::GCContext* context)
{
/*801A08AC 0019D6AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A08B0 0019D6B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A08B4 0019D6B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A08B8 0019D6B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A08BC 0019D6BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A08C0 0019D6C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ec, context->r3));
/*801A08C4 0019D6C4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801A08C8 0019D6C8*/ PPC::Runtime::ASM::beq(.L_801A08D4);
/*801A08CC 0019D6CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801A08D0 0019D6D0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801A08D4, 0x801A08D4) //this is a jump label
/*801A08D4 0019D6D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801A08D8 0019D6D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ec, context->r31));
/*801A08DC 0019D6DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A08E0 0019D6E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A08E4 0019D6E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A08E8 0019D6E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A08EC 0019D6EC*/ PPC::Runtime::ASM::blr();
}