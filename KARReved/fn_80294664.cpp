//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294664(PPC::Runtime::GCContext* context)
{
/*80294664 00291464*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80294668 00291468*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029466C 0029146C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294670 00291470*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80294674 00291474*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*80294678 00291478*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029467C 0029147C*/ PPC::Runtime::ASM::bctrl();
/*80294680 00291480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80294684 00291484*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80294688 00291488*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029468C 0029148C*/ PPC::Runtime::ASM::blr();
}