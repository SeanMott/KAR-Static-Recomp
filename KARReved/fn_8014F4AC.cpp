//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014F4AC(PPC::Runtime::GCContext* context)
{
/*8014F4AC 0014C2AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014F4B0 0014C2B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014F4B4 0014C2B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F4B8 0014C2B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014F4BC 0014C2BC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014F4C0 0014C2C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014F4C4 0014C2C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d8, context->r3));
/*8014F4C8 0014C2C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014F4CC 0014C2CC*/ PPC::Runtime::ASM::beq(.L_8014F4DC);
/*8014F4D0 0014C2D0*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014F4D4 0014C2D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014F4D8 0014C2D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8014F4DC, 0x8014F4DC) //this is a jump label
/*8014F4DC 0014C2DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014F4E0 0014C2E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014F4E4 0014C2E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014F4E8 0014C2E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014F4EC 0014C2EC*/ PPC::Runtime::ASM::blr();
}