//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802870E0(PPC::Runtime::GCContext* context)
{
/*802870E0 00283EE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802870E4 00283EE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802870E8 00283EE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802870EC 00283EEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802870F0 00283EF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r12));
/*802870F4 00283EF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802870F8 00283EF8*/ PPC::Runtime::ASM::bctrl();
/*802870FC 00283EFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287100 00283F00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80287104 00283F04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80287108 00283F08*/ PPC::Runtime::ASM::blr();
}