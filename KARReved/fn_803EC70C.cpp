//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EC70C(PPC::Runtime::GCContext* context)
{
/*803EC70C 003E950C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE0AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EC710 003E9510*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180570180 @ Get_MemoryOffset_HighBit);
/*803EC714 003E9514*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_180570180 @ Get_MemoryOffset_LowBit);
/*803EC718 003E9518*/ PPC::Runtime::ASM::mulli(context->r4, context->r5, 0x780);
/*803EC71C 003E951C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*803EC720 003E9520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803EC724 003E9524*/ PPC::Runtime::ASM::blr();
}