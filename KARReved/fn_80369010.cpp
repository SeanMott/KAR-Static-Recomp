//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80369010(PPC::Runtime::GCContext* context)
{
/*80369010 00365E10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4600, context->r3));
/*80369014 00365E14*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x118);
/*80369018 00365E18*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*8036901C 00365E1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80369020 00365E20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4600, context->r3));
/*80369024 00365E24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4604, context->r3));
/*80369028 00365E28*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8036902C 00365E2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4604, context->r3));
/*80369030 00365E30*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80369034 00365E34*/ PPC::Runtime::ASM::blr();
}