//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_80170098(PPC::Runtime::GCContext* context)
{
/*80170098 0016CE98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017009C 0016CE9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801700A0 0016CEA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801700A4 0016CEA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801700A8 0016CEA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801700AC 0016CEAC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801700B0 0016CEB0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801700B4 0016CEB4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801700B8 0016CEB8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801700BC 0016CEBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc04, context->r3));
/*801700C0 0016CEC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801700C4 0016CEC4*/ PPC::Runtime::ASM::beq(.L_801700CC);
/*801700C8 0016CEC8*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_801700CC, 0x801700CC) //this is a jump label
/*801700CC 0016CECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801700D0 0016CED0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801700D4 0016CED4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801700D8 0016CED8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801700DC 0016CEDC*/ PPC::Runtime::ASM::blr();
}