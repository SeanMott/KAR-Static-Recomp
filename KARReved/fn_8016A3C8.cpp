//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8016A3C8(PPC::Runtime::GCContext* context)
{
/*8016A3C8 001671C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016A3CC 001671CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016A3D0 001671D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016A3D4 001671D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016A3D8 001671D8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8016A3DC 001671DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016A3E0 001671E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016A3E4 001671E4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8016A3E8, 0x8016A3E8) //this is a jump label
/*8016A3E8 001671E8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016A3EC 001671EC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8016A3F0 001671F0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016A3F4 001671F4*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8016A3F8 001671F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa4, context->r30));
/*8016A3FC 001671FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016A400 00167200*/ PPC::Runtime::ASM::beq(.L_8016A40C);
/*8016A404 00167204*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8016A408 00167208*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8016A40C, 0x8016A40C) //this is a jump label
/*8016A40C 0016720C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016A410 00167210*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x6);
/*8016A414 00167214*/ PPC::Runtime::ASM::blt(.L_8016A3E8);
/*8016A418 00167218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016A41C 0016721C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016A420 00167220*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016A424 00167224*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016A428 00167228*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016A42C 0016722C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016A430 00167230*/ PPC::Runtime::ASM::blr();
}