//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801695E0(PPC::Runtime::GCContext* context)
{
/*801695E0 001663E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801695E4 001663E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801695E8 001663E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801695EC 001663EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801695F0 001663F0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801695F4 001663F4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801695F8 001663F8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801695FC 001663FC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80169600 00166400*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80169604 00166404*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80169608 00166408*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8016960C 0016640C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa84, context->r3));
/*80169610 00166410*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80169614 00166414*/ PPC::Runtime::ASM::beq(.L_80169620);
/*80169618 00166418*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016961C 0016641C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80169620, 0x80169620) //this is a jump label
/*80169620 00166420*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169624 00166424*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169628 00166428*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016962C 0016642C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80169630 00166430*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80169634 00166434*/ PPC::Runtime::ASM::blr();
}