//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019418C.hpp"
#include "fn_801C0148.hpp"



void fn_801C0100(PPC::Runtime::GCContext* context)
{
/*801C0100 001BCF00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0104 001BCF04*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0108 001BCF08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C010C 001BCF0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0110 001BCF10*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C0114 001BCF14*/ PPC::Runtime::ASM::bl(fn_8019418C);
/*801C0118 001BCF18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C011C 001BCF1C*/ PPC::Runtime::ASM::beq(.L_801C0130);
/*801C0120 001BCF20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0124 001BCF24*/ PPC::Runtime::ASM::bl(fn_801C0148);
/*801C0128 001BCF28*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C012C 001BCF2C*/ PPC::Runtime::ASM::b(.L_801C0134);
RUNTIME_PPC_JUMP_LABEL(.L_801C0130, 0x801C0130) //this is a jump label
/*801C0130 001BCF30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C0134, 0x801C0134) //this is a jump label
/*801C0134 001BCF34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0138 001BCF38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C013C 001BCF3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0140 001BCF40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0144 001BCF44*/ PPC::Runtime::ASM::blr();
}