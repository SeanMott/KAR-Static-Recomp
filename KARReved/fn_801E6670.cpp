//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E66CC.hpp"
#include "fn_801C8E50.hpp"



void fn_801E6670(PPC::Runtime::GCContext* context)
{
/*801E6670 001E3470*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E6674 001E3474*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E6678 001E3478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E667C 001E347C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E6680 001E3480*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E6684 001E3484*/ PPC::Runtime::ASM::bl(fn_801E66CC);
/*801E6688 001E3488*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E668C 001E348C*/ PPC::Runtime::ASM::bne(.L_801E66B8);
/*801E6690 001E3490*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b58, context->r31));
/*801E6694 001E3494*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E6698 001E3498*/ PPC::Runtime::ASM::beq(.L_801E66B8);
/*801E669C 001E349C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801E66A0 001E34A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b58, context->r31));
/*801E66A4 001E34A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b58, context->r31));
/*801E66A8 001E34A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801E66AC 001E34AC*/ PPC::Runtime::ASM::bne(.L_801E66B8);
/*801E66B0 001E34B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E66B4 001E34B4*/ PPC::Runtime::ASM::bl(fn_801C8E50);
RUNTIME_PPC_JUMP_LABEL(.L_801E66B8, 0x801E66B8) //this is a jump label
/*801E66B8 001E34B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E66BC 001E34BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E66C0 001E34C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E66C4 001E34C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E66C8 001E34C8*/ PPC::Runtime::ASM::blr();
}