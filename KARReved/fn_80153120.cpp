//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80153120(PPC::Runtime::GCContext* context)
{
/*80153120 0014FF20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80153124 0014FF24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80153128 0014FF28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015312C 0014FF2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80153130 0014FF30*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80153134 0014FF34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80153138 0014FF38*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015313C 0014FF3C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80153140, 0x80153140) //this is a jump label
/*80153140 0014FF40*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80153144 0014FF44*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80153148 0014FF48*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015314C 0014FF4C*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80153150 0014FF50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ac, context->r30));
/*80153154 0014FF54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80153158 0014FF58*/ PPC::Runtime::ASM::beq(.L_80153164);
/*8015315C 0014FF5C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80153160 0014FF60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ac, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80153164, 0x80153164) //this is a jump label
/*80153164 0014FF64*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80153168 0014FF68*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8015316C 0014FF6C*/ PPC::Runtime::ASM::blt(.L_80153140);
/*80153170 0014FF70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80153174 0014FF74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80153178 0014FF78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015317C 0014FF7C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80153180 0014FF80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80153184 0014FF84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80153188 0014FF88*/ PPC::Runtime::ASM::blr();
}