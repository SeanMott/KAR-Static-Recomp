//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80298AD4(PPC::Runtime::GCContext* context)
{
/*80298AD4 002958D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80298AD8 002958D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80298ADC 002958DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298AE0 002958E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80298AE4 002958E4  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80298AE8 002958E8*/ PPC::Runtime::ASM::beq(.L_80298B18);
/*80298AEC 002958EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE658 @ Get_MemoryOffset_HighBit);
/*80298AF0 002958F0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE658 @ Get_MemoryOffset_LowBit);
/*80298AF4 002958F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80298AF8 002958F8*/ PPC::Runtime::ASM::beq(.L_80298B08);
/*80298AFC 002958FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*80298B00 00295900*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*80298B04 00295904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80298B08, 0x80298B08) //this is a jump label
/*80298B08 00295908*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80298B0C 0029590C*/ PPC::Runtime::ASM::ble(.L_80298B18);
/*80298B10 00295910*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80298B14 00295914*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80298B18, 0x80298B18) //this is a jump label
/*80298B18 00295918*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298B1C 0029591C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80298B20 00295920*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80298B24 00295924*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80298B28 00295928*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80298B2C 0029592C*/ PPC::Runtime::ASM::blr();
}