//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295CDC(PPC::Runtime::GCContext* context)
{
/*80295CDC 00292ADC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295CE0 00292AE0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80295CE4 00292AE4*/ PPC::Runtime::ASM::bne(.L_80295D04);
/*80295CE8 00292AE8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295CEC 00292AEC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80295CF0 00292AF0*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDB00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295CF4 00292AF4*/ PPC::Runtime::ASM::beq(.L_80295D0C);
/*80295CF8 00292AF8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80295CFC 00292AFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80295D00 00292B00*/ PPC::Runtime::ASM::b(.L_80295D0C);
RUNTIME_PPC_JUMP_LABEL(.L_80295D04, 0x80295D04) //this is a jump label
/*80295D04 00292B04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295D08 00292B08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80295D0C, 0x80295D0C) //this is a jump label
/*80295D0C 00292B0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295D10 00292B10*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80295D14 00292B14*/ PPC::Runtime::ASM::bne(.L_80295D34);
/*80295D18 00292B18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295D1C 00292B1C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80295D20 00292B20*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDB04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295D24 00292B24*/ PPC::Runtime::ASM::beq(.L_80295D3C);
/*80295D28 00292B28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80295D2C 00292B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80295D30 00292B30*/ PPC::Runtime::ASM::b(.L_80295D3C);
RUNTIME_PPC_JUMP_LABEL(.L_80295D34, 0x80295D34) //this is a jump label
/*80295D34 00292B34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295D38 00292B38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80295D3C, 0x80295D3C) //this is a jump label
/*80295D3C 00292B3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80295D40 00292B40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295D44 00292B44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295D48 00292B48*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295D4C 00292B4C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80295D50 00292B50*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDAFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295D54 00292B54*/ PPC::Runtime::ASM::blr();
}