//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8013BACC(PPC::Runtime::GCContext* context)
{
/*8013BACC 001388CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013BAD0 001388D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013BAD4 001388D4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1154 @ Get_MemoryOffset_HighBit);
/*8013BAD8 001388D8*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1155 @ Get_MemoryOffset_HighBit);
/*8013BADC 001388DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013BAE0 001388E0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1154 @ Get_MemoryOffset_LowBit);
/*8013BAE4 001388E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013BAE8 001388E8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1155 @ Get_MemoryOffset_LowBit);
/*8013BAEC 001388EC*/ PPC::Runtime::ASM::bl(fn_SomeFuncToDoWithTheStatdiumTitlesAndOtherShit);
/*8013BAF0 001388F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013BAF4 001388F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013BAF8 001388F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013BAFC 001388FC*/ PPC::Runtime::ASM::blr();
}