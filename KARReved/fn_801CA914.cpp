//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CA914(PPC::Runtime::GCContext* context)
{
/*801CA914 001C7714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CA918 001C7718*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CA91C 001C771C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA920 001C7720*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA924 001C7724*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CA928 001C7728*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc08, context->r3));
/*801CA92C 001C772C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801CA930 001C7730*/ PPC::Runtime::ASM::beq(.L_801CA93C);
/*801CA934 001C7734*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801CA938 001C7738*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801CA93C, 0x801CA93C) //this is a jump label
/*801CA93C 001C773C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0c, context->r31));
/*801CA940 001C7740*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801CA944 001C7744*/ PPC::Runtime::ASM::beq(.L_801CA954);
/*801CA948 001C7748*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CA94C 001C774C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801CA950 001C7750*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801CA954, 0x801CA954) //this is a jump label
/*801CA954 001C7754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CA958 001C7758*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CA95C 001C775C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CA960 001C7760*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CA964 001C7764*/ PPC::Runtime::ASM::blr();
}