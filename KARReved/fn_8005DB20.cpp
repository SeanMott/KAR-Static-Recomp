//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005DB20(PPC::Runtime::GCContext* context)
{
/*8005DB20 0005A920*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005DB24 0005A924*/ PPC::Runtime::ASM::beqlr();
/*8005DB28 0005A928*/ PPC::Runtime::ASM::mulli(context->r4, context->r3, 0xb8);
/*8005DB2C 0005A92C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005DB30 0005A930*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8005DB34 0005A934*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005DB38 0005A938*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8005DB3C 0005A93C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r3));
/*8005DB40 0005A940*/ PPC::Runtime::ASM::blr();
}