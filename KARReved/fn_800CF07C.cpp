//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E3484.hpp"



void fn_800CF07C(PPC::Runtime::GCContext* context)
{
/*800CF07C 000CBE7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800CF080 000CBE80*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CF084 000CBE84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CF088 000CBE88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CF08C 000CBE8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CF090 000CBE90*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800CF094 000CBE94*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CF098 000CBE98*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800CF09C 000CBE9C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800CF0A0 000CBEA0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800CF0A4 000CBEA4*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CF0A8 000CBEA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r31));
/*800CF0AC 000CBEAC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CF0B0 000CBEB0*/ PPC::Runtime::ASM::bne(.L_800CF0C8);
/*800CF0B4 000CBEB4*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_900 @ Get_MemoryOffset_HighBit);
/*800CF0B8 000CBEB8*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800CF0BC 000CBEBC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_900 @ Get_MemoryOffset_LowBit);
/*800CF0C0 000CBEC0*/ PPC::Runtime::ASM::li(context->r4, 0x1bc);
/*800CF0C4 000CBEC4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800CF0C8, 0x800CF0C8) //this is a jump label
/*800CF0C8 000CBEC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800CF0CC 000CBECC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800CF0D0 000CBED0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800CF0D4 000CBED4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*800CF0D8 000CBED8*/ PPC::Runtime::ASM::bl(fn_800E3484);
/*800CF0DC 000CBEDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CF0E0 000CBEE0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CF0E4 000CBEE4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CF0E8 000CBEE8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CF0EC 000CBEEC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800CF0F0 000CBEF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CF0F4 000CBEF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800CF0F8 000CBEF8*/ PPC::Runtime::ASM::blr();
}