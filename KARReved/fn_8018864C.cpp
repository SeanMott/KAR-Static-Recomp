//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8018864C(PPC::Runtime::GCContext* context)
{
/*8018864C 0018544C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188650 00185450*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80188654 00185454*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80188658 00185458*/ PPC::Runtime::ASM::bne(.L_80188664);
/*8018865C 0018545C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80188660 00185460*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80188664, 0x80188664) //this is a jump label
/*80188664 00185464*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188668 00185468*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8018866C 0018546C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80188670 00185470*/ PPC::Runtime::ASM::beq(.L_80188678);
/*80188674 00185474*/ PPC::Runtime::ASM::li(context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80188678, 0x80188678) //this is a jump label
/*80188678 00185478*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*8018867C 0018547C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD7F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188680 00185480*/ PPC::Runtime::ASM::ble(.L_801886A4);
/*80188684 00185484*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*80188688 00185488*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 16, 7);
/*8018868C 0018548C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*80188690 00185490*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188694 00185494*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80188698 00185498*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x56);
/*8018869C 0018549C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*801886A0 001854A0*/ PPC::Runtime::ASM::b(.L_801886C0);
RUNTIME_PPC_JUMP_LABEL(.L_801886A4, 0x801886A4) //this is a jump label
/*801886A4 001854A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*801886A8 001854A8*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 16, 7);
/*801886AC 001854AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*801886B0 001854B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD800 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801886B4 001854B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*801886B8 001854B8*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x45);
/*801886BC 001854BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801886C0, 0x801886C0) //this is a jump label
/*801886C0 001854C0*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*801886C4 001854C4*/ PPC::Runtime::ASM::blr();
}