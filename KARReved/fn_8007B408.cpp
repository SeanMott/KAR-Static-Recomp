//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B408(PPC::Runtime::GCContext* context)
{
/*8007B408 00078208*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007B40C 0007820C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007B410 00078210*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B414 00078214*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8007B418 00078218*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/* 8007B41C 0007821C  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*8007B420 00078220*/ PPC::Runtime::ASM::bne(.L_8007B43C);
/*8007B424 00078224*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8007B428 00078228*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8007B42C 0007822C*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 7, 24, 24);
/*8007B430 00078230*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*8007B434 00078234*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8007B438 00078238*/ PPC::Runtime::ASM::bl(fn_HSD_ShadowSetActive?);
RUNTIME_PPC_JUMP_LABEL(.L_8007B43C, 0x8007B43C) //this is a jump label
/*8007B43C 0007823C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B440 00078240*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007B444 00078244*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007B448 00078248*/ PPC::Runtime::ASM::blr();
}