//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800617CC(PPC::Runtime::GCContext* context)
{
/*800617CC 0005E5CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800617D0 0005E5D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800617D4 0005E5D4*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*800617D8 0005E5D8*/ PPC::Runtime::ASM::li(context->r5, 0x7f);
/*800617DC 0005E5DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800617E0 0005E5E0*/ PPC::Runtime::ASM::li(context->r6, 0xb);
/*800617E4 0005E5E4*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*800617E8 0005E5E8*/ PPC::Runtime::ASM::bl(fn_playSoundFX);
/*800617EC 0005E5EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800617F0 0005E5F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800617F4 0005E5F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800617F8 0005E5F8*/ PPC::Runtime::ASM::blr();
}