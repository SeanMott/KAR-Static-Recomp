//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B488(PPC::Runtime::GCContext* context)
{
/*8007B488 00078288*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007B48C 0007828C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007B490 00078290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B494 00078294*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007B498 00078298*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8007B49C 0007829C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8007B4A0 000782A0*/ PPC::Runtime::ASM::bl(fn_HSD_ShadowFree);
/*8007B4A4 000782A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552A00 @ Get_MemoryOffset_HighBit);
/*8007B4A8 000782A8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8007B4AC 000782AC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552A00 @ Get_MemoryOffset_LowBit);
/*8007B4B0 000782B0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*8007B4B4 000782B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B4B8 000782B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8007B4BC 000782BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007B4C0 000782C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007B4C4 000782C4*/ PPC::Runtime::ASM::blr();
}