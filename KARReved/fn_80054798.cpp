//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80054798(PPC::Runtime::GCContext* context)
{
/*80054798 00051598*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005479C 0005159C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800547A0 000515A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800547A4 000515A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800547A8 000515A8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*800547AC 000515AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*800547B0 000515B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800547B4 000515B4*/ PPC::Runtime::ASM::beq(.L_800547C8);
/*800547B8 000515B8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjGetFlags);
/*800547BC 000515BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 1, 1);
/*800547C0 000515C0*/ PPC::Runtime::ASM::bne(.L_800547C8);
/*800547C4 000515C4*/ PPC::Runtime::ASM::li(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800547C8, 0x800547C8) //this is a jump label
/*800547C8 000515C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800547CC 000515CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800547D0 000515D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800547D4 000515D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800547D8 000515D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800547DC 000515DC*/ PPC::Runtime::ASM::blr();
}