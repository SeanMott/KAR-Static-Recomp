//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn___OSGetEffectivePriority(PPC::Runtime::GCContext* context)
{
/*803D9C2C 003D6A2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r3));
/*803D9C30 003D6A30*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f4, context->r3));
/*803D9C34 003D6A34*/ PPC::Runtime::ASM::b(.L_803D9C58);
RUNTIME_PPC_JUMP_LABEL(.L_803D9C38, 0x803D9C38) //this is a jump label
/*803D9C38 003D6A38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D9C3C 003D6A3C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D9C40 003D6A40*/ PPC::Runtime::ASM::beq(.L_803D9C54);
/*803D9C44 003D6A44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r3));
/*803D9C48 003D6A48*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*803D9C4C 003D6A4C*/ PPC::Runtime::ASM::bge(.L_803D9C54);
/*803D9C50 003D6A50*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803D9C54, 0x803D9C54) //this is a jump label
/*803D9C54 003D6A54*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803D9C58, 0x803D9C58) //this is a jump label
/*803D9C58 003D6A58*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*803D9C5C 003D6A5C*/ PPC::Runtime::ASM::bne(.L_803D9C38);
/*803D9C60 003D6A60*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803D9C64 003D6A64*/ PPC::Runtime::ASM::blr();
}