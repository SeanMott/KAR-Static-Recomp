//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80291B6C(PPC::Runtime::GCContext* context)
{
/*80291B6C 0028E96C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80291B70 0028E970*/ PPC::Runtime::ASM::mflr(context->r0);
/*80291B74 0028E974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291B78 0028E978*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80291B7C 0028E97C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80291B80 0028E980*/ PPC::Runtime::ASM::beq(.L_80291BA4);
/*80291B84 0028E984*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BCF90 @ Get_MemoryOffset_HighBit);
/*80291B88 0028E988*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80291B8C 0028E98C*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BCF90 @ Get_MemoryOffset_LowBit);
/*80291B90 0028E990*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80291B94 0028E994*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80291B98 0028E998*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80291B9C 0028E99C*/ PPC::Runtime::ASM::ble(.L_80291BA4);
/*80291BA0 0028E9A0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80291BA4, 0x80291BA4) //this is a jump label
/*80291BA4 0028E9A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291BA8 0028E9A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80291BAC 0028E9AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80291BB0 0028E9B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80291BB4 0028E9B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80291BB8 0028E9B8*/ PPC::Runtime::ASM::blr();
}