//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802957D4(PPC::Runtime::GCContext* context)
{
/*802957D4 002925D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802957D8 002925D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802957DC 002925DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802957E0 002925E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802957E4 002925E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*802957E8 002925E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802957EC 002925EC*/ PPC::Runtime::ASM::bctrl();
/*802957F0 002925F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802957F4 002925F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802957F8 002925F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802957FC 002925FC*/ PPC::Runtime::ASM::blr();
}