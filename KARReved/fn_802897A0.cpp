//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802897A0(PPC::Runtime::GCContext* context)
{
/*802897A0 002865A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802897A4 002865A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802897A8 002865A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802897AC 002865AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802897B0 002865B0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802897B4 002865B4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjGetFlags);
/*802897B8 002865B8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 1, 1);
/*802897BC 002865BC*/ PPC::Runtime::ASM::bne(.L_802897CC);
/*802897C0 002865C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802897C4 002865C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802897C8 002865C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802897CC, 0x802897CC) //this is a jump label
/*802897CC 002865CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802897D0 002865D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802897D4 002865D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802897D8 002865D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802897DC 002865DC*/ PPC::Runtime::ASM::blr();
}