//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013AB88(PPC::Runtime::GCContext* context)
{
/*8013AB88 00137988*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013AB8C 0013798C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013AB90 00137990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013AB94 00137994*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013AB98 00137998*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013AB9C 0013799C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013ABA0 001379A0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013ABA4 001379A4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013ABA8 001379A8*/ PPC::Runtime::ASM::li(context->r3, 0x26);
/*8013ABAC 001379AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r31));
/*8013ABB0 001379B0*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*8013ABB4 001379B4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8013ABB8 001379B8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8013ABBC 001379BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8013ABC0 001379C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8013ABC4 001379C4*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8013ABC8 001379C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8013ABCC 001379CC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8013ABD0 001379D0*/ PPC::Runtime::ASM::bl(fn_HSD_LObjLoadDesc);
/*8013ABD4 001379D4*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_29 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013ABD8 001379D8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8013ABDC 001379DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013ABE0 001379E0*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8013ABE4 001379E4*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A22C @ Get_MemoryOffset_HighBit);
/*8013ABE8 001379E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013ABEC 001379EC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A22C @ Get_MemoryOffset_LowBit);
/*8013ABF0 001379F0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8013ABF4 001379F4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8013ABF8 001379F8*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*8013ABFC 001379FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8013AC00 00137A00*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013AC04 00137A04*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013AC08 00137A08*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013AC0C 00137A0C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013AC10 00137A10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013AC14 00137A14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8013AC18 00137A18*/ PPC::Runtime::ASM::blr();
}