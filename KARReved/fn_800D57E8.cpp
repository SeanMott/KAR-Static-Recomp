//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D57E8(PPC::Runtime::GCContext* context)
{
/*800D57E8 000D25E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D57EC 000D25EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D57F0 000D25F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D57F4 000D25F4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D57F8 000D25F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800D57FC 000D25FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*800D5800 000D2600*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800D5804 000D2604*/ PPC::Runtime::ASM::beq(.L_800D581C);
/*800D5808 000D2608*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D580C 000D260C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800D5810 000D2610*/ PPC::Runtime::ASM::bne(.L_800D581C);
/*800D5814 000D2614*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x820, context->r4));
/*800D5818 000D2618*/ PPC::Runtime::ASM::b(.L_800D5830);
RUNTIME_PPC_JUMP_LABEL(.L_800D581C, 0x800D581C) //this is a jump label
/*800D581C 000D261C*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D5820 000D2620*/ PPC::Runtime::ASM::li(context->r4, 0xf1f);
/*800D5824 000D2624*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6098 @ Get_MemoryOffset_SDA21);
/*800D5828 000D2628*/ PPC::Runtime::ASM::bl(fn___assert);
/*800D582C 000D262C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D5830, 0x800D5830) //this is a jump label
/*800D5830 000D2630*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D5834 000D2634*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D5838 000D2638*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D583C 000D263C*/ PPC::Runtime::ASM::blr();
}