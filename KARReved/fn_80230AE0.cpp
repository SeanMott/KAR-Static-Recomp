//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230AE0(PPC::Runtime::GCContext* context)
{
/*80230AE0 0022D8E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230AE4 0022D8E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230AE8 0022D8E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230AEC 0022D8EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230AF0 0022D8F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80230AF4 0022D8F4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80230AF8 0022D8F8*/ PPC::Runtime::ASM::blt(.L_80230B14);
/*80230AFC 0022D8FC*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230B00 0022D900*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*80230B04 0022D904*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*80230B08 0022D908*/ PPC::Runtime::ASM::li(context->r4, 0x734);
/*80230B0C 0022D90C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230B10 0022D910*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80230B14, 0x80230B14) //this is a jump label
/*80230B14 0022D914*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230B18 0022D918*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230B1C 0022D91C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r3));
/*80230B20 0022D920*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230B24 0022D924*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 29);
/*80230B28 0022D928*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230B2C 0022D92C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230B30 0022D930*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230B34 0022D934*/ PPC::Runtime::ASM::blr();
}