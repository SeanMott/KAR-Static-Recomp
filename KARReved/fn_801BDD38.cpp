//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801BDD38(PPC::Runtime::GCContext* context)
{
/*801BDD38 001BAB38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801BDD3C 001BAB3C*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*801BDD40 001BAB40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801BDD44 001BAB44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801BDD48 001BAB48*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x4);
/*801BDD4C 001BAB4C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4);
/*801BDD50 001BAB50*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801BDD54, 0x801BDD54) //this is a jump label
/*801BDD54 001BAB54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801BDD58 001BAB58*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801BDD5C 001BAB5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*801BDD60 001BAB60*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*801BDD64 001BAB64*/ PPC::Runtime::ASM::bdnz(.L_801BDD54);
/*801BDD68 001BAB68*/ PPC::Runtime::ASM::blr();
}