//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802926BC(PPC::Runtime::GCContext* context)
{
/*802926BC 0028F4BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802926C0 0028F4C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802926C4 0028F4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802926C8 0028F4C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802926CC 0028F4CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*802926D0 0028F4D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802926D4 0028F4D4*/ PPC::Runtime::ASM::bctrl();
/*802926D8 0028F4D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802926DC 0028F4DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802926E0 0028F4E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802926E4 0028F4E4*/ PPC::Runtime::ASM::blr();
}