//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006DCC0.hpp"



void fn_8006DE2C(PPC::Runtime::GCContext* context)
{
/*8006DE2C 0006AC2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8006DE30 0006AC30*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006DE34 0006AC34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006DE38 0006AC38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8006DE3C 0006AC3C  7C FF 3B 79 */ mr. context->r31 , context->r7
/*8006DE40 0006AC40*/ PPC::Runtime::ASM::beq(.L_8006DE74);
/*8006DE44 0006AC44*/ PPC::Runtime::ASM::mr(context->r7, context->r8);
/*8006DE48 0006AC48*/ PPC::Runtime::ASM::mr(context->r8, context->r9);
/*8006DE4C 0006AC4C*/ PPC::Runtime::ASM::bl(fn_8006DCC0);
/*8006DE50 0006AC50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8006DE54 0006AC54*/ PPC::Runtime::ASM::beq(.L_8006DE6C);
/*8006DE58 0006AC58*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8006DE5C 0006AC5C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8006DE60 0006AC60*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8006DE64 0006AC64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8006DE68 0006AC68*/ PPC::Runtime::ASM::b(.L_8006DE78);
RUNTIME_PPC_JUMP_LABEL(.L_8006DE6C, 0x8006DE6C) //this is a jump label
/*8006DE6C 0006AC6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8006DE70 0006AC70*/ PPC::Runtime::ASM::b(.L_8006DE78);
RUNTIME_PPC_JUMP_LABEL(.L_8006DE74, 0x8006DE74) //this is a jump label
/*8006DE74 0006AC74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8006DE78, 0x8006DE78) //this is a jump label
/*8006DE78 0006AC78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006DE7C 0006AC7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006DE80 0006AC80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006DE84 0006AC84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8006DE88 0006AC88*/ PPC::Runtime::ASM::blr();
}