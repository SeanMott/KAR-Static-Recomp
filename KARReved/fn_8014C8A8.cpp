//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_8014C8A8(PPC::Runtime::GCContext* context)
{
/*8014C8A8 001496A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014C8AC 001496AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014C8B0 001496B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C8B4 001496B4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014C8B8 001496B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r3));
/*8014C8BC 001496BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014C8C0 001496C0*/ PPC::Runtime::ASM::beq(.L_8014C8C8);
/*8014C8C4 001496C4*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8014C8C8, 0x8014C8C8) //this is a jump label
/*8014C8C8 001496C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C8CC 001496CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014C8D0 001496D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014C8D4 001496D4*/ PPC::Runtime::ASM::blr();
}