//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80227AE0(PPC::Runtime::GCContext* context)
{
/*80227AE0 002248E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80227AE4 002248E4*/ PPC::Runtime::ASM::li(context->r0, 0xf);
/*80227AE8 002248E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*80227AEC 002248EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80227AF0 002248F0*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x4);
/*80227AF4 002248F4*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4);
/*80227AF8 002248F8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80227AFC, 0x80227AFC) //this is a jump label
/*80227AFC 002248FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80227B00 00224900*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80227B04 00224904*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80227B08 00224908*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80227B0C 0022490C*/ PPC::Runtime::ASM::bdnz(.L_80227AFC);
/*80227B10 00224910*/ PPC::Runtime::ASM::blr();
}