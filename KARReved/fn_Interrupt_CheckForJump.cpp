//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_AS_JumpSquat.hpp"



void fn_Interrupt_CheckForJump(PPC::Runtime::GCContext* context)
{
/*801BC2D8 001B90D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BC2DC 001B90DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BC2E0 001B90E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BC2E4 001B90E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e4, context->r3));
/*801BC2E8 001B90E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*801BC2EC 001B90EC*/ PPC::Runtime::ASM::beq(.L_801BC2FC);
/*801BC2F0 001B90F0*/ PPC::Runtime::ASM::bl(fn_AS_JumpSquat);
/*801BC2F4 001B90F4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BC2F8 001B90F8*/ PPC::Runtime::ASM::b(.L_801BC300);
RUNTIME_PPC_JUMP_LABEL(.L_801BC2FC, 0x801BC2FC) //this is a jump label
/*801BC2FC 001B90FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BC300, 0x801BC300) //this is a jump label
/*801BC300 001B9100*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BC304 001B9104*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BC308 001B9108*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BC30C 001B910C*/ PPC::Runtime::ASM::blr();
}