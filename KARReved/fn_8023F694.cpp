//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8023F694(PPC::Runtime::GCContext* context)
{
/*8023F694 0023C494*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8023F698 0023C498*/ PPC::Runtime::ASM::beqlr();
/*8023F69C 0023C49C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8023F6A0 0023C4A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8023F6A4 0023C4A4*/ PPC::Runtime::ASM::bne(.L_8023F6AC);
/*8023F6A8 0023C4A8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8023F6AC, 0x8023F6AC) //this is a jump label
/*8023F6AC 0023C4AC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x14);
/*8023F6B0 0023C4B0*/ PPC::Runtime::ASM::b(.L_8023F6DC);
RUNTIME_PPC_JUMP_LABEL(.L_8023F6B4, 0x8023F6B4) //this is a jump label
/*8023F6B4 0023C4B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r4));
/*8023F6B8 0023C4B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xc);
/*8023F6BC 0023C4BC*/ PPC::Runtime::ASM::bne(.L_8023F6D8);
/*8023F6C0 0023C4C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8023F6C4 0023C4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8023F6C8 0023C4C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8023F6CC 0023C4CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8023F6D0 0023C4D0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8023F6D4 0023C4D4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8023F6D8, 0x8023F6D8) //this is a jump label
/*8023F6D8 0023C4D8*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8023F6DC, 0x8023F6DC) //this is a jump label
/*8023F6DC 0023C4DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8023F6E0 0023C4E0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8023F6E4 0023C4E4*/ PPC::Runtime::ASM::bne(.L_8023F6B4);
/*8023F6E8 0023C4E8*/ PPC::Runtime::ASM::blr();
}