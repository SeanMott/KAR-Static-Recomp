//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014B44C(PPC::Runtime::GCContext* context)
{
/*8014B44C 0014824C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014B450 00148250*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014B454 00148254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014B458 00148258*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014B45C 0014825C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8014B460 00148260*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014B464 00148264*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014B468 00148268*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8014B46C, 0x8014B46C) //this is a jump label
/*8014B46C 0014826C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014B470 00148270*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8014B474 00148274*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8014B478 00148278*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*8014B47C 0014827C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ac, context->r30));
/*8014B480 00148280*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014B484 00148284*/ PPC::Runtime::ASM::beq(.L_8014B490);
/*8014B488 00148288*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014B48C 0014828C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ac, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8014B490, 0x8014B490) //this is a jump label
/*8014B490 00148290*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8014B494 00148294*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8014B498 00148298*/ PPC::Runtime::ASM::blt(.L_8014B46C);
/*8014B49C 0014829C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014B4A0 001482A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014B4A4 001482A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014B4A8 001482A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014B4AC 001482AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014B4B0 001482B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014B4B4 001482B4*/ PPC::Runtime::ASM::blr();
}