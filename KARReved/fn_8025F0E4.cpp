//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025F148.hpp"
#include "fn_8025F1C8.hpp"



void fn_8025F0E4(PPC::Runtime::GCContext* context)
{
/*8025F0E4 0025BEE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F0E8 0025BEE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F0EC 0025BEEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F0F0 0025BEF0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F0F4 0025BEF4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F0F8 0025BEF8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025F0FC 0025BEFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F100 0025BF00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F104 0025BF04*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025F108 0025BF08*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025F10C 0025BF0C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025F110 0025BF10*/ PPC::Runtime::ASM::bne(.L_8025F120);
/*8025F114 0025BF14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F118 0025BF18*/ PPC::Runtime::ASM::bl(fn_8025F148);
/*8025F11C 0025BF1C*/ PPC::Runtime::ASM::b(.L_8025F128);
RUNTIME_PPC_JUMP_LABEL(.L_8025F120, 0x8025F120) //this is a jump label
/*8025F120 0025BF20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F124 0025BF24*/ PPC::Runtime::ASM::bl(fn_8025F1C8);
RUNTIME_PPC_JUMP_LABEL(.L_8025F128, 0x8025F128) //this is a jump label
/*8025F128 0025BF28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F12C 0025BF2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F130 0025BF30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F134 0025BF34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F138 0025BF38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F13C 0025BF3C*/ PPC::Runtime::ASM::blr();
}