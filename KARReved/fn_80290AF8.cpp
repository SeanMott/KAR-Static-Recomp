//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80290AF8(PPC::Runtime::GCContext* context)
{
/*80290AF8 0028D8F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80290AFC 0028D8FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80290B00 0028D900*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80290B04 0028D904*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80290B08 0028D908  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80290B0C 0028D90C*/ PPC::Runtime::ASM::beq(.L_80290B30);
/*80290B10 0028D910*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BE40C @ Get_MemoryOffset_HighBit);
/*80290B14 0028D914*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80290B18 0028D918*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BE40C @ Get_MemoryOffset_LowBit);
/*80290B1C 0028D91C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80290B20 0028D920*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80290B24 0028D924*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80290B28 0028D928*/ PPC::Runtime::ASM::ble(.L_80290B30);
/*80290B2C 0028D92C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80290B30, 0x80290B30) //this is a jump label
/*80290B30 0028D930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80290B34 0028D934*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80290B38 0028D938*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80290B3C 0028D93C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80290B40 0028D940*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80290B44 0028D944*/ PPC::Runtime::ASM::blr();
}