//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BB84(PPC::Runtime::GCContext* context)
{
/*8029BB84 00298984*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BB88 00298988*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BB8C 0029898C*/ PPC::Runtime::ASM::beq(.L_8029BBA4);
/*8029BB90 00298990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BB94 00298994*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD9EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BB98 00298998*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8029BB9C 0029899C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BBA0 002989A0*/ PPC::Runtime::ASM::b(.L_8029BBAC);
RUNTIME_PPC_JUMP_LABEL(.L_8029BBA4, 0x8029BBA4) //this is a jump label
/*8029BBA4 002989A4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BBA8 002989A8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029BBAC, 0x8029BBAC) //this is a jump label
/*8029BBAC 002989AC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BBB0 002989B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029BBB4 002989B4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BBB8 002989B8*/ PPC::Runtime::ASM::blr();
}