//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_8045D874(PPC::Runtime::GCContext* context)
{
/*8045D874 0045A674*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8045D878 0045A678*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045D87C 0045A67C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045D880 0045A680*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045D884 0045A684*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8045D888 0045A688*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045D88C 0045A68C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8045D890 0045A690*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8045D894 0045A694*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8045D898 0045A698*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8045D89C 0045A69C*/ PPC::Runtime::ASM::bne(.L_8045D8B0);
/*8045D8A0 0045A6A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8045D8A4 0045A6A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8045D8A8 0045A6A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8045D8AC 0045A6AC*/ PPC::Runtime::ASM::b(.L_8045D8C4);
RUNTIME_PPC_JUMP_LABEL(.L_8045D8B0, 0x8045D8B0) //this is a jump label
/*8045D8B0 0045A6B0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8045D8B4 0045A6B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8045D8B8 0045A6B8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8045D8BC 0045A6BC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8045D8C0 0045A6C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8045D8C4, 0x8045D8C4) //this is a jump label
/*8045D8C4 0045A6C4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8045D8C8 0045A6C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045D8CC 0045A6CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045D8D0 0045A6D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045D8D4 0045A6D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045D8D8 0045A6D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045D8DC 0045A6DC*/ PPC::Runtime::ASM::blr();
}