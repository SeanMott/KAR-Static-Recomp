//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802930DC(PPC::Runtime::GCContext* context)
{
/*802930DC 0028FEDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802930E0 0028FEE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802930E4 0028FEE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802930E8 0028FEE8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802930EC 0028FEEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*802930F0 0028FEF0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802930F4 0028FEF4*/ PPC::Runtime::ASM::bctrl();
/*802930F8 0028FEF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802930FC 0028FEFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80293100 0028FF00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80293104 0028FF04*/ PPC::Runtime::ASM::blr();
}