//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8033AB00(PPC::Runtime::GCContext* context)
{
/*8033AB00 00337900*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8033AB04 00337904*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033AB08 00337908*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033AB0C 0033790C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DADE8 @ Get_MemoryOffset_SDA21);
/*8033AB10 00337910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033AB14 00337914*/ PPC::Runtime::ASM::li(context->r6, lbl_805DADE0 @ Get_MemoryOffset_SDA21);
/*8033AB18 00337918*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033AB1C 0033791C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033AB20 00337920*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8033AB24 00337924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8033AB28 00337928*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E63A4 @ Get_MemoryOffset_HighBit);
/*8033AB2C 0033792C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E63A4 @ Get_MemoryOffset_LowBit);
/*8033AB30 00337930*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8033AB34 00337934*/ PPC::Runtime::ASM::bne(.L_8033AB40);
/*8033AB38 00337938*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E6320 @ Get_MemoryOffset_HighBit);
/*8033AB3C 0033793C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E6320 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8033AB40, 0x8033AB40) //this is a jump label
/*8033AB40 00337940*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033AB44 00337944*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033AB48 00337948*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8033AB4C 0033794C*/ PPC::Runtime::ASM::blr();
}