//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSGetPhysicalMemSize.hpp"



void fn_8043C914(PPC::Runtime::GCContext* context)
{
/*8043C914 00439714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8043C918 00439718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043C91C 0043971C*/ PPC::Runtime::ASM::lis(context->r3, lbl_805085FC @ Get_MemoryOffset_HighBit);
/*8043C920 00439720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043C924 00439724*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805085FC @ Get_MemoryOffset_LowBit);
/*8043C928 00439728*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043C92C 0043972C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8043C930 00439730*/ PPC::Runtime::ASM::bl(fn_OSGetPhysicalMemSize);
/*8043C934 00439734*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 4);
/*8043C938 00439738*/ PPC::Runtime::ASM::lis(context->r4, lbl_805084B0 @ Get_MemoryOffset_HighBit);
/*8043C93C 0043973C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r3);
/*8043C940 00439740*/ PPC::Runtime::ASM::divwu(context->r0, context->r5, context->r3);
/*8043C944 00439744*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_805084B0 @ Get_MemoryOffset_LowBit);
/*8043C948 00439748*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*8043C94C 0043974C*/ PPC::Runtime::ASM::subf(context->r3, context->r0, context->r5);
/*8043C950 00439750*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x8000);
/*8043C954 00439754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8043C958 00439758*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043C95C 0043975C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043C960 00439760*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043C964 00439764*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8043C968 00439768*/ PPC::Runtime::ASM::blr();
}