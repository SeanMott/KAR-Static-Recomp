//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80236AB0(PPC::Runtime::GCContext* context)
{
/*80236AB0 002338B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80236AB4 002338B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80236AB8 002338B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80236ABC 002338BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80236AC0 002338C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80236AC4 002338C4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80236AC8 002338C8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80236ACC 002338CC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80236AD0 002338D0*/ PPC::Runtime::ASM::cmpwi(context->r30, -0x1);
/*80236AD4 002338D4*/ PPC::Runtime::ASM::ble(.L_80236AE4);
/*80236AD8 002338D8*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x206);
/*80236ADC 002338DC*/ PPC::Runtime::ASM::bge(.L_80236AE4);
/*80236AE0 002338E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80236AE4, 0x80236AE4) //this is a jump label
/*80236AE4 002338E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80236AE8 002338E8*/ PPC::Runtime::ASM::bne(.L_80236B00);
/*80236AEC 002338EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B543C @ Get_MemoryOffset_HighBit);
/*80236AF0 002338F0*/ PPC::Runtime::ASM::li(context->r3, String_ "eflib." Get_MemoryOffset_SDA21);
/*80236AF4 002338F4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B543C @ Get_MemoryOffset_LowBit);
/*80236AF8 002338F8*/ PPC::Runtime::ASM::li(context->r4, 0x235);
/*80236AFC 002338FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80236B00, 0x80236B00) //this is a jump label
/*80236B00 00233900*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80236B04 00233904*/ PPC::Runtime::ASM::beq(.L_80236B20);
/*80236B08 00233908*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80236B0C 0023390C*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 3);
/*80236B10 00233910*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*80236B14 00233914*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r3));
/*80236B18 00233918*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80236B1C 0023391C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80236B20, 0x80236B20) //this is a jump label
/*80236B20 00233920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80236B24 00233924*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80236B28 00233928*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80236B2C 0023392C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80236B30 00233930*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80236B34 00233934*/ PPC::Runtime::ASM::blr();
}