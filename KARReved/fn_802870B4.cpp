//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802870B4(PPC::Runtime::GCContext* context)
{
/*802870B4 00283EB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802870B8 00283EB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802870BC 00283EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802870C0 00283EC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802870C4 00283EC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*802870C8 00283EC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802870CC 00283ECC*/ PPC::Runtime::ASM::bctrl();
/*802870D0 00283ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802870D4 00283ED4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802870D8 00283ED8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802870DC 00283EDC*/ PPC::Runtime::ASM::blr();
}