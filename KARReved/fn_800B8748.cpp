//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800B8748(PPC::Runtime::GCContext* context)
{
/*800B8748 000B5548*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B874C 000B554C*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*800B8750 000B5550*/ PPC::Runtime::ASM::addi(context->r4, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B8754 000B5554*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B8758 000B5558*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800B875C, 0x800B875C) //this is a jump label
/*800B875C 000B555C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r4));
/*800B8760 000B5560*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B8764 000B5564*/ PPC::Runtime::ASM::bnelr();
/*800B8768 000B5568*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B876C 000B556C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B8770 000B5570*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B8774 000B5574*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B8778 000B5578*/ PPC::Runtime::ASM::bnelr();
/*800B877C 000B557C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B8780 000B5580*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B8784 000B5584*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B8788 000B5588*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B878C 000B558C*/ PPC::Runtime::ASM::bnelr();
/*800B8790 000B5590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B8794 000B5594*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B8798 000B5598*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B879C 000B559C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B87A0 000B55A0*/ PPC::Runtime::ASM::bnelr();
/*800B87A4 000B55A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B87A8 000B55A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B87AC 000B55AC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B87B0 000B55B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B87B4 000B55B4*/ PPC::Runtime::ASM::bnelr();
/*800B87B8 000B55B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B87BC 000B55BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B87C0 000B55C0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B87C4 000B55C4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B87C8 000B55C8*/ PPC::Runtime::ASM::bnelr();
/*800B87CC 000B55CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B87D0 000B55D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B87D4 000B55D4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B87D8 000B55D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B87DC 000B55DC*/ PPC::Runtime::ASM::bnelr();
/*800B87E0 000B55E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r4));
/*800B87E4 000B55E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B87E8 000B55E8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B87EC 000B55EC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B87F0 000B55F0*/ PPC::Runtime::ASM::bnelr();
/*800B87F4 000B55F4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B87F8 000B55F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800B87FC 000B55FC*/ PPC::Runtime::ASM::bdnz(.L_800B875C);
/*800B8800 000B5600*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*800B8804 000B5604*/ PPC::Runtime::ASM::blr();
}