//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_8017AFA8(PPC::Runtime::GCContext* context)
{
/*8017AFA8 00177DA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017AFAC 00177DAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017AFB0 00177DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017AFB4 00177DB4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017AFB8 00177DB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea4, context->r3));
/*8017AFBC 00177DBC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017AFC0 00177DC0*/ PPC::Runtime::ASM::beq(.L_8017AFC8);
/*8017AFC4 00177DC4*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8017AFC8, 0x8017AFC8) //this is a jump label
/*8017AFC8 00177DC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017AFCC 00177DCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017AFD0 00177DD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017AFD4 00177DD4*/ PPC::Runtime::ASM::blr();
}