//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80071D48(PPC::Runtime::GCContext* context)
{
/*80071D48 0006EB48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80071D4C 0006EB4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80071D50 0006EB50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071D54 0006EB54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80071D58 0006EB58*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80071D5C 0006EB5C*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumbleRemove);
/*80071D60 0006EB60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80071D64 0006EB64*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumbleOffH);
/*80071D68 0006EB68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071D6C 0006EB6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80071D70 0006EB70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80071D74 0006EB74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80071D78 0006EB78*/ PPC::Runtime::ASM::blr();
}