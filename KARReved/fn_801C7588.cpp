//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C7588(PPC::Runtime::GCContext* context)
{
/*801C7588 001C4388*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C758C 001C438C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C7590 001C4390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C7594 001C4394*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C7598 001C4398*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C759C 001C439C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r3));
/*801C75A0 001C43A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801C75A4 001C43A4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801C75A8 001C43A8*/ PPC::Runtime::ASM::bne(.L_801C75BC);
/*801C75AC 001C43AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FB8 @ Get_MemoryOffset_SDA21);
/*801C75B0 001C43B0*/ PPC::Runtime::ASM::li(context->r4, 0x308);
/*801C75B4 001C43B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FC0 @ Get_MemoryOffset_SDA21);
/*801C75B8 001C43B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C75BC, 0x801C75BC) //this is a jump label
/*801C75BC 001C43BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C75C0 001C43C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801C75C4 001C43C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C75C8 001C43C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C75CC 001C43CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C75D0 001C43D0*/ PPC::Runtime::ASM::blr();
}