//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7930.hpp"



void fn_800F9BA4(PPC::Runtime::GCContext* context)
{
/*800F9BA4 000F69A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F9BA8 000F69A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F9BAC 000F69AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9BB0 000F69B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F9BB4 000F69B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800F9BB8 000F69B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800F9BBC 000F69BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F9BC0 000F69C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F9BC4 000F69C4*/ PPC::Runtime::ASM::beq(.L_800F9BD0);
/*800F9BC8 000F69C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800F9BCC 000F69CC*/ PPC::Runtime::ASM::bl(fn_800F7930);
RUNTIME_PPC_JUMP_LABEL(.L_800F9BD0, 0x800F9BD0) //this is a jump label
/*800F9BD0 000F69D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F9BD4 000F69D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F9BD8 000F69D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F9BDC 000F69DC*/ PPC::Runtime::ASM::blr();
}