//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BBF8(PPC::Runtime::GCContext* context)
{
/*8029BBF8 002989F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BBFC 002989FC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029BC00 00298A00*/ PPC::Runtime::ASM::bne(.L_8029BC20);
/*8029BC04 00298A04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BC08 00298A08*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029BC0C 00298A0C*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DD9EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BC10 00298A10*/ PPC::Runtime::ASM::beq(.L_8029BC28);
/*8029BC14 00298A14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8029BC18 00298A18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8029BC1C 00298A1C*/ PPC::Runtime::ASM::b(.L_8029BC28);
RUNTIME_PPC_JUMP_LABEL(.L_8029BC20, 0x8029BC20) //this is a jump label
/*8029BC20 00298A20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BC24 00298A24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8029BC28, 0x8029BC28) //this is a jump label
/*8029BC28 00298A28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BC2C 00298A2C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029BC30 00298A30*/ PPC::Runtime::ASM::bne(.L_8029BC50);
/*8029BC34 00298A34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BC38 00298A38*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029BC3C 00298A3C*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DD9F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BC40 00298A40*/ PPC::Runtime::ASM::beq(.L_8029BC58);
/*8029BC44 00298A44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8029BC48 00298A48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8029BC4C 00298A4C*/ PPC::Runtime::ASM::b(.L_8029BC58);
RUNTIME_PPC_JUMP_LABEL(.L_8029BC50, 0x8029BC50) //this is a jump label
/*8029BC50 00298A50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BC54 00298A54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8029BC58, 0x8029BC58) //this is a jump label
/*8029BC58 00298A58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8029BC5C 00298A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BC60 00298A60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BC64 00298A64*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BC68 00298A68*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8029BC6C 00298A6C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BC70 00298A70*/ PPC::Runtime::ASM::blr();
}