//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80291BBC(PPC::Runtime::GCContext* context)
{
/*80291BBC 0028E9BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80291BC0 0028E9C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80291BC4 0028E9C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291BC8 0028E9C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80291BCC 0028E9CC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80291BD0 0028E9D0*/ PPC::Runtime::ASM::beq(.L_80291BF4);
/*80291BD4 0028E9D4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804BCFEC @ Get_MemoryOffset_HighBit);
/*80291BD8 0028E9D8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80291BDC 0028E9DC*/ PPC::Runtime::ASM::addi(context->r4, context->r5, lbl_804BCFEC @ Get_MemoryOffset_LowBit);
/*80291BE0 0028E9E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80291BE4 0028E9E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80291BE8 0028E9E8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80291BEC 0028E9EC*/ PPC::Runtime::ASM::ble(.L_80291BF4);
/*80291BF0 0028E9F0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80291BF4, 0x80291BF4) //this is a jump label
/*80291BF4 0028E9F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80291BF8 0028E9F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80291BFC 0028E9FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80291C00 0028EA00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80291C04 0028EA04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80291C08 0028EA08*/ PPC::Runtime::ASM::blr();
}