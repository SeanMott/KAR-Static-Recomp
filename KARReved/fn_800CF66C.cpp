//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800CF66C(PPC::Runtime::GCContext* context)
{
/*800CF66C 000CC46C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800CF670 000CC470*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CF674 000CC474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CF678 000CC478*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CF67C 000CC47C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CF680 000CC480*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800CF684 000CC484*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CF688 000CC488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800CF68C 000CC48C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CF690 000CC490*/ PPC::Runtime::ASM::bne(.L_800CF6A8);
/*800CF694 000CC494*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_901 @ Get_MemoryOffset_HighBit);
/*800CF698 000CC498*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800CF69C 000CC49C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_901 @ Get_MemoryOffset_LowBit);
/*800CF6A0 000CC4A0*/ PPC::Runtime::ASM::li(context->r4, 0x259);
/*800CF6A4 000CC4A4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800CF6A8, 0x800CF6A8) //this is a jump label
/*800CF6A8 000CC4A8*/ PPC::Runtime::ASM::mulli(context->r3, context->r30, 0x18);
/*800CF6AC 000CC4AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800CF6B0 000CC4B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800CF6B4 000CC4B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x14);
/*800CF6B8 000CC4B8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r0);
/*800CF6BC 000CC4BC*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*800CF6C0 000CC4C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CF6C4 000CC4C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CF6C8 000CC4C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CF6CC 000CC4CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CF6D0 000CC4D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800CF6D4 000CC4D4*/ PPC::Runtime::ASM::blr();
}