//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_8016DD88(PPC::Runtime::GCContext* context)
{
/*8016DD88 0016AB88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016DD8C 0016AB8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016DD90 0016AB90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016DD94 0016AB94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016DD98 0016AB98*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016DD9C 0016AB9C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016DDA0 0016ABA0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8016DDA4 0016ABA4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8016DDA8 0016ABA8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8016DDAC 0016ABAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb6c, context->r3));
/*8016DDB0 0016ABB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016DDB4 0016ABB4*/ PPC::Runtime::ASM::beq(.L_8016DDBC);
/*8016DDB8 0016ABB8*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8016DDBC, 0x8016DDBC) //this is a jump label
/*8016DDBC 0016ABBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016DDC0 0016ABC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016DDC4 0016ABC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016DDC8 0016ABC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016DDCC 0016ABCC*/ PPC::Runtime::ASM::blr();
}