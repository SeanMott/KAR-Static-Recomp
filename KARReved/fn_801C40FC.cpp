//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7B58.hpp"
#include "fn_801C812C.hpp"
#include "fn_801C4178.hpp"



void fn_801C40FC(PPC::Runtime::GCContext* context)
{
/*801C40FC 001C0EFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4100 001C0F00*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4104 001C0F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4108 001C0F08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C410C 001C0F0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C4110 001C0F10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*801C4114 001C0F14*/ PPC::Runtime::ASM::bl(fn_801C7B58);
/*801C4118 001C0F18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C411C 001C0F1C*/ PPC::Runtime::ASM::beq(.L_801C413C);
/*801C4120 001C0F20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801C4124 001C0F24*/ PPC::Runtime::ASM::bl(fn_801C812C);
/*801C4128 001C0F28*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801C412C 001C0F2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C4130 001C0F30*/ PPC::Runtime::ASM::bl(fn_801C4178);
/*801C4134 001C0F34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C4138 001C0F38*/ PPC::Runtime::ASM::b(.L_801C4140);
RUNTIME_PPC_JUMP_LABEL(.L_801C413C, 0x801C413C) //this is a jump label
/*801C413C 001C0F3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C4140, 0x801C4140) //this is a jump label
/*801C4140 001C0F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4144 001C0F44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C4148 001C0F48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C414C 001C0F4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4150 001C0F50*/ PPC::Runtime::ASM::blr();
}