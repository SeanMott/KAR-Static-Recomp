//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void EXIClearInterrupts(PPC::Runtime::GCContext* context)
{
/*803EA68C 003E748C*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x14);
/*803EA690 003E7490*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803EA694 003E7494*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x6800);
/*803EA698 003E7498*/ PPC::Runtime::ASM::add(context->r7, context->r7, context->r0);
/*803EA69C 003E749C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803EA6A0 003E74A0*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*803EA6A4 003E74A4*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x7f5);
/*803EA6A8 003E74A8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803EA6AC 003E74AC*/ PPC::Runtime::ASM::beq(.L_803EA6B4);
/*803EA6B0 003E74B0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_803EA6B4, 0x803EA6B4) //this is a jump label
/*803EA6B4 003E74B4*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*803EA6B8 003E74B8*/ PPC::Runtime::ASM::beq(.L_803EA6C0);
/*803EA6BC 003E74BC*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803EA6C0, 0x803EA6C0) //this is a jump label
/*803EA6C0 003E74C0*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*803EA6C4 003E74C4*/ PPC::Runtime::ASM::beq(.L_803EA6CC);
/*803EA6C8 003E74C8*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x800);
RUNTIME_PPC_JUMP_LABEL(.L_803EA6CC, 0x803EA6CC) //this is a jump label
/*803EA6CC 003E74CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803EA6D0 003E74D0*/ PPC::Runtime::ASM::blr();
}