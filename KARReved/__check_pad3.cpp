//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __check_pad3(PPC::Runtime::GCContext* context)
{
/*800051EC 000021EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800051F0 000021F0*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*800051F4 000021F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*800051F8 000021F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*800051FC 000021FC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e4, context->r3));
/*80005200 00002200*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0xeef);
/*80005204 00002204*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xeef);
/*80005208 00002208*/ PPC::Runtime::ASM::bne(.L_8000521C);
/*8000520C 0000220C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80005210 00002210*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80005214 00002214*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80005218 00002218*/ PPC::Runtime::ASM::bl(OSResetSystem);
RUNTIME_PPC_JUMP_LABEL(.L_8000521C, 0x8000521C) //this is a jump label
/*8000521C 0000221C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80005220 00002220*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*80005224 00002224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80005228 00002228*/ PPC::Runtime::ASM::blr();
}