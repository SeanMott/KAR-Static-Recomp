//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801169C8(PPC::Runtime::GCContext* context)
{
/*801169C8 001137C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801169CC 001137CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801169D0 001137D0*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1052 @ Get_MemoryOffset_HighBit);
/*801169D4 001137D4*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1053 @ Get_MemoryOffset_HighBit);
/*801169D8 001137D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801169DC 001137DC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_1052 @ Get_MemoryOffset_LowBit);
/*801169E0 001137E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801169E4 001137E4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1053 @ Get_MemoryOffset_LowBit);
/*801169E8 001137E8*/ PPC::Runtime::ASM::bl(fn_SomeFuncToDoWithTheStatdiumTitlesAndOtherShit);
/*801169EC 001137EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801169F0 001137F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801169F4 001137F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801169F8 001137F8*/ PPC::Runtime::ASM::blr();
}