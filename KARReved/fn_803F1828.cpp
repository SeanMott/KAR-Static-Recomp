//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSAllocFromHeap.hpp"



void fn_803F1828(PPC::Runtime::GCContext* context)
{
/*803F1828 003EE628*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F182C 003EE62C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803F1830 003EE630*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803F1834 003EE634*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803F1838 003EE638*/ PPC::Runtime::ASM::lwz(context->r3, StructValues_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F183C 003EE63C*/ PPC::Runtime::ASM::bl(fn_OSAllocFromHeap);
/*803F1840 003EE640*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F1844 003EE644*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803F1848 003EE648*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F184C 003EE64C*/ PPC::Runtime::ASM::blr();
}