//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8033EBB0(PPC::Runtime::GCContext* context)
{
/*8033EBB0 0033B9B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8033EBB4 0033B9B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033EBB8 0033B9B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033EBBC 0033B9BC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAEF8 @ Get_MemoryOffset_SDA21);
/*8033EBC0 0033B9C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033EBC4 0033B9C4*/ PPC::Runtime::ASM::li(context->r6, lbl_805DAEF0 @ Get_MemoryOffset_SDA21);
/*8033EBC8 0033B9C8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033EBCC 0033B9CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033EBD0 0033B9D0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8033EBD4 0033B9D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8033EBD8 0033B9D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7660 @ Get_MemoryOffset_HighBit);
/*8033EBDC 0033B9DC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7660 @ Get_MemoryOffset_LowBit);
/*8033EBE0 0033B9E0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8033EBE4 0033B9E4*/ PPC::Runtime::ASM::bne(.L_8033EBF0);
/*8033EBE8 0033B9E8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E7614 @ Get_MemoryOffset_HighBit);
/*8033EBEC 0033B9EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E7614 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8033EBF0, 0x8033EBF0) //this is a jump label
/*8033EBF0 0033B9F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033EBF4 0033B9F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033EBF8 0033B9F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8033EBFC 0033B9FC*/ PPC::Runtime::ASM::blr();
}