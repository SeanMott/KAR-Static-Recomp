//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EC65C(PPC::Runtime::GCContext* context)
{
/*803EC65C 003E945C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE0AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC660 003E9460*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18056EB00 @ Get_MemoryOffset_HighBit);
/*803EC664 003E9464*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_18056EB00 @ Get_MemoryOffset_LowBit);
/*803EC668 003E9468*/ PPC::Runtime::ASM::mulli(context->r4, context->r5, 0x780);
/*803EC66C 003E946C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*803EC670 003E9470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803EC674 003E9474*/ PPC::Runtime::ASM::blr();
}