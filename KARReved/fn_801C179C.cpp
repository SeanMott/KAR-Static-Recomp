//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C179C(PPC::Runtime::GCContext* context)
{
/*801C179C 001BE59C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C17A0 001BE5A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C17A4 001BE5A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C17A8 001BE5A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90c, context->r3));
/*801C17AC 001BE5AC*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801C17B0 001BE5B0*/ PPC::Runtime::ASM::beq(.L_801C17BC);
/*801C17B4 001BE5B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801C17B8 001BE5B8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801C17BC, 0x801C17BC) //this is a jump label
/*801C17BC 001BE5BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C17C0 001BE5C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C17C4 001BE5C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C17C8 001BE5C8*/ PPC::Runtime::ASM::blr();
}