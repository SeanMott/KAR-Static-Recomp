//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_HSD_VISetUserPostRetraceCallback(PPC::Runtime::GCContext* context)
{
/*80410AE4 0040D8E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80410AE8 0040D8E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80410AEC 0040D8EC*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*80410AF0 0040D8F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80410AF4 0040D8F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80410AF8 0040D8F8*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*80410AFC 0040D8FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80410B00 0040D900*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80410B04 0040D904*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80410B08 0040D908*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80410B0C 0040D90C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80410B10 0040D910*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*80410B14 0040D914*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80410B18 0040D918*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80410B1C 0040D91C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80410B20 0040D920*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80410B24 0040D924*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80410B28 0040D928*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80410B2C 0040D92C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80410B30 0040D930*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80410B34 0040D934*/ PPC::Runtime::ASM::blr();
}