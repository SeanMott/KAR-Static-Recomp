//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80236C40.hpp"
#include "fn_800547E0.hpp"
#include "fn_8023FF80.hpp"
#include "fn_80240040.hpp"



void fn_8023F0F0(PPC::Runtime::GCContext* context)
{
/*8023F0F0 0023BEF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023F0F4 0023BEF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023F0F8 0023BEF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023F0FC 0023BEFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023F100 0023BF00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023F104 0023BF04*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023F108 0023BF08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023F10C 0023BF0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8023F110 0023BF10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023F114 0023BF14*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8023F118 0023BF18*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8023F11C 0023BF1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023F120 0023BF20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023F124 0023BF24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8023F128 0023BF28*/ PPC::Runtime::ASM::bgt(.L_8023F150);
/*8023F12C 0023BF2C*/ PPC::Runtime::ASM::li(context->r0, 0x1e);
/*8023F130 0023BF30*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*8023F134 0023BF34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8023F138 0023BF38*/ PPC::Runtime::ASM::li(context->r4, 0x27a2);
/*8023F13C 0023BF3C*/ PPC::Runtime::ASM::li(context->r6, 0xcd);
/*8023F140 0023BF40*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8023F144 0023BF44*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*8023F148 0023BF48*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8023F14C 0023BF4C*/ PPC::Runtime::ASM::bl(fn_80236C40);
RUNTIME_PPC_JUMP_LABEL(.L_8023F150, 0x8023F150) //this is a jump label
/*8023F150 0023BF50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8023F154 0023BF54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8023F158 0023BF58*/ PPC::Runtime::ASM::beq(.L_8023F164);
/*8023F15C 0023BF5C*/ PPC::Runtime::ASM::blt(.L_8023F18C);
/*8023F160 0023BF60*/ PPC::Runtime::ASM::b(.L_8023F18C);
RUNTIME_PPC_JUMP_LABEL(.L_8023F164, 0x8023F164) //this is a jump label
/*8023F164 0023BF64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023F168 0023BF68*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*8023F16C 0023BF6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023F170 0023BF70*/ PPC::Runtime::ASM::bne(.L_8023F18C);
/*8023F174 0023BF74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023F178 0023BF78*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023F17C 0023BF7C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8023F180 0023BF80*/ PPC::Runtime::ASM::bl(fn_8023FF80);
/*8023F184 0023BF84*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023F188 0023BF88*/ PPC::Runtime::ASM::bl(fn_80240040);
RUNTIME_PPC_JUMP_LABEL(.L_8023F18C, 0x8023F18C) //this is a jump label
/*8023F18C 0023BF8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023F190 0023BF90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023F194 0023BF94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023F198 0023BF98*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023F19C 0023BF9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023F1A0 0023BFA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023F1A4 0023BFA4*/ PPC::Runtime::ASM::blr();
}