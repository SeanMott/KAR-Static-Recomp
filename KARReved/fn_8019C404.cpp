//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006AD20.hpp"



void fn_8019C404(PPC::Runtime::GCContext* context)
{
/*8019C404 00199204*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019C408 00199208*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019C40C 0019920C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5c);
/*8019C410 00199210*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C414 00199214*/ PPC::Runtime::ASM::bl(fn_8006AD20);
/*8019C418 00199218*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8019C41C 0019921C*/ PPC::Runtime::ASM::beq(.L_8019C428);
/*8019C420 00199220*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8019C424 00199224*/ PPC::Runtime::ASM::b(.L_8019C42C);
RUNTIME_PPC_JUMP_LABEL(.L_8019C428, 0x8019C428) //this is a jump label
/*8019C428 00199228*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019C42C, 0x8019C42C) //this is a jump label
/*8019C42C 0019922C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C430 00199230*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019C434 00199234*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019C438 00199238*/ PPC::Runtime::ASM::blr();
}