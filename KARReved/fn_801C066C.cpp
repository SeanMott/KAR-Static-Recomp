//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7B00.hpp"
#include "fn_801BE018.hpp"



void fn_801C066C(PPC::Runtime::GCContext* context)
{
/*801C066C 001BD46C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0670 001BD470*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0674 001BD474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0678 001BD478*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C067C 001BD47C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C0680 001BD480*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801C0684 001BD484*/ PPC::Runtime::ASM::bl(fn_801C7B00);
/*801C0688 001BD488*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C068C 001BD48C*/ PPC::Runtime::ASM::bne(.L_801C0698);
/*801C0690 001BD490*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0694 001BD494*/ PPC::Runtime::ASM::bl(fn_801BE018);
RUNTIME_PPC_JUMP_LABEL(.L_801C0698, 0x801C0698) //this is a jump label
/*801C0698 001BD498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C069C 001BD49C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C06A0 001BD4A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C06A4 001BD4A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C06A8 001BD4A8*/ PPC::Runtime::ASM::blr();
}