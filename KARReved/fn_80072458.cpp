//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006A3F0.hpp"



void fn_80072458(PPC::Runtime::GCContext* context)
{
/*80072458 0006F258*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007245C 0006F25C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80072460 0006F260*/ PPC::Runtime::ASM::mr(context->r6, context->r5);
/*80072464 0006F264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80072468 0006F268*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
/*8007246C 0006F26C*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*80072470 0006F270*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80072474 0006F274*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD5D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80072478 0006F278*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x20);
/*8007247C 0006F27C*/ PPC::Runtime::ASM::bl(fn_8006A3F0);
/*80072480 0006F280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80072484 0006F284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80072488 0006F288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007248C 0006F28C*/ PPC::Runtime::ASM::blr();
}